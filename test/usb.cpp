#include <iostream>
#include <sstream>
#include <iomanip>
#include "Usb/SetupPacket.hpp"
#include "Usb/Endpoint.hpp"
#include "USB/Packet.hpp"
#include "USB/Device.hpp"
#include "USB/Memory.hpp"


using PacketT = Kvasir::Usb::Packet <Kvasir::Usb::CompactPacket::ImplType>;
using Alloc = Kvasir::Usb::CompactPacket::Allocator<PacketT,12>;
using Device = Kvasir::Usb::Device<Alloc, Kvasir::Usb::CompactPacket::Queue<PacketT>, Kvasir::Usb::CompactPacket::Transfer<PacketT, Alloc>>;

template<typename T>
decltype(Alloc::allocate()) makePacket(std::initializer_list<T> l) {
	auto packet = Alloc::allocate();
	for (auto d : l) {
		packet.pushBack(d);
	}
	return packet;
}


int usbTest()
{
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
	return 0;
}

