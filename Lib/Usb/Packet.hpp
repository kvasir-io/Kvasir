#pragma once
#include "Usb/Endpoint.hpp"
#include <array>
namespace Kvasir
{
namespace Usb
{
    template <std::size_t BufSize, template <typename> class TPointerType>
    struct PacketImpl
    {
        static constexpr std::size_t capacity = BufSize;
        uint8_t buf_[BufSize];
        using PointerType = TPointerType<PacketImpl>;
        PointerType next_;
        uint8_t size_;
        uint8_t endpoint_;

        void pushBack(uint8_t data) { buf_[size_++] = data; }
    };
	template <typename TPacketImpl>
    class Packet
    {
        using PointerType = typename TPacketImpl::PointerType;
        PointerType packet_;
        Packet(PointerType packet) : packet_{packet} {}
    public:
        using ImplType = TPacketImpl;
        static constexpr std::size_t capacity = ImplType::capacity;
        Packet(const Packet &) = delete;
        Packet(Packet && other) : packet_{other.packet_} { other.packet_ = PointerType{}; }
        Packet() = default;
        static Packet unsafeFromBufPointer(uint8_t * p)
        {
            PointerType pp{};
            pp.me_ = (TPacketImpl *)p;
            return Packet(pp);
        }
        uint8_t * unsafeToBufPointer() { return packet_->buf_; }
		static Packet unsafeConstructFromPacketPointer(PointerType p) { return Packet(p); }
		void unsafeFromPacketPointer(PointerType p) { packet_ = p; }
        PointerType unsafeToPacketPointer() { return packet_; }
        void unsafeSetSize(int i) { packet_->size_ = i; }
        uint8_t getSize() { return packet_->size_; }
        operator bool() const { return packet_ != nullptr; }
        uint8_t operator[](int i) const { return packet_->buf_[i]; }
        void clearNext() { packet_->next_ = nullptr; }
        void clear()
        {
            packet_->next_ = nullptr;
            packet_->size_ = 0;
        }
        void setNext(PointerType & p) { packet_->next_ = p; }
        bool isData1() { return (packet_->endpoint_ & 0x80) != 0; }
        void makeData1() { packet_->endpoint_ |= 0x80; }
        void makeData0() { packet_->endpoint_ &= ~0x80; }
        Endpoint getEndpoint() { return Endpoint{static_cast<uint8_t>(packet_->endpoint_ & 0x1F)}; }
		void setEndpoint(const Endpoint ep) { packet_->endpoint_ &= ~0x1F; packet_->endpoint_ |= (ep.value_ & 0x1F); }
        void pushBack(uint8_t data) { packet_->pushBack(data); }
	    uint8_t* begin()
	    {
		    return &packet_->buf_[0];
	    }
	    uint8_t* end()
	    {
		    return &packet_->buf_[packet_->size_];
	    }
    };
}
}