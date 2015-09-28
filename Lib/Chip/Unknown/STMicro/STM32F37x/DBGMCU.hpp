#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneidcode{
        using Addr = Register::Address<0xe0042000,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DEV_ID; 
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
    namespace Noneapb1fz{
        using Addr = Register::Address<0xe0042008,0xfd9fe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIM2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_TIM3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_TIM4_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBG_TIM5_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBG_TIM6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBG_TIM7_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBG_TIM12_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBG_TIM13_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBG_TIMER14_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DBG_TIM18_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBG_RTC_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_IWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DBG_CAN_STOP; 
    }
    namespace Noneapb2fz{
        using Addr = Register::Address<0xe004200c,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_TIM15_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBG_TIM16_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBG_TIM17_STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBG_TIM19_STOP; 
    }
}
