#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40021000,0xc0f0f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PLLSAI2RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PLLSAI2ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PLLSAI1RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PLLSAI1ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CSSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSIASFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HSIKERON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> MSIRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSIRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSIPLLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSION; 
    }
    namespace Noneicscr{
        using Addr = Register::Address<0x40021004,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> HSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HSICAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MSICAL; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40021008,0x88ff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> MCOPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STOPWUCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> PPRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
    }
    namespace Nonepllcfgr{
        using Addr = Register::Address<0x4002100c,0xf88c808c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> PLLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PLLQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> PLLN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PLLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PLLSRC; 
    }
    namespace Nonepllsai1cfgr{
        using Addr = Register::Address<0x40021010,0xf88c80ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> PLLSAI1R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLSAI1REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> PLLSAI1Q; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLSAI1QEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLSAI1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSAI1PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> PLLSAI1N; 
    }
    namespace Nonepllsai2cfgr{
        using Addr = Register::Address<0x40021014,0xf8fc80ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> PLLSAI2R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLSAI2REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLSAI2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSAI2PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> PLLSAI2N; 
    }
    namespace Nonecier{
        using Addr = Register::Address<0x40021018,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSECSSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PLLSAI2RDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLLSAI1RDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYIE; 
    }
    namespace Nonecifr{
        using Addr = Register::Address<0x4002101c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSECSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PLLSAI2RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLLSAI1RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
    }
    namespace Nonecicr{
        using Addr = Register::Address<0x40021020,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSECSSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PLLSAI2RDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLLSAI1RDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYC; 
    }
    namespace Noneahb1rstr{
        using Addr = Register::Address<0x40021028,0xfffef6fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CRCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FLASHRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA1RST; 
    }
    namespace Noneahb2rstr{
        using Addr = Register::Address<0x4002102c,0xfffacf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RNGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AESRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OTGFSRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIOHRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIOGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPIOFRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIOERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOARST; 
    }
    namespace Noneahb3rstr{
        using Addr = Register::Address<0x40021030,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> QSPIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FMCRST; 
    }
    namespace Noneapb1rstr1{
        using Addr = Register::Address<0x40021038,0x0d013dc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPTIM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OPAMPRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DAC1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CAN1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UART5RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UART4RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
    }
    namespace Noneapb1rstr2{
        using Addr = Register::Address<0x4002103c,0xffffffda>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LPTIM2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWPMI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPUART1RST; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x40021040,0xfe9883fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DFSDMRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SAI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SAI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM8RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SDMMCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGRST; 
    }
    namespace Noneahb1enr{
        using Addr = Register::Address<0x40021048,0xfffef6fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FLASHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA1EN; 
    }
    namespace Noneahb2enr{
        using Addr = Register::Address<0x4002104c,0xfffacf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RNGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AESEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OTGFSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIOHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIOGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPIOFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIOEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOAEN; 
    }
    namespace Noneahb3enr{
        using Addr = Register::Address<0x40021050,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> QSPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FMCEN; 
    }
    namespace Noneapb1enr1{
        using Addr = Register::Address<0x40021058,0x0d0135c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPTIM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OPAMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DAC1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CAN1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UART5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UART4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SP3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
    }
    namespace Noneapb1enr2{
        using Addr = Register::Address<0x4002105c,0xffffffda>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LPTIM2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWPMI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPUART1EN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40021060,0xfe98837e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DFSDMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SAI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SAI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SDMMCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FIREWALLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGEN; 
    }
    namespace Noneahb1smenr{
        using Addr = Register::Address<0x40021068,0xfffef4fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CRCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRAM1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FLASHSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA1SMEN; 
    }
    namespace Noneahb2smenr{
        using Addr = Register::Address<0x4002106c,0xfffacd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RNGSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AESSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADCFSSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OTGFSSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRAM2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPIOHSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIOGSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPIOFSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPIOESMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPIODSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPIOCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIOBSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOASMEN; 
    }
    namespace Noneahb3smenr{
        using Addr = Register::Address<0x40021070,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> QSPISMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FMCSMEN; 
    }
    namespace Noneapb1smenr1{
        using Addr = Register::Address<0x40021078,0x0d0135c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPTIM1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OPAMPSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DAC1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CAN1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> I2C3SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UART5SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UART4SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SP3SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LCDSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2SMEN; 
    }
    namespace Noneapb1smenr2{
        using Addr = Register::Address<0x4002107c,0xffffffda>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LPTIM2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWPMI1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPUART1SMEN; 
    }
    namespace Noneapb2smenr{
        using Addr = Register::Address<0x40021080,0xfe9883fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DFSDMSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SAI2SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SAI1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM8SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM1SMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SDMMCSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGSMEN; 
    }
    namespace Noneccipr{
        using Addr = Register::Address<0x40021088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DFSDMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SWPMI1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ADCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CLK48SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SAI2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SAI1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> LPTIM2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LPTIM1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> I2C3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> I2C2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> I2C1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> LPUART1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> UART5SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART4SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USART3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> USART2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> USART1SEL; 
    }
    namespace Nonebdcr{
        using Addr = Register::Address<0x40021090,0xfcfe7c80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LSCOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LSCOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RTCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LSECSSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LSECSSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> LSEDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSEON; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40021094,0x007ff0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPWRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> OBLRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FIREWALLRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RMVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MSISRANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSION; 
    }
}
