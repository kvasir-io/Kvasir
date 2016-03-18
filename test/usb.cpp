#include <iostream>
#include <sstream>
#include <iomanip>
#include <Usb/SetupPacket.hpp>
#include <Usb/Endpoint.hpp>
#include <Usb/Packet.hpp>
#include <Usb/Device.hpp>
#include <Usb/Memory.hpp>


namespace TestScenario1 {
	using PacketT = Kvasir::Usb::Packet <Kvasir::Usb::CompactPacket::ImplType>;
	using Alloc = Kvasir::Usb::CompactPacket::Allocator<PacketT, 12>;

	struct MyDescriptors {
		static constexpr uint8_t device[18] = {
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
		static constexpr uint8_t configuration[CONFIG1_DESC_SIZE] = {
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
		static constexpr uint8_t langId[4] = {
			0x04,               /*bLength*/
			3, //STRING_DESCRIPTOR,  /*bDescriptorType 0x03*/
			0x09,
			0x04,          /*bString Lang ID - 0x0409 - English*/
		};
		static constexpr uint8_t product[0x16] = {
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
		static constexpr uint8_t serial[0x16] = {
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
		static constexpr uint8_t interface[8] = {
			0x08,
			3, //STRING_DESCRIPTOR,
			'C',
			0,
			'D',
			0,
			'C',
			0,
		};
	};
	constexpr uint8_t MyDescriptors::device[18];
	constexpr uint8_t MyDescriptors::configuration[CONFIG1_DESC_SIZE];
	constexpr uint8_t MyDescriptors::langId[4];
	constexpr uint8_t MyDescriptors::product[0x16];
	constexpr uint8_t MyDescriptors::serial[0x16];
	constexpr uint8_t MyDescriptors::interface[8];
	using Device = Kvasir::Usb::Device<Alloc, Kvasir::Usb::CompactPacket::Queue<PacketT>, Kvasir::Usb::CompactPacket::Transfer<PacketT, Alloc>,MyDescriptors>;

	template<typename T>
	decltype(Alloc::allocate()) makePacket(std::initializer_list<T> l) {
		auto packet = Alloc::allocate();
		for (auto d : l) {
			packet.pushBack(d);
		}
		return packet;
	}
}

int usbTest()
{
	{
		using namespace TestScenario1;
		Alloc::initialize();
		{
			//set address
			auto cmd = Device::onSetupPacket(makePacket({ 0, 5, 5, 0, 0, 0, 0, 0 }));
			if (cmd.type_ != Device::HalCommand::Type::setAddress) {
				return 1;
			}
			if (cmd.packet_.getSize() != 0) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//GetDevice descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 6, 0, 1, 0, 0, 8, 0 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 8) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//GetDevice descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 18) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//Get Configuration descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x09, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 9) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//Get Configuration descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x4B, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 64) {
				return 1;
			}
			if (cmd.packet_[0] != 9) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_.getSize() != 11) {
				return 1;
			}
			if (cmd2.packet_[0] != 2) {
				return 1;
			}
			auto cmd3 = Device::onControlIn(std::move(cmd2.packet_));
			if (cmd3.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd3.packet_) {
				return 1;
			}
		}
		{
			//Get String descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x00, 0x03, 0x00, 0x00, 0xFF, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 4) {
				return 1;
			}
			if (cmd.packet_[0] != 4) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//Get String descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x02, 0x03, 0x09, 0x04, 0xFF, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 22) {
				return 1;
			}
			if (cmd.packet_[0] != 0x16) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//Get String descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x03, 0x03, 0x09, 0x04, 0xFF, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 22) {
				return 1;
			}
			if (cmd.packet_[0] != 0x16) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//GetDevice descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 18) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_) {
				return 1;
			}
		}
		{
			//Get Configuration descriptor
			auto cmd = Device::onSetupPacket(makePacket({ 0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x09, 0x01 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 64) {
				return 1;
			}
			if (cmd.packet_[0] != 9) {
				return 1;
			}
			auto cmd2 = Device::onControlIn(std::move(cmd.packet_));
			if (cmd2.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd2.packet_.getSize() != 11) {
				return 1;
			}
			if (cmd2.packet_[0] != 2) {
				return 1;
			}
			auto cmd3 = Device::onControlIn(std::move(cmd2.packet_));
			if (cmd3.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd3.packet_) {
				return 1;
			}
		}
	}
	return 0;
}

