#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfgr1{
        using Addr = Register::Address<0x40010000,0xfff0e0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> I2C_PB9_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> I2C_PB8_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2C_PB7_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> I2C_PB6_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIM17_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM16_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USART1_RX_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USART1_TX_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MEM_MODE; 
    }
    namespace Noneexticr1{
        using Addr = Register::Address<0x40010008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI0; 
    }
    namespace Noneexticr2{
        using Addr = Register::Address<0x4001000c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI4; 
    }
    namespace Noneexticr3{
        using Addr = Register::Address<0x40010010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI8; 
    }
    namespace Noneexticr4{
        using Addr = Register::Address<0x40010014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI12; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x40010018,0xfffffef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRAM_PEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVD_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRAM_PARITY_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCUP_LOCK; 
    }
}
