#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40007000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40007004,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x40007100,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40007304,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> END; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40007308,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> END; 
    }
    namespace Nonebusy{
        using Addr = Register::Address<0x40007400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSY; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40007500,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ENABLE; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40007504,0xfffc0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> INPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> EXTREFSEL; 
    }
    namespace Noneresult{
        using Addr = Register::Address<0x40007508,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> RESULT; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40007ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
