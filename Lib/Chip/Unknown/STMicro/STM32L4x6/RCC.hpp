#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xc0f0f000,0,unsigned>;
        ///SAI2 PLL clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pllsai2rdy{}; 
        ///SAI2 PLL enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pllsai2on{}; 
        ///SAI1 PLL clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pllsai1rdy{}; 
        ///SAI1 PLL enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pllsai1on{}; 
        ///Main PLL clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        ///Main PLL enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///Clock security system
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csson{}; 
        ///HSE crystal oscillator
              bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///HSE clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///HSE clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///HSI automatic start from
              Stop
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsiasfs{}; 
        ///HSI clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///HSI always enable for peripheral
              kernels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hsikeron{}; 
        ///HSI clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsion{}; 
        ///MSI clock ranges
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> msirange{}; 
        ///MSI clock range selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msirgsel{}; 
        ///MSI clock PLL enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msipllen{}; 
        ///MSI clock ready flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msirdy{}; 
        ///MSI clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msion{}; 
    }
    namespace Noneicscr{    ///<Internal clock sources calibration
          register
        using Addr = Register::Address<0x40021004,0xe0000000,0,unsigned>;
        ///HSI clock trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        ///HSI clock calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hsical{}; 
        ///MSI clock trimming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> msitrim{}; 
        ///MSI clock calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> msical{}; 
    }
    namespace Nonecfgr{    ///<Clock configuration register
        using Addr = Register::Address<0x40021008,0x88ff4000,0,unsigned>;
        ///Microcontroller clock output
              prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> mcopre{}; 
        ///Microcontroller clock
              output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mcosel{}; 
        ///Wakeup from Stop and CSS backup clock
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stopwuck{}; 
        ///APB high-speed prescaler
              (APB2)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        ///PB low-speed prescaler
              (APB1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        ///AHB prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///System clock switch status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sws{}; 
        ///System clock switch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
    }
    namespace Nonepllcfgr{    ///<PLL configuration register
        using Addr = Register::Address<0x4002100c,0xf88c808c,0,unsigned>;
        ///Main PLL division factor for PLLCLK
              (system clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> pllr{}; 
        ///Main PLL PLLCLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllren{}; 
        ///Main PLL division factor for
              PLLUSB1CLK(48 MHz clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pllq{}; 
        ///Main PLL PLLUSB1CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllqen{}; 
        ///Main PLL division factor for PLLSAI3CLK
              (SAI1 and SAI2 clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllp{}; 
        ///Main PLL PLLSAI3CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllpen{}; 
        ///Main PLL multiplication factor for
              VCO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> plln{}; 
        ///Division factor for the main PLL and
              audio PLL (PLLSAI1 and PLLSAI2) input
              clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pllm{}; 
        ///Main PLL, PLLSAI1 and PLLSAI2 entry
              clock source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pllsrc{}; 
    }
    namespace Nonepllsai1cfgr{    ///<PLLSAI1 configuration register
        using Addr = Register::Address<0x40021010,0xf88c80ff,0,unsigned>;
        ///PLLSAI1 division factor for PLLADC1CLK
              (ADC clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> pllsai1r{}; 
        ///PLLSAI1 PLLADC1CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllsai1ren{}; 
        ///SAI1PLL division factor for PLLUSB2CLK
              (48 MHz clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pllsai1q{}; 
        ///SAI1PLL PLLUSB2CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllsai1qen{}; 
        ///SAI1PLL division factor for PLLSAI1CLK
              (SAI1 or SAI2 clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllsai1p{}; 
        ///SAI1PLL PLLSAI1CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsai1pen{}; 
        ///SAI1PLL multiplication factor for
              VCO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> pllsai1n{}; 
    }
    namespace Nonepllsai2cfgr{    ///<PLLSAI2 configuration register
        using Addr = Register::Address<0x40021014,0xf8fc80ff,0,unsigned>;
        ///PLLSAI2 division factor for PLLADC2CLK
              (ADC clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> pllsai2r{}; 
        ///PLLSAI2 PLLADC2CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllsai2ren{}; 
        ///SAI1PLL division factor for PLLSAI2CLK
              (SAI1 or SAI2 clock)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllsai2p{}; 
        ///SAI2PLL PLLSAI2CLK output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsai2pen{}; 
        ///SAI2PLL multiplication factor for
              VCO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> pllsai2n{}; 
    }
    namespace Nonecier{    ///<Clock interrupt enable
          register
        using Addr = Register::Address<0x40021018,0xfffffd00,0,unsigned>;
        ///LSE clock security system interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssie{}; 
        ///PLLSAI2 ready interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pllsai2rdyie{}; 
        ///PLLSAI1 ready interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllsai1rdyie{}; 
        ///PLL ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///HSE ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///HSI ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///MSI ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msirdyie{}; 
        ///LSE ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///LSI ready interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
    }
    namespace Nonecifr{    ///<Clock interrupt flag register
        using Addr = Register::Address<0x4002101c,0xfffffc00,0,unsigned>;
        ///LSE Clock security system interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssf{}; 
        ///Clock security system interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cssf{}; 
        ///PLLSAI2 ready interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pllsai2rdyf{}; 
        ///PLLSAI1 ready interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllsai1rdyf{}; 
        ///PLL ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///HSE ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///HSI ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///MSI ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msirdyf{}; 
        ///LSE ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///LSI ready interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
    }
    namespace Nonecicr{    ///<Clock interrupt clear register
        using Addr = Register::Address<0x40021020,0xfffffc00,0,unsigned>;
        ///LSE Clock security system interrupt
              clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssc{}; 
        ///Clock security system interrupt
              clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cssc{}; 
        ///PLLSAI2 ready interrupt
              clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pllsai2rdyc{}; 
        ///PLLSAI1 ready interrupt
              clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllsai1rdyc{}; 
        ///PLL ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        ///HSE ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        ///HSI ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        ///MSI ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msirdyc{}; 
        ///LSE ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        ///LSI ready interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
    }
    namespace Noneahb1rstr{    ///<AHB1 peripheral reset register
        using Addr = Register::Address<0x40021028,0xfffef6fc,0,unsigned>;
        ///Touch Sensing Controller
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tscrst{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crcrst{}; 
        ///Flash memory interface
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flashrst{}; 
        ///DMA2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2rst{}; 
        ///DMA1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1rst{}; 
    }
    namespace Noneahb2rstr{    ///<AHB2 peripheral reset register
        using Addr = Register::Address<0x4002102c,0xfffacf00,0,unsigned>;
        ///Random number generator
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rngrst{}; 
        ///AES hardware accelerator
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aesrst{}; 
        ///ADC reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcrst{}; 
        ///USB OTG FS reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgfsrst{}; 
        ///IO port H reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohrst{}; 
        ///IO port G reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogrst{}; 
        ///IO port F reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofrst{}; 
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
    namespace Noneahb3rstr{    ///<AHB3 peripheral reset register
        using Addr = Register::Address<0x40021030,0xfffffefe,0,unsigned>;
        ///Quad SPI memory interface
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qspirst{}; 
        ///Flexible memory controller
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcrst{}; 
    }
    namespace Noneapb1rstr1{    ///<APB1 peripheral reset register
          1
        using Addr = Register::Address<0x40021038,0x0d013dc0,0,unsigned>;
        ///Low Power Timer 1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1rst{}; 
        ///OPAMP interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opamprst{}; 
        ///DAC1 interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac1rst{}; 
        ///Power interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        ///CAN1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1rst{}; 
        ///I2C3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3rst{}; 
        ///I2C2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///I2C1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///UART5 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        ///UART4 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        ///USART3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        ///USART2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        ///SPI3 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        ///SPI2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///LCD interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdrst{}; 
        ///TIM7 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///TIM6 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///TIM5 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5rst{}; 
        ///TIM3 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        ///TIM3 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///TIM2 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
    }
    namespace Noneapb1rstr2{    ///<APB1 peripheral reset register
          2
        using Addr = Register::Address<0x4002103c,0xffffffda,0,unsigned>;
        ///Low-power timer 2 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lptim2rst{}; 
        ///Single wire protocol reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpmi1rst{}; 
        ///Low-power UART 1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpuart1rst{}; 
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40021040,0xfe9883fe,0,unsigned>;
        ///Digital filters for sigma-delata
              modulators (DFSDM) reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdmrst{}; 
        ///Serial audio interface 2 (SAI2)
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai2rst{}; 
        ///Serial audio interface 1 (SAI1)
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai1rst{}; 
        ///TIM17 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17rst{}; 
        ///TIM16 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16rst{}; 
        ///TIM15 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15rst{}; 
        ///USART1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///TIM8 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8rst{}; 
        ///SPI1 reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///TIM1 timer reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1rst{}; 
        ///SDMMC reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sdmmcrst{}; 
        ///System configuration (SYSCFG)
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
    }
    namespace Noneahb1enr{    ///<AHB1 peripheral clock enable
          register
        using Addr = Register::Address<0x40021048,0xfffef6fc,0,unsigned>;
        ///Touch Sensing Controller clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tscen{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///Flash memory interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flashen{}; 
        ///DMA2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///DMA1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1en{}; 
    }
    namespace Noneahb2enr{    ///<AHB2 peripheral clock enable
          register
        using Addr = Register::Address<0x4002104c,0xfffacf00,0,unsigned>;
        ///Random Number Generator clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rngen{}; 
        ///AES accelerator clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aesen{}; 
        ///ADC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcen{}; 
        ///OTG full speed clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgfsen{}; 
        ///IO port H clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohen{}; 
        ///IO port G clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogen{}; 
        ///IO port F clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofen{}; 
        ///IO port E clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioeen{}; 
        ///IO port D clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioden{}; 
        ///IO port C clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocen{}; 
        ///IO port B clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioben{}; 
        ///IO port A clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioaen{}; 
    }
    namespace Noneahb3enr{    ///<AHB3 peripheral clock enable
          register
        using Addr = Register::Address<0x40021050,0xfffffefe,0,unsigned>;
        ///QSPIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qspien{}; 
        ///Flexible memory controller clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcen{}; 
    }
    namespace Noneapb1enr1{    ///<APB1ENR1
        using Addr = Register::Address<0x40021058,0x0d0135c0,0,unsigned>;
        ///Low power timer 1 clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1en{}; 
        ///OPAMP interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opampen{}; 
        ///DAC1 interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac1en{}; 
        ///Power interface clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        ///CAN1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1en{}; 
        ///I2C3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3en{}; 
        ///I2C2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///I2C1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///UART5 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5en{}; 
        ///UART4 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4en{}; 
        ///USART3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        ///USART2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///SPI3 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sp3en{}; 
        ///SPI2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///Window watchdog clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        ///LCD clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcden{}; 
        ///TIM7 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///TIM6 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        ///TIM4 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///TIM3 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///TIM2 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
    }
    namespace Noneapb1enr2{    ///<APB1 peripheral clock enable register
          2
        using Addr = Register::Address<0x4002105c,0xffffffda,0,unsigned>;
        ///LPTIM2EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lptim2en{}; 
        ///Single wire protocol clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpmi1en{}; 
        ///Low power UART 1 clock
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpuart1en{}; 
    }
    namespace Noneapb2enr{    ///<APB2ENR
        using Addr = Register::Address<0x40021060,0xfe98837e,0,unsigned>;
        ///DFSDM timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
        ///SAI2 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai2en{}; 
        ///SAI1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai1en{}; 
        ///TIM17 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17en{}; 
        ///TIM16 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16en{}; 
        ///TIM15 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15en{}; 
        ///USART1clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///TIM8 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8en{}; 
        ///SPI1 clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///TIM1 timer clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1en{}; 
        ///SDMMC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sdmmcen{}; 
        ///Firewall clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> firewallen{}; 
        ///SYSCFG clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
    }
    namespace Noneahb1smenr{    ///<AHB1 peripheral clocks enable in Sleep and
          Stop modes register
        using Addr = Register::Address<0x40021068,0xfffef4fc,0,unsigned>;
        ///Touch Sensing Controller clocks enable
              during Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tscsmen{}; 
        ///CRCSMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crcsmen{}; 
        ///SRAM1 interface clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sram1smen{}; 
        ///Flash memory interface clocks enable
              during Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flashsmen{}; 
        ///DMA2 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2smen{}; 
        ///DMA1 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1smen{}; 
    }
    namespace Noneahb2smenr{    ///<AHB2 peripheral clocks enable in Sleep and
          Stop modes register
        using Addr = Register::Address<0x4002106c,0xfffacd00,0,unsigned>;
        ///Random Number Generator clocks enable
              during Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rngsmen{}; 
        ///AES accelerator clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aessmen{}; 
        ///ADC clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcfssmen{}; 
        ///OTG full speed clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgfssmen{}; 
        ///SRAM2 interface clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sram2smen{}; 
        ///IO port H clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohsmen{}; 
        ///IO port G clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogsmen{}; 
        ///IO port F clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofsmen{}; 
        ///IO port E clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioesmen{}; 
        ///IO port D clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodsmen{}; 
        ///IO port C clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocsmen{}; 
        ///IO port B clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiobsmen{}; 
        ///IO port A clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioasmen{}; 
    }
    namespace Noneahb3smenr{    ///<AHB3 peripheral clocks enable in Sleep and
          Stop modes register
        using Addr = Register::Address<0x40021070,0xfffffefe,0,unsigned>;
        ///QSPISMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qspismen{}; 
        ///Flexible memory controller clocks enable
              during Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcsmen{}; 
    }
    namespace Noneapb1smenr1{    ///<APB1SMENR1
        using Addr = Register::Address<0x40021078,0x0d0135c0,0,unsigned>;
        ///Low power timer 1 clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1smen{}; 
        ///OPAMP interface clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opampsmen{}; 
        ///DAC1 interface clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac1smen{}; 
        ///Power interface clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrsmen{}; 
        ///CAN1 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1smen{}; 
        ///I2C3 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3smen{}; 
        ///I2C2 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2smen{}; 
        ///I2C1 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1smen{}; 
        ///UART5 clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5smen{}; 
        ///UART4 clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4smen{}; 
        ///USART3 clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3smen{}; 
        ///USART2 clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2smen{}; 
        ///SPI3 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sp3smen{}; 
        ///SPI2 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2smen{}; 
        ///Window watchdog clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgsmen{}; 
        ///LCD clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdsmen{}; 
        ///TIM7 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7smen{}; 
        ///TIM6 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6smen{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5smen{}; 
        ///TIM4 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4smen{}; 
        ///TIM3 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3smen{}; 
        ///TIM2 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2smen{}; 
    }
    namespace Noneapb1smenr2{    ///<APB1 peripheral clocks enable in Sleep and
          Stop modes register 2
        using Addr = Register::Address<0x4002107c,0xffffffda,0,unsigned>;
        ///LPTIM2SMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lptim2smen{}; 
        ///Single wire protocol clocks enable
              during Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpmi1smen{}; 
        ///Low power UART 1 clocks enable during
              Sleep and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpuart1smen{}; 
    }
    namespace Noneapb2smenr{    ///<APB2SMENR
        using Addr = Register::Address<0x40021080,0xfe9883fe,0,unsigned>;
        ///DFSDM timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdmsmen{}; 
        ///SAI2 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai2smen{}; 
        ///SAI1 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai1smen{}; 
        ///TIM17 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17smen{}; 
        ///TIM16 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16smen{}; 
        ///TIM15 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15smen{}; 
        ///USART1clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1smen{}; 
        ///TIM8 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8smen{}; 
        ///SPI1 clocks enable during Sleep and Stop
              modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1smen{}; 
        ///TIM1 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1smen{}; 
        ///SDMMC clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sdmmcsmen{}; 
        ///SYSCFG clocks enable during Sleep and
              Stop modes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgsmen{}; 
    }
    namespace Noneccipr{    ///<CCIPR
        using Addr = Register::Address<0x40021088,0x00000000,0,unsigned>;
        ///DFSDM clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmsel{}; 
        ///SWPMI1 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swpmi1sel{}; 
        ///ADCs clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> adcsel{}; 
        ///48 MHz clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> clk48sel{}; 
        ///SAI2 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sai2sel{}; 
        ///SAI1 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sai1sel{}; 
        ///Low power timer 2 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> lptim2sel{}; 
        ///Low power timer 1 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> lptim1sel{}; 
        ///I2C3 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> i2c3sel{}; 
        ///I2C2 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> i2c2sel{}; 
        ///I2C1 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> i2c1sel{}; 
        ///LPUART1 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> lpuart1sel{}; 
        ///UART5 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> uart5sel{}; 
        ///UART4 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> uart4sel{}; 
        ///USART3 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> usart3sel{}; 
        ///USART2 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> usart2sel{}; 
        ///USART1 clock source
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> usart1sel{}; 
    }
    namespace Nonebdcr{    ///<BDCR
        using Addr = Register::Address<0x40021090,0xfcfe7c80,0,unsigned>;
        ///Low speed clock output
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lscosel{}; 
        ///Low speed clock output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lscoen{}; 
        ///Backup domain software
              reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
        ///RTC clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///RTC clock source selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        ///LSECSSD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lsecssd{}; 
        ///LSECSSON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsecsson{}; 
        ///SE oscillator drive
              capability
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        ///LSE oscillator bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///LSE oscillator ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///LSE oscillator enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
    }
    namespace Nonecsr{    ///<CSR
        using Addr = Register::Address<0x40021094,0x007ff0fc,0,unsigned>;
        ///Low-power reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrstf{}; 
        ///Window watchdog reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        ///Independent window watchdog reset
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        ///Software reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///BOR flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> borrstf{}; 
        ///Pin reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///Option byte loader reset
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> oblrstf{}; 
        ///Firewall reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> firewallrstf{}; 
        ///Remove reset flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///SI range after Standby
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> msisrange{}; 
        ///LSI oscillator ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        ///LSI oscillator enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
    }
}
