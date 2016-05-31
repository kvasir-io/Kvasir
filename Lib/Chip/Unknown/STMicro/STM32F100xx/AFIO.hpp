#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Alternate function I/O
    namespace AfioEvcr{    ///<Event Control Register          (AFIO_EVCR)
        using Addr = Register::Address<0x40010000,0xffffff00,0x00000000,unsigned>;
        ///Pin selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pin{}; 
        ///Port selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> port{}; 
        ///Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace AfioMapr{    ///<AF remap and debug I/O configuration          register (AFIO_MAPR)
        using Addr = Register::Address<0x40010004,0xf8fe6000,0x00000000,unsigned>;
        ///SPI1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spi1Remap{}; 
        ///I2C1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c1Remap{}; 
        ///USART1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart1Remap{}; 
        ///USART2 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2Remap{}; 
        ///USART3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> usart3Remap{}; 
        ///TIM1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> tim1Remap{}; 
        ///TIM2 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tim2Remap{}; 
        ///TIM3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tim3Remap{}; 
        ///TIM4 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim4Remap{}; 
        ///Port D0/Port D1 mapping on              OSCIN/OSCOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd01Remap{}; 
        ///Set and cleared by              software
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim5ch4Iremap{}; 
        ///Serial wire JTAG              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swjCfg{}; 
    }
    namespace AfioExticr1{    ///<External interrupt configuration register 1          (AFIO_EXTICR1)
        using Addr = Register::Address<0x40010008,0xffff0000,0x00000000,unsigned>;
        ///EXTI0 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        ///EXTI1 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI2 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI3 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
    }
    namespace AfioExticr2{    ///<External interrupt configuration register 2          (AFIO_EXTICR2)
        using Addr = Register::Address<0x4001000c,0xffff0000,0x00000000,unsigned>;
        ///EXTI4 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        ///EXTI5 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI6 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI7 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
    }
    namespace AfioExticr3{    ///<External interrupt configuration register 3          (AFIO_EXTICR3)
        using Addr = Register::Address<0x40010010,0xffff0000,0x00000000,unsigned>;
        ///EXTI8 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        ///EXTI9 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI10 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI11 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
    }
    namespace AfioExticr4{    ///<External interrupt configuration register 4          (AFIO_EXTICR4)
        using Addr = Register::Address<0x40010014,0xffff0000,0x00000000,unsigned>;
        ///EXTI12 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        ///EXTI13 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI14 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI15 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
    }
    namespace AfioMapr2{    ///<AF remap and debug I/O configuration          register
        using Addr = Register::Address<0x4001001c,0xffffc0e0,0x00000000,unsigned>;
        ///TIM15 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim15Remap{}; 
        ///TIM16 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim16Remap{}; 
        ///TIM17 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim17Remap{}; 
        ///TIM13 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim13Remap{}; 
        ///TIM14 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tim14Remap{}; 
        ///NADV connect/disconnect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fsmcNadv{}; 
        ///CEC remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cecRemap{}; 
        ///TIM1 DMA remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim1DmaRemap{}; 
        ///TIM67_DAC DMA remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim67DacDmaRemap{}; 
        ///TIM12 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim12Remap{}; 
        ///Miscellaneous features              remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> miscRemap{}; 
    }
}
