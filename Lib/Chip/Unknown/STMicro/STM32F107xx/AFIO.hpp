#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneevcr{
        using Addr = Register::Address<0x40010000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EVOE; 
    }
    namespace Nonemapr{
        using Addr = Register::Address<0x40010004,0x881e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPI1_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2C1_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART1_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART2_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USART3_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TIM1_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIM2_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> TIM3_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIM4_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> CAN1_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD01_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM5CH4_IREMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ETH_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CAN2_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MII_RMII_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SWJ_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SPI3_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TIM2ITR1_IREMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PTP_PPS_REMAP; 
    }
    namespace Noneexticr1{
        using Addr = Register::Address<0x40010008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI3; 
    }
    namespace Noneexticr2{
        using Addr = Register::Address<0x4001000c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI7; 
    }
    namespace Noneexticr3{
        using Addr = Register::Address<0x40010010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI11; 
    }
    namespace Noneexticr4{
        using Addr = Register::Address<0x40010014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI15; 
    }
    namespace Nonemapr2{
        using Addr = Register::Address<0x4001001c,0xfffff81f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM9_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIM10_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIM11_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIM13_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIM14_REMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FSMC_NADV; 
    }
}
