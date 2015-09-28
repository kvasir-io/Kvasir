#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40021000,0xfcc0fce0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> RTCPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CSSLSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HSI16DIVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSI16DIVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSI16RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSI16KERON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSI16ON; 
    }
    namespace Noneicscr{
        using Addr = Register::Address<0x40021004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MSICAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> MSIRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> HSI16TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> HSI16CAL; 
    }
    namespace Nonecrrcr{
        using Addr = Register::Address<0x40021008,0xffff00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSI48CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSI48RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSI48ON; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x4002100c,0x88024000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> MCOPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PLLDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> PLLMUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STOPWUCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> PPRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
    }
    namespace Nonecier{
        using Addr = Register::Address<0x40021010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSLSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HSI48RDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSI16RDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYIE; 
    }
    namespace Nonecifr{
        using Addr = Register::Address<0x40021014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSSHSEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSLSEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HSI48RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSI16RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
    }
    namespace Nonecicr{
        using Addr = Register::Address<0x40021018,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSSHSEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSLSEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HSI48RDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSI16RDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYC; 
    }
    namespace Noneioprstr{
        using Addr = Register::Address<0x4002101c,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IOPHRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOPDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IOPCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IOPBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IOPARST; 
    }
    namespace Noneahbrstr{
        using Addr = Register::Address<0x40021020,0xfeeeeefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CRYPRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RNGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TOUCHRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MIFRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMARST; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x40021024,0xffbfadda>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TM12RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM21RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGRST; 
    }
    namespace Noneapb1rstr{
        using Addr = Register::Address<0x40021028,0x4719b7ee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPTIM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CRSRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> LPUART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LPUART12RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
    }
    namespace Noneiopenr{
        using Addr = Register::Address<0x4002102c,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IOPHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOPDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IOPCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IOPBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IOPAEN; 
    }
    namespace Noneahbenr{
        using Addr = Register::Address<0x40021030,0xfeeeeefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CRYPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RNGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TOUCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MIFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40021034,0xffbfad5a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MIFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM22EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM21EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGEN; 
    }
    namespace Noneapb1enr{
        using Addr = Register::Address<0x40021038,0x4719b7ee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPTIM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CRSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> LPUART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
    }
    namespace Noneiopsmen{
        using Addr = Register::Address<0x4002103c,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IOPHSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOPDSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IOPCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IOPBSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IOPASMEN; 
    }
    namespace Noneahbsmenr{
        using Addr = Register::Address<0x40021040,0xfeeeecfe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CRYPSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RNGSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TOUCHSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRAMSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MIFSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMASMEN; 
    }
    namespace Noneapb2smenr{
        using Addr = Register::Address<0x40021044,0xffbfadda>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBGSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM22SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM21SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGSMEN; 
    }
    namespace Noneapb1smenr{
        using Addr = Register::Address<0x40021048,0x4719b7ee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPTIM1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CRSSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> LPUART1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2SMEN; 
    }
    namespace Noneccipr{
        using Addr = Register::Address<0x4002104c,0xfbf3c3f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HSI48MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LPTIM1SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> LPTIM1SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> I2C1SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> I2C1SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LPUART1SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPUART1SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART2SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART2SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USART1SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USART1SEL0; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40021050,0x00f080fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPWRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> OBLRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RMVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RTCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RTCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CSSLSED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CSSLSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> LSEDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSION; 
    }
}
