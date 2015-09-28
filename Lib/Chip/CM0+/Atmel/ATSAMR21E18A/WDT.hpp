#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace WDT_clear{
        using Addr = Register::Address<0x40001008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLEAR; 
    }
    namespace WDT_config{
        using Addr = Register::Address<0x40001001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> WINDOW; 
    }
    namespace WDT_ctrl{
        using Addr = Register::Address<0x40001000,0xffffff79>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ALWAYSON; 
    }
    namespace WDT_ewctrl{
        using Addr = Register::Address<0x40001002,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EWOFFSET; 
    }
    namespace WDT_intenclr{
        using Addr = Register::Address<0x40001004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EW; 
    }
    namespace WDT_intenset{
        using Addr = Register::Address<0x40001005,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EW; 
    }
    namespace WDT_intflag{
        using Addr = Register::Address<0x40001006,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EW; 
    }
    namespace WDT_status{
        using Addr = Register::Address<0x40001007,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCBUSY; 
    }
}
