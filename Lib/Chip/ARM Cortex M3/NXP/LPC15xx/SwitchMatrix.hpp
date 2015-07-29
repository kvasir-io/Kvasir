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
namespace SwitchMatrix{
constexpr int baseAddress = 									0x40038000;
namespace pinAssign0			{using address =	Register::Address<baseAddress+	0x000>;};
namespace pinAssign1			{using address =	Register::Address<baseAddress+	0x004>;};
namespace pinAssign2			{using address =	Register::Address<baseAddress+	0x008>;};
namespace pinAssign3			{using address =	Register::Address<baseAddress+	0x00C>;};
namespace pinAssign4			{using address =	Register::Address<baseAddress+	0x010>;};
namespace pinAssign5			{using address =	Register::Address<baseAddress+	0x014>;};
namespace pinAssign6			{using address =	Register::Address<baseAddress+	0x018,Register::maskFromRange(0),Register::maskFromRange(31,24)>;};
namespace pinAssign7			{using address =	Register::Address<baseAddress+	0x01C>;};
namespace pinAssign8			{using address =	Register::Address<baseAddress+	0x020>;};
namespace pinAssign9			{using address =	Register::Address<baseAddress+	0x024>;};
namespace pinAssign10			{using address =	Register::Address<baseAddress+	0x028>;};
namespace pinAssign11			{using address =	Register::Address<baseAddress+	0x02C>;};
namespace pinAssign12			{using address =	Register::Address<baseAddress+	0x030>;};
namespace pinAssign13			{using address =	Register::Address<baseAddress+	0x034>;};
namespace pinAssign14			{using address =	Register::Address<baseAddress+	0x038>;};
namespace pinAssign15			{using address =	Register::Address<baseAddress+	0x03C,Register::maskFromRange(0),Register::maskFromRange(31,16)>;};
namespace pinEnable0			{using address =	Register::Address<baseAddress+	0x1C0>;};
namespace pinEnable1			{using address =	Register::Address<baseAddress+	0x1C4,Register::maskFromRange(0),Register::maskFromRange(31,24)>;};

enum class ConnectedPIO{	Pio0_0,	Pio0_1,	Pio0_2,	Pio0_3,	Pio0_4,	Pio0_5,	Pio0_6,	Pio0_7,
							Pio0_8,	Pio0_9,	Pio0_10,Pio0_11,Pio0_12,Pio0_13,Pio0_14,Pio0_15,
							Pio0_16,Pio0_17,Pio0_18,Pio0_19,Pio0_20,Pio0_21,Pio0_22,Pio0_23,
							Pio0_24,Pio0_25,Pio0_26,Pio0_27,Pio0_28,Pio0_29,Pio0_30,Pio0_31,

							Pio1_0,	Pio1_1,	Pio1_2,	Pio1_3,	Pio1_4,	Pio1_5,	Pio1_6,	Pio1_7,
							Pio1_8,	Pio1_9,	Pio1_10,Pio1_11,Pio1_12,Pio1_13,Pio1_14,Pio1_15,
							Pio1_16,Pio1_17,Pio1_18,Pio1_19,Pio1_20,Pio1_21,Pio1_22,Pio1_23,
							Pio1_24,Pio1_25,Pio1_26,Pio1_27,Pio1_28,Pio1_29,Pio1_30,Pio1_31,

