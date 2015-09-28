#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0xfff30fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSC32KSEL; 
    }
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40048004,0x7fffef1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRACECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NANOEDGECLK2XSEL; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0x8fa8efe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM0FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FTM0FLT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FTM0FLT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FTM1FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FTM3FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FTM0TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FTM0TRG1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FTM0TRG2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FTM1TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FTM1TRG2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FTM3TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FTM3TRG1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FTM3TRG2SRC; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xffffff22>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UART1TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART1RXSRC; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0xffff3030>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADCATRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> ADCAALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADCBTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ADCBALTTRGEN; 
    }
    namespace SIM_sopt8{
        using Addr = Register::Address<0x4004801c,0x0000fcf4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0SYNCBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM1SYNCBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FTM3SYNCBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM0CFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FTM3CFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FTM0OCH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FTM0OCH1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FTM0OCH2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FTM0OCH3SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FTM0OCH4SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FTM0OCH5SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FTM0OCH6SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FTM0OCH7SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM3OCH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM3OCH1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM3OCH2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FTM3OCH3SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FTM3OCH4SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FTM3OCH5SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FTM3OCH6SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FTM3OCH7SRC; 
    }
    namespace SIM_sopt9{
        using Addr = Register::Address<0x40048020,0x30ffff8f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FTM1ICH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FTM1ICH1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FTM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> FTM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> FTM3CLKSEL; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0x000f0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SERIESID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SUBFAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FAMILYID; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xf0f7f3bd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> eFlexPWM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> eFlexPWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> eFlexPWM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> eFlexPWM3; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xe1dfc1fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ENC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> XBARA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> XBARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AOI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0x7c39ef8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLEXCAN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLEXCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FTM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PDB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DAC0; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x40048040,0xfffffeff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40048044,0x00f0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> OUTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> OUTDIV1; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0xf0fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLASHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLASHDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0x80ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> MAXADDR0; 
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
        using Addr = Register::Address<0x40048068,0xeffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRACEFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRACEDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TRACEDIVEN; 
    }
    namespace SIM_misctrl{
        using Addr = Register::Address<0x4004806c,0xfff200ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CMPWIN0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CMPWIN1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CMPWIN2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CMPWIN3SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EWMINSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> DACTRIGSRC; 
    }
    namespace SIM_misctrl2{
        using Addr = Register::Address<0x40048070,0xff0cc0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SYNCXBARAPITTRIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SYNCXBARAPITTRIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SYNCXBARAPITTRIG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYNCXBARAPITTRIG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYNCXBARBPITTRIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SYNCXBARBPITTRIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SYNCDACHWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SYNCEWMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SYNCCMP0SAMPLEWIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SYNCCMP1SAMPLEWIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SYNCCMP2SAMPLEWIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SYNCCMP3SAMPLEWIN; 
    }
    namespace SIM_wdogc{
        using Addr = Register::Address<0x40048100,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDOGCLKS; 
    }
    namespace SIM_pwrc{
        using Addr = Register::Address<0x40048104,0xfffefc30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRPDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SR27STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SR12STDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRPWRDETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRPWRRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRPWROK; 
    }
    namespace SIM_adcopt{
        using Addr = Register::Address<0x40048108,0xfcff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ADCACH6SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ADCACH7SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> ADCBCH6SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> ADCBCH7SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ROSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ADCIRCLK; 
    }
}
