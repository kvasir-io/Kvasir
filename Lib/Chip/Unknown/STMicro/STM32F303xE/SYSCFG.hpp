#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonecfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x40010000,0x0300861c,0,unsigned>;
        ///Memory mapping selection               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        namespace MemmodeValC{
        }
        ///USB interrupt remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbItRmp{}; 
        namespace UsbitrmpValC{
        }
        ///Timer 1 ITR3 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim1ItrRmp{}; 
        namespace Tim1itrrmpValC{
        }
        ///DAC trigger remap (when TSEL =               001)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dacTrigRmp{}; 
        namespace DactrigrmpValC{
        }
        ///ADC24 DMA remapping bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc24DmaRmp{}; 
        namespace Adc24dmarmpValC{
        }
        ///TIM16 DMA request remapping               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim16DmaRmp{}; 
        namespace Tim16dmarmpValC{
        }
        ///TIM17 DMA request remapping               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim17DmaRmp{}; 
        namespace Tim17dmarmpValC{
        }
        ///TIM6 and DAC1 DMA request remapping               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim6Dac1DmaRmp{}; 
        namespace Tim6dac1dmarmpValC{
        }
        ///TIM7 and DAC2 DMA request remapping               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim7Dac2DmaRmp{}; 
        namespace Tim7dac2dmarmpValC{
        }
        ///Fast Mode Plus (FM+) driving capability               activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2cPb6Fm{}; 
        namespace I2cpb6fmValC{
        }
        ///Fast Mode Plus (FM+) driving capability               activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cPb7Fm{}; 
        namespace I2cpb7fmValC{
        }
        ///Fast Mode Plus (FM+) driving capability               activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> i2cPb8Fm{}; 
        namespace I2cpb8fmValC{
        }
        ///Fast Mode Plus (FM+) driving capability               activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> i2cPb9Fm{}; 
        namespace I2cpb9fmValC{
        }
        ///I2C1 Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2c1Fm{}; 
        namespace I2c1fmValC{
        }
        ///I2C2 Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c2Fm{}; 
        namespace I2c2fmValC{
        }
        ///Encoder mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> encoderMode{}; 
        namespace EncodermodeValC{
        }
        ///Interrupt enable bits from               FPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> fpuIt{}; 
        namespace FpuitValC{
        }
    }
    namespace Noneexticr1{    ///<external interrupt configuration register           1
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI 3 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        namespace Exti3ValC{
        }
        ///EXTI 2 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        namespace Exti2ValC{
        }
        ///EXTI 1 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        namespace Exti1ValC{
        }
        ///EXTI 0 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        namespace Exti0ValC{
        }
    }
    namespace Noneexticr2{    ///<external interrupt configuration register           2
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI 7 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        namespace Exti7ValC{
        }
        ///EXTI 6 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        namespace Exti6ValC{
        }
        ///EXTI 5 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        namespace Exti5ValC{
        }
        ///EXTI 4 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        namespace Exti4ValC{
        }
    }
    namespace Noneexticr3{    ///<external interrupt configuration register           3
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI 11 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        namespace Exti11ValC{
        }
        ///EXTI 10 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        namespace Exti10ValC{
        }
        ///EXTI 9 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        namespace Exti9ValC{
        }
        ///EXTI 8 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        namespace Exti8ValC{
        }
    }
    namespace Noneexticr4{    ///<external interrupt configuration register           4
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI 15 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        namespace Exti15ValC{
        }
        ///EXTI 14 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        namespace Exti14ValC{
        }
        ///EXTI 13 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        namespace Exti13ValC{
        }
        ///EXTI 12 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        namespace Exti12ValC{
        }
    }
    namespace Nonecfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40010018,0xfffffee8,0,unsigned>;
        ///Cortex-M0 LOCKUP bit enable               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> locupLock{}; 
        namespace LocuplockValC{
        }
        ///SRAM parity lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sramParityLock{}; 
        namespace SramparitylockValC{
        }
        ///PVD lock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdLock{}; 
        namespace PvdlockValC{
        }
        ///Bypass address bit 29 in parity               calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bypAddPar{}; 
        namespace BypaddparValC{
        }
        ///SRAM parity flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sramPef{}; 
        namespace SrampefValC{
        }
    }
    namespace Nonercr{    ///<CCM SRAM protection register
        using Addr = Register::Address<0x40010004,0xffffff00,0,unsigned>;
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> page0Wp{}; 
        namespace Page0wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> page1Wp{}; 
        namespace Page1wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> page2Wp{}; 
        namespace Page2wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> page3Wp{}; 
        namespace Page3wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> page4Wp{}; 
        namespace Page4wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> page5Wp{}; 
        namespace Page5wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> page6Wp{}; 
        namespace Page6wpValC{
        }
        ///CCM SRAM page write protection               bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> page7Wp{}; 
        namespace Page7wpValC{
        }
    }
}
