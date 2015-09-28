#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0x1ff3ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSC32KSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> USBVSTBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> USBSSTBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> USBREGEN; 
    }
    namespace SIM_sopt1cfg{
        using Addr = Register::Address<0x40047004,0xf8ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> URWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> UVSWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> USSWE; 
    }
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40048004,0xf0faff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCCLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLFLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TPMSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> UART0SRC; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0xf8e3ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TPM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TPM2CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TPM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TPM2CLKSEL; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xfff8ff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UART1TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UART1RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UART0ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART1ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UART2ODE; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0ALTTRGEN; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0x00000070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SRAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SERIESID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SUBFAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FAMID; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xff33e33f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBOTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SPI1; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xfff7c1de>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SLCD; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0x507f7ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TPM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TPM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DAC0; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x40048040,0xfffffeff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40048044,0x0ff8ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> OUTDIV1; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0xf0fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLASHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLASHDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0x8080ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MAXADDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> MAXADDR0; 
    }
    namespace SIM_uidmh{
        using Addr = Register::Address<0x40048058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> UID; 
    }
    namespace SIM_uidml{
        using Addr = Register::Address<0x4004805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidl{
        using Addr = Register::Address<0x40048060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_copc{
        using Addr = Register::Address<0x40048100,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COPCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COPT; 
    }
    namespace SIM_srvcop{
        using Addr = Register::Address<0x40048104,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SRVCOP; 
    }
}
