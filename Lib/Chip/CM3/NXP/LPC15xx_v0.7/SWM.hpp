#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepinassign0{
        using Addr = Register::Address<0x40038000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> UART0_TXD_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> UART0_RXD_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> UART0_RTS_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> UART0_CTS_I; 
    }
    namespace Nonepinassign1{
        using Addr = Register::Address<0x40038004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> UART0_SCLK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> UART1_TXD_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> UART1_RXD_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> UART1_RTS_O; 
    }
    namespace Nonepinassign2{
        using Addr = Register::Address<0x40038008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> UART1_CTS_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> UART1_SCLK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> UART2_TXD_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> UART2_RXD_I; 
    }
    namespace Nonepinassign3{
        using Addr = Register::Address<0x4003800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> UART2_SCLK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SSP0_SCK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SSP0_MOSI_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SSP0_MISO_IO; 
    }
    namespace Nonepinassign4{
        using Addr = Register::Address<0x40038010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSP0_SSELSN_0_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SSP0_SSELSN_1_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SSP0_SSELSN_2_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SSP0_SSELSN_3_IO; 
    }
    namespace Nonepinassign5{
        using Addr = Register::Address<0x40038014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSP1_SCK_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SSP1_MOSI_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SSP1_MISO_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SSP1_SSELSN_0_IO; 
    }
    namespace Nonepinassign6{
        using Addr = Register::Address<0x40038018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSP1_SSELSN_1_IO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CAN_TD1_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CAN_RD1_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> USB_CONNECTN_O; 
    }
    namespace Nonepinassign7{
        using Addr = Register::Address<0x4003801c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> USB_VBUS_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCT0_OUT0_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SCT0_OUT1_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCT0_OUT2_O; 
    }
    namespace Nonepinassign8{
        using Addr = Register::Address<0x40038020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCT1_OUT0_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCT1_OUT1_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SCT1_OUT2_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCT2_OUT0_O; 
    }
    namespace Nonepinassign9{
        using Addr = Register::Address<0x40038024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCT2_OUT1_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCT2_OUT2_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SCT3_OUT0_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCT3_OUT1_O; 
    }
    namespace Nonepinassign10{
        using Addr = Register::Address<0x40038028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCT3_OUT2_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCT_ABORT0_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SCT_ABORT1_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ADC0_PIN_TRIG0_I; 
    }
    namespace Nonepinassign11{
        using Addr = Register::Address<0x4003802c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADC0_PIN_TRIG1_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ADC1_PIN_TRIG0_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ADC1_PIN_TRIG1_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DAC_PIN_TRIG_I; 
    }
    namespace Nonepinassign12{
        using Addr = Register::Address<0x40038030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DAC_SHUTOFF_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ACMP0_OUT_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ACMP1_OUT_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACMP2_OUT_O; 
    }
    namespace Nonepinassign13{
        using Addr = Register::Address<0x40038034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ACMP3_OUT_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLK_OUT_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ROSC0_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ROSC_RST0_I; 
    }
    namespace Nonepinassign14{
        using Addr = Register::Address<0x40038038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> USB_FRAME_TOG_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> QEI0_PHA_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> QEI0_PHB_I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> QEI0_IDX_I; 
    }
    namespace Nonepinassign15{
        using Addr = Register::Address<0x4003803c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPIO_INT_BMATCH_O; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SWO_O; 
    }
    namespace Nonepinenable0{
        using Addr = Register::Address<0x400381c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADC0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADC0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADC0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADC0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADC0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADC0_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC0_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC0_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ADC0_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADC0_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADC1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADC1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ADC1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ADC1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADC1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADC1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADC1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ADC1_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ADC1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ADC1_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ADC1_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ADC1_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DAC_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ACMP_I1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ACMP_I2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ACMP0_I3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ACMP0_I4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACMP1_I3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACMP1_I4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ACMP2_I3; 
    }
    namespace Nonepinenable1{
        using Addr = Register::Address<0x400381c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACMP2_I4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACMP3_I3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACMP3_I4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> I2C0_SDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> I2C0_SCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCT0_OUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SCT0_OUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SCT0_OUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SCT0_OUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SCT0_OUT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCT1_OUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SCT1_OUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCT1_OUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SCT1_OUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SCT1_OUT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SCT2_OUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SCT2_OUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SCT2_OUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SCT3_OUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SCT3_OUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SCT3_OUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RESETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SWCLK_TCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWDIO; 
    }
}
