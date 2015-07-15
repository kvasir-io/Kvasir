/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
#pragma once
#include "Register/Register.hpp"

namespace Kvasir{
namespace System{
namespace SysCon{
constexpr int baseAddress = 									0x40074000;
struct SysMemReMap		{using address =	Register::Address<baseAddress+	0x000,
											Register::maskFromRange(31,2)>;};
struct AhbBufEn0		{using address =	Register::Address<baseAddress+	0x00C,
											Register::maskFromRange(4,3,9,6,13,12,21,21,28,23,31,30)>;};
struct AhbBufEn1		{constexpr int address = baseAddress+ 	0x010;};
struct SysTckCal		{constexpr int address = baseAddress+	0x018;};
struct NmiSrc			{constexpr int address = baseAddress+	0x01C;};
struct SysRstStat		{constexpr int address = baseAddress+	0x040;};
struct PResetCtrl0		{constexpr int address = baseAddress+	0x044;};
struct PResetCtrl1		{constexpr int address = baseAddress+	0x048;};
struct PioPorCap0		{constexpr int address = baseAddress+	0x04c;};
struct PioPorCap1		{constexpr int address = baseAddress+	0x050;};
struct PioPorCap2		{constexpr int address = baseAddress+	0x054;};
struct MainClkSelA		{constexpr int address = baseAddress+ 	0x080;};
struct MainClkSelB		{constexpr int address = baseAddress+ 	0x084;};
struct UsbClkSel		{constexpr int address = baseAddress+ 	0x088;};
struct AdcAsyncClkSel	{constexpr int address = baseAddress+	0x08C;};
struct ClkOutSelA		{constexpr int address = baseAddress+	0x094;};
struct ClkOutSelB		{constexpr int address = baseAddress+	0x098;};
struct SysPllClkSel		{constexpr int address = baseAddress+	0x0A0;};
struct UsbPllClkSel		{constexpr int address = baseAddress+ 	0x0A4;};
struct SctPllClkSel		{constexpr int address = baseAddress+	0x0A8;};
struct SysAhbClkDiv		{constexpr int address = baseAddress+	0x0C0;};
struct SysAhbClkCtrl0	{constexpr int address = baseAddress+	0x0C4;};
struct SysAhbClkCtrl1	{constexpr int address = baseAddress+	0x0C8;};
struct SysTickClkDiv	{constexpr int address = baseAddress+	0x0cc;};
struct UartClkDiv		{constexpr int address = baseAddress+	0x0D0;};
struct IoConClkDiv		{constexpr int address = baseAddress+	0x0D4;};
struct TraceClkDiv		{constexpr int address = baseAddress+	0x0D8;};
struct UsbClkDiv		{constexpr int address = baseAddress+	0x0EC;};
struct AdcAsyncClkDiv	{constexpr int address = baseAddress+	0x0F0;};
struct ClkOutDiv		{constexpr int address = baseAddress+	0x0F8;};
struct FreqMeCtrl		{constexpr int address = baseAddress+ 	0x120;};
struct FlashCfg			{constexpr int address = baseAddress+ 	0x124;};
struct FrgCtrl			{constexpr int address = baseAddress+	0x128;};
struct UsbClkCtrl		{constexpr int address = baseAddress+	0x12C;};
struct BodCtrl			{constexpr int address = baseAddress+	0x180;};
struct IrcCtrl			{constexpr int address = baseAddress+	0x184;};
struct SysOscCtrl		{constexpr int address = baseAddress+	0x188;};
struct RtcOscCtrl		{constexpr int address = baseAddress+	0x190;};
struct SysPllCtrl		{constexpr int address = baseAddress+	0x198;};
struct SysPllStat		{constexpr int address = baseAddress+	0x19C;};
struct UsbPllCtrl		{constexpr int address = baseAddress+ 	0x1A0;};
struct UsbPllStat		{constexpr int address = baseAddress+	0x1A4;};
struct SctPllCtrl		{constexpr int address = baseAddress+	0x1A8;};
struct SctPllStat		{constexpr int address = baseAddress+	0x1AC;};
struct PdaWakeCfg		{constexpr int address = baseAddress+	0x204;};
struct PdRunCfg			{constexpr int address = baseAddress+	0x208;};
struct StartErp0		{constexpr int address = baseAddress+	0x218;};
struct StartErp1		{constexpr int address = baseAddress+	0x21C;};
struct Jtag_IDCode		{constexpr int address = baseAddress+	0x3F4;};
struct Device_ID0		{constexpr int address = baseAddress+	0x3F8;};
struct Device_ID1		{constexpr int address = baseAddress+	0x3FC;};

struct SysMemReMap{
	enum class Map {	BootLoaderMode,
							UserRamMode,
							UserFlashMode,
							DoNotUse};
	static constexpr Register::RWFieldLocT<Address, 1, 0, Map>	map{};
	template<Map M>
	static constexpr decltype(write(map,Register::value<Map,M>())) writeMap(){ return{}; };
};

struct AhbBufEn0{

