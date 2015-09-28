#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneidcode{
        using Addr = Register::Address<0x40015800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DEV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> DIV_ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> REV_ID; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40015804,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG_STANDBY; 
    }
    namespace Noneapblfz{
        using Addr = Register::Address<0x40015808,0xffdfe2ec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBG_TIMER2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBG_TIMER3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBG_TIMER6_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBG_TIMER14_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBG_RTC_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_WWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBG_IWDG_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1_SMBUS_TIMEOUT; 
    }
    namespace Noneapbhfz{
        using Addr = Register::Address<0x4001580c,0xfff8f7ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBG_TIMER1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBG_TIMER15_STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBG_TIMER16_STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DBG_TIMER17_STO; 
    }
}
