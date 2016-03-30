#include <Usb/Cdc.hpp>
#include <Usb/Device.hpp>
#include <Usb/Memory.hpp>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>
#include <vector>

namespace Kvasir
{
namespace Usb
{
    template <int I>
    struct EndpointCapabilityTraits<PeripheralC<I>>
    {
        using type = brigand::list<
            EndpointCapabilities<0, EndpointDirection::out, true, false, false, false>,
            EndpointCapabilities<1, EndpointDirection::in, true, false, false, false>,
            EndpointCapabilities<2, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<3, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<4, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<5, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<6, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<7, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<8, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<9, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<10, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<11, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<12, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<13, EndpointDirection::in, false, true, true, true>,
            EndpointCapabilities<14, EndpointDirection::out, false, true, true, true>,
            EndpointCapabilities<15, EndpointDirection::in, false, true, true, true>>;
    };
}
}

namespace TestScenario1
{
struct MyStringDescriptors
{

#define CONFIG1_DESC_SIZE (9 + 8 + 9 + 5 + 5 + 4 + 5 + 7 + 9 + 7 + 7)
/* Least/Most significant byte of short integer */
#define LSB(n) ((n)&0xff)
#define MSB(n) (((n)&0xff00) >> 8)
#define PHY_TO_DESC(endpoint) (((endpoint) >> 1) | (((endpoint)&1) ? 0x80 : 0))
#define EP1OUT (2)
#define EP1IN (3)
#define EP2OUT (4)
#define EP2IN (5)
#define E_INTERRUPT (0x03)
    static constexpr uint8_t configuration[CONFIG1_DESC_SIZE] = {
        9,                      // bLength
        2,                      // bDescriptorType
        LSB(CONFIG1_DESC_SIZE), // wTotalLength
        MSB(CONFIG1_DESC_SIZE),
        2,    // bNumInterfaces
        1,    // bConfigurationValue
        0,    // iConfiguration
        0x80, // bmAttributes
        50,   // bMaxPower

        // IAD to associate the two CDC interfaces
        0x08, // bLength
        0x0b, // bDescriptorType
        0x00, // bFirstInterface
        0x02, // bInterfaceCount
        0x02, // bFunctionClass
        0x02, // bFunctionSubClass
        0,    // bFunctionProtocol
        0,    // iFunction

        // interface descriptor, USB spec 9.6.5, page 267-269, Table 9-12
        9,    // bLength
        4,    // bDescriptorType
        0,    // bInterfaceNumber
        0,    // bAlternateSetting
        1,    // bNumEndpoints
        0x02, // bInterfaceClass
        0x02, // bInterfaceSubClass
        0x01, // bInterfaceProtocol
        0,    // iInterface

        // CDC Header Functional Descriptor, CDC Spec 5.2.3.1, Table 26
        5,    // bFunctionLength
        0x24, // bDescriptorType
        0x00, // bDescriptorSubtype
        0x10,
        0x01, // bcdCDC

        // Call Management Functional Descriptor, CDC Spec 5.2.3.2, Table 27
        5,    // bFunctionLength
        0x24, // bDescriptorType
        0x01, // bDescriptorSubtype
        0x03, // bmCapabilities
        1,    // bDataInterface

        // Abstract Control Management Functional Descriptor, CDC Spec 5.2.3.3, Table 28
        4,    // bFunctionLength
        0x24, // bDescriptorType
        0x02, // bDescriptorSubtype
        0x06, // bmCapabilities

        // Union Functional Descriptor, CDC Spec 5.2.3.8, Table 33
        5,    // bFunctionLength
        0x24, // bDescriptorType
        0x06, // bDescriptorSubtype
        0,    // bMasterInterface
        1,    // bSlaveInterface0

        // endpoint descriptor, USB spec 9.6.6, page 269-271, Table 9-13
        7,                  // bLength
        5,                  // bDescriptorType
        PHY_TO_DESC(EP1IN), // bEndpointAddress
        E_INTERRUPT,        // bmAttributes (0x03=intr)
        64,                 // wMaxPacketSize (LSB)
        0,                  // wMaxPacketSize (MSB)
        16,                 // bInterval

        // interface descriptor, USB spec 9.6.5, page 267-269, Table 9-12
        9,    // bLength
        4,    // bDescriptorType
        1,    // bInterfaceNumber
        0,    // bAlternateSetting
        2,    // bNumEndpoints
        0x0A, // bInterfaceClass
        0x00, // bInterfaceSubClass
        0x00, // bInterfaceProtocol
        0,    // iInterface

        // endpoint descriptor, USB spec 9.6.6, page 269-271, Table 9-13
        7,                  // bLength
        5,                  // bDescriptorType
        PHY_TO_DESC(EP2IN), // bEndpointAddress
        2,                  // bmAttributes (0x02=bulk)
        64,                 // wMaxPacketSize (LSB)
        0,                  // wMaxPacketSize (MSB)
        0,                  // bInterval

        // endpoint descriptor, USB spec 9.6.6, page 269-271, Table 9-13
        7,                   // bLength
        5,                   // bDescriptorType
        PHY_TO_DESC(EP1OUT), // bEndpointAddress
        2,                   // bmAttributes (0x02=bulk)
        64,                  // wMaxPacketSize (LSB)
        0,                   // wMaxPacketSize (MSB)
        0                    // bInterval
    };
    static constexpr uint8_t langId[4] = {
        0x04,       /*bLength*/
        3,          // STRING_DESCRIPTOR,  /*bDescriptorType 0x03*/
        0x09, 0x04, /*bString Lang ID - 0x0409 - English*/
    };
    static constexpr uint8_t product[0x16] = {0x16,
                                              3, // STRING_DESCRIPTOR,
                                              'C',  0, 'D', 0, 'C', 0, ' ', 0, 'D', 0,
                                              'E',  0, 'V', 0, 'I', 0, 'C', 0, 'E', 0};
    static constexpr uint8_t serial[0x16] = {0x16,
                                             3, // STRING_DESCRIPTOR,
                                             'C',  0, 'D', 0, 'C', 0, ' ', 0, 'D', 0,
                                             'E',  0, 'V', 0, 'I', 0, 'C', 0, 'E', 0};
    static constexpr uint8_t interface[8] = {
        0x08,
        3, // STRING_DESCRIPTOR,
        'C',  0, 'D', 0, 'C', 0,
    };
};

constexpr uint8_t MyStringDescriptors::configuration[CONFIG1_DESC_SIZE];
constexpr uint8_t MyStringDescriptors::langId[4];
constexpr uint8_t MyStringDescriptors::product[0x16];
constexpr uint8_t MyStringDescriptors::serial[0x16];
constexpr uint8_t MyStringDescriptors::interface[8];
struct MyCdcSettings : ::Kvasir::Usb::Cdc::DefaultSettings
{
};
struct MyDeviceSettings : ::Kvasir::Usb::DefaultDeviceSettings
{
    using StringDescriptors = MyStringDescriptors;
    static constexpr uint16_t vid = 0x1F00;
    static constexpr uint16_t pid = 0x2012;
};

using Device = Kvasir::Usb::Device<MyDeviceSettings, MyCdcSettings>;

template <typename T>
decltype(Device::AllocatorType::allocate()) makePacket(std::initializer_list<T> l)
{
    auto packet = Device::AllocatorType::allocate();
    for (auto d : l)
    {
        packet.pushBack(d);
    }
	packet.setEndpoint(Kvasir::Usb::Endpoint{ 0 });
    return packet;
}
}
enum class Type
{
    enableEp0,
    setAddress,
    activateEndpoint,
    sendPacket
};
using Packet = TestScenario1::Device::PacketType;
static std::vector<std::tuple<Type, Packet>> events_;
namespace Kvasir
{
namespace Usb
{
    struct MocHal
    {
        static void enableEP0Out(bool data1) { events_.emplace_back(Type::enableEp0, ::Packet{}); }
        static void setAddress(uint8_t address)
        {
            events_.emplace_back(Type::setAddress, ::Packet{});
        }
        template <typename T, EndpointDirection Direction, EndpointType Type>
        static void activateEndpoint()
        {
            events_.emplace_back(Type::activateEndpoint, ::Packet{});
        }
        static void sendPacket(::Packet && p)
        {
            events_.emplace_back(Type::sendPacket, std::move(p));
        }
    };

