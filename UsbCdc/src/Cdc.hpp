#pragma once
#include "Usb.hpp"
#include "Hardware.h"
#include "ChipLpc175x6xUsb.hpp"

struct CdcConfig : Kvasir::Usb::DefaultConfig {
	static constexpr int vid = 0x1234;
	static constexpr int pid = 0x1234;
	static constexpr auto endpoints = Kvasir::MPL::list(Kvasir::Usb::Cdc::DefaultConfig());
};

class Cdc : public Kvasir::Usb::Base<Cdc,CdcConfig>{
public:

};
