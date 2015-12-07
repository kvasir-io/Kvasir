#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xfcc0fce0,0,unsigned>;
        ///PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        namespace PllrdyValC{
        }
        ///PLL enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        namespace PllonValC{
        }
        ///TC/LCD prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> rtcpre{}; 
        namespace RtcpreValC{
        }
        ///Clock security system on HSE enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csslseon{}; 
        namespace CsslseonValC{
        }
        ///HSE clock bypass bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        namespace HsebypValC{
        }
        ///HSE clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        namespace HserdyValC{
        }
        ///HSE clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        namespace HseonValC{
        }
        ///MSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msirdy{}; 
        namespace MsirdyValC{
        }
        ///MSI clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msion{}; 
        namespace MsionValC{
        }
        ///HSI16DIVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hsi16divf{}; 
        namespace Hsi16divfValC{
        }
        ///HSI16DIVEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsi16diven{}; 
        namespace Hsi16divenValC{
        }
        ///Internal high-speed clock ready
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyf{}; 
        namespace Hsi16rdyfValC{
        }
        ///High-speed internal clock enable bit for
              some IP kernels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsi16keron{}; 
        namespace Hsi16keronValC{
        }
        ///16 MHz high-speed internal clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsi16on{}; 
        namespace Hsi16onValC{
        }
    }
    namespace Noneicscr{    ///<Internal clock sources calibration
          register
        using Addr = Register::Address<0x40021004,0x00000000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> hsi16trim{}; 
        namespace Hsi16trimValC{
        }
        ///nternal high speed clock
              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hsi16cal{}; 
        namespace Hsi16calValC{
        }
    }
    namespace Nonecrrcr{    ///<Clock recovery RC register
        using Addr = Register::Address<0x40021008,0xffff00fc,0,unsigned>;
        ///48 MHz HSI clock
              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsi48cal{}; 
        namespace Hsi48calValC{
        }
        ///48MHz HSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsi48rdy{}; 
        namespace Hsi48rdyValC{
        }
        ///48MHz HSI clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsi48on{}; 
        namespace Hsi48onValC{
        }
    }
    namespace Nonecfgr{    ///<Clock configuration register
        using Addr = Register::Address<0x4002100c,0x88024000,0,unsigned>;
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
        ///Wake-up from stop clock
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stopwuck{}; 
        namespace StopwuckValC{
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
    namespace Nonecier{    ///<Clock interrupt enable
          register
        using Addr = Register::Address<0x40021010,0xffffff00,0,unsigned>;
        ///LSE CSS interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csslse{}; 
        namespace CsslseValC{
        }
        ///HSI48 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hsi48rdyie{}; 
        namespace Hsi48rdyieValC{
        }
        ///MSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyie{}; 
        namespace MsirdyieValC{
        }
        ///PLL ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        namespace PllrdyieValC{
        }
        ///HSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        namespace HserdyieValC{
        }
        ///HSI16 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyie{}; 
        namespace Hsi16rdyieValC{
        }
        ///LSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        namespace LserdyieValC{
        }
        ///LSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        namespace LsirdyieValC{
        }
    }
    namespace Nonecifr{    ///<Clock interrupt flag register
        using Addr = Register::Address<0x40021014,0xfffffe00,0,unsigned>;
        ///Clock Security System Interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csshsef{}; 
        namespace CsshsefValC{
        }
        ///LSE Clock Security System Interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csslsef{}; 
        namespace CsslsefValC{
        }
        ///HSI48 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hsi48rdyf{}; 
        namespace Hsi48rdyfValC{
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
        ///HSI16 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyf{}; 
        namespace Hsi16rdyfValC{
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
        using Addr = Register::Address<0x40021018,0xfffffe00,0,unsigned>;
        ///Clock Security System Interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csshsec{}; 
        namespace CsshsecValC{
        }
        ///LSE Clock Security System Interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csslsec{}; 
        namespace CsslsecValC{
        }
        ///HSI48 ready Interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hsi48rdyc{}; 
        namespace Hsi48rdycValC{
        }
        ///MSI ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyc{}; 
        namespace MsirdycValC{
        }
        ///PLL ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        namespace PllrdycValC{
        }
        ///HSE ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        namespace HserdycValC{
        }
        ///HSI16 ready Interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyc{}; 
        namespace Hsi16rdycValC{
        }
        ///LSE ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        namespace LserdycValC{
        }
        ///LSI ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        namespace LsirdycValC{
        }
    }
    namespace Noneioprstr{    ///<GPIO reset register
        using Addr = Register::Address<0x4002101c,0xffffff70,0,unsigned>;
        ///I/O port H reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iophrst{}; 
        namespace IophrstValC{
        }
        ///I/O port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopdrst{}; 
        namespace IopdrstValC{
        }
        ///I/O port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopcrst{}; 
        namespace IopcrstValC{
        }
        ///I/O port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iopbrst{}; 
        namespace IopbrstValC{
        }
        ///I/O port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioparst{}; 
        namespace IoparstValC{
        }
    }
    namespace Noneahbrstr{    ///<AHB peripheral reset register
        using Addr = Register::Address<0x40021020,0xfeeeeefe,0,unsigned>;
        ///Crypto module reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cryprst{}; 
        namespace CryprstValC{
        }
        ///Random Number Generator module
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rngrst{}; 
        namespace RngrstValC{
        }
        ///Touch Sensing reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> touchrst{}; 
        namespace TouchrstValC{
        }
        ///Test integration module
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcrst{}; 
        namespace CrcrstValC{
        }
        ///Memory interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mifrst{}; 
        namespace MifrstValC{
        }
        ///DMA reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmarst{}; 
        namespace DmarstValC{
        }
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40021024,0xffbfadda,0,unsigned>;
        ///DBG reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgrst{}; 
        namespace DbgrstValC{
        }
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        namespace Usart1rstValC{
        }
        ///SPI 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        namespace Spi1rstValC{
        }
        ///ADC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adcrst{}; 
        namespace AdcrstValC{
        }
        ///TIM22 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm12rst{}; 
        namespace Tm12rstValC{
        }
        ///TIM21 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim21rst{}; 
        namespace Tim21rstValC{
        }
        ///System configuration controller
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        namespace SyscfgrstValC{
        }
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register
        using Addr = Register::Address<0x40021028,0x4719b5ee,0,unsigned>;
        ///Low power timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1rst{}; 
        namespace Lptim1rstValC{
        }
        ///DAC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
        namespace DacrstValC{
        }
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        namespace PwrrstValC{
        }
        ///Clock recovery system
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crsrst{}; 
        namespace CrsrstValC{
        }
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///I2C2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        namespace I2c2rstValC{
        }
        ///I2C1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        namespace I2c1rstValC{
        }
        ///LPUART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lpuart1rst{}; 
        namespace Lpuart1rstValC{
        }
        ///UART2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lpuart12rst{}; 
        namespace Lpuart12rstValC{
        }
        ///SPI2 reset
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
        ///Timer 6 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        namespace Tim6rstValC{
        }
        ///Timer2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        namespace Tim2rstValC{
        }
    }
    namespace Noneiopenr{    ///<GPIO clock enable register
        using Addr = Register::Address<0x4002102c,0xffffff70,0,unsigned>;
        ///I/O port H clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iophen{}; 
        namespace IophenValC{
        }
        ///I/O port D clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopden{}; 
        namespace IopdenValC{
        }
        ///IO port A clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopcen{}; 
        namespace IopcenValC{
        }
        ///IO port B clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iopben{}; 
        namespace IopbenValC{
        }
        ///IO port A clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iopaen{}; 
        namespace IopaenValC{
        }
    }
    namespace Noneahbenr{    ///<AHB peripheral clock enable
          register
        using Addr = Register::Address<0x40021030,0xfeeeeefe,0,unsigned>;
        ///Crypto clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> crypen{}; 
        namespace CrypenValC{
        }
        ///Random Number Generator clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rngen{}; 
        namespace RngenValC{
        }
        ///Touch Sensing clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> touchen{}; 
        namespace TouchenValC{
        }
        ///CRC clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcen{}; 
        namespace CrcenValC{
        }
        ///NVM interface clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mifen{}; 
        namespace MifenValC{
        }
        ///DMA clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable
          register
        using Addr = Register::Address<0x40021034,0xffbfad5a,0,unsigned>;
        ///DBG clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgen{}; 
        namespace DbgenValC{
        }
        ///USART1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        namespace Usart1enValC{
        }
        ///SPI1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        namespace Spi1enValC{
        }
        ///ADC clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adcen{}; 
        namespace AdcenValC{
        }
        ///MiFaRe Firewall clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mifien{}; 
        namespace MifienValC{
        }
        ///TIM22 timer clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim22en{}; 
        namespace Tim22enValC{
        }
        ///TIM21 timer clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim21en{}; 
        namespace Tim21enValC{
        }
        ///System configuration controller clock
              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        namespace SyscfgenValC{
        }
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable
          register
        using Addr = Register::Address<0x40021038,0x4719b5ee,0,unsigned>;
        ///Low power timer clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1en{}; 
        namespace Lptim1enValC{
        }
        ///DAC interface clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
        namespace DacenValC{
        }
        ///Power interface clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        namespace PwrenValC{
        }
        ///Clock recovery system clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crsen{}; 
        namespace CrsenValC{
        }
        ///USB clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usben{}; 
        namespace UsbenValC{
        }
        ///I2C2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        namespace I2c2enValC{
        }
        ///I2C1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        namespace I2c1enValC{
        }
        ///LPUART1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lpuart1en{}; 
        namespace Lpuart1enValC{
        }
        ///UART2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        namespace Usart2enValC{
        }
        ///SPI2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        namespace Spi2enValC{
        }
        ///Window watchdog clock enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        namespace WwdgenValC{
        }
        ///LCD clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcden{}; 
        namespace LcdenValC{
        }
        ///Timer 6 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        namespace Tim6enValC{
        }
        ///Timer2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        namespace Tim2enValC{
        }
    }
    namespace Noneiopsmen{    ///<GPIO clock enable in sleep mode
          register
        using Addr = Register::Address<0x4002103c,0xffffff70,0,unsigned>;
        ///IOPHSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iophsmen{}; 
        namespace IophsmenValC{
        }
        ///IOPDSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopdsmen{}; 
        namespace IopdsmenValC{
        }
        ///IOPCSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopcsmen{}; 
        namespace IopcsmenValC{
        }
        ///IOPBSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iopbsmen{}; 
        namespace IopbsmenValC{
        }
        ///IOPASMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iopasmen{}; 
        namespace IopasmenValC{
        }
    }
    namespace Noneahbsmenr{    ///<AHB peripheral clock enable in sleep mode
          register
        using Addr = Register::Address<0x40021040,0xfeeeecfe,0,unsigned>;
        ///Crypto clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> crypsmen{}; 
        namespace CrypsmenValC{
        }
        ///Random Number Generator clock enable
              during sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rngsmen{}; 
        namespace RngsmenValC{
        }
        ///Touch Sensing clock enable during sleep
              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> touchsmen{}; 
        namespace TouchsmenValC{
        }
        ///CRC clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcsmen{}; 
        namespace CrcsmenValC{
        }
        ///SRAM interface clock enable during sleep
              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sramsmen{}; 
        namespace SramsmenValC{
        }
        ///NVM interface clock enable during sleep
              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mifsmen{}; 
        namespace MifsmenValC{
        }
        ///DMA clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmasmen{}; 
        namespace DmasmenValC{
        }
    }
    namespace Noneapb2smenr{    ///<APB2 peripheral clock enable in sleep mode
          register
        using Addr = Register::Address<0x40021044,0xffbfadda,0,unsigned>;
        ///DBG clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgsmen{}; 
        namespace DbgsmenValC{
        }
        ///USART1 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1smen{}; 
        namespace Usart1smenValC{
        }
        ///SPI1 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1smen{}; 
        namespace Spi1smenValC{
        }
        ///ADC clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adcsmen{}; 
        namespace AdcsmenValC{
        }
        ///TIM22 timer clock enable during sleep
              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim22smen{}; 
        namespace Tim22smenValC{
        }
        ///TIM21 timer clock enable during sleep
              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim21smen{}; 
        namespace Tim21smenValC{
        }
        ///System configuration controller clock
              enable during sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgsmen{}; 
        namespace SyscfgsmenValC{
        }
    }
    namespace Noneapb1smenr{    ///<APB1 peripheral clock enable in sleep mode
          register
        using Addr = Register::Address<0x40021048,0x4719b5ee,0,unsigned>;
        ///Low power timer clock enable during
              sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1smen{}; 
        namespace Lptim1smenValC{
        }
        ///DAC interface clock enable during sleep
              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacsmen{}; 
        namespace DacsmenValC{
        }
        ///Power interface clock enable during
              sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrsmen{}; 
        namespace PwrsmenValC{
        }
        ///Clock recovery system clock enable
              during sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crssmen{}; 
        namespace CrssmenValC{
        }
        ///USB clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbsmen{}; 
        namespace UsbsmenValC{
        }
        ///I2C2 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2smen{}; 
        namespace I2c2smenValC{
        }
        ///I2C1 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1smen{}; 
        namespace I2c1smenValC{
        }
        ///LPUART1 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lpuart1smen{}; 
        namespace Lpuart1smenValC{
        }
        ///UART2 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2smen{}; 
        namespace Usart2smenValC{
        }
        ///SPI2 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2smen{}; 
        namespace Spi2smenValC{
        }
        ///Window watchdog clock enable during
              sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgsmen{}; 
        namespace WwdgsmenValC{
        }
        ///LCD clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lcdsmen{}; 
        namespace LcdsmenValC{
        }
        ///Timer 6 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6smen{}; 
        namespace Tim6smenValC{
        }
        ///Timer2 clock enable during sleep mode
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2smen{}; 
        namespace Tim2smenValC{
        }
    }
    namespace Noneccipr{    ///<Clock configuration register
        using Addr = Register::Address<0x4002104c,0xfbf3c3f0,0,unsigned>;
        ///48 MHz HSI48 clock source selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> hsi48msel{}; 
        namespace Hsi48mselValC{
        }
        ///Low Power Timer clock source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lptim1sel1{}; 
        namespace Lptim1sel1ValC{
        }
        ///LPTIM1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lptim1sel0{}; 
        namespace Lptim1sel0ValC{
        }
        ///I2C1 clock source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> i2c1sel1{}; 
        namespace I2c1sel1ValC{
        }
        ///I2C1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> i2c1sel0{}; 
        namespace I2c1sel0ValC{
        }
        ///LPUART1 clock source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lpuart1sel1{}; 
        namespace Lpuart1sel1ValC{
        }
        ///LPUART1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpuart1sel0{}; 
        namespace Lpuart1sel0ValC{
        }
        ///USART2 clock source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2sel1{}; 
        namespace Usart2sel1ValC{
        }
        ///USART2SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart2sel0{}; 
        namespace Usart2sel0ValC{
        }
        ///USART1 clock source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usart1sel1{}; 
        namespace Usart1sel1ValC{
        }
        ///USART1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usart1sel0{}; 
        namespace Usart1sel0ValC{
        }
    }
    namespace Nonecsr{    ///<Control and status register
        using Addr = Register::Address<0x40021050,0x00f080fc,0,unsigned>;
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
        ///OBLRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> oblrstf{}; 
        namespace OblrstfValC{
        }
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        namespace RmvfValC{
        }
        ///RTC software reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rtcrst{}; 
        namespace RtcrstValC{
        }
        ///RTC clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///RTC and LCD clock source selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        namespace RtcselValC{
        }
        ///CSS on LSE failure detection
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> csslsed{}; 
        namespace CsslsedValC{
        }
        ///CSSLSEON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csslseon{}; 
        namespace CsslseonValC{
        }
        ///LSEDRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        namespace LsedrvValC{
        }
        ///External low-speed oscillator bypass
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        namespace LsebypValC{
        }
        ///External low-speed oscillator ready
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdy{}; 
        namespace LserdyValC{
        }
        ///External low-speed oscillator enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lseon{}; 
        namespace LseonValC{
        }
        ///Internal low-speed oscillator ready
              bit
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
