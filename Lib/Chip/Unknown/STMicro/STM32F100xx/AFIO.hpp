#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Alternate function I/O
    namespace Noneevcr{    ///<Event Control Register
          (AFIO_EVCR)
        using Addr = Register::Address<0x40010000,0xffffff00,0,unsigned>;
        ///Pin selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pin{}; 
        namespace PinValC{
        }
        ///Port selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> port{}; 
        namespace PortValC{
        }
        ///Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
        namespace EvoeValC{
        }
    }
    namespace Nonemapr{    ///<AF remap and debug I/O configuration
          register (AFIO_MAPR)
        using Addr = Register::Address<0x40010004,0xf8fe6000,0,unsigned>;
        ///SPI1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spi1Remap{}; 
        namespace Spi1remapValC{
        }
        ///I2C1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c1Remap{}; 
        namespace I2c1remapValC{
        }
        ///USART1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart1Remap{}; 
        namespace Usart1remapValC{
        }
        ///USART2 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2Remap{}; 
        namespace Usart2remapValC{
        }
        ///USART3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> usart3Remap{}; 
        namespace Usart3remapValC{
        }
        ///TIM1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> tim1Remap{}; 
        namespace Tim1remapValC{
        }
        ///TIM2 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tim2Remap{}; 
        namespace Tim2remapValC{
        }
        ///TIM3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tim3Remap{}; 
        namespace Tim3remapValC{
        }
        ///TIM4 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim4Remap{}; 
        namespace Tim4remapValC{
        }
        ///Port D0/Port D1 mapping on
              OSCIN/OSCOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd01Remap{}; 
        namespace Pd01remapValC{
        }
        ///Set and cleared by
              software
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim5ch4Iremap{}; 
        namespace Tim5ch4iremapValC{
        }
        ///Serial wire JTAG
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> swjCfg{}; 
        namespace SwjcfgValC{
        }
    }
    namespace Noneexticr1{    ///<External interrupt configuration register 1
          (AFIO_EXTICR1)
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI0 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        namespace Exti0ValC{
        }
        ///EXTI1 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        namespace Exti1ValC{
        }
        ///EXTI2 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        namespace Exti2ValC{
        }
        ///EXTI3 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        namespace Exti3ValC{
        }
    }
    namespace Noneexticr2{    ///<External interrupt configuration register 2
          (AFIO_EXTICR2)
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI4 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        namespace Exti4ValC{
        }
        ///EXTI5 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        namespace Exti5ValC{
        }
        ///EXTI6 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        namespace Exti6ValC{
        }
        ///EXTI7 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        namespace Exti7ValC{
        }
    }
    namespace Noneexticr3{    ///<External interrupt configuration register 3
          (AFIO_EXTICR3)
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI8 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        namespace Exti8ValC{
        }
        ///EXTI9 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        namespace Exti9ValC{
        }
        ///EXTI10 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        namespace Exti10ValC{
        }
        ///EXTI11 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        namespace Exti11ValC{
        }
    }
    namespace Noneexticr4{    ///<External interrupt configuration register 4
          (AFIO_EXTICR4)
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI12 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        namespace Exti12ValC{
        }
        ///EXTI13 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        namespace Exti13ValC{
        }
        ///EXTI14 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        namespace Exti14ValC{
        }
        ///EXTI15 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        namespace Exti15ValC{
        }
    }
    namespace Nonemapr2{    ///<AF remap and debug I/O configuration
          register
        using Addr = Register::Address<0x4001001c,0xffffc0e0,0,unsigned>;
        ///TIM15 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim15Remap{}; 
        namespace Tim15remapValC{
        }
        ///TIM16 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim16Remap{}; 
        namespace Tim16remapValC{
        }
        ///TIM17 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim17Remap{}; 
        namespace Tim17remapValC{
        }
        ///TIM13 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim13Remap{}; 
        namespace Tim13remapValC{
        }
        ///TIM14 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tim14Remap{}; 
        namespace Tim14remapValC{
        }
        ///NADV connect/disconnect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fsmcNadv{}; 
        namespace FsmcnadvValC{
        }
        ///CEC remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cecRemap{}; 
        namespace CecremapValC{
        }
        ///TIM1 DMA remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim1DmaRemap{}; 
        namespace Tim1dmaremapValC{
        }
        ///TIM67_DAC DMA remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim67DacDmaRemap{}; 
        namespace Tim67dacdmaremapValC{
        }
        ///TIM12 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim12Remap{}; 
        namespace Tim12remapValC{
        }
        ///Miscellaneous features
              remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> miscRemap{}; 
        namespace MiscremapValC{
        }
    }
}
