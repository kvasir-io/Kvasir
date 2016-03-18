#pragma once
namespace Kvasir
{
	namespace Usb
	{
		//generic customizable USB device 
		//Policy classes:
		// - allocator creates and destroys packts 
		// - 
		template<typename TAllocator, typename TOutputQueue, typename TTransfer, typename TDescriptors>
		struct Device
		{
			using AllocatorType = TAllocator;
			using OutputQueueType = TOutputQueue;
			using TransferType = TTransfer;
			using PacketType = typename TAllocator::DataType;
			using Descriptor = TDescriptors;

			struct HalCommand
			{
				enum class Type : uint8_t
				{
					noAction,
					setAddress,
					stall,
					unstall
				};
				Type type_;
				uint8_t data_;
				PacketType packet_;
				HalCommand(HalCommand&&o) : type_{ o.type_ }, data_{ o.data_ }, packet_{ std::move(o.packet_) } {}
				explicit HalCommand(PacketType&&packet) : type_{ Type::noAction }, packet_{ std::move(packet) } {}
				static HalCommand makeSetAddress(uint8_t address, PacketType&&packet) {
					HalCommand c{ std::move(packet) }
					;
					c.type_ = Type::setAddress;
					c.data_ = address;
					return c;
				}
				HalCommand() = default;
			};

			static void copyToTransfer(const uint8_t*const buf, const std::size_t length, TTransfer& transfer) {
				transfer.pushBack(buf, buf + length);
			}

			enum class State : uint8_t
			{
				waitingForSetup,
				waitingForInput1,
				waitingForInput0,
				waitingToSend1,
				waitingToSend0,
				waitingForAckSent,
				waitingForAck,

			};
			class Sm
			{
				State state_;
				TTransfer transfer_;
			public:
				State getState() const
				{
					return state_;
				}
				HalCommand onSetupReceived(PacketType&& p)
				{
					transfer_.clear();
					using namespace SetupPacket;
					auto t = getType(p);
					auto rt = getRequest(p);
					if (getWLength(p) > 0)
					{
						if (getDirection(p) == Direction::deviceToHost)
						{
							state_ = State::waitingToSend1;
							if (t == Type::standard)
							{
								if (rt == Request::getStatus)
								{
									if (Device::requestGetStatus())
									{
										return HalCommand{ makeAck(std::move(p)) };
									}
								}
								else if (rt == Request::getDescriptor)
								{
									Device::requestGetDescriptor(std::move(p), transfer_);
									auto op = transfer_.popFrontPacket();
									op.makeData1();
									return HalCommand{ std::move(op) };
								}
								else if (rt == Request::getConfiguration)
								{
									if (Device::requestGetConfiguration())
									{
										return HalCommand{ makeAck(std::move(p)) };
									}
								}
								else if (rt == Request::getInterface)
								{
									if (Device::requestGetInterface())
									{
										return HalCommand{ makeAck(std::move(p)) };
									}
								}
							}
						}
						else
						{
							state_ = State::waitingForInput1;
							if (t == Type::standard)
							{
								if (rt == Request::clearFeature)
								{
									return HalCommand{ makeAck(std::move(p)) };
								}
								else if (rt == Request::setFeature)
								{
									return HalCommand{ makeAck(std::move(p)) };
								}
								else if (rt == Request::setConfiguration)
								{
									return HalCommand{ makeAck(std::move(p)) };
								}
								else if (rt == Request::setInterface)
								{
									return HalCommand{ makeAck(std::move(p)) };
								}

							}
						}
					}
					else
					{
						if (t == Type::standard && rt == Request::setAddress)
						{
							state_ = State::waitingForAckSent;
							auto val = getValue(p);
							return HalCommand::makeSetAddress(val, makeAck(std::move(p)));
						}
					}
					AllocatorType::deallocate(std::move(p));  //if we did not use the packet in a return then deallocate it
				}
				HalCommand onInSent(PacketType&& p)
				{
					AllocatorType::deallocate(std::move(p));
					switch (state_)
					{
					case State::waitingToSend1:
						if (transfer_.empty())
						{
							state_ = State::waitingForAck;
						}
						else
						{
							state_ = State::waitingToSend0;
							auto op = transfer_.popFrontPacket();
							op.makeData0();
							return HalCommand{ std::move(op) };
						}
						break;
					case State::waitingToSend0:
						if (transfer_.empty())
						{
							state_ = State::waitingForAck;
						}
						else
						{
							state_ = State::waitingToSend1;
							auto op = transfer_.popFrontPacket();
							op.makeData1();
							return HalCommand{ std::move(op) };
						}
						break;
					default:
						state_ = State::waitingForSetup;
					}
					return{};
				}
				HalCommand onOutReceived(PacketType&& p)
				{
					switch (state_)
					{
					case State::waitingForInput1:
						if (transfer_.empty())
						{
							state_ = State::waitingForAckSent;
						}
						else
						{
							state_ = State::waitingForInput0;
						}
						break;
					case State::waitingForInput0:
						if (transfer_.empty())
						{
							state_ = State::waitingForAckSent;
						}
						else
						{
							state_ = State::waitingForInput0;
						}
						break;
					case State::waitingForAck:
					default:
						state_ = State::waitingForSetup;
					}
					AllocatorType::deallocate(std::move(p));
					return{};
				}
			};
			static Sm sm_;
			friend class Sm;

