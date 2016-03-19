#pragma once
#include "Packet.hpp"


namespace Kvasir {
	namespace Usb {
		namespace CompactPacket {
			template<typename T>
			struct Pointer;
			using ImplType = Kvasir::Usb::PacketImpl<64, Pointer>;
			template<typename T>
			struct Pointer
			{
				T* me_;
				T& operator *()
				{
					return *me_;
				}
				T* operator->()
				{
					return me_;
				}
				const T* operator->() const
				{
					return me_;
				}
				Pointer& operator=(nullptr_t)
				{
					me_ = nullptr;
					return *this;
				}
				Pointer() : me_{ nullptr } {}
				Pointer(const Pointer&) = default;

			};
			template<typename T>
			bool operator ==(const Pointer<T>& p, std::nullptr_t)
			{
				return p.me_ == nullptr;
			}
			template<typename T>
			bool operator ==(std::nullptr_t, const Pointer<T>& p)
			{
				return p.me_ == nullptr;
			}
			template<typename T>
			bool operator !=(const Pointer<T>& p, std::nullptr_t)
			{
				return p.me_ != nullptr;
			}
			template<typename T>
			bool operator !=(std::nullptr_t, const Pointer<T>& p)
			{
				return p.me_ != nullptr;
			}

			template<typename PacketType, int Size>
			struct Allocator
			{
				using DataType = PacketType;
				static ImplType data_[Size];
				static Pointer<ImplType> free_;
				static DataType allocate()
				{
					auto n = free_->next_;
					auto p = free_;
					free_ = n;
					p->next_ = nullptr;
					auto ret = DataType::unsafeFromPacketPointer(p);
					ret.clear();
					return ret;
				}
				static void deallocate(DataType p)
				{
					p.setNext(free_);
					free_ = p.unsafeToPacketPointer();
				}
				static void initialize()
				{
					for (auto& d : data_)
					{
						deallocate(DataType::unsafeFromBufPointer(d.buf_));
					}
				}
			};
			template<typename PacketType, int Size>
			Pointer<ImplType> Allocator<PacketType, Size>::free_;
			template<typename PacketType, int Size>
			ImplType Allocator<PacketType, Size>::data_[Size];

			template<typename TPacketType>
			struct Queue
			{

			};

			struct TransferIterator
			{

			};

			template<typename TPacketType, typename TAllocator>
			struct Transfer
			{
				using PacketType = TPacketType;
				using PointerType = Kvasir::Usb::PacketImpl<64, Pointer>::PointerType;
			private:
				PointerType pointerLastPacket()
				{
					if (packet_ == nullptr)
					{
						return PointerType{};
					}
					auto cp = packet_;
					while (cp->next_ != nullptr)
					{
						cp = cp->next_;
					}
					return cp;
				}
			public:
				PointerType packet_;
				void clear()
				{
					while (packet_ != nullptr)
					{
						auto next = packet_->next_;
						TAllocator::deallocate(PacketType::unsafeFromPacketPointer(packet_));
						packet_ = next;
					}
				}
				PacketType popFrontPacket()
				{
					if (packet_ == nullptr)
					{
						return{};
					}
					auto p = packet_->next_;
					auto ret = packet_;
					ret->next_ = nullptr;
					packet_ = p;
					return PacketType::unsafeFromPacketPointer(ret);
				}
				void pushBackPacket(PacketType&& p)
				{
					PointerType nextPointer = pointerLastPacket();
					if (nextPointer == nullptr)
					{
						packet_ = p.unsafeToPacketPointer();
					}
					else
					{
						nextPointer->next_ = p.unsafeToPacketPointer();
					}
				}
				TransferIterator begin()
				{

				}
				TransferIterator end()
				{

				}
				bool empty()
				{
					return packet_ == nullptr;
				}
				void pushBack(uint8_t data, uint8_t maxSize = TPacketType::capacity)
				{
					auto lastP = pointerLastPacket();
					if (lastP == nullptr)
					{
						packet_ = TAllocator::allocate().unsafeToPacketPointer();
						lastP = packet_;
					}
					else if (lastP->size_ >= maxSize)
					{
						lastP->next_ = TAllocator::allocate().unsafeToPacketPointer();
						lastP = lastP->next_;
					}
					lastP->pushBack(data);
				}

				template<typename T>
				void pushBack(T begin, T end)
				{
					auto lastP = pointerLastPacket();
					if (lastP == nullptr)
					{
						packet_ = TAllocator::allocate().unsafeToPacketPointer();
						lastP = packet_;
					}
					for (; begin != end; begin++)
					{
						if (lastP->size_ >= TPacketType::capacity)
						{
							lastP->next_ = TAllocator::allocate().unsafeToPacketPointer();
							lastP = lastP->next_;
						}
						lastP->pushBack(*begin);
					}
				}
			};
		}
	}
}

