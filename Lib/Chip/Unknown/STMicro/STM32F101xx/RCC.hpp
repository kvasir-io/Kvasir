#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xfcf00004,0,unsigned>;
        ///Internal High Speed clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
        ///Internal High Speed clock ready
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///Internal High Speed clock
              trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        ///Internal High Speed clock
              Calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsical{}; 
        ///External High Speed clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///External High Speed clock ready
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///External High Speed clock
              Bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///Clock Security System
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csson{}; 
        ///PLL enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///PLL clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
    }
    namespace Nonecfgr{    ///<Clock configuration register
          (RCC_CFGR)
        using Addr = Register::Address<0x40021004,0xf8c00000,0,unsigned>;
        ///System clock Switch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        ///System Clock Switch Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sws{}; 
        ///AHB prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///APB Low speed prescaler
              (APB1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        ///APB High speed prescaler
              (APB2)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        ///ADC prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> adcpre{}; 
        ///PLL entry clock source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///HSE divider for PLL entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllxtpre{}; 
        ///PLL Multiplication Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> pllmul{}; 
        ///Microcontroller clock
              output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mco{}; 
    }
    namespace Nonecir{    ///<Clock interrupt register
          (RCC_CIR)
        using Addr = Register::Address<0x40021008,0xff60e060,0,unsigned>;
        ///LSI Ready Interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        ///LSE Ready Interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///HSI Ready Interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///HSE Ready Interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///PLL Ready Interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///Clock Security System Interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cssf{}; 
        ///LSI Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        ///LSE Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///HSI Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///HSE Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///PLL Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///LSI Ready Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        ///LSE Ready Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        ///HSI Ready Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        ///HSE Ready Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        ///PLL Ready Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        ///Clock security system interrupt
              clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cssc{}; 
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
          (RCC_APB2RSTR)
        using Addr = Register::Address<0x4002100c,0xffc7a802,0,unsigned>;
        ///Alternate function I/O
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> afiorst{}; 
        ///IO port A reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ioparst{}; 
        ///IO port B reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopbrst{}; 
        ///IO port C reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iopcrst{}; 
        ///IO port D reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iopdrst{}; 
        ///IO port E reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ioperst{}; 
        ///ADC 1 interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1rst{}; 
        ///ADC 2 interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> adc2rst{}; 
        ///SPI 1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///USART1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///TIM9 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tim9rst{}; 
        ///TIM10 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tim10rst{}; 
        ///TIM11 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tim11rst{}; 
        ///IO port F reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iopfrst{}; 
        ///IO port G reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iopgrst{}; 
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register
          (RCC_APB1RSTR)
        using Addr = Register::Address<0x40021010,0xc7813600,0,unsigned>;
        ///Timer 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        ///Timer 3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///Timer 4 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        ///Timer 5 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5rst{}; 
        ///Timer 6 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///Timer 7 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///Timer 12 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12rst{}; 
        ///Timer 13 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13rst{}; 
        ///Timer 14 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14rst{}; 
        ///Window watchdog reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgrst{}; 
        ///SPI2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///SPI3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        ///USART 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        ///USART 3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        ///UART 4 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        ///UART 5 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        ///I2C1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///I2C2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///Backup interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bkprst{}; 
        ///Power interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        ///DAC interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
    }
    namespace Noneahbenr{    ///<AHB Peripheral Clock enable register
          (RCC_AHBENR)
        using Addr = Register::Address<0x40021014,0xfffffea8,0,unsigned>;
        ///DMA1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1en{}; 
        ///DMA2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///SRAM interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sramen{}; 
        ///FLITF clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flitfen{}; 
        ///CRC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///FSMC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fsmcen{}; 
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable register
          (RCC_APB2ENR)
        using Addr = Register::Address<0x40021018,0xffc7ac02,0,unsigned>;
        ///Alternate function I/O clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> afioen{}; 
        ///I/O port A clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopaen{}; 
        ///I/O port B clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopben{}; 
        ///I/O port C clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iopcen{}; 
        ///I/O port D clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iopden{}; 
        ///I/O port E clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iopeen{}; 
        ///I/O port F clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iopfen{}; 
        ///I/O port G clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iopgen{}; 
        ///ADC 1 interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1en{}; 
        ///SPI 1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///USART1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///TIM9 Timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tim9en{}; 
        ///TIM10 Timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tim10en{}; 
        ///TIM11 Timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tim11en{}; 
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable register
          (RCC_APB1ENR)
        using Addr = Register::Address<0x4002101c,0xc7813600,0,unsigned>;
        ///Timer 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        ///Timer 3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///Timer 4 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///Timer 5 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        ///Timer 6 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///Timer 7 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///Timer 12 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12en{}; 
        ///Timer 13 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13en{}; 
        ///Timer 14 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14en{}; 
        ///Window watchdog clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        ///SPI 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///SPI 3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        ///USART 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///USART 3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        ///UART 4 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4en{}; 
        ///UART 5 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5en{}; 
        ///I2C 1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///I2C 2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///Backup interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bkpen{}; 
        ///Power interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        ///DAC interface clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
    }
    namespace Nonebdcr{    ///<Backup domain control register
          (RCC_BDCR)
        using Addr = Register::Address<0x40021020,0xfffe7cf8,0,unsigned>;
        ///External Low Speed oscillator
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
        ///External Low Speed oscillator
              ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///External Low Speed oscillator
              bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///RTC clock source selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        ///RTC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///Backup domain software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
    }
    namespace Nonecsr{    ///<Control/status register
          (RCC_CSR)
        using Addr = Register::Address<0x40021024,0x02fffffc,0,unsigned>;
        ///Internal low speed oscillator
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        ///Internal low speed oscillator
              ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        ///Remove reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///PIN reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///Software reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///Independent watchdog reset
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        ///Window watchdog reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        ///Low-power reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrrstf{}; 
    }
}
