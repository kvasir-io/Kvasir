#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40023800,0x8cf8fcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RTCPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTCPRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CSSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSION; 
    }
    namespace Noneicscr{
        using Addr = Register::Address<0x40023804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MSICAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> MSIRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> HSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> HSICAL; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40023808,0x8802c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> MCOPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PLLDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> PLLMUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> PPRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
    }
    namespace Nonecir{
        using Addr = Register::Address<0x4002380c,0xff40c040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
    }
    namespace Noneahbrstr{
        using Addr = Register::Address<0x40023810,0xfeff6ff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLITFRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOARST; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x40023814,0xffffade2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TM11RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TM10RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM9RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGRST; 
    }
    namespace Noneapb1rstr{
        using Addr = Register::Address<0x40023818,0x4f19b5c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMPRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
    }
    namespace Noneahbenr{
        using Addr = Register::Address<0x4002381c,0xfeff6ff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLITFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIOPDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOPCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOPBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOPAEN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40023820,0xffffade2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM11EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM10EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM9EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGEN; 
    }
    namespace Noneapb1enr{
        using Addr = Register::Address<0x40023824,0x4f19b5c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
    }
    namespace Noneahblpenr{
        using Addr = Register::Address<0x40023828,0xfefe6ff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMALPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRAMLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLITFLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOALPEN; 
    }
    namespace Noneapb2lpenr{
        using Addr = Register::Address<0x4002382c,0xffffade2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM11LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM10LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM9LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGLPEN; 
    }
    namespace Noneapb1lpenr{
        using Addr = Register::Address<0x40023830,0x4f19b5c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COMPLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2LPEN; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40023834,0x023cf8fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPWRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RMVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RTCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RTCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSION; 
    }
}
