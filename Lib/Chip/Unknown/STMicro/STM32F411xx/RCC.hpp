#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40023800,0xf0f00004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PLLI2SRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PLLI2SON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CSSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSICAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> HSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSION; 
    }
    namespace Nonepllcfgr{
        using Addr = Register::Address<0x40023804,0xf0bc8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PLLQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PLLQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PLLN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PLLN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PLLN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PLLN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PLLN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PLLN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PLLN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLLN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PLLM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PLLM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PLLM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLM0; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40023808,0x00000300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> MCO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> MCO2PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCO1PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2SSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> MCO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> RTCPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> PPRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> PPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SW0; 
    }
    namespace Nonecir{
        using Addr = Register::Address<0x4002380c,0xff40c040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PLLI2SRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PLLI2SRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLI2SRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
    }
    namespace Noneahb1rstr{
        using Addr = Register::Address<0x40023810,0xff9fef60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DMA2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DMA1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIOHRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIOERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOARST; 
    }
    namespace Noneahb2rstr{
        using Addr = Register::Address<0x40023814,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OTGFSRST; 
    }
    namespace Noneapb1rstr{
        using Addr = Register::Address<0x40023820,0xef1d37f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x40023824,0xfff8a6ce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM11RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM10RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM9RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SYSCFGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SDIORST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USART6RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM1RST; 
    }
    namespace Noneahb1enr{
        using Addr = Register::Address<0x40023830,0xff9fef60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DMA2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DMA1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIOHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIOEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOAEN; 
    }
    namespace Noneahb2enr{
        using Addr = Register::Address<0x40023834,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OTGFSEN; 
    }
    namespace Noneapb1enr{
        using Addr = Register::Address<0x40023840,0xef1d37f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40023844,0xfff886ce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USART6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SDIOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SYSCFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM9EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM10EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM11EN; 
    }
    namespace Noneahb1lpenr{
        using Addr = Register::Address<0x40023850,0xff9e6f60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DMA2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DMA1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRAM1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLITFLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIOHLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIOELPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOALPEN; 
    }
    namespace Noneahb2lpenr{
        using Addr = Register::Address<0x40023854,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OTGFSLPEN; 
    }
    namespace Noneapb1lpenr{
        using Addr = Register::Address<0x40023860,0xef1d37f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C3LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2LPEN; 
    }
    namespace Noneapb2lpenr{
        using Addr = Register::Address<0x40023864,0xfff886ce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USART1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USART6LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SDIOLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI4LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SYSCFGLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM9LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM10LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM11LPEN; 
    }
    namespace Nonebdcr{
        using Addr = Register::Address<0x40023870,0xfffe7cf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RTCSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RTCSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSEON; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40023874,0x00fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPWRRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PADRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RMVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSION; 
    }
    namespace Nonesscgr{
        using Addr = Register::Address<0x40023880,0x30000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SSCGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SPREADSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,13)> INCSTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> MODPER; 
    }
    namespace Noneplli2scfgr{
        using Addr = Register::Address<0x40023884,0x8fff803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> PLLI2SRx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,6)> PLLI2SNx; 
    }
}
