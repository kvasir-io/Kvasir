#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0x1ff30fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RAMSIZE; 
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
        using Addr = Register::Address<0x40048004,0xfffae70f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCCLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PTD7PAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRACECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLFLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBSRC; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0xc8c3feec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM0FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FTM1FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM2FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FTM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FTM2CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FTM0TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FTM0TRG1SRC; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UART1TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART1RXSRC; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0ALTTRGEN; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xffe3c339>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBOTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VREF; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xffffc1fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTE; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0x501b4dfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RNGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> USBDCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DAC0; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x40048040,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40048044,0x00f0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> OUTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> OUTDIV1; 
    }
    namespace SIM_clkdiv2{
        using Addr = Register::Address<0x40048048,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> USBDIV; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0x00f0f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLASHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLASHDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DEPART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> NVMSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MAXADDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> MAXADDR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SWAPPFLSH; 
    }
    namespace SIM_uidh{
        using Addr = Register::Address<0x40048054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidmh{
        using Addr = Register::Address<0x40048058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidml{
        using Addr = Register::Address<0x4004805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidl{
        using Addr = Register::Address<0x40048060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
}
