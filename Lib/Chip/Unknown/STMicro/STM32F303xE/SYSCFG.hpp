#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfgr1{
        using Addr = Register::Address<0x40010000,0x0300861c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MEM_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB_IT_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIM1_ITR_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DAC_TRIG_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC24_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM16_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIM17_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIM6_DAC1_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIM7_DAC2_DMA_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> I2C_PB6_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2C_PB7_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> I2C_PB8_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> I2C_PB9_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> I2C1_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C2_FM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ENCODER_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> FPU_IT; 
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
        using Addr = Register::Address<0x40010018,0xfffffee8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCUP_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRAM_PARITY_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PVD_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BYP_ADD_PAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRAM_PEF; 
    }
    namespace Nonercr{
        using Addr = Register::Address<0x40010004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PAGE0_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PAGE1_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PAGE2_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PAGE3_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PAGE4_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PAGE5_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PAGE6_WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PAGE7_WP; 
    }
}