							Pio2_0,	Pio2_1,	Pio2_2,	Pio2_3,	Pio2_4,	Pio2_5,	Pio2_6,	Pio2_7,
							Pio2_8,	Pio2_9,	Pio2_10,Pio2_11,
																			};

namespace pinAssign0{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	uart0_txd_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart0_txd_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart0_txd_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	uart0_rxd_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart0_rxd_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart0_rxd_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	uart0_rts_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart0_rts_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart0_rts_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	uart0_cts_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart0_cts_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart0_cts_i(){ return{}; };
}
namespace pinAssign1{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	uart0_sclk_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart0_sclk_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart0_sclk_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	uart1_txd_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart1_txd_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart1_txd_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	uart1_rxd_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart1_rxd_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart1_rxd_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	uart1_rts_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart1_rts_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart1_rts_o(){ return{}; };
}
namespace pinAssign2{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	uart1_cts_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart1_cts_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart1_cts_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	uart1_sclk_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart1_sclk_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart1_sclk_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	uart2_txd_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart2_txd_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart2_txd_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	uart2_rxd_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart2_rxd_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart2_rxd_i(){ return{}; };
}
namespace pinAssign3{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	uart2_sclk_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(uart2_sclk_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUart2_sclk_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	spi0_sck_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_sck_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_sck_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	spi0_mosi_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_mosi_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_mosi_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	spi0_miso_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_miso_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_miso_io(){ return{}; };
}
namespace pinAssign4{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	spi0_sselsn_0_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_sselsn_0_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_sselsn_0_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	spi0_sselsn_1_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_sselsn_1_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_sselsn_1_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	spi0_sselsn_2_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_sselsn_2_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_sselsn_2_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	spi0_sselsn_3_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi0_sselsn_3_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi0_sselsn_3_io(){ return{}; };
}
namespace pinAssign5{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	spi1_sck_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi1_sck_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi1_sck_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	spi1_mosi_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi1_mosi_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi1_mosi_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	spi1_miso_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi1_miso_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi1_miso_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	spi1_sselsn_0_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi1_sselsn_0_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi1_sselsn_0_io(){ return{}; };
}
namespace pinAssign6{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	spi1_sselsn_1_io{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(spi1_sselsn_1_io,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSpi1_sselsn_1_io(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	can_td1_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(can_td1_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForCan_td1_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	can_rd1_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(can_rd1_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForCan_rd1_i(){ return{}; };

}
namespace pinAssign7{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	usb_vbus_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(usb_vbus_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUsb_vbus_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	sct0_out0_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct0_out0_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct0_out0_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	sct0_out1_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct0_out1_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct0_out1_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	sct0_out2_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct0_out2_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct0_out2_o(){ return{}; };
}
namespace pinAssign8{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	sct1_out0_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct1_out0_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct1_out0_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	sct1_out1_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct1_out1_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct1_out1_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	sct1_out2_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct1_out2_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct1_out2_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	sct2_out0_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct2_out0_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct2_out0_o(){ return{}; };
}
namespace pinAssign9{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	sct2_out1_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct2_out1_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct2_out1_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	sct2_out2_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct2_out2_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct2_out2_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	sct3_out0_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct3_out0_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct3_out0_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	sct3_out1_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct3_out1_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct3_out1_o(){ return{}; };
}
namespace pinAssign10{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	sct3_out2_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct3_out2_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct3_out2_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	sct_abort0_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct_abort0_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct_abort0_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	sct_abort1_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(sct_abort1_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSct_abort1_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	adc0_pin_trig0_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(adc0_pin_trig0_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAdc0_pin_trig0_i(){ return{}; };
}
namespace pinAssign11{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	adc0_pin_trig1_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(adc0_pin_trig1_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAdc0_pin_trig1_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	adc1_pin_trig0_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(adc1_pin_trig0_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAdc1_pin_trig0_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	adc1_pin_trig1_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(adc1_pin_trig1_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAdc1_pin_trig1_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	dac_pin_trig_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(dac_pin_trig_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForDac_pin_trig_i(){ return{}; };
}
namespace pinAssign12{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	dac_shutoff_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(dac_shutoff_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForDac_shutoff_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	acmp0_out_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(acmp0_out_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAcmp0_out_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	acmp1_out_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(acmp1_out_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAcmp1_out_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	acmp2_out_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(acmp2_out_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAcmp2_out_o(){ return{}; };
}
namespace pinAssign13{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	acmp3_out_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(acmp3_out_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForAcmp3_out_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	clk_out_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(clk_out_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForClk_out_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	rosc0_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(rosc0_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForRosc0_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	rosc_rst0_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(rosc_rst0_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForRosc_rst0_i(){ return{}; };
}
namespace pinAssign14{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	usb_frame_tog_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(usb_frame_tog_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForUsb_frame_tog_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	qei0_pha_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(qei0_pha_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForQei0_pha_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,23,16, ConnectedPIO>	qei0_phb_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(qei0_phb_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForQei0_phb_i(){ return{}; };

	static constexpr Register::RWFieldLocT<address,31,24, ConnectedPIO>	qei0_idx_i{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(qei0_idx_i,Register::value<ConnectedPIO,CP>())) writePinAssignmentForQei0_idx_i(){ return{}; };
}
namespace pinAssign15{
	static constexpr Register::RWFieldLocT<address, 7, 0, ConnectedPIO>	gpio_int_bmatch_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(gpio_int_bmatch_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForGpio_int_bmatch_o(){ return{}; };

	static constexpr Register::RWFieldLocT<address,15, 8, ConnectedPIO>	swo_o{};
		template<ConnectedPIO CP>
		static constexpr decltype(write(swo_o,Register::value<ConnectedPIO,CP>())) writePinAssignmentForSwo_o(){ return{}; };
}
namespace pinEnable0{
	static constexpr 	Register::RWBitLocT<Address, 0>			adc0_0OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 1>			adc0_1OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 2>			adc0_2OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 3>			adc0_3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 4>			adc0_4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 5>			adc0_5OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 6>			adc0_6OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 7>			adc0_7OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 8>			adc0_8OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 9>			adc0_9OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 10>		adc0_10OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 11>		adc0_11OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 12>		adc1_0OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 13>		adc1_1OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 14>		adc1_2OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 15>		adc1_3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 16>		adc1_4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 17>		adc1_5OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 18>		adc1_6OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 19>		adc1_7OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 20>		adc1_8OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 21>		adc1_9OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 22>		adc1_10OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 23>		adc1_11OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 24>		dacOutOnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 25>		acmpCommonInput1OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 26>		acmpCommonInput2OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 27>		acmp0_Input3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 28>		acmp0_Input4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 29>		acmp1_Input3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 30>		acmp1_Input4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 31>		acmp2_Input3OnFixedPinEnabled{};
}
namespace pinEnable1{
	static constexpr 	Register::RWBitLocT<Address, 0>			acmp2_Input4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 1>			acmp3_Input3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 2>			acmp3_Input4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 3>			i2c0_SdaOnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 4>			i2c0_SclOnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 5>			sct0_Out3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 6>			sct0_Out4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 7>			sct0_Out5OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 8>			sct0_Out6OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 9>			sct0_Out7OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 10>		sct1_Out3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 11>		sct1_Out4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 12>		sct1_Out5OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 13>		sct1_Out6OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 14>		sct1_Out7OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 15>		sct2_Out3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 16>		sct2_Out4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 17>		sct2_Out5OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 18>		sct3_Out3OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 19>		sct3_Out4OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 20>		sct3_Out5OnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 21>		resetNOnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 22>		swclkOnFixedPinEnabled{};
	static constexpr 	Register::RWBitLocT<Address, 23>		swdioOnFixedPinEnabled{};
}
}
}
