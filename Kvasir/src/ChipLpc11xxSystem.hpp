#pragma once
#include "register.hpp"

namespace Kvasir{
namespace System{
namespace ClockControl{			//SYSAHBCLKCTRL register actions
	constexpr int address{0x40048080};
	//bit 0 is sys which is always on
	constexpr Register::WriteBitActionT<address,1,true> romClockOn;
	constexpr Register::WriteBitActionT<address,1,false> romClockOff;
	constexpr Register::WriteBitActionT<address,2,true> ram0ClockOn;
	constexpr Register::WriteBitActionT<address,2,false> ram0ClockOff;
	constexpr Register::WriteBitActionT<address,3,true> flashRegClockOn;
	constexpr Register::WriteBitActionT<address,3,false> flashRegClockOff;
	constexpr Register::WriteBitActionT<address,4,true> flashArrayClockOn;
	constexpr Register::WriteBitActionT<address,4,false> flashArrayClockOff;
	constexpr Register::WriteBitActionT<address,5,true> i2C0ClockOn;
	constexpr Register::WriteBitActionT<address,5,false> i2C0ClockOff;
	constexpr Register::WriteBitActionT<address,6,true> gpioClockOn;
	constexpr Register::WriteBitActionT<address,6,false> gpioClockOff;
	constexpr Register::WriteBitActionT<address,7,true> ct16B0ClockOn;
	constexpr Register::WriteBitActionT<address,7,false> ct16B0ClockOff;
	constexpr Register::WriteBitActionT<address,8,true> ct16B1ClockOn;
	constexpr Register::WriteBitActionT<address,8,false> ct16B1ClockOff;
	constexpr Register::WriteBitActionT<address,8,true> sourceUpdate;
	constexpr Register::WriteBitActionT<address,9,true> ct32B0ClockOn;
	constexpr Register::WriteBitActionT<address,9,false> ct32B0ClockOff;
	constexpr Register::WriteBitActionT<address,10,true> ct32B1ClockOn;
	constexpr Register::WriteBitActionT<address,10,false> ct32B1ClockOff;
	constexpr Register::WriteBitActionT<address,11,true> ssp0ClockOn;
	constexpr Register::WriteBitActionT<address,11,false> ssp0ClockOff;
	constexpr Register::WriteBitActionT<address,12,true> usart0ClockOn;
	constexpr Register::WriteBitActionT<address,12,false> usart0ClockOff;
	constexpr Register::WriteBitActionT<address,13,true> adcClockOn;
	constexpr Register::WriteBitActionT<address,13,false> adcClockOff;
	constexpr Register::WriteBitActionT<address,14,true> usbClockOn;
	constexpr Register::WriteBitActionT<address,14,false> usbClockOff;
	constexpr Register::WriteBitActionT<address,15,true> wwdtClockOn;
	constexpr Register::WriteBitActionT<address,15,false> wwdtClockOff;
	constexpr Register::WriteBitActionT<address,16,true> ioconClockOn;
	constexpr Register::WriteBitActionT<address,16,false> ioconClockOff;
	//17 reserved
	constexpr Register::WriteBitActionT<address,18,true> ssp1ClockOn;
	constexpr Register::WriteBitActionT<address,18,false> ssp1ClockOff;
	constexpr Register::WriteBitActionT<address,19,true> pintCLockOn;
	constexpr Register::WriteBitActionT<address,19,false> pintCLockOff;
	constexpr Register::WriteBitActionT<address,20,true> usart1ClockOn;
	constexpr Register::WriteBitActionT<address,20,false> usart1ClockOff;
	constexpr Register::WriteBitActionT<address,21,true> usart2ClockOn;
	constexpr Register::WriteBitActionT<address,21,false> usart2ClockOff;
	constexpr Register::WriteBitActionT<address,22,true> usart3And4ClockOn;
	constexpr Register::WriteBitActionT<address,22,false> usart3And4ClockOff;
	constexpr Register::WriteBitActionT<address,23,true> group0IntClockOn;
	constexpr Register::WriteBitActionT<address,23,false> group0IntClockOff;
	constexpr Register::WriteBitActionT<address,24,true> group1IntClockOn;
	constexpr Register::WriteBitActionT<address,24,false> group1IntClockOff;
	constexpr Register::WriteBitActionT<address,25,true> i2C1ClockOn;
	constexpr Register::WriteBitActionT<address,25,false> i2C1ClockOff;
	constexpr Register::WriteBitActionT<address,26,true> ram1ClockOn;
	constexpr Register::WriteBitActionT<address,26,false> ram1ClockOff;
	constexpr Register::WriteBitActionT<address,27,true> usbRamClockOn;
	constexpr Register::WriteBitActionT<address,27,false> usbRamClockOff;
	constexpr Register::WriteBitActionT<address,28,true> crcClockOn;
	constexpr Register::WriteBitActionT<address,28,false> crcClockOff;
	constexpr Register::WriteBitActionT<address,29,true> dmaClockOn;
	constexpr Register::WriteBitActionT<address,29,false> dmaClockOff;
	constexpr Register::WriteBitActionT<address,30,true> rtcClockOn;
	constexpr Register::WriteBitActionT<address,30,false> rtcClockOff;
	constexpr Register::WriteBitActionT<address,31,true> sctClockOn;
	constexpr Register::WriteBitActionT<address,31,false> sctClockOff;
}

}
}
