#pragma once
#include "Usb.hpp"

struct CdcConfig : Kvasir::Usb::Cdc::defaultConfig{
	static constexpr int vid = 0x1234;
	static constexpr int pid = 0x1234;
};
class Cdc : Kvasir::Usb::Cdc::Base<CdcConfig,Cdc>{
public:

};