    template <typename T>
    struct GetHal<T, Tag::User>
    {
        using type = MocHal;
    };
}
}

int usbTest()
{
    {
        using namespace TestScenario1;
        Device::AllocatorType::initialize();
        {
            // set address
            Device::onSetupPacket(makePacket({0, 5, 5, 0, 0, 0, 0, 0}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 0)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            if (std::get<0>(events_[2]) != Type::setAddress)
            {
                return 1;
            }
            if (events_.size() != 3)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // GetDevice descriptor
            Device::onSetupPacket(makePacket({0x80, 6, 0, 1, 0, 0, 8, 0}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 8)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // GetDevice descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 18)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // Get Configuration descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x09, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 9)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // Get Configuration descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x4B, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 64)
            {
                return 1;
            }
            if (packet[0] != 9)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet2 = std::move(std::get<1>(events_[1]));
            if (packet2.getSize() != 11)
            {
                return 1;
            }
            if (packet2[0] != 2)
            {
                return 1;
            }
            Device::onInSent(std::move(packet2));
            if (std::get<0>(events_[2]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // Get String descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x00, 0x03, 0x00, 0x00, 0xFF, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 4)
            {
                return 1;
            }
            if (packet[0] != 4)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // Get String descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x02, 0x03, 0x09, 0x04, 0xFF, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 22)
            {
                return 1;
            }
            if (packet[0] != 0x16)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // Get String descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x03, 0x03, 0x09, 0x04, 0xFF, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 22)
            {
                return 1;
            }
            if (packet[0] != 0x16)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // GetDevice descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 18)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // Get Configuration descriptor
            Device::onSetupPacket(makePacket({0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x09, 0x01}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 64)
            {
                return 1;
            }
            if (packet[0] != 9)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet2 = std::move(std::get<1>(events_[1]));
            if (packet2.getSize() != 11)
            {
                return 1;
            }
            if (packet2[0] != 2)
            {
                return 1;
            }
            Device::onInSent(std::move(packet2));
            if (std::get<0>(events_[2]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // set configuration
            Device::onSetupPacket(makePacket({0x00, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}));
            if (std::get<0>(events_[0]) != Type::activateEndpoint ||
                std::get<0>(events_[1]) != Type::activateEndpoint ||
                std::get<0>(events_[2]) != Type::activateEndpoint)
            {
                return 1;
            }
            if (std::get<0>(events_[3]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[3]));
            if (packet.getSize() != 0)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[4]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // get line coding
            Device::onSetupPacket(makePacket({0xA1, 0x21, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 7)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // set line coding
            Device::onSetupPacket(makePacket({0x21, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 0)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // set line coding
            Device::onSetupPacket(makePacket({0x21, 0x22, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
            auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 0)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
            if (std::get<0>(events_[1]) != Type::enableEp0)
            {
                return 1;
            }
            events_.clear();
        }
        {
            // set line coding
            Device::onSetupPacket(
                makePacket({0x21, 0x22, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}));
            if (std::get<0>(events_[0]) != Type::sendPacket)
            {
                return 1;
            }
			auto packet = std::move(std::get<1>(events_[0]));
            if (packet.getSize() != 0)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
			if (std::get<0>(events_[1]) != Type::enableEp0)
			{
				return 1;
			}
			events_.clear();
        }
        {
            // set line coding
            Device::onSetupPacket(
                makePacket({0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00}));
			if (std::get<0>(events_[0]) != Type::enableEp0)
			{
				return 1;
			}
            Device::onOutReceived(makePacket({0x80, 0x25, 0x00, 0x00, 0x00, 0x00, 0x08}));
            if (std::get<0>(events_[1]) != Type::sendPacket)
            {
                return 1;
            }
			auto packet = std::move(std::get<1>(events_[1]));
            if (packet.getSize() != 0)
            {
                return 1;
            }
            Device::onInSent(std::move(packet));
			if (std::get<0>(events_[2]) != Type::enableEp0)
			{
				return 1;
			}
			events_.clear();
        }
    }
    return 0;
}
