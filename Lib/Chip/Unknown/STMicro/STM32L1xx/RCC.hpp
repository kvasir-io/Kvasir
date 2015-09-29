#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40023800,0x8cf8fcfc,0,unsigned>;
        ///TC/LCD prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtcpre1{}; 
        ///RTCPRE0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rtcpre0{}; 
        ///Clock security system
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> csson{}; 
        ///PLL clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        ///PLL enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///HSE clock bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///HSE clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///HSE clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///MSI clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msirdy{}; 
        ///MSI clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msion{}; 
        ///Internal high-speed clock ready
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///Internal high-speed clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
    }
    namespace Noneicscr{    ///<Internal clock sources calibration
          register
        using Addr = Register::Address<0x40023804,0x00000000,0,unsigned>;
        ///MSI clock trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> msitrim{}; 
        ///MSI clock calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> msical{}; 
        ///MSI clock ranges
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> msirange{}; 
        ///High speed internal clock
              trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        ///nternal high speed clock
              calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hsical{}; 
    }
    namespace Nonecfgr{    ///<Clock configuration register
        using Addr = Register::Address<0x40023808,0x8802c000,0,unsigned>;
        ///Microcontroller clock output
              prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> mcopre{}; 
        ///Microcontroller clock output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mcosel{}; 
        ///PLL output division
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> plldiv{}; 
        ///PLL multiplication factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> pllmul{}; 
        ///PLL entry clock source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///APB high-speed prescaler
              (APB2)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        ///APB low-speed prescaler
              (APB1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        ///AHB prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///System clock switch status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sws{}; 
        ///System clock switch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
    }
    namespace Nonecir{    ///<Clock interrupt register
        using Addr = Register::Address<0x4002380c,0xff40c040,0,unsigned>;
        ///Clock security system interrupt
              clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cssc{}; 
        ///MSI ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> msirdyc{}; 
        ///PLL ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        ///HSE ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        ///HSI ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        ///LSE ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        ///LSI ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        ///MSI ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msirdyie{}; 
        ///PLL ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///HSE ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///HSI ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///LSE ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///LSI ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        ///Clock security system interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cssf{}; 
        ///MSI ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyf{}; 
        ///PLL ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///HSE ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///HSI ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///LSE ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///LSI ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
    }
    namespace Noneahbrstr{    ///<AHB peripheral reset register
        using Addr = Register::Address<0x40023810,0xbcff6f00,0,unsigned>;
        ///FSMC reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> fsmcrst{}; 
        ///DMA2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma2rst{}; 
        ///DMA1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dma1rst{}; 
        ///FLITF reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitfrst{}; 
        ///CRC reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcrst{}; 
        ///IO port G reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiogrst{}; 
        ///IO port F reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiofrst{}; 
        ///IO port H reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiohrst{}; 
        ///IO port E reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioerst{}; 
        ///IO port D reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodrst{}; 
        ///IO port C reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocrst{}; 
        ///IO port B reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiobrst{}; 
        ///IO port A reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioarst{}; 
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40023814,0xffffa5e2,0,unsigned>;
        ///USART1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///SPI1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///SDIORST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiorst{}; 
        ///ADC1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1rst{}; 
        ///TM11RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm11rst{}; 
        ///TM10RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm10rst{}; 
        ///TIM9RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim9rst{}; 
        ///SYSCFGRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register
        using Addr = Register::Address<0x40023818,0x4f0135c0,0,unsigned>;
        ///COMP interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comprst{}; 
        ///DAC interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
        ///Power interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        ///USB reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///I2C 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///I2C 1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///UART 5 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        ///UART 4 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        ///USART 3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        ///USART 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        ///SPI 3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        ///SPI 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///Window watchdog reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdrst{}; 
        ///LCD reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdrst{}; 
        ///Timer 7 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///Timer 6reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///Timer 5 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5rst{}; 
        ///Timer 4 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        ///Timer 3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///Timer 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
    }
    namespace Noneahbenr{    ///<AHB peripheral clock enable
          register
        using Addr = Register::Address<0x4002381c,0xbcff6f00,0,unsigned>;
        ///FSMCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> fsmcen{}; 
        ///DMA2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///DMA1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dma1en{}; 
        ///FLITF clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitfen{}; 
        ///CRC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///IO port G clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiopgen{}; 
        ///IO port F clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiopfen{}; 
        ///IO port H clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiophen{}; 
        ///IO port E clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpiopeen{}; 
        ///IO port D clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiopden{}; 
        ///IO port C clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiopcen{}; 
        ///IO port B clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiopben{}; 
        ///IO port A clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpiopaen{}; 
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable
          register
        using Addr = Register::Address<0x40023820,0xffffa5e2,0,unsigned>;
        ///USART1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///SPI 1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///SDIO clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
        ///ADC1 interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1en{}; 
        ///TIM11 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim11en{}; 
        ///TIM10 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim10en{}; 
        ///TIM9 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim9en{}; 
        ///System configuration controller clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable
          register
        using Addr = Register::Address<0x40023824,0x4f0135c0,0,unsigned>;
        ///COMP interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> compen{}; 
        ///DAC interface clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
        ///Power interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        ///USB clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usben{}; 
        ///I2C 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///I2C 1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///UART 5 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> usart5en{}; 
        ///UART 4 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart4en{}; 
        ///USART 3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        ///USART 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///SPI 3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        ///SPI 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///Window watchdog clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        ///LCD clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcden{}; 
        ///Timer 7 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///Timer 6 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///Timer 5 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        ///Timer 4 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///Timer 3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///Timer 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
    }
    namespace Noneahblpenr{    ///<AHB peripheral clock enable in low power
          mode register
        using Addr = Register::Address<0x40023828,0xfcfe6f00,0,unsigned>;
        ///DMA2 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma2lpen{}; 
        ///DMA1 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dma1lpen{}; 
        ///SRAM clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sramlpen{}; 
        ///FLITF clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitflpen{}; 
        ///CRC clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crclpen{}; 
        ///IO port G clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioglpen{}; 
        ///IO port F clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioflpen{}; 
        ///IO port H clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiohlpen{}; 
        ///IO port E clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioelpen{}; 
        ///IO port D clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodlpen{}; 
        ///IO port C clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioclpen{}; 
        ///IO port B clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioblpen{}; 
        ///IO port A clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioalpen{}; 
    }
    namespace Noneapb2lpenr{    ///<APB2 peripheral clock enable in low power
          mode register
        using Addr = Register::Address<0x4002382c,0xffffa5e2,0,unsigned>;
        ///USART1 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1lpen{}; 
        ///SPI 1 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1lpen{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiolpen{}; 
        ///ADC1 interface clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1lpen{}; 
        ///TIM11 timer clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim11lpen{}; 
        ///TIM10 timer clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim10lpen{}; 
        ///TIM9 timer clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim9lpen{}; 
        ///System configuration controller clock
              enable during Sleep mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfglpen{}; 
    }
    namespace Noneapb1lpenr{    ///<APB1 peripheral clock enable in low power
          mode register
        using Addr = Register::Address<0x40023830,0x4f19b5c8,0,unsigned>;
        ///COMP interface clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> complpen{}; 
        ///DAC interface clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> daclpen{}; 
        ///Power interface clock enable during
              Sleep mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrlpen{}; 
        ///USB clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usblpen{}; 
        ///I2C 2 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2lpen{}; 
        ///I2C 1 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1lpen{}; 
        ///USART 3 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3lpen{}; 
        ///USART 2 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2lpen{}; 
        ///SPI 2 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2lpen{}; 
        ///Window watchdog clock enable during
              Sleep mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdglpen{}; 
        ///LCD clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdlpen{}; 
        ///Timer 7 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7lpen{}; 
        ///Timer 6 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6lpen{}; 
        ///Timer 4 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4lpen{}; 
        ///Timer 3 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3lpen{}; 
        ///Timer 2 clock enable during Sleep
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2lpen{}; 
    }
    namespace Nonecsr{    ///<Control/status register
        using Addr = Register::Address<0x40023834,0x023cf8fc,0,unsigned>;
        ///Low-power reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrstf{}; 
        ///Window watchdog reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        ///Independent watchdog reset
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        ///Software reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///PIN reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///Remove reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///RTC software reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtcrst{}; 
        ///RTC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///RTC and LCD clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        ///External low-speed oscillator
              bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///External low-speed oscillator
              ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///External low-speed oscillator
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lseon{}; 
        ///Internal low-speed oscillator
              ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        ///Internal low-speed oscillator
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
    }
}
