#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace WDOG_stctrlh{
        using Addr = Register::Address<0x40053000,0xffff8380>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDOGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQRSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WINEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ALLOWUPDATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TESTWDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TESTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> BYTESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DISTESTWDOG; 
    }
    namespace WDOG_stctrll{
        using Addr = Register::Address<0x40053002,0xffff7fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTFLG; 
    }
    namespace WDOG_tovalh{
        using Addr = Register::Address<0x40053004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TOVALHIGH; 
    }
    namespace WDOG_tovall{
        using Addr = Register::Address<0x40053006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TOVALLOW; 
    }
    namespace WDOG_winh{
        using Addr = Register::Address<0x40053008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WINHIGH; 
    }
    namespace WDOG_winl{
        using Addr = Register::Address<0x4005300a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WINLOW; 
    }
    namespace WDOG_refresh{
        using Addr = Register::Address<0x4005300c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDOGREFRESH; 
    }
    namespace WDOG_unlock{
        using Addr = Register::Address<0x4005300e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDOGUNLOCK; 
    }
    namespace WDOG_tmrouth{
        using Addr = Register::Address<0x40053010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMEROUTHIGH; 
    }
    namespace WDOG_tmroutl{
        using Addr = Register::Address<0x40053012,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMEROUTLOW; 
    }
    namespace WDOG_rstcnt{
        using Addr = Register::Address<0x40053014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSTCNT; 
    }
    namespace WDOG_presc{
        using Addr = Register::Address<0x40053016,0xfffff8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRESCVAL; 
    }
}
