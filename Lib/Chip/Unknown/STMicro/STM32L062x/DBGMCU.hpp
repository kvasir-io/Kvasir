#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneidcode{
        using Addr = Register::Address<0x40015800,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DEV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REV_ID; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40015804,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_STANDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_SLEEP; 
    }
    namespace Noneapb1_fz{
        using Addr = Register::Address<0x40015808,0x7f9fe3ee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIMER2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBG_TIMER6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBG_RTC_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_IWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DBG_I2C1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBG_I2C2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBG_LPTIMER_STOP; 
    }
    namespace Noneapb2_fz{
        using Addr = Register::Address<0x4001580c,0xffffffbb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_TIMER21_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBG_TIMER22_STO; 
    }
}
