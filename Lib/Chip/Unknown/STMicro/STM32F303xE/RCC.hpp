#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xfcf00004,0,unsigned>;
        ///Internal High Speed clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
        ///Internal High Speed clock ready               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///Internal High Speed clock               trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        ///Internal High Speed clock               Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsical{}; 
        ///External High Speed clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///External High Speed clock ready               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///External High Speed clock               Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///Clock Security System               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csson{}; 
        ///PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
    }
    namespace Nonecfgr{    ///<Clock configuration register           (RCC_CFGR)
        using Addr = Register::Address<0x40021004,0xe8004000,0,unsigned>;
        ///System clock Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        ///System Clock Switch Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sws{}; 
        ///AHB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///APB Low speed prescaler               (APB1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        ///APB high speed prescaler               (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        ///PLL entry clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///HSE divider for PLL entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllxtpre{}; 
        ///PLL Multiplication Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> pllmul{}; 
        ///USB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> usbpres{}; 
        ///Microcontroller clock               output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mco{}; 
        ///Microcontroller Clock Output               Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mcof{}; 
        ///I2S external clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2ssrc{}; 
    }
    namespace Nonecir{    ///<Clock interrupt register           (RCC_CIR)
        using Addr = Register::Address<0x40021008,0xff60e060,0,unsigned>;
        ///LSI Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        ///LSE Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///HSI Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///HSE Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///PLL Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///Clock Security System Interrupt               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cssf{}; 
        ///LSI Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        ///LSE Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///HSI Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///HSE Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///PLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///LSI Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        ///LSE Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        ///HSI Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        ///HSE Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        ///PLL Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        ///Clock security system interrupt               clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cssc{}; 
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register           (RCC_APB2RSTR)
        using Addr = Register::Address<0x4002100c,0xfff887fe,0,unsigned>;
        ///SYSCFG and COMP reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        ///TIM1 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1rst{}; 
        ///SPI 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///TIM8 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8rst{}; 
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///TIM15 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15rst{}; 
        ///TIM16 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16rst{}; 
        ///TIM17 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17rst{}; 
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register           (RCC_APB1RSTR)
        using Addr = Register::Address<0x40021010,0xcd0137c8,0,unsigned>;
        ///Timer 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        ///Timer 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///Timer 14 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        ///Timer 6 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///Timer 7 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///Window watchdog reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgrst{}; 
        ///SPI2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///SPI3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        ///USART 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        ///USART3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        ///UART 4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        ///UART 5 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        ///I2C1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///I2C2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///CAN reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> canrst{}; 
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        ///DAC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
    }
    namespace Noneahbenr{    ///<AHB Peripheral Clock enable register           (RCC_AHBENR)
        using Addr = Register::Address<0x40021014,0xce81ffa8,0,unsigned>;
        ///DMA1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///DMA2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///SRAM interface clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sramen{}; 
        ///FLITF clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flitfen{}; 
        ///CRC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///I/O port A clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iopaen{}; 
        ///I/O port B clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iopben{}; 
        ///I/O port C clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iopcen{}; 
        ///I/O port D clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iopden{}; 
        ///I/O port E clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> iopeen{}; 
        ///I/O port F clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iopfen{}; 
        ///Touch sensing controller clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tscen{}; 
        ///ADC1 and ADC2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adc12en{}; 
        ///ADC3 and ADC4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> adc34en{}; 
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable register           (RCC_APB2ENR)
        using Addr = Register::Address<0x40021018,0xfff887fe,0,unsigned>;
        ///SYSCFG clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        ///TIM1 Timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1en{}; 
        ///SPI 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///TIM8 Timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8en{}; 
        ///USART1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///TIM15 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15en{}; 
        ///TIM16 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16en{}; 
        ///TIM17 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17en{}; 
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable register           (RCC_APB1ENR)
        using Addr = Register::Address<0x4002101c,0xcd1d37c8,0,unsigned>;
        ///Timer 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        ///Timer 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///Timer 4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///Timer 6 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///Timer 7 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///Window watchdog clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        ///SPI 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///SPI 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        ///USART 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///I2C 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///I2C 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///USB clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usben{}; 
        ///CAN clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> canen{}; 
        ///Power interface clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        ///DAC interface clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
    }
    namespace Nonebdcr{    ///<Backup domain control register           (RCC_BDCR)
        using Addr = Register::Address<0x40021020,0xfffe7ce0,0,unsigned>;
        ///External Low Speed oscillator               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
        ///External Low Speed oscillator               ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///External Low Speed oscillator               bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///LSE oscillator drive               capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///Backup domain software               reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
    }
    namespace Nonecsr{    ///<Control/status register           (RCC_CSR)
        using Addr = Register::Address<0x40021024,0x00fffffc,0,unsigned>;
        ///Internal low speed oscillator               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        ///Internal low speed oscillator               ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///Option byte loader reset               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> oblrstf{}; 
        ///PIN reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///Independent watchdog reset               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        ///Window watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        ///Low-power reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrrstf{}; 
    }
    namespace Noneahbrstr{    ///<AHB peripheral reset register
        using Addr = Register::Address<0x40021028,0xce81ffff,0,unsigned>;
        ///I/O port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ioparst{}; 
        ///I/O port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iopbrst{}; 
        ///I/O port C reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iopcrst{}; 
        ///I/O port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iopdrst{}; 
        ///I/O port E reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ioperst{}; 
        ///I/O port F reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iopfrst{}; 
        ///Touch sensing controller               reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tscrst{}; 
        ///ADC1 and ADC2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adc12rst{}; 
        ///ADC3 and ADC4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> adc34rst{}; 
    }
    namespace Nonecfgr2{    ///<Clock configuration register 2
        using Addr = Register::Address<0x4002102c,0xffffc000,0,unsigned>;
        ///PREDIV division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prediv{}; 
        ///ADC1 and ADC2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,4),Register::ReadWriteAccess,unsigned> adc12pres{}; 
        ///ADC3 and ADC4 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> adc34pres{}; 
    }
    namespace Nonecfgr3{    ///<Clock configuration register 3
        using Addr = Register::Address<0x40021030,0xff00fccc,0,unsigned>;
        ///USART1 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> usart1sw{}; 
        ///I2C1 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> i2c1sw{}; 
        ///I2C2 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> i2c2sw{}; 
        ///USART2 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> usart2sw{}; 
        ///USART3 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> usart3sw{}; 
        ///Timer1 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim1sw{}; 
        ///Timer8 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tim8sw{}; 
        ///UART4 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> uart4sw{}; 
        ///UART5 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> uart5sw{}; 
    }
}
