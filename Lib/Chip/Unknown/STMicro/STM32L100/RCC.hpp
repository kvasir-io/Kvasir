#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40023800,0x8cf8fcfc,0,unsigned>;
        ///TC/LCD prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rtcpre1{}; 
        namespace Rtcpre1ValC{
        }
        ///RTCPRE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rtcpre0{}; 
        namespace Rtcpre0ValC{
        }
        ///Clock security system
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> csson{}; 
        namespace CssonValC{
        }
        ///PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        namespace PllrdyValC{
        }
        ///PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        namespace PllonValC{
        }
        ///HSE clock bypass
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
        ///MSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msirdy{}; 
        namespace MsirdyValC{
        }
        ///MSI clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msion{}; 
        namespace MsionValC{
        }
        ///Internal high-speed clock ready
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        namespace HsirdyValC{
        }
        ///Internal high-speed clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
        namespace HsionValC{
        }
    }
    namespace Noneicscr{    ///<Internal clock sources calibration
          register
        using Addr = Register::Address<0x40023804,0x00000000,0,unsigned>;
        ///MSI clock trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> msitrim{}; 
        namespace MsitrimValC{
        }
        ///MSI clock calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> msical{}; 
        namespace MsicalValC{
        }
        ///MSI clock ranges
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> msirange{}; 
        namespace MsirangeValC{
        }
        ///High speed internal clock
              trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        namespace HsitrimValC{
        }
        ///nternal high speed clock
              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hsical{}; 
        namespace HsicalValC{
        }
    }
    namespace Nonecfgr{    ///<Clock configuration register
        using Addr = Register::Address<0x40023808,0x8802c000,0,unsigned>;
        ///Microcontroller clock output
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> mcopre{}; 
        namespace McopreValC{
        }
        ///Microcontroller clock output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mcosel{}; 
        namespace McoselValC{
        }
        ///PLL output division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> plldiv{}; 
        namespace PlldivValC{
        }
        ///PLL multiplication factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> pllmul{}; 
        namespace PllmulValC{
        }
        ///PLL entry clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        namespace PllsrcValC{
        }
        ///APB high-speed prescaler
              (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        namespace Ppre2ValC{
        }
        ///APB low-speed prescaler
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
    namespace Nonecir{    ///<Clock interrupt register
        using Addr = Register::Address<0x4002380c,0xff40c040,0,unsigned>;
        ///Clock security system interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cssc{}; 
        namespace CsscValC{
        }
        ///MSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> msirdyc{}; 
        namespace MsirdycValC{
        }
        ///PLL ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        namespace PllrdycValC{
        }
        ///HSE ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        namespace HserdycValC{
        }
        ///HSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        namespace HsirdycValC{
        }
        ///LSE ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        namespace LserdycValC{
        }
        ///LSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        namespace LsirdycValC{
        }
        ///MSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msirdyie{}; 
        namespace MsirdyieValC{
        }
        ///PLL ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        namespace PllrdyieValC{
        }
        ///HSE ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        namespace HserdyieValC{
        }
        ///HSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        namespace HsirdyieValC{
        }
        ///LSE ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        namespace LserdyieValC{
        }
        ///LSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        namespace LsirdyieValC{
        }
        ///Clock security system interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cssf{}; 
        namespace CssfValC{
        }
        ///MSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyf{}; 
        namespace MsirdyfValC{
        }
        ///PLL ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        namespace PllrdyfValC{
        }
        ///HSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        namespace HserdyfValC{
        }
        ///HSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        namespace HsirdyfValC{
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
    namespace Noneahbrstr{    ///<AHB peripheral reset register
        using Addr = Register::Address<0x40023810,0xfeff6ff0,0,unsigned>;
        ///DMA1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmarst{}; 
        namespace DmarstValC{
        }
        ///FLITF reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitfrst{}; 
        namespace FlitfrstValC{
        }
        ///CRC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcrst{}; 
        namespace CrcrstValC{
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
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40023814,0xffffade2,0,unsigned>;
        ///USART1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        namespace Usart1rstValC{
        }
        ///SPI1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        namespace Spi1rstValC{
        }
        ///ADC1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1rst{}; 
        namespace Adc1rstValC{
        }
        ///TM11RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm11rst{}; 
        namespace Tm11rstValC{
        }
        ///TM10RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm10rst{}; 
        namespace Tm10rstValC{
        }
        ///TIM9RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim9rst{}; 
        namespace Tim9rstValC{
        }
        ///SYSCFGRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        namespace SyscfgrstValC{
        }
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register
        using Addr = Register::Address<0x40023818,0x4f19b5c8,0,unsigned>;
        ///COMP interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comprst{}; 
        namespace ComprstValC{
        }
        ///DAC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
        namespace DacrstValC{
        }
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        namespace PwrrstValC{
        }
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///I2C 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        namespace I2c2rstValC{
        }
        ///I2C 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        namespace I2c1rstValC{
        }
        ///USART 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        namespace Usart3rstValC{
        }
        ///USART 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        namespace Usart2rstValC{
        }
        ///SPI 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        namespace Spi2rstValC{
        }
        ///Window watchdog reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdrst{}; 
        namespace WwdrstValC{
        }
        ///LCD reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdrst{}; 
        namespace LcdrstValC{
        }
        ///Timer 7 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        namespace Tim7rstValC{
        }
        ///Timer 6reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        namespace Tim6rstValC{
        }
        ///Timer 4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        namespace Tim4rstValC{
        }
        ///Timer 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        namespace Tim3rstValC{
        }
        ///Timer 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        namespace Tim2rstValC{
        }
    }
    namespace Noneahbenr{    ///<AHB peripheral clock enable
          register
        using Addr = Register::Address<0x4002381c,0xfeff6ff0,0,unsigned>;
        ///DMA1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///FLITF clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitfen{}; 
        namespace FlitfenValC{
        }
        ///CRC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcen{}; 
        namespace CrcenValC{
        }
        ///IO port D clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiopden{}; 
        namespace GpiopdenValC{
        }
        ///IO port C clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiopcen{}; 
        namespace GpiopcenValC{
        }
        ///IO port B clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiopben{}; 
        namespace GpiopbenValC{
        }
        ///IO port A clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpiopaen{}; 
        namespace GpiopaenValC{
        }
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable
          register
        using Addr = Register::Address<0x40023820,0xffffade2,0,unsigned>;
        ///USART1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        namespace Usart1enValC{
        }
        ///SPI 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        namespace Spi1enValC{
        }
        ///ADC1 interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1en{}; 
        namespace Adc1enValC{
        }
        ///TIM11 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim11en{}; 
        namespace Tim11enValC{
        }
        ///TIM10 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim10en{}; 
        namespace Tim10enValC{
        }
        ///TIM9 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim9en{}; 
        namespace Tim9enValC{
        }
        ///System configuration controller clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        namespace SyscfgenValC{
        }
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable
          register
        using Addr = Register::Address<0x40023824,0x4f19b5c8,0,unsigned>;
        ///COMP interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> compen{}; 
        namespace CompenValC{
        }
        ///DAC interface clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
        namespace DacenValC{
        }
        ///Power interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        namespace PwrenValC{
        }
        ///USB clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usben{}; 
        namespace UsbenValC{
        }
        ///I2C 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        namespace I2c2enValC{
        }
        ///I2C 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        namespace I2c1enValC{
        }
        ///USART 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        namespace Usart3enValC{
        }
        ///USART 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        namespace Usart2enValC{
        }
        ///SPI 2 clock enable
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
        ///Timer 7 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        namespace Tim7enValC{
        }
        ///Timer 6 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        namespace Tim6enValC{
        }
        ///Timer 4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        namespace Tim4enValC{
        }
        ///Timer 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        namespace Tim3enValC{
        }
        ///Timer 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        namespace Tim2enValC{
        }
    }
    namespace Noneahblpenr{    ///<AHB peripheral clock enable in low power
          mode register
        using Addr = Register::Address<0x40023828,0xfefe6ff0,0,unsigned>;
        ///DMA1 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmalpen{}; 
        namespace DmalpenValC{
        }
        ///SRAM clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sramlpen{}; 
        namespace SramlpenValC{
        }
        ///FLITF clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitflpen{}; 
        namespace FlitflpenValC{
        }
        ///CRC clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crclpen{}; 
        namespace CrclpenValC{
        }
        ///IO port D clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodlpen{}; 
        namespace GpiodlpenValC{
        }
        ///IO port C clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioclpen{}; 
        namespace GpioclpenValC{
        }
        ///IO port B clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioblpen{}; 
        namespace GpioblpenValC{
        }
        ///IO port A clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioalpen{}; 
        namespace GpioalpenValC{
        }
    }
    namespace Noneapb2lpenr{    ///<APB2 peripheral clock enable in low power
          mode register
        using Addr = Register::Address<0x4002382c,0xffffade2,0,unsigned>;
        ///USART1 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1lpen{}; 
        namespace Usart1lpenValC{
        }
        ///SPI 1 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1lpen{}; 
        namespace Spi1lpenValC{
        }
        ///ADC1 interface clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1lpen{}; 
        namespace Adc1lpenValC{
        }
        ///TIM11 timer clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim11lpen{}; 
        namespace Tim11lpenValC{
        }
        ///TIM10 timer clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim10lpen{}; 
        namespace Tim10lpenValC{
        }
        ///TIM9 timer clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim9lpen{}; 
        namespace Tim9lpenValC{
        }
        ///System configuration controller clock
              enable during Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfglpen{}; 
        namespace SyscfglpenValC{
        }
    }
    namespace Noneapb1lpenr{    ///<APB1 peripheral clock enable in low power
          mode register
        using Addr = Register::Address<0x40023830,0x4f19b5c8,0,unsigned>;
        ///COMP interface clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> complpen{}; 
        namespace ComplpenValC{
        }
        ///DAC interface clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> daclpen{}; 
        namespace DaclpenValC{
        }
        ///Power interface clock enable during
              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrlpen{}; 
        namespace PwrlpenValC{
        }
        ///USB clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usblpen{}; 
        namespace UsblpenValC{
        }
        ///I2C 2 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2lpen{}; 
        namespace I2c2lpenValC{
        }
        ///I2C 1 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1lpen{}; 
        namespace I2c1lpenValC{
        }
        ///USART 3 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3lpen{}; 
        namespace Usart3lpenValC{
        }
        ///USART 2 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2lpen{}; 
        namespace Usart2lpenValC{
        }
        ///SPI 2 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2lpen{}; 
        namespace Spi2lpenValC{
        }
        ///Window watchdog clock enable during
              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdglpen{}; 
        namespace WwdglpenValC{
        }
        ///LCD clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdlpen{}; 
        namespace LcdlpenValC{
        }
        ///Timer 7 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7lpen{}; 
        namespace Tim7lpenValC{
        }
        ///Timer 6 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6lpen{}; 
        namespace Tim6lpenValC{
        }
        ///Timer 4 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4lpen{}; 
        namespace Tim4lpenValC{
        }
        ///Timer 3 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3lpen{}; 
        namespace Tim3lpenValC{
        }
        ///Timer 2 clock enable during Sleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2lpen{}; 
        namespace Tim2lpenValC{
        }
    }
    namespace Nonecsr{    ///<Control/status register
        using Addr = Register::Address<0x40023834,0x023cf8fc,0,unsigned>;
        ///Low-power reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrstf{}; 
        namespace LpwrstfValC{
        }
        ///Window watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        namespace WwdgrstfValC{
        }
        ///Independent watchdog reset
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        namespace IwdgrstfValC{
        }
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        namespace SftrstfValC{
        }
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        namespace PorrstfValC{
        }
        ///PIN reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        namespace PinrstfValC{
        }
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        namespace RmvfValC{
        }
        ///RTC software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtcrst{}; 
        namespace RtcrstValC{
        }
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///RTC and LCD clock source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        namespace RtcselValC{
        }
        ///External low-speed oscillator
              bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        namespace LsebypValC{
        }
        ///External low-speed oscillator
              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdy{}; 
        namespace LserdyValC{
        }
        ///External low-speed oscillator
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lseon{}; 
        namespace LseonValC{
        }
        ///Internal low-speed oscillator
              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        namespace LsirdyValC{
        }
        ///Internal low-speed oscillator
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        namespace LsionValC{
        }
    }
}
