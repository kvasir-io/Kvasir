#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xc0f0f000,0,unsigned>;
        ///SAI2 PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pllsai2rdy{}; 
        namespace Pllsai2rdyValC{
        }
        ///SAI2 PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pllsai2on{}; 
        namespace Pllsai2onValC{
        }
        ///SAI1 PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pllsai1rdy{}; 
        namespace Pllsai1rdyValC{
        }
        ///SAI1 PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pllsai1on{}; 
        namespace Pllsai1onValC{
        }
        ///Main PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        namespace PllrdyValC{
        }
        ///Main PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        namespace PllonValC{
        }
        ///Clock security system
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csson{}; 
        namespace CssonValC{
        }
        ///HSE crystal oscillator
              bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        namespace HsebypValC{
        }
        ///HSE clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        namespace HserdyValC{
        }
        ///HSE clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        namespace HseonValC{
        }
        ///HSI automatic start from
              Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsiasfs{}; 
        namespace HsiasfsValC{
        }
        ///HSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        namespace HsirdyValC{
        }
        ///HSI always enable for peripheral
              kernels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hsikeron{}; 
        namespace HsikeronValC{
        }
        ///HSI clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsion{}; 
        namespace HsionValC{
        }
        ///MSI clock ranges
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> msirange{}; 
        namespace MsirangeValC{
        }
        ///MSI clock range selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msirgsel{}; 
        namespace MsirgselValC{
        }
        ///MSI clock PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msipllen{}; 
        namespace MsipllenValC{
        }
        ///MSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msirdy{}; 
        namespace MsirdyValC{
        }
        ///MSI clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msion{}; 
        namespace MsionValC{
        }
    }
    namespace Noneicscr{    ///<Internal clock sources calibration
          register
        using Addr = Register::Address<0x40021004,0xe0000000,0,unsigned>;
        ///HSI clock trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        namespace HsitrimValC{
        }
        ///HSI clock calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hsical{}; 
        namespace HsicalValC{
        }
        ///MSI clock trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> msitrim{}; 
        namespace MsitrimValC{
        }
        ///MSI clock calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> msical{}; 
        namespace MsicalValC{
        }
    }
    namespace Nonecfgr{    ///<Clock configuration register
        using Addr = Register::Address<0x40021008,0x88ff4000,0,unsigned>;
        ///Microcontroller clock output
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> mcopre{}; 
        namespace McopreValC{
        }
        ///Microcontroller clock
              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mcosel{}; 
        namespace McoselValC{
        }
        ///Wakeup from Stop and CSS backup clock
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stopwuck{}; 
        namespace StopwuckValC{
        }
        ///APB high-speed prescaler
              (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        namespace Ppre2ValC{
        }
        ///PB low-speed prescaler
              (APB1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        namespace Ppre1ValC{
        }
        ///AHB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        namespace HpreValC{
        }
        ///System clock switch status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sws{}; 
        namespace SwsValC{
        }
        ///System clock switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        namespace SwValC{
        }
    }
    namespace Nonepllcfgr{    ///<PLL configuration register
        using Addr = Register::Address<0x4002100c,0xf88c808c,0,unsigned>;
        ///Main PLL division factor for PLLCLK
              (system clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> pllr{}; 
        namespace PllrValC{
        }
        ///Main PLL PLLCLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllren{}; 
        namespace PllrenValC{
        }
        ///Main PLL division factor for
              PLLUSB1CLK(48 MHz clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pllq{}; 
        namespace PllqValC{
        }
        ///Main PLL PLLUSB1CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllqen{}; 
        namespace PllqenValC{
        }
        ///Main PLL division factor for PLLSAI3CLK
              (SAI1 and SAI2 clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllp{}; 
        namespace PllpValC{
        }
        ///Main PLL PLLSAI3CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllpen{}; 
        namespace PllpenValC{
        }
        ///Main PLL multiplication factor for
              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> plln{}; 
        namespace PllnValC{
        }
        ///Division factor for the main PLL and
              audio PLL (PLLSAI1 and PLLSAI2) input
              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pllm{}; 
        namespace PllmValC{
        }
        ///Main PLL, PLLSAI1 and PLLSAI2 entry
              clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        namespace PllsrcValC{
        }
    }
    namespace Nonepllsai1cfgr{    ///<PLLSAI1 configuration register
        using Addr = Register::Address<0x40021010,0xf88c80ff,0,unsigned>;
        ///PLLSAI1 division factor for PLLADC1CLK
              (ADC clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> pllsai1r{}; 
        namespace Pllsai1rValC{
        }
        ///PLLSAI1 PLLADC1CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllsai1ren{}; 
        namespace Pllsai1renValC{
        }
        ///SAI1PLL division factor for PLLUSB2CLK
              (48 MHz clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pllsai1q{}; 
        namespace Pllsai1qValC{
        }
        ///SAI1PLL PLLUSB2CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllsai1qen{}; 
        namespace Pllsai1qenValC{
        }
        ///SAI1PLL division factor for PLLSAI1CLK
              (SAI1 or SAI2 clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllsai1p{}; 
        namespace Pllsai1pValC{
        }
        ///SAI1PLL PLLSAI1CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsai1pen{}; 
        namespace Pllsai1penValC{
        }
        ///SAI1PLL multiplication factor for
              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> pllsai1n{}; 
        namespace Pllsai1nValC{
        }
    }
    namespace Nonepllsai2cfgr{    ///<PLLSAI2 configuration register
        using Addr = Register::Address<0x40021014,0xf8fc80ff,0,unsigned>;
        ///PLLSAI2 division factor for PLLADC2CLK
              (ADC clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> pllsai2r{}; 
        namespace Pllsai2rValC{
        }
        ///PLLSAI2 PLLADC2CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllsai2ren{}; 
        namespace Pllsai2renValC{
        }
        ///SAI1PLL division factor for PLLSAI2CLK
              (SAI1 or SAI2 clock)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllsai2p{}; 
        namespace Pllsai2pValC{
        }
        ///SAI2PLL PLLSAI2CLK output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsai2pen{}; 
        namespace Pllsai2penValC{
        }
        ///SAI2PLL multiplication factor for
              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> pllsai2n{}; 
        namespace Pllsai2nValC{
        }
    }
    namespace Nonecier{    ///<Clock interrupt enable
          register
        using Addr = Register::Address<0x40021018,0xfffffd00,0,unsigned>;
        ///LSE clock security system interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssie{}; 
        namespace LsecssieValC{
        }
        ///PLLSAI2 ready interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pllsai2rdyie{}; 
        namespace Pllsai2rdyieValC{
        }
        ///PLLSAI1 ready interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllsai1rdyie{}; 
        namespace Pllsai1rdyieValC{
        }
        ///PLL ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        namespace PllrdyieValC{
        }
        ///HSE ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        namespace HserdyieValC{
        }
        ///HSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        namespace HsirdyieValC{
        }
        ///MSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msirdyie{}; 
        namespace MsirdyieValC{
        }
        ///LSE ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        namespace LserdyieValC{
        }
        ///LSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        namespace LsirdyieValC{
        }
    }
    namespace Nonecifr{    ///<Clock interrupt flag register
        using Addr = Register::Address<0x4002101c,0xfffffc00,0,unsigned>;
        ///LSE Clock security system interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssf{}; 
        namespace LsecssfValC{
        }
        ///Clock security system interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cssf{}; 
        namespace CssfValC{
        }
        ///PLLSAI2 ready interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pllsai2rdyf{}; 
        namespace Pllsai2rdyfValC{
        }
        ///PLLSAI1 ready interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllsai1rdyf{}; 
        namespace Pllsai1rdyfValC{
        }
        ///PLL ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        namespace PllrdyfValC{
        }
        ///HSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        namespace HserdyfValC{
        }
        ///HSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        namespace HsirdyfValC{
        }
        ///MSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msirdyf{}; 
        namespace MsirdyfValC{
        }
        ///LSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        namespace LserdyfValC{
        }
        ///LSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        namespace LsirdyfValC{
        }
    }
    namespace Nonecicr{    ///<Clock interrupt clear register
        using Addr = Register::Address<0x40021020,0xfffffc00,0,unsigned>;
        ///LSE Clock security system interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssc{}; 
        namespace LsecsscValC{
        }
        ///Clock security system interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cssc{}; 
        namespace CsscValC{
        }
        ///PLLSAI2 ready interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pllsai2rdyc{}; 
        namespace Pllsai2rdycValC{
        }
        ///PLLSAI1 ready interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pllsai1rdyc{}; 
        namespace Pllsai1rdycValC{
        }
        ///PLL ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        namespace PllrdycValC{
        }
        ///HSE ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        namespace HserdycValC{
        }
        ///HSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        namespace HsirdycValC{
        }
        ///MSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msirdyc{}; 
        namespace MsirdycValC{
        }
        ///LSE ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        namespace LserdycValC{
        }
        ///LSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        namespace LsirdycValC{
        }
    }
    namespace Noneahb1rstr{    ///<AHB1 peripheral reset register
        using Addr = Register::Address<0x40021028,0xfffef6fc,0,unsigned>;
        ///Touch Sensing Controller
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tscrst{}; 
        namespace TscrstValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crcrst{}; 
        namespace CrcrstValC{
        }
        ///Flash memory interface
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flashrst{}; 
        namespace FlashrstValC{
        }
        ///DMA2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2rst{}; 
        namespace Dma2rstValC{
        }
        ///DMA1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1rst{}; 
        namespace Dma1rstValC{
        }
    }
    namespace Noneahb2rstr{    ///<AHB2 peripheral reset register
        using Addr = Register::Address<0x4002102c,0xfffacf00,0,unsigned>;
        ///Random number generator
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rngrst{}; 
        namespace RngrstValC{
        }
        ///AES hardware accelerator
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aesrst{}; 
        namespace AesrstValC{
        }
        ///ADC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcrst{}; 
        namespace AdcrstValC{
        }
        ///USB OTG FS reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgfsrst{}; 
        namespace OtgfsrstValC{
        }
        ///IO port H reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohrst{}; 
        namespace GpiohrstValC{
        }
        ///IO port G reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogrst{}; 
        namespace GpiogrstValC{
        }
        ///IO port F reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofrst{}; 
        namespace GpiofrstValC{
        }
        ///IO port E reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioerst{}; 
        namespace GpioerstValC{
        }
        ///IO port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodrst{}; 
        namespace GpiodrstValC{
        }
        ///IO port C reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocrst{}; 
        namespace GpiocrstValC{
        }
        ///IO port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiobrst{}; 
        namespace GpiobrstValC{
        }
        ///IO port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioarst{}; 
        namespace GpioarstValC{
        }
    }
    namespace Noneahb3rstr{    ///<AHB3 peripheral reset register
        using Addr = Register::Address<0x40021030,0xfffffefe,0,unsigned>;
        ///Quad SPI memory interface
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qspirst{}; 
        namespace QspirstValC{
        }
        ///Flexible memory controller
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcrst{}; 
        namespace FmcrstValC{
        }
    }
    namespace Noneapb1rstr1{    ///<APB1 peripheral reset register
          1
        using Addr = Register::Address<0x40021038,0x0d013dc0,0,unsigned>;
        ///Low Power Timer 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1rst{}; 
        namespace Lptim1rstValC{
        }
        ///OPAMP interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opamprst{}; 
        namespace OpamprstValC{
        }
        ///DAC1 interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac1rst{}; 
        namespace Dac1rstValC{
        }
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        namespace PwrrstValC{
        }
        ///CAN1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1rst{}; 
        namespace Can1rstValC{
        }
        ///I2C3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3rst{}; 
        namespace I2c3rstValC{
        }
        ///I2C2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        namespace I2c2rstValC{
        }
        ///I2C1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        namespace I2c1rstValC{
        }
        ///UART5 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        namespace Uart5rstValC{
        }
        ///UART4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        namespace Uart4rstValC{
        }
        ///USART3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        namespace Usart3rstValC{
        }
        ///USART2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        namespace Usart2rstValC{
        }
        ///SPI3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        namespace Spi3rstValC{
        }
        ///SPI2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        namespace Spi2rstValC{
        }
        ///LCD interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdrst{}; 
        namespace LcdrstValC{
        }
        ///TIM7 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        namespace Tim7rstValC{
        }
        ///TIM6 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        namespace Tim6rstValC{
        }
        ///TIM5 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5rst{}; 
        namespace Tim5rstValC{
        }
        ///TIM3 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        namespace Tim4rstValC{
        }
        ///TIM3 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        namespace Tim3rstValC{
        }
        ///TIM2 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        namespace Tim2rstValC{
        }
    }
    namespace Noneapb1rstr2{    ///<APB1 peripheral reset register
          2
        using Addr = Register::Address<0x4002103c,0xffffffda,0,unsigned>;
        ///Low-power timer 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lptim2rst{}; 
        namespace Lptim2rstValC{
        }
        ///Single wire protocol reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpmi1rst{}; 
        namespace Swpmi1rstValC{
        }
        ///Low-power UART 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpuart1rst{}; 
        namespace Lpuart1rstValC{
        }
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40021040,0xfe9883fe,0,unsigned>;
        ///Digital filters for sigma-delata
              modulators (DFSDM) reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdmrst{}; 
        namespace DfsdmrstValC{
        }
        ///Serial audio interface 2 (SAI2)
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai2rst{}; 
        namespace Sai2rstValC{
        }
        ///Serial audio interface 1 (SAI1)
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai1rst{}; 
        namespace Sai1rstValC{
        }
        ///TIM17 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17rst{}; 
        namespace Tim17rstValC{
        }
        ///TIM16 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16rst{}; 
        namespace Tim16rstValC{
        }
        ///TIM15 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15rst{}; 
        namespace Tim15rstValC{
        }
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        namespace Usart1rstValC{
        }
        ///TIM8 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8rst{}; 
        namespace Tim8rstValC{
        }
        ///SPI1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        namespace Spi1rstValC{
        }
        ///TIM1 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1rst{}; 
        namespace Tim1rstValC{
        }
        ///SDMMC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sdmmcrst{}; 
        namespace SdmmcrstValC{
        }
        ///System configuration (SYSCFG)
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        namespace SyscfgrstValC{
        }
    }
    namespace Noneahb1enr{    ///<AHB1 peripheral clock enable
          register
        using Addr = Register::Address<0x40021048,0xfffef6fc,0,unsigned>;
        ///Touch Sensing Controller clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tscen{}; 
        namespace TscenValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crcen{}; 
        namespace CrcenValC{
        }
        ///Flash memory interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flashen{}; 
        namespace FlashenValC{
        }
        ///DMA2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        namespace Dma2enValC{
        }
        ///DMA1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1en{}; 
        namespace Dma1enValC{
        }
    }
    namespace Noneahb2enr{    ///<AHB2 peripheral clock enable
          register
        using Addr = Register::Address<0x4002104c,0xfffacf00,0,unsigned>;
        ///Random Number Generator clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rngen{}; 
        namespace RngenValC{
        }
        ///AES accelerator clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aesen{}; 
        namespace AesenValC{
        }
        ///ADC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcen{}; 
        namespace AdcenValC{
        }
        ///OTG full speed clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgfsen{}; 
        namespace OtgfsenValC{
        }
        ///IO port H clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohen{}; 
        namespace GpiohenValC{
        }
        ///IO port G clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogen{}; 
        namespace GpiogenValC{
        }
        ///IO port F clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofen{}; 
        namespace GpiofenValC{
        }
        ///IO port E clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioeen{}; 
        namespace GpioeenValC{
        }
        ///IO port D clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioden{}; 
        namespace GpiodenValC{
        }
        ///IO port C clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocen{}; 
        namespace GpiocenValC{
        }
        ///IO port B clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioben{}; 
        namespace GpiobenValC{
        }
        ///IO port A clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioaen{}; 
        namespace GpioaenValC{
        }
    }
    namespace Noneahb3enr{    ///<AHB3 peripheral clock enable
          register
        using Addr = Register::Address<0x40021050,0xfffffefe,0,unsigned>;
        ///QSPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qspien{}; 
        namespace QspienValC{
        }
        ///Flexible memory controller clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcen{}; 
        namespace FmcenValC{
        }
    }
    namespace Noneapb1enr1{    ///<APB1ENR1
        using Addr = Register::Address<0x40021058,0x0d0135c0,0,unsigned>;
        ///Low power timer 1 clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1en{}; 
        namespace Lptim1enValC{
        }
        ///OPAMP interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opampen{}; 
        namespace OpampenValC{
        }
        ///DAC1 interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac1en{}; 
        namespace Dac1enValC{
        }
        ///Power interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        namespace PwrenValC{
        }
        ///CAN1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1en{}; 
        namespace Can1enValC{
        }
        ///I2C3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3en{}; 
        namespace I2c3enValC{
        }
        ///I2C2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        namespace I2c2enValC{
        }
        ///I2C1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        namespace I2c1enValC{
        }
        ///UART5 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5en{}; 
        namespace Uart5enValC{
        }
        ///UART4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4en{}; 
        namespace Uart4enValC{
        }
        ///USART3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        namespace Usart3enValC{
        }
        ///USART2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        namespace Usart2enValC{
        }
        ///SPI3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sp3en{}; 
        namespace Sp3enValC{
        }
        ///SPI2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        namespace Spi2enValC{
        }
        ///Window watchdog clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        namespace WwdgenValC{
        }
        ///LCD clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcden{}; 
        namespace LcdenValC{
        }
        ///TIM7 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        namespace Tim7enValC{
        }
        ///TIM6 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        namespace Tim6enValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        namespace Tim5enValC{
        }
        ///TIM4 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        namespace Tim4enValC{
        }
        ///TIM3 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        namespace Tim3enValC{
        }
        ///TIM2 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        namespace Tim2enValC{
        }
    }
    namespace Noneapb1enr2{    ///<APB1 peripheral clock enable register
          2
        using Addr = Register::Address<0x4002105c,0xffffffda,0,unsigned>;
        ///LPTIM2EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lptim2en{}; 
        namespace Lptim2enValC{
        }
        ///Single wire protocol clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpmi1en{}; 
        namespace Swpmi1enValC{
        }
        ///Low power UART 1 clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpuart1en{}; 
        namespace Lpuart1enValC{
        }
    }
    namespace Noneapb2enr{    ///<APB2ENR
        using Addr = Register::Address<0x40021060,0xfe98837e,0,unsigned>;
        ///DFSDM timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
        namespace DfsdmenValC{
        }
        ///SAI2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai2en{}; 
        namespace Sai2enValC{
        }
        ///SAI1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai1en{}; 
        namespace Sai1enValC{
        }
        ///TIM17 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17en{}; 
        namespace Tim17enValC{
        }
        ///TIM16 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16en{}; 
        namespace Tim16enValC{
        }
        ///TIM15 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15en{}; 
        namespace Tim15enValC{
        }
        ///USART1clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        namespace Usart1enValC{
        }
        ///TIM8 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8en{}; 
        namespace Tim8enValC{
        }
        ///SPI1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        namespace Spi1enValC{
        }
        ///TIM1 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1en{}; 
        namespace Tim1enValC{
        }
        ///SDMMC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sdmmcen{}; 
        namespace SdmmcenValC{
        }
        ///Firewall clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> firewallen{}; 
        namespace FirewallenValC{
        }
        ///SYSCFG clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        namespace SyscfgenValC{
        }
    }
    namespace Noneahb1smenr{    ///<AHB1 peripheral clocks enable in Sleep and
          Stop modes register
        using Addr = Register::Address<0x40021068,0xfffef4fc,0,unsigned>;
        ///Touch Sensing Controller clocks enable
              during Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tscsmen{}; 
        namespace TscsmenValC{
        }
        ///CRCSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crcsmen{}; 
        namespace CrcsmenValC{
        }
        ///SRAM1 interface clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sram1smen{}; 
        namespace Sram1smenValC{
        }
        ///Flash memory interface clocks enable
              during Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flashsmen{}; 
        namespace FlashsmenValC{
        }
        ///DMA2 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2smen{}; 
        namespace Dma2smenValC{
        }
        ///DMA1 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1smen{}; 
        namespace Dma1smenValC{
        }
    }
    namespace Noneahb2smenr{    ///<AHB2 peripheral clocks enable in Sleep and
          Stop modes register
        using Addr = Register::Address<0x4002106c,0xfffacd00,0,unsigned>;
        ///Random Number Generator clocks enable
              during Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rngsmen{}; 
        namespace RngsmenValC{
        }
        ///AES accelerator clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aessmen{}; 
        namespace AessmenValC{
        }
        ///ADC clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcfssmen{}; 
        namespace AdcfssmenValC{
        }
        ///OTG full speed clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgfssmen{}; 
        namespace OtgfssmenValC{
        }
        ///SRAM2 interface clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sram2smen{}; 
        namespace Sram2smenValC{
        }
        ///IO port H clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohsmen{}; 
        namespace GpiohsmenValC{
        }
        ///IO port G clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogsmen{}; 
        namespace GpiogsmenValC{
        }
        ///IO port F clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofsmen{}; 
        namespace GpiofsmenValC{
        }
        ///IO port E clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioesmen{}; 
        namespace GpioesmenValC{
        }
        ///IO port D clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodsmen{}; 
        namespace GpiodsmenValC{
        }
        ///IO port C clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocsmen{}; 
        namespace GpiocsmenValC{
        }
        ///IO port B clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiobsmen{}; 
        namespace GpiobsmenValC{
        }
        ///IO port A clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioasmen{}; 
        namespace GpioasmenValC{
        }
    }
    namespace Noneahb3smenr{    ///<AHB3 peripheral clocks enable in Sleep and
          Stop modes register
        using Addr = Register::Address<0x40021070,0xfffffefe,0,unsigned>;
        ///QSPISMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qspismen{}; 
        namespace QspismenValC{
        }
        ///Flexible memory controller clocks enable
              during Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcsmen{}; 
        namespace FmcsmenValC{
        }
    }
    namespace Noneapb1smenr1{    ///<APB1SMENR1
        using Addr = Register::Address<0x40021078,0x0d0135c0,0,unsigned>;
        ///Low power timer 1 clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1smen{}; 
        namespace Lptim1smenValC{
        }
        ///OPAMP interface clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> opampsmen{}; 
        namespace OpampsmenValC{
        }
        ///DAC1 interface clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac1smen{}; 
        namespace Dac1smenValC{
        }
        ///Power interface clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrsmen{}; 
        namespace PwrsmenValC{
        }
        ///CAN1 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1smen{}; 
        namespace Can1smenValC{
        }
        ///I2C3 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3smen{}; 
        namespace I2c3smenValC{
        }
        ///I2C2 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2smen{}; 
        namespace I2c2smenValC{
        }
        ///I2C1 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1smen{}; 
        namespace I2c1smenValC{
        }
        ///UART5 clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5smen{}; 
        namespace Uart5smenValC{
        }
        ///UART4 clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4smen{}; 
        namespace Uart4smenValC{
        }
        ///USART3 clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3smen{}; 
        namespace Usart3smenValC{
        }
        ///USART2 clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2smen{}; 
        namespace Usart2smenValC{
        }
        ///SPI3 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sp3smen{}; 
        namespace Sp3smenValC{
        }
        ///SPI2 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2smen{}; 
        namespace Spi2smenValC{
        }
        ///Window watchdog clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgsmen{}; 
        namespace WwdgsmenValC{
        }
        ///LCD clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdsmen{}; 
        namespace LcdsmenValC{
        }
        ///TIM7 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7smen{}; 
        namespace Tim7smenValC{
        }
        ///TIM6 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6smen{}; 
        namespace Tim6smenValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5smen{}; 
        namespace Tim5smenValC{
        }
        ///TIM4 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4smen{}; 
        namespace Tim4smenValC{
        }
        ///TIM3 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3smen{}; 
        namespace Tim3smenValC{
        }
        ///TIM2 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2smen{}; 
        namespace Tim2smenValC{
        }
    }
    namespace Noneapb1smenr2{    ///<APB1 peripheral clocks enable in Sleep and
          Stop modes register 2
        using Addr = Register::Address<0x4002107c,0xffffffda,0,unsigned>;
        ///LPTIM2SMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lptim2smen{}; 
        namespace Lptim2smenValC{
        }
        ///Single wire protocol clocks enable
              during Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpmi1smen{}; 
        namespace Swpmi1smenValC{
        }
        ///Low power UART 1 clocks enable during
              Sleep and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpuart1smen{}; 
        namespace Lpuart1smenValC{
        }
    }
    namespace Noneapb2smenr{    ///<APB2SMENR
        using Addr = Register::Address<0x40021080,0xfe9883fe,0,unsigned>;
        ///DFSDM timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdmsmen{}; 
        namespace DfsdmsmenValC{
        }
        ///SAI2 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai2smen{}; 
        namespace Sai2smenValC{
        }
        ///SAI1 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai1smen{}; 
        namespace Sai1smenValC{
        }
        ///TIM17 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17smen{}; 
        namespace Tim17smenValC{
        }
        ///TIM16 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16smen{}; 
        namespace Tim16smenValC{
        }
        ///TIM15 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15smen{}; 
        namespace Tim15smenValC{
        }
        ///USART1clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1smen{}; 
        namespace Usart1smenValC{
        }
        ///TIM8 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8smen{}; 
        namespace Tim8smenValC{
        }
        ///SPI1 clocks enable during Sleep and Stop
              modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1smen{}; 
        namespace Spi1smenValC{
        }
        ///TIM1 timer clocks enable during Sleep
              and Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1smen{}; 
        namespace Tim1smenValC{
        }
        ///SDMMC clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sdmmcsmen{}; 
        namespace SdmmcsmenValC{
        }
        ///SYSCFG clocks enable during Sleep and
              Stop modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgsmen{}; 
        namespace SyscfgsmenValC{
        }
    }
    namespace Noneccipr{    ///<CCIPR
        using Addr = Register::Address<0x40021088,0x00000000,0,unsigned>;
        ///DFSDM clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmsel{}; 
        namespace DfsdmselValC{
        }
        ///SWPMI1 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swpmi1sel{}; 
        namespace Swpmi1selValC{
        }
        ///ADCs clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> adcsel{}; 
        namespace AdcselValC{
        }
        ///48 MHz clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> clk48sel{}; 
        namespace Clk48selValC{
        }
        ///SAI2 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sai2sel{}; 
        namespace Sai2selValC{
        }
        ///SAI1 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sai1sel{}; 
        namespace Sai1selValC{
        }
        ///Low power timer 2 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> lptim2sel{}; 
        namespace Lptim2selValC{
        }
        ///Low power timer 1 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> lptim1sel{}; 
        namespace Lptim1selValC{
        }
        ///I2C3 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> i2c3sel{}; 
        namespace I2c3selValC{
        }
        ///I2C2 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> i2c2sel{}; 
        namespace I2c2selValC{
        }
        ///I2C1 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> i2c1sel{}; 
        namespace I2c1selValC{
        }
        ///LPUART1 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> lpuart1sel{}; 
        namespace Lpuart1selValC{
        }
        ///UART5 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> uart5sel{}; 
        namespace Uart5selValC{
        }
        ///UART4 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> uart4sel{}; 
        namespace Uart4selValC{
        }
        ///USART3 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> usart3sel{}; 
        namespace Usart3selValC{
        }
        ///USART2 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> usart2sel{}; 
        namespace Usart2selValC{
        }
        ///USART1 clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> usart1sel{}; 
        namespace Usart1selValC{
        }
    }
    namespace Nonebdcr{    ///<BDCR
        using Addr = Register::Address<0x40021090,0xfcfe7c80,0,unsigned>;
        ///Low speed clock output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lscosel{}; 
        namespace LscoselValC{
        }
        ///Low speed clock output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lscoen{}; 
        namespace LscoenValC{
        }
        ///Backup domain software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
        namespace BdrstValC{
        }
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        namespace RtcselValC{
        }
        ///LSECSSD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lsecssd{}; 
        namespace LsecssdValC{
        }
        ///LSECSSON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsecsson{}; 
        namespace LsecssonValC{
        }
        ///SE oscillator drive
              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        namespace LsedrvValC{
        }
        ///LSE oscillator bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        namespace LsebypValC{
        }
        ///LSE oscillator ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        namespace LserdyValC{
        }
        ///LSE oscillator enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
        namespace LseonValC{
        }
    }
    namespace Nonecsr{    ///<CSR
        using Addr = Register::Address<0x40021094,0x007ff0fc,0,unsigned>;
        ///Low-power reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrstf{}; 
        namespace LpwrstfValC{
        }
        ///Window watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        namespace WwdgrstfValC{
        }
        ///Independent window watchdog reset
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        namespace IwdgrstfValC{
        }
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        namespace SftrstfValC{
        }
        ///BOR flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> borrstf{}; 
        namespace BorrstfValC{
        }
        ///Pin reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        namespace PinrstfValC{
        }
        ///Option byte loader reset
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> oblrstf{}; 
        namespace OblrstfValC{
        }
        ///Firewall reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> firewallrstf{}; 
        namespace FirewallrstfValC{
        }
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rmvf{}; 
        namespace RmvfValC{
        }
        ///SI range after Standby
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> msisrange{}; 
        namespace MsisrangeValC{
        }
        ///LSI oscillator ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        namespace LsirdyValC{
        }
        ///LSI oscillator enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        namespace LsionValC{
        }
    }
}