	static constexpr Register::RWBitLocT<Address,22>		QeiAhbApbWritingBufferingEneabled{};
	static constexpr Register::RWBitLocT<Address,29>		SysconAhbApbWriteBufferingEnabled{};
};

}//end of SysCon
namespace PowerConfiguration {
	template<int I>
	using Helper = Register::RWLocation<0x40074208, (1u << I),unsigned(0x07 | (1 << 7) | (0x7F << 25))>;
	//bits 2:0 reserved
	static constexpr 	Helper<3>		ircOscillatorOutputPoweredDown{};
	static constexpr	Helper<4>		ircOscillatorPoweredDown{};
	static constexpr 	Helper<5>		flashPoweredDown{};
	static constexpr 	Helper<6>		eepromPoweredDown{};
	//bit 7 reserved
	static constexpr 	Helper<8>		brownOutDetectPoweredDown{};
	static constexpr 	Helper<9>		usbPhyPoweredDown{};
	static constexpr 	Helper<10>		adc0PoweredDown{};
	static constexpr 	Helper<11>		adc1PoweredDown{};
	static constexpr 	Helper<12>		dacPoweredDown{};
	static constexpr 	Helper<13>		analogComperator0PoweredDown{};
	static constexpr 	Helper<14>		analogComparator1PoweredDown{};
	static constexpr 	Helper<15>		analogComparator2PoweredDown{};
	static constexpr 	Helper<16>		analogComparator3PoweredDown{};
	static constexpr 	Helper<17>		internalVoltageRefPoweredDown{};
	static constexpr 	Helper<18>		temperaturSensorPoweredDown{};
	static constexpr 	Helper<19>		vddaDivPoweredDown{};
	static constexpr 	Helper<20>		watchdogOscillatorPoweredDown{};
	static constexpr 	Helper<21>		systemOscillatorPoweredDown{};
	static constexpr 	Helper<22>		systemPllPoweredDown{};
	static constexpr 	Helper<23>		usbPllPoweredDown{};
	static constexpr 	Helper<24>		sctPllPoweredDown{};
	//bits 31:25 reserved
}

namespace PowerControl {
	template<int I>
	using Helper = Register::RWLocation<0x4003C000, (1u << I),~unsigned((1 << 3) | (1 << 8) | (1 << 11))>;
	//bits 2:0 reserved
	static constexpr 	Helper<3>		noPowerDown{};
	//bits 7:4 reserved
	static constexpr	Helper<8>		ircOscillatorDisabled{};
	//bits 10:9 reserved
	static constexpr 	Helper<11>		flashDisabled{};
	//bits 31:12 reserved
}

namespace ClockSource{
	namespace Main{
		constexpr int address = 0x40074080;
		namespace Detail{
			using SourceAIrc = Register::BlindWriteActionT<address,0x03,0>;
			using SourceASystemOscillator = Register::BlindWriteActionT<address,0x03,1>;
			using SourceAWatchdogOscillator = Register::BlindWriteActionT<address,0x03,2>;
			using SourceBSourceA = Register::BlindWriteActionT<address+4,0x03,0>;
		}
		constexpr MPL::List<Detail::SourceAIrc,Detail::SourceBSourceA> irc{};
		constexpr MPL::List<Detail::SourceASystemOscillator,Detail::SourceBSourceA> systemOscillator{};
		constexpr MPL::List<Detail::SourceAWatchdogOscillator,Detail::SourceBSourceA> watchdogOscillator{};
		constexpr Register::BlindWriteActionT<address+4,0x03,1> pllInput{};
		constexpr Register::BlindWriteActionT<address+4,0x03,2> pllOutput{};
		constexpr Register::BlindWriteActionT<address+4,0x03,3> rtcOscillator{};
	}
	namespace Usb{
		enum class Source{ircOscillator,systemOscillator,usbPllOut,mainClock};
		constexpr Register::RWLocation<0x40074088,0x03,~0x03,Source> source;
	}
}

namespace ClockDivide{
	constexpr Register::RWLocation<0x400740CC,0xFF,~0xFF> systick;
	constexpr Register::RWLocation<0x400740D0,0xFF,~0xFF> usart;
	constexpr Register::RWLocation<0x400740D4,0xFF,~0xFF> ioconGlitchFilter;
	constexpr Register::RWLocation<0x400740D8,0xFF,~0xFF> armTrace;
	constexpr Register::RWLocation<0x400740EC,0xFF,~0xFF> usb;
	constexpr Register::RWLocation<0x400740F0,0xFF,~0xFF> adcSync;
	constexpr Register::RWLocation<0x400740F8,0xFF,~0xFF> clkOut;
}

namespace Pll{
	enum class PostDividerRatio {div1, div2, div4, div8};
	struct ClockSource{
		static constexpr int address{0x400740A0};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscillator{};
	};

