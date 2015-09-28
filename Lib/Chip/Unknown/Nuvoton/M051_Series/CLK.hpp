#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepwrcon{
        using Addr = Register::Address<0x50000200,0xfffffe02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XTL12M_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSC22M_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSC10K_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD_WU_DLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD_WU_INT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD_WU_STS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PWR_DOWN_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD_WAIT_CPU; 
    }
    namespace Noneahbclk{
        using Addr = Register::Address<0x50000204,0xfffffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ISP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EBI_EN; 
    }
    namespace Noneapbclk{
        using Addr = Register::Address<0x50000208,0xef0cce82>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TMR0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TMR1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMR2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMR3_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FDIV_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> I2C_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UART0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PWM01_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PWM23_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PWM45_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PWM67_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC_EN; 
    }
    namespace Noneclkstatus{
        using Addr = Register::Address<0x5000020c,0xffffff62>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XTL12M_STB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PLL_STB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSC10K_STB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSC22M_STB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLK_SW_FAIL; 
    }
    namespace Noneclksel0{
        using Addr = Register::Address<0x50000210,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> HCLK_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> STCLK_S; 
    }
    namespace Noneclksel1{
        using Addr = Register::Address<0x50000214,0x0c8888f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WDT_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ADC_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TMR0_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TMR1_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TMR2_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> TMR3_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> UART_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PWM01_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PWM23_S; 
    }
    namespace Noneclkdiv{
        using Addr = Register::Address<0x50000218,0xff00f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> HCLK_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> UART_N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ADC_N; 
    }
    namespace Noneclksel2{
        using Addr = Register::Address<0x5000021c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FRQDIV_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWM45_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PWM67_S; 
    }
    namespace Nonepllcon{
        using Addr = Register::Address<0x50000220,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> FB_DV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> IN_DV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OUT_DV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PLL_SRC; 
    }
    namespace Nonefrqdiv{
        using Addr = Register::Address<0x50000224,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIVIDER_EN; 
    }
}
