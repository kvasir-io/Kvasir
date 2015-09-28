#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0x3f770fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSC32KSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> USBSTBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> USBREGEN; 
    }
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40048004,0xcccae4fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCGCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> FBSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMTUARTPAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRACECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLFLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIMESRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> I2SSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> SDHCSRC; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0xf8c3fee8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM0FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FTM0FLT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FTM1FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM2FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FTM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FTM2CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2CLKSEL; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UARTTXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART1RXSRC; 
    }
    namespace SIM_sopt6{
        using Addr = Register::Address<0x40048014,0x00ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> RSTFLTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> RSTFLTEN; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0xffff6060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADC1TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADC1PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ADC1ALTTRGEN; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0xffff0f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
    }
    namespace SIM_scgc1{
        using Addr = Register::Address<0x40048028,0xfedff3ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OPAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TRIAMP; 
    }
    namespace SIM_scgc2{
        using Addr = Register::Address<0x4004802c,0xffffcffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DAC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DAC1; 
    }
    namespace SIM_scgc3{
        using Addr = Register::Address<0x40048030,0xb6fdeffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RNGB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SDHC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SLCD; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xefe3c339>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LLWU; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xffffc1dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGFILE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTE; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0xd41b4ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> USBDCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTC; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x40048040,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLEXBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MPU; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40048044,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> OUTDIV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> OUTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> OUTDIV1; 
    }
    namespace SIM_clkdiv2{
        using Addr = Register::Address<0x40048048,0x000f00f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> USBDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> I2SFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> I2SDIV; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0x00f0f0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DEPART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> NVMSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0x4040ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> MAXADDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> MAXADDR0; 
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
