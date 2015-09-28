#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneflashcfg{
        using Addr = Register::Address<0x400fc000,0xffff0fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FLASHTIM; 
    }
    namespace Nonepll0con{
        using Addr = Register::Address<0x400fc080,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PLLC0; 
    }
    namespace Nonepll0cfg{
        using Addr = Register::Address<0x400fc084,0xff008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> MSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NSEL0; 
    }
    namespace Nonepll0stat{
        using Addr = Register::Address<0x400fc088,0xf8008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> MSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLE0_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLC0_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PLOCK0; 
    }
    namespace Nonepll0feed{
        using Addr = Register::Address<0x400fc08c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PLL0FEED; 
    }
    namespace Nonepll1con{
        using Addr = Register::Address<0x400fc0a0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PLLC1; 
    }
    namespace Nonepll1cfg{
        using Addr = Register::Address<0x400fc0a4,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL1; 
    }
    namespace Nonepll1stat{
        using Addr = Register::Address<0x400fc0a8,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> PSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PLLE1_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PLLC1_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PLOCK1; 
    }
    namespace Nonepll1feed{
        using Addr = Register::Address<0x400fc0ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PLL1FEED; 
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
        using Addr = Register::Address<0x400fc0c4,0x10100821>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCTIM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCTIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PCUART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PCUART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PCPWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PCI2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCSPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCSSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PCADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PCCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PCCAN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PCGPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PCRIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PCMCPWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PCQEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PCI2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PCSSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PCTIM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PCTIM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PCUART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PCUART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PCI2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PCI2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PCGPDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PCENET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PCUSB; 
    }
    namespace Nonecclkcfg{
        using Addr = Register::Address<0x400fc104,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCLKSEL; 
    }
    namespace Noneusbclkcfg{
        using Addr = Register::Address<0x400fc108,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USBSEL; 
    }
    namespace Noneclksrcsel{
        using Addr = Register::Address<0x400fc10c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLKSRC; 
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
        using Addr = Register::Address<0x400fc180,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BODR; 
    }
    namespace Nonescs{
        using Addr = Register::Address<0x400fc1a0,0xffffff8f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSCRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSCSTAT; 
    }
    namespace Nonepclksel0{
        using Addr = Register::Address<0x400fc1a8,0x000c0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PCLK_WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PCLK_TIMER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PCLK_TIMER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PCLK_UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PCLK_UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PCLK_PWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PCLK_I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PCLK_SPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PCLK_SSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PCLK_DAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PCLK_ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PCLK_CAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PCLK_CAN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PCLK_ACF; 
    }
    namespace Nonepclksel1{
        using Addr = Register::Address<0x400fc1ac,0x03000300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PCLK_QEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PCLK_GPIOINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PCLK_PCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PCLK_I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PCLK_SSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PCLK_TIMER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PCLK_TIMER3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PCLK_UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PCLK_UART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PCLK_I2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PCLK_I2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PCLK_RIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PCLK_SYSCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PCLK_MC; 
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
        using Addr = Register::Address<0x400fc1c4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMASEL08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMASEL09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMASEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMASEL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMASEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMASEL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMASEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMASEL15; 
    }
    namespace Noneclkoutcfg{
        using Addr = Register::Address<0x400fc1c8,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CLKOUTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLKOUT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLKOUT_ACT; 
    }
}
