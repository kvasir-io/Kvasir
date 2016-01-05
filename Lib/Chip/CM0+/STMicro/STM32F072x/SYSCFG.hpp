#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration controller
    namespace SyscfgCfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x40010000,0x80c0e0fc,0,unsigned>;
        ///Memory mapping selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        ///ADC DMA remapping bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adcDmaRmp{}; 
        ///USART1_TX DMA remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usart1TxDmaRmp{}; 
        ///USART1_RX DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usart1RxDmaRmp{}; 
        ///TIM16 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim16DmaRmp{}; 
        ///TIM17 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim17DmaRmp{}; 
        ///Fast Mode Plus (FM plus) driving              capability activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2cPb6Fm{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cPb7Fm{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> i2cPb8Fm{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> i2cPb9Fm{}; 
        ///FM+ driving capability activation for              I2C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2c1FmPlus{}; 
        ///FM+ driving capability activation for              I2C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c2FmPlus{}; 
        ///SPI2 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spi2DmaRmp{}; 
        ///USART2 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usart2DmaRmp{}; 
        ///USART3 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> usart3DmaRmp{}; 
        ///I2C1 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> i2c1DmaRmp{}; 
        ///TIM1 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tim1DmaRmp{}; 
        ///TIM2 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tim2DmaRmp{}; 
        ///TIM3 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tim3DmaRmp{}; 
    }
    namespace SyscfgExticr1{    ///<external interrupt configuration register          1
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI 3 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI 2 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI 1 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI 0 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace SyscfgExticr2{    ///<external interrupt configuration register          2
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI 7 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI 6 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI 5 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI 4 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace SyscfgExticr3{    ///<external interrupt configuration register          3
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI 11 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI 10 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI 9 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI 8 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace SyscfgExticr4{    ///<external interrupt configuration register          4
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI 15 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI 14 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI 13 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI 12 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
    namespace SyscfgCfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40010018,0xfffffef8,0,unsigned>;
        ///SRAM parity flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sramPef{}; 
        ///PVD lock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdLock{}; 
        ///SRAM parity lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sramParityLock{}; 
        ///Cortex-M0 LOCKUP bit enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> locupLock{}; 
    }
}