	struct Control{
		static constexpr unsigned address{0x40074198u};
		static constexpr unsigned writable{0xFFFFFF00u};
		static constexpr Register::RWLocation<address,0x3F,writable> feedbackDivider{};
		static constexpr Register::RWLocation<address,(3 << 6),writable,PostDividerRatio> postDivider{};
	};
	constexpr Register::ROLocation<0x4007419C,0x01> statusLocked{};

}

namespace UsbPll{
	struct ClockSource{
		static constexpr int address{0x400740A4};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscillator{};
	};
	struct Control{
		static constexpr int address{0x400741A0};
		static constexpr unsigned writable{0xFFFFFF00u};
		static constexpr Register::RWLocation<address,0x3F,writable> feedbackDivider{};
		static constexpr Register::RWLocation<address,(3 << 6),writable,Pll::PostDividerRatio> postDivider{};
	};
	constexpr Register::ROLocation<0x400741A4,0x01> statusLocked{};
}

struct AHBClock{
	struct Enabled{
		template<int Bit>
		using Helper1 = Register::RWLocation<0x400740C4,(1u << Bit),~unsigned((1<<0) | (1<<2) | (3<<5) | ( 1<<8) | (1<<10) | (1<<17) | (7<<24) | (1<<31))>;
		template<int Bit>
		using Helper2 = Register::RWLocation<0x400740C8,(1u << Bit),~unsigned((1<<8) | (3<<11) | (7<<14) | ( 1<<20) | (1<<22) | (0xFF<<24))>;

		//bit 0 is sys which is always on
		static constexpr	Helper1<1>		rom{};
		//bit 2 reserved
		static constexpr	Helper1<3>		ram1{};
		static constexpr	Helper1<4>		ram2{};
		//bit 6:5 reserved
		static constexpr	Helper1<7>		flashReg{};
		//bit 8 reserved
		static constexpr 	Helper1<9>		eeprom{};
		//bit 10 reserved
		static constexpr	Helper1<11>		inputMux{};
		static constexpr	Helper1<12>		switchMatrix{};
		static constexpr	Helper1<13>		iocon{};
		static constexpr	Helper1<14>		gpio0{};
		static constexpr	Helper1<15>		gpio1{};
		static constexpr	Helper1<16>		gpio2{};
		//bit 17 reserved
		static constexpr	Helper1<18>		pinInt{};
		static constexpr	Helper1<19>		groupedPinInt{};
		static constexpr	Helper1<20>		dma{};
		static constexpr	Helper1<21>		crc{};
		static constexpr	Helper1<22>		wwdt{};
		static constexpr	Helper1<23>		rtc{};
		//bit 26:24 reserved
		static constexpr	Helper1<27>		adc0{};
		static constexpr	Helper1<28>		adc1{};
		static constexpr	Helper1<29>		dac{};
		static constexpr	Helper1<30>		analogComparator{};
		//bit 31 reserved

