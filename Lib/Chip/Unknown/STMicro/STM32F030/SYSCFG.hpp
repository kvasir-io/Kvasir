#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonecfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x40010000,0x80c0e0fc,0,unsigned>;
        ///Memory mapping selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        namespace MemmodeValC{
        }
        ///ADC DMA remapping bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adcDmaRmp{}; 
        namespace AdcdmarmpValC{
        }
        ///USART1_TX DMA remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usart1TxDmaRmp{}; 
        namespace Usart1txdmarmpValC{
        }
        ///USART1_RX DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usart1RxDmaRmp{}; 
        namespace Usart1rxdmarmpValC{
        }
        ///TIM16 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim16DmaRmp{}; 
        namespace Tim16dmarmpValC{
        }
        ///TIM17 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim17DmaRmp{}; 
        namespace Tim17dmarmpValC{
        }
        ///Fast Mode Plus (FM plus) driving
              capability activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2cPb6Fm{}; 
        namespace I2cpb6fmValC{
        }
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cPb7Fm{}; 
        namespace I2cpb7fmValC{
        }
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> i2cPb8Fm{}; 
        namespace I2cpb8fmValC{
        }
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> i2cPb9Fm{}; 
        namespace I2cpb9fmValC{
        }
        ///FM+ driving capability activation for
              I2C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2c1FmPlus{}; 
        namespace I2c1fmplusValC{
        }
        ///FM+ driving capability activation for
              I2C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c2FmPlus{}; 
        namespace I2c2fmplusValC{
        }
        ///SPI2 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spi2DmaRmp{}; 
        namespace Spi2dmarmpValC{
        }
        ///USART2 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usart2DmaRmp{}; 
        namespace Usart2dmarmpValC{
        }
        ///USART3 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> usart3DmaRmp{}; 
        namespace Usart3dmarmpValC{
        }
        ///I2C1 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> i2c1DmaRmp{}; 
        namespace I2c1dmarmpValC{
        }
        ///TIM1 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tim1DmaRmp{}; 
        namespace Tim1dmarmpValC{
        }
        ///TIM2 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tim2DmaRmp{}; 
        namespace Tim2dmarmpValC{
        }
        ///TIM3 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tim3DmaRmp{}; 
        namespace Tim3dmarmpValC{
        }
    }
    namespace Noneexticr1{    ///<external interrupt configuration register
          1
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
    namespace Noneexticr2{    ///<external interrupt configuration register
          2
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
    namespace Noneexticr3{    ///<external interrupt configuration register
          3
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
    namespace Noneexticr4{    ///<external interrupt configuration register
          4
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
        using Addr = Register::Address<0x40010018,0xfffffef8,0,unsigned>;
        ///SRAM parity flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sramPef{}; 
        namespace SrampefValC{
        }
        ///PVD lock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdLock{}; 
        namespace PvdlockValC{
        }
        ///SRAM parity lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sramParityLock{}; 
        namespace SramparitylockValC{
        }
        ///Cortex-M0 LOCKUP bit enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> locupLock{}; 
        namespace LocuplockValC{
        }
    }
}
