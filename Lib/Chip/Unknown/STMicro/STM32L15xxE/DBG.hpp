#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedbgmcu_idcode{
        using Addr = Register::Address<0xe0042000,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DEV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REV_ID; 
    }
    namespace Nonedbgmcu_cr{
        using Addr = Register::Address<0xe0042004,0xffe0ff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_STANDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRACE_IOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TRACE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBG_I2C2_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBG_TIM8_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBG_TIM5_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DBG_TIM6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DBG_TIM7_STOP; 
    }
    namespace Nonedbgmcu_apb1_fz{
        using Addr = Register::Address<0xe0042008,0xf91fe600>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIM2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_TIM3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_TIM4_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBG_TIM5_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBG_TIM6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBG_TIM7_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBG_TIM12_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBG_TIM13_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBG_TIM14_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_IWDEG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DBG_J2C1_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBG_J2C2_SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DBG_J2C3SMBUS_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DBG_CAN1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DBG_CAN2_STOP; 
    }
    namespace Nonedbgmcu_apb2_fz{
        using Addr = Register::Address<0xe004200c,0xfff8fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIM1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_TIM8_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBG_TIM9_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBG_TIM10_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBG_TIM11_STOP; 
    }
}
