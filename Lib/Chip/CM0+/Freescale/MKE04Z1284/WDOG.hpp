#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace WDOG_cs1{
        using Addr = Register::Address<0x40052000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> TST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UPDATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN; 
    }
    namespace WDOG_cs2{
        using Addr = Register::Address<0x40052001,0xffffff2c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WIN; 
    }
    namespace WDOG_cnt{
        using Addr = Register::Address<0x40052002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace WDOG_cnth{
        using Addr = Register::Address<0x40052002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CNTHIGH; 
    }
    namespace WDOG_cntl{
        using Addr = Register::Address<0x40052003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CNTLOW; 
    }
    namespace WDOG_toval{
        using Addr = Register::Address<0x40052004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TOVAL; 
    }
    namespace WDOG_tovalh{
        using Addr = Register::Address<0x40052004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TOVALHIGH; 
    }
    namespace WDOG_tovall{
        using Addr = Register::Address<0x40052005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TOVALLOW; 
    }
    namespace WDOG_win{
        using Addr = Register::Address<0x40052006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WIN; 
    }
    namespace WDOG_winh{
        using Addr = Register::Address<0x40052006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WINHIGH; 
    }
    namespace WDOG_winl{
        using Addr = Register::Address<0x40052007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WINLOW; 
    }
}
