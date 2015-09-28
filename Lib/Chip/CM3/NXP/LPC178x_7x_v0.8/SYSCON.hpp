#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneflashcfg{
        using Addr = Register::Address<0x400fc000,0xffff0fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FLASHTIM; 
    }
    namespace Nonepll0con{
        using Addr = Register::Address<0x400fc080,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLE; 
    }
    namespace Nonepll1con{
        using Addr = Register::Address<0x400fc0a0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLE; 
    }
    namespace Nonepll0cfg{
        using Addr = Register::Address<0x400fc084,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL; 
    }
    namespace Nonepll1cfg{
        using Addr = Register::Address<0x400fc0a4,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL; 
    }
    namespace Nonepll0stat{
        using Addr = Register::Address<0x400fc088,0xfffffa80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PLLE_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PLOCK; 
    }
    namespace Nonepll1stat{
        using Addr = Register::Address<0x400fc0a8,0xfffffa80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PLLE_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PLOCK; 
    }
    namespace Nonepll0feed{
        using Addr = Register::Address<0x400fc08c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PLLFEED; 
    }
    namespace Nonepll1feed{
        using Addr = Register::Address<0x400fc0ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PLLFEED; 
    }
    namespace Nonepcon{
        using Addr = Register::Address<0x400fc0c0,0xfffff0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BODRPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOGD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SMFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DSFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PDFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DPDFLAG; 
    }
    namespace Nonepconp{
        using Addr = Register::Address<0x400fc0c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCLCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCTIM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCTIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PCUART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PCUART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PCPWM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PCPWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PCI2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCUART4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCSSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PCEMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PCADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PCCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PCCAN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PCGPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PCSPIFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PCMCPWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PCQEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PCI2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PCSSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PCSSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PCTIM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PCTIM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PCUART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PCUART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PCI2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PCI2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PCSDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PCGPDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PCENET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PCUSB; 
    }
    namespace Noneemcclksel{
        using Addr = Register::Address<0x400fc100,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMCDIV; 
    }
    namespace Nonecclksel{
        using Addr = Register::Address<0x400fc104,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CCLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCLKSEL; 
    }
    namespace Noneusbclksel{
        using Addr = Register::Address<0x400fc108,0xfffffce0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> USBDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> USBSEL; 
    }
    namespace Noneclksrcsel{
        using Addr = Register::Address<0x400fc10c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKSRC; 
    }
    namespace Nonecansleepclr{
        using Addr = Register::Address<0x400fc110,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAN1SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAN2SLEEP; 
    }
    namespace Nonecanwakeflags{
        using Addr = Register::Address<0x400fc114,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAN1WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAN2WAKE; 
    }
    namespace Noneextint{
        using Addr = Register::Address<0x400fc140,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EINT3; 
    }
    namespace Noneextmode{
        using Addr = Register::Address<0x400fc148,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTMODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTMODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTMODE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTMODE3; 
    }
    namespace Noneextpolar{
        using Addr = Register::Address<0x400fc14c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTPOLAR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTPOLAR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTPOLAR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTPOLAR3; 
    }
    namespace Nonersid{
        using Addr = Register::Address<0x400fc180,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BODR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYSRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOCKUP; 
    }
    namespace Nonematrixarb{
        using Addr = Register::Address<0x400fc188,0xfffec000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PRI_ICODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PRI_DCODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PRI_SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_GPDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PRI_ETH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PRI_LCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PRI_USB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ROM_LAT; 
    }
    namespace Nonescs{
        using Addr = Register::Address<0x400fc1a0,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMCSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMCRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EMCBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCIPWRAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSCRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSCSTAT; 
    }
    namespace Nonepclksel{
        using Addr = Register::Address<0x400fc1a8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PCLKDIV; 
    }
    namespace Nonepboost{
        using Addr = Register::Address<0x400fc1b0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> Boost; 
    }
    namespace Nonespificlksel{
        using Addr = Register::Address<0x400fc1b4,0xfffffce0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SPIFIDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SPIFISEL; 
    }
    namespace Nonelcd_cfg{
        using Addr = Register::Address<0x400fc1b8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CLKDIV; 
    }
    namespace Noneusbintst{
        using Addr = Register::Address<0x400fc1c0,0x7ffffe80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_INT_REQ_LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_INT_REQ_HP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USB_INT_REQ_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USB_HOST_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB_ATX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB_OTG_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> USB_I2C_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> USB_NEED_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EN_USB_INTS; 
    }
    namespace Nonedmacreqsel{
        using Addr = Register::Address<0x400fc1c4,0xffff0300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMASEL00; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMASEL01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMASEL02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMASEL03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMASEL04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMASEL05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMASEL06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMASEL07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DMASEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMASEL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMASEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMASEL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DMASEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMASEL15; 
    }
    namespace Noneclkoutcfg{
        using Addr = Register::Address<0x400fc1c8,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CLKOUTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLKOUT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLKOUT_ACT; 
    }
    namespace Nonerstcon0{
        using Addr = Register::Address<0x400fc1cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSTLCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RSTTIM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTTIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTUART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSTUART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSTPWM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSTPWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSTI2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTUART4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RSTRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSTSSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RSTEMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSTADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RSTCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RSTCAN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RSTGPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RSTSPIFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RSTMCPWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTQEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RSTI2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RSTSSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RSTSSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RSTTIM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RSTTIM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RSTUART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RSTUART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RSTI2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RSTI2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RSTSDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RSTGPDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RSTENET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RSTUSB; 
    }
    namespace Nonerstcon1{
        using Addr = Register::Address<0x400fc1d0,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSTIOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RSTDAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTCANACC; 
    }
    namespace Noneemcdlyctl{
        using Addr = Register::Address<0x400fc1dc,0xe0e0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CMDDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> FBCLKDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> CLKOUT0DLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLKOUT1DLY; 
    }
    namespace Noneemccal{
        using Addr = Register::Address<0x400fc1e0,0xffff3f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CALVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DONE; 
    }
}
