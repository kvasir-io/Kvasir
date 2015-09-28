#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40032004,0xc3d8000c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLLENSTOP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESETIFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> OBEPADSELA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> OBEPADSELA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> OBEPADSELA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> OBEPADSELA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> OBEPADSELE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OBEPADSELE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> FBSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TRACECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> FSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MAXCLK; 
    }
    namespace SIM_sopt3{
        using Addr = Register::Address<0x40032008,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FTM0_PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FTM1_PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FTM2_PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FTM3_PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FTM_SYNC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FTM_SYNC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FTM_SYNC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FTM_SYNC3; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4003200c,0xf00f0ff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM0FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FTM0FLT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FTM0FLT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FTM3FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FTM3FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FTM3FLT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FTM3FLT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FTM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> FTM2CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FTM3CLKSEL; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40032010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UART1TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART1RXSRC; 
    }
    namespace SIM_sopt6{
        using Addr = Register::Address<0x40032014,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CLKOS; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40032018,0x0f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADC1TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADC2TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> ADC3TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CMP0WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CMP1WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> CMP2WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> CMP3WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC0ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ADC1ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ADC2ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADC3ALTTRGEN; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40032024,0xffff0fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BOID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40032038,0xfff02079>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IIC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IIC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ACMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ACMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ACMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ACMP3; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4003203c,0x8706c005>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PDB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PDB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PDB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PDB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FTM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FTM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PORTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ADC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ADC3; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x40032040,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLEXBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IEVT; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40032044,0xcccccfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> OUTDIV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> OUTDIV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> OUTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> OUTDIV1; 
    }
    namespace SIM_uidh{
        using Addr = Register::Address<0x40032054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidmh{
        using Addr = Register::Address<0x40032058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidml{
        using Addr = Register::Address<0x4003205c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidl{
        using Addr = Register::Address<0x40032060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
}
