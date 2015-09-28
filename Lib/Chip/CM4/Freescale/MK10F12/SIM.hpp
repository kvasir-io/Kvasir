#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0xfff70fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OSC32KSEL; 
    }
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40048004,0x0ffc640f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCCLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> FBSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMTUARTPAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRACECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NFC_CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PLLFLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ESDHCSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> NFCSRC; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0x00c3eee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM0FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FTM0FLT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FTM0FLT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FTM1FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM2FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FTM3FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FTM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FTM2CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FTM3CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FTM0TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FTM0TRG1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FTM3TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FTM3TRG1SRC; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UART1TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART1RXSRC; 
    }
    namespace SIM_sopt6{
        using Addr = Register::Address<0x40048014,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCR; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0x60606060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADC1TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADC1PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ADC1ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ADC2TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ADC2PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ADC2ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> ADC3TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC3PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADC3ALTTRGEN; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0xffff0f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
    }
    namespace SIM_scgc1{
        using Addr = Register::Address<0x40048028,0xfffff3df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART5; 
    }
    namespace SIM_scgc2{
        using Addr = Register::Address<0x4004802c,0xffffcffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DAC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DAC1; 
    }
    namespace SIM_scgc3{
        using Addr = Register::Address<0x40048030,0xe4fd6eee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RNGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLEXCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSPI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SAI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ESDHC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC3; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xefe7c339>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IIC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IIC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LLWU; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xffff81dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGFILE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PORTF; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0xc43b4fe9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAMUX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLEXCAN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DSPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DSPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SAI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC2; 
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
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0x00f0f0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTFDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DEPART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EESIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> NVMSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0xc0c0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> MAXADDR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> MAXADDR01; 
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
    namespace SIM_clkdiv4{
        using Addr = Register::Address<0x40048068,0x00fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRACEFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRACEDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> NFCFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27)> NFCDIV; 
    }
    namespace SIM_mcr{
        using Addr = Register::Address<0x4004806c,0x1fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PDBLOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ULPICLKOBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TRACECLKDIS; 
    }
}
