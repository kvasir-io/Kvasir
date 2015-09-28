#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x4001d000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4001d004,0xffffffff>;
    }
    namespace Noneevents_started{
        using Addr = Register::Address<0x4001d100,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x4001d104,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x4001d108,0xffffffff>;
    }
    namespace Noneinten{
        using Addr = Register::Address<0x4001d300,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4001d304,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4001d308,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x4001d500,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Nonepdmclkctrl{
        using Addr = Register::Address<0x4001d504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FREQ; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x4001d508,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EDGE; 
    }
    namespace Nonegainl{
        using Addr = Register::Address<0x4001d518,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> GAINL; 
    }
    namespace Nonegainr{
        using Addr = Register::Address<0x4001d51c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GAINR; 
    }
}
