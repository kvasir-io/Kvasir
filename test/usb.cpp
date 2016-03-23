#include <iostream>
#include <sstream>
#include <iomanip>
#include <Usb/SetupPacket.hpp>
#include <Usb/Endpoint.hpp>
#include <Usb/Packet.hpp>
#include <Usb/Device.hpp>
#include <Usb/Memory.hpp>
#include <Usb/Cdc.hpp>

namespace Kvasir {
	namespace Usb {
		template <int I>
		struct EndpointCapabilityTraits<PeripheralC<I>>
		{
			using type = brigand::list<
				EndpointCapabilities<0, EndpointDirection::out, true, false, false>, EndpointCapabilities<1, EndpointDirection::in, true, false, false>,
				EndpointCapabilities<2, EndpointDirection::out, true, true, true>, EndpointCapabilities<3, EndpointDirection::in, true, true, true>,
				EndpointCapabilities<4, EndpointDirection::out, true, true, true>, EndpointCapabilities<5, EndpointDirection::in, true, true, true>,
				EndpointCapabilities<6, EndpointDirection::out, true, true, true>, EndpointCapabilities<7, EndpointDirection::in, true, true, true>,
				EndpointCapabilities<8, EndpointDirection::out, true, true, true>, EndpointCapabilities<9, EndpointDirection::in, true, true, true>,
				EndpointCapabilities<10, EndpointDirection::out, true, true, true>, EndpointCapabilities<11, EndpointDirection::in, true, true, true>,
				EndpointCapabilities<12, EndpointDirection::out, true, true, true>, EndpointCapabilities<13, EndpointDirection::in, true, true, true>,
				EndpointCapabilities<14, EndpointDirection::out, true, true, true>, EndpointCapabilities<15, EndpointDirection::in, true, true, true >> ;
		};
	}
}

namespace TestScenario1 {
	struct MyStringDescriptors {
		
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
	
	constexpr uint8_t MyStringDescriptors::configuration[CONFIG1_DESC_SIZE];
	constexpr uint8_t MyStringDescriptors::langId[4];
	constexpr uint8_t MyStringDescriptors::product[0x16];
	constexpr uint8_t MyStringDescriptors::serial[0x16];
	constexpr uint8_t MyStringDescriptors::interface[8];
	struct MyCdcSettings : Kvasir::Usb::Cdc::DefaultSettings{};
	struct MyDeviceSettings : Kvasir::Usb::DefaultDeviceSettings {
		using StringDescriptors = MyStringDescriptors;
		static constexpr uint16_t vid = 0x1F00;
		static constexpr uint16_t pid = 0x2012;
	};
	using Device = Kvasir::Usb::Device<MyDeviceSettings, MyCdcSettings>;

	template<typename T>
	decltype(Device::AllocatorType::allocate()) makePacket(std::initializer_list<T> l) {
		auto packet = Device::AllocatorType::allocate();
		for (auto d : l) {
			packet.pushBack(d);
		}
		return packet;
	}
	struct HalDummy {
		template<typename T, Kvasir::Usb::EndpointDirection Direction, Kvasir::Usb::EndpointType Type>
		static void activateEndpoint() {

		}
	};
}

int usbTest()
{
	{
		using namespace TestScenario1;
		Device::AllocatorType::initialize();
		{
			//set address
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0, 5, 5, 0, 0, 0, 0, 0 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 6, 0, 1, 0, 0, 8, 0 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x09, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x4B, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x00, 0x03, 0x00, 0x00, 0xFF, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x02, 0x03, 0x09, 0x04, 0xFF, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x03, 0x03, 0x09, 0x04, 0xFF, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00 }));
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
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x09, 0x01 }));
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
			//set configuration
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x00, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
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
			//get line coding
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0xA1, 0x21, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
				return 1;
			}
			if (cmd.packet_.getSize() != 7) {
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
			//set line coding
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x21, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
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
			//set line coding
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x21, 0x22, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
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
			//set line coding
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x21, 0x22, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
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
			//set line coding
			auto cmd = Device::onSetupPacket<HalDummy>(makePacket({ 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00 }));
			if (cmd.type_ != Device::HalCommand::Type::noAction) {
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
	}
	return 0;
}

