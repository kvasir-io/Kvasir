#pragma once
namespace Kvasir
{
	namespace Usb
	{
		//generic customizable USB device 
		//Policy classes:
		// - allocator creates and destroys packts 
		// - 
		template<typename TAllocator, typename TOutputQueue, typename TTransfer>
		struct Device
		{
			using AllocatorType = TAllocator;
			using OutputQueueType = TOutputQueue;
			using TransferType = TTransfer;
			using PacketType = typename TAllocator::DataType;

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
				switch (getDescriptorType(p))
				{
				case DescriptorType::device: {
					constexpr uint8_t descriptor[] = {
						18,						// bLength
						1,						// bDescriptorType
						0x10,
						0x01,					// bcdUSB
						2,						// bDeviceClass
						0,						// bDeviceSubClass
						0,						// bDeviceProtocol
						64,						// bMaxPacketSize0
						0x00,
						0x1F,					// idVendor
						0x12,
						0x20,					// idProduct
						0x00,
						0x01,					// bcdDevice
						1,						// iManufacturer
						2,						// iProduct
						3,						// iSerialNumber
						1						// bNumConfigurations
					};
					auto length = std::min(uint16_t(sizeof(descriptor)), getWLength(p));
					p.clear();
					t.pushBackPacket(std::move(p));
					t.pushBack(std::begin(descriptor), std::next(std::begin(descriptor), length));	//only take the requested length				
					break;
				}
				case DescriptorType::configuration: {
#define CONFIG1_DESC_SIZE (9+8+9+5+5+4+5+7+9+7+7)
					/* Least/Most significant byte of short integer */
#define LSB(n)  ((n)&0xff)
#define MSB(n)  (((n)&0xff00)>>8)
#define PHY_TO_DESC(endpoint) (((endpoint)>>1) | (((endpoint) & 1) ? 0x80:0))
#define EP1OUT      (2)
#define EP1IN       (3)
#define EP2OUT      (4)
#define EP2IN       (5)
#define E_INTERRUPT     (0x03)
					constexpr uint8_t descriptor[] = {
						9,                      // bLength
						2,                      // bDescriptorType
						LSB(CONFIG1_DESC_SIZE), // wTotalLength
						MSB(CONFIG1_DESC_SIZE),
						2,                      // bNumInterfaces
						1,                      // bConfigurationValue
						0,                      // iConfiguration
						0x80,                   // bmAttributes
						50,                     // bMaxPower

												// IAD to associate the two CDC interfaces
						0x08,                   // bLength
						0x0b,                   // bDescriptorType
						0x00,                   // bFirstInterface
						0x02,                   // bInterfaceCount
						0x02,                   // bFunctionClass
						0x02,                   // bFunctionSubClass
						0,                      // bFunctionProtocol
						0,                      // iFunction

												// interface descriptor, USB spec 9.6.5, page 267-269, Table 9-12
						9,                      // bLength
						4,                      // bDescriptorType
						0,                      // bInterfaceNumber
						0,                      // bAlternateSetting
						1,                      // bNumEndpoints
						0x02,                   // bInterfaceClass
						0x02,                   // bInterfaceSubClass
						0x01,                   // bInterfaceProtocol
						0,                      // iInterface

												// CDC Header Functional Descriptor, CDC Spec 5.2.3.1, Table 26
						5,                      // bFunctionLength
						0x24,                   // bDescriptorType
						0x00,                   // bDescriptorSubtype
						0x10,
						0x01,             // bcdCDC

										  // Call Management Functional Descriptor, CDC Spec 5.2.3.2, Table 27
						5,                      // bFunctionLength
						0x24,                   // bDescriptorType
						0x01,                   // bDescriptorSubtype
						0x03,                   // bmCapabilities
						1,                      // bDataInterface

												// Abstract Control Management Functional Descriptor, CDC Spec 5.2.3.3, Table 28
						4,                      // bFunctionLength
						0x24,                   // bDescriptorType
						0x02,                   // bDescriptorSubtype
						0x06,                   // bmCapabilities

												// Union Functional Descriptor, CDC Spec 5.2.3.8, Table 33
						5,                      // bFunctionLength
						0x24,                   // bDescriptorType
						0x06,                   // bDescriptorSubtype
						0,                      // bMasterInterface
						1,                      // bSlaveInterface0

												// endpoint descriptor, USB spec 9.6.6, page 269-271, Table 9-13
						7,     // bLength
						5,            // bDescriptorType
						PHY_TO_DESC(EP1IN),          // bEndpointAddress
						E_INTERRUPT,                    // bmAttributes (0x03=intr)
						64,     // wMaxPacketSize (LSB)
						0,     // wMaxPacketSize (MSB)
						16,                             // bInterval

														// interface descriptor, USB spec 9.6.5, page 267-269, Table 9-12
						9,                          // bLength
						4,                          // bDescriptorType
						1,                          // bInterfaceNumber
						0,                          // bAlternateSetting
						2,                          // bNumEndpoints
						0x0A,                       // bInterfaceClass
						0x00,                       // bInterfaceSubClass
						0x00,                       // bInterfaceProtocol
						0,                          // iInterface

													// endpoint descriptor, USB spec 9.6.6, page 269-271, Table 9-13
						7,							// bLength
						5,							// bDescriptorType
						PHY_TO_DESC(EP2IN),			// bEndpointAddress
						2,							// bmAttributes (0x02=bulk)
						64,							// wMaxPacketSize (LSB)
						0,							// wMaxPacketSize (MSB)
						0,                          // bInterval

													// endpoint descriptor, USB spec 9.6.6, page 269-271, Table 9-13
						7,							// bLength
						5,							// bDescriptorType
						PHY_TO_DESC(EP2OUT),		// bEndpointAddress
						2,							// bmAttributes (0x02=bulk)
						64,							// wMaxPacketSize (LSB)
						0,							// wMaxPacketSize (MSB)
						0                           // bInterval
					};
					auto length = std::min(uint16_t(sizeof(descriptor)), getWLength(p));
					p.clear();
					t.pushBackPacket(std::move(p));
					t.pushBack(std::begin(descriptor), std::next(std::begin(descriptor), length));	//only take the requested length
					break;
				}
				case DescriptorType::string:
					switch (getDescriptorIndex(p))
					{
					case DescriptorIndex::langId: {
						static uint8_t descriptor[] = {
							0x04,               /*bLength*/
							3, //STRING_DESCRIPTOR,  /*bDescriptorType 0x03*/
							0x09,
							0x04,          /*bString Lang ID - 0x0409 - English*/
						};
						auto length = std::min(uint16_t(sizeof(descriptor)), getWLength(p));
						p.clear();
						t.pushBackPacket(std::move(p));
						t.pushBack(std::begin(descriptor), std::next(std::begin(descriptor), length));	//only take the requested length
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
						static uint8_t descriptor[] = {
							0x16,
							3, //STRING_DESCRIPTOR,
							'C',
							0,
							'D',
							0,
							'C',
							0,
							' ',
							0,
							'D',
							0,
							'E',
							0,
							'V',
							0,
							'I',
							0,
							'C',
							0,
							'E',
							0
						};
						auto length = std::min(uint16_t(sizeof(descriptor)), getWLength(p));
						p.clear();
						t.pushBackPacket(std::move(p));
						t.pushBack(std::begin(descriptor), std::next(std::begin(descriptor), length));	//only take the requested length
						break;
					}
					case DescriptorIndex::serial: {
						static uint8_t descriptor[] = {
							0x16,
							3, //STRING_DESCRIPTOR,
							'C',
							0,
							'D',
							0,
							'C',
							0,
							' ',
							0,
							'D',
							0,
							'E',
							0,
							'V',
							0,
							'I',
							0,
							'C',
							0,
							'E',
							0
						};
						auto length = std::min(uint16_t(sizeof(descriptor)), getWLength(p));
						p.clear();
						t.pushBackPacket(std::move(p));
						t.pushBack(std::begin(descriptor), std::next(std::begin(descriptor), length));	//only take the requested length
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
						static uint8_t descriptor[] = {
							0x08,
							3, //STRING_DESCRIPTOR,
							'C',
							0,
							'D',
							0,
							'C',
							0,
						};
						auto length = getWLength(p);
						p.clear();
						t.pushBackPacket(std::move(p));
						t.pushBack(std::begin(descriptor), std::next(std::begin(descriptor), length));	//only take the requested length
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
		template<typename TAllocator, typename TOutputQueue, typename TTransfer>
		typename Device<TAllocator, TOutputQueue, TTransfer>::Sm Device<TAllocator, TOutputQueue, TTransfer>::sm_;
	}
}
