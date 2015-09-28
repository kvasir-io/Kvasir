#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedbgmcu_idcode{
        using Addr = Register::Address<0xe0042000,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DEV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REV_ID; 
    }
    namespace Nonedbgmcu_cr{
        using Addr = Register::Address<0xe0042004,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_STANDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRACE_IOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TRACE_MODE; 
    }
    namespace Nonedbgmcu_apb1_fz{
        using Addr = Register::Address<0xe0042008,0xff1fe3f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIM2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_TIM3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_TIM4_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBG_TIM5_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBG_RTC_Stop; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_IWDEG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DBG_I2C1_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBG_I2C2_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DBG_I2C3SMBUS_TIMEOUT; 
    }
    namespace Nonedbgmcu_apb2_fz{
        using Addr = Register::Address<0xe004200c,0xfff8fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIM1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBG_TIM9_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBG_TIM10_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBG_TIM11_STOP; 
    }
}
