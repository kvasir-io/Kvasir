#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneidcode{
        using Addr = Register::Address<0xe0042000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DEV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REV_ID; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0xe0042004,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_STANDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRACE_IOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TRACE_MODE; 
    }
    namespace Noneapb1_fzr1{
        using Addr = Register::Address<0xe0042008,0x7d1fe3c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIMER2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_TIM3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_TIM4_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBG_TIM5_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBG_TIMER6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBG_TIM7_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBG_RTC_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_IWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DBG_I2C1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBG_I2C2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DBG_I2C3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DBG_CAN_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBG_LPTIMER_STOP; 
    }
    namespace Noneapb1_fzr2{
        using Addr = Register::Address<0xe004200c,0xffffffdf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBG_LPTIM2_STOP; 
    }
    namespace Noneapb2_fzr{
        using Addr = Register::Address<0xe0042010,0xfff8d7ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_TIM1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DBG_TIM8_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBG_TIM15_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBG_TIM16_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBG_TIM17_STOP; 
    }
}
