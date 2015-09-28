#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x4003e000,0xfff30fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SRAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSC32KSEL; 
    }
    namespace SIM_sopt1_cfg{
        using Addr = Register::Address<0x4003e004,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LPTMR1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LPTMR2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LPTMR3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMPOLPTMR0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RAMSBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RAMBPEN; 
    }
    namespace SIM_ctrl_reg{
        using Addr = Register::Address<0x4003f004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PLL_VLP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PTC2_HD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> SAR_TRG_CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x4003f024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> REVID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SRAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ATTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SERIESID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SUBFAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FAMID; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x4003f034,0xff93422d>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SPI1; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x4003f038,0xf8548037>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PORTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IRTCREGFILE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> XBAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TMR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TMR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TMR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TMR3; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4003f03c,0x2fee95e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAMUX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMAMUX2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMAMUX3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RNGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PIT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SIM_LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SIM_HP; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x4003f040,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x4003f044,0x07ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SYSCLKMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> SYSDIV; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4003f04c,0xf0fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLASHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLASHDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x4003f050,0x80ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> MAXADDR; 
    }
    namespace SIM_uid0{
        using Addr = Register::Address<0x4003f054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uid1{
        using Addr = Register::Address<0x4003f058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uid2{
        using Addr = Register::Address<0x4003f05c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uid3{
        using Addr = Register::Address<0x4003f060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_misc_ctl{
        using Addr = Register::Address<0x4003f06c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> XBARAFEMODOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DMADONESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> AFECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AFECLKPADDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UARTMODTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UART0IRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UART1IRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART2IRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART3IRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> XBARPITOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EWMINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TMR0PLLCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TMR0SCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TMR1SCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TMR2SCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TMR3SCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TMR0PCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> TMR1PCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TMR2PCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TMR3PCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RTCCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> VREFBUFOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> VREFBUFINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VREFBUFPD; 
    }
}