		private:
			static bool requestGetStatus()
			{
				return false;
			}
			static bool requestClearFeature()
			{
				return false;
			}
			static bool requestSetFeature()
			{
				return false;
			}
			static void requestGetDescriptor(PacketType&& p, TTransfer& t)
			{
				using namespace SetupPacket;
				const auto type = getDescriptorType(p);
				const auto reqLength = getWLength(p);
				const auto index = getDescriptorIndex(p);
				p.clear();
				t.pushBackPacket(std::move(p));
				switch (type)
				{
				case DescriptorType::device: {
					copyToTransfer(Descriptor::device, std::min(uint16_t(sizeof(Descriptor::device)), reqLength), t);
					break;
				}
				case DescriptorType::configuration: {
					copyToTransfer(Descriptor::configuration, std::min(uint16_t(sizeof(Descriptor::configuration)), reqLength), t);
					break;
				}
				case DescriptorType::string:
					switch (index)
					{
					case DescriptorIndex::langId: {
						copyToTransfer(Descriptor::langId, std::min(uint16_t(sizeof(Descriptor::langId)), reqLength), t);
						break;
					}
					case DescriptorIndex::manufacturer: {
						//transfer.remaining =  stringImanufacturerDesc()[0];
						//transfer.ptr = stringImanufacturerDesc();
						//transfer.direction = DEVICE_TO_HOST;
						//success = true;
						//break;
					}
					case DescriptorIndex::product: {
						copyToTransfer(Descriptor::product, std::min(uint16_t(sizeof(Descriptor::product)), reqLength), t);
						break;
					}
					case DescriptorIndex::serial: {
						copyToTransfer(Descriptor::serial, std::min(uint16_t(sizeof(Descriptor::serial)), reqLength), t);
						break;
					}
					case DescriptorIndex::configuration: {
						//transfer.remaining = stringIConfigurationDesc()[0];
						//transfer.ptr = stringIConfigurationDesc();
						//transfer.direction = DEVICE_TO_HOST;
						//success = true;
						//break;
					}
					case DescriptorIndex::interface : {
						copyToTransfer(Descriptor::interface, std::min(uint16_t(sizeof(Descriptor::interface)), reqLength), t);
						break;
					}
					}
					break;
				case DescriptorType::interface :
				case DescriptorType::endpoint:
					/* TODO: Support is optional, not implemented here */
				default:
					break;
				}
			}
			static bool requestGetConfiguration()
			{
				return false;
			}
			static bool requestSetConfiguration()
			{
				return false;
			}
			static bool requestGetInterface()
			{
				return false;
			}
			static bool requestSetInterface()
			{
				return false;
			}
			static PacketType makeAck(PacketType&& p)
			{
				p.unsafeSetSize(0);
				p.setEndpoint(Endpoint{ 0 });
				p.makeData1(); //all acks are Data1 packets
				return std::move(p);
			}
		public:

			static HalCommand onSetupPacket(PacketType&& p)
			{
				return sm_.onSetupReceived(std::move(p));
			}
			static HalCommand onControlOut(PacketType&& p)
			{
				return sm_.onOutReceived(std::move(p));
			}
			static HalCommand onControlIn(PacketType&& p)
			{
				return sm_.onInSent(std::move(p));
			}
			static void onOut(PacketType&& p)
			{
				AllocatorType::deallocate(std::move(p));
			}
			static void onIn(PacketType&& p)
			{
				AllocatorType::deallocate(std::move(p));
			}
		};
		template<typename TAllocator, typename TOutputQueue, typename TTransfer, typename TDescriptor>
		typename Device<TAllocator, TOutputQueue, TTransfer, TDescriptor>::Sm Device<TAllocator, TOutputQueue, TTransfer, TDescriptor>::sm_;
	}
}