		//SYSAHBCLKCTRL1
		static constexpr	Helper2<0>	mrt{};
		static constexpr	Helper2<1>	rit{};
		static constexpr	Helper2<2>	sct0{};
		static constexpr	Helper2<3>	sct1{};
		static constexpr	Helper2<4>	sct2{};
		static constexpr	Helper2<5>	sct3{};
		static constexpr 	Helper2<6>	sctIpu{};
		static constexpr	Helper2<7>	cCan{};
		//bit 8 is reserved
		static constexpr	Helper2<9>	spi0{};
		static constexpr	Helper2<10>	spi1{};
		//bit 12:11 are reserved
		static constexpr	Helper2<13>	i2c0{};
		//bit 16:14
		static constexpr	Helper2<17>	uart0{};
		static constexpr	Helper2<18>	uart1{};
		static constexpr 	Helper2<19>	uart2{};
		//bit 20 reserved
		static constexpr	Helper1<21>	qei{};
		//bit 22 reserved
		static constexpr	Helper2<23>	usb{};
		//bits 31:24 reserved
	};

	// SYSAHBCLKDIV
	static constexpr Register::RWLocation<0x400740C0,0xFF,~0xFF> divider{};
};

namespace Flash{
	static constexpr int address{0x40074124};
	template<int I>
	struct MakeAction : Register::WriteActionT<address,(0x0F << 12),(I << 12)>{};
	template<int I>
	using MakeActionT = typename MakeAction<I>::Type;
	static constexpr MakeActionT<0> oneSysclock{};		//up to 25mhz
	static constexpr MakeActionT<1> twoSysclock{};		//up to 55mhz
	static constexpr MakeActionT<2> threeSysclock{};	//up to 72mhz
};

namespace PeripheralResetEnabled{			//PRESETCTRL register actions
	constexpr int address{0x40074044};
	template<int Bit>
	using Helper1 = Register::RWLocation<0x40074044,(1u << Bit),~unsigned((7<<0) | (1<<8) | (1<<10) | ( 1<<12) | (0xF<<14) | (0x1F<<22) | (1<<29) | (1<<31))>;
	template<int Bit>
	using Helper2 = Register::RWLocation<0x40074048,(1u << Bit),~unsigned((1<<8) | (3<<11) | (7<<14) | ( 1<<20) | (1<<22) | (0xFF<<24))>;

	//bit 6:0 reserved
	static constexpr	Helper1<7>		flash{};
	//bit 8 reserved
	static constexpr	Helper1<9>		eeprom{};
	//bit 10 reserved
	static constexpr	Helper1<11>		inputMux{};
	//bit 12 reserved
	static constexpr	Helper1<13>		ioCon{};
	//bit 17:14 reserved
	static constexpr	Helper1<18>		pinInterrupt{};
	static constexpr	Helper1<19>		groupedInterrupt{};
	static constexpr	Helper1<20>		dma{};
	static constexpr	Helper1<21>		crc{};
	//bit 26:22 reserved
	static constexpr	Helper1<27>		adc0{};
	static constexpr	Helper1<18>		adc1{};
	//bit 29 reserved
	static constexpr	Helper1<30>		analogComparator{};
	//bit 31 reserved

	static constexpr	Helper2<0>	multirateTimer{};
	static constexpr	Helper2<1>	rit{};
	static constexpr	Helper2<2>	sct0{};
	static constexpr	Helper2<3>	sct1{};
	static constexpr	Helper2<4>	sct2{};
	static constexpr	Helper2<5>	sct3{};
	static constexpr	Helper2<6>	sctInput{};
	static constexpr	Helper2<7>	cCan{};
	//bit 8 reserved
	static constexpr	Helper2<9>	spi0{};
	static constexpr	Helper2<10>	spi1{};
	//bit 12:11 reserved
	static constexpr	Helper2<13>	i2c0{};
	//bit 16:14 reserved
	static constexpr	Helper2<17>	uart0{};
	static constexpr	Helper2<18>	uart1{};
	static constexpr	Helper2<19>	uart2{};
	//bit 20 reserved
	static constexpr	Helper2<21>	qei{};
	//bit 22 reserved
	static constexpr	Helper2<23>	usb{};
	//bit 31:24 reserved

};

}
}
