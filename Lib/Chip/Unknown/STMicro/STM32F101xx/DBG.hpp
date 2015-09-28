#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneidcode{
        using Addr = Register::Address<0xe0042000,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DEV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REV_ID; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0xe0042004,0xf0224018>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_STANDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRACE_IOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TRACE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBG_IWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBG_TIM1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_TIM2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_TIM3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DBG_TIM4_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBG_I2C1_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBG_I2C2_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBG_TIM5_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DBG_TIM6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DBG_TIM7_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBG_TIM15_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DBG_TIM16_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DBG_TIM17_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DBG_TIM12_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DBG_TIM13_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DBG_TIM14_STOP; 
    }
}
