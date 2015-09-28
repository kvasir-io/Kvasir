#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_hfclkstart{
        using Addr = Register::Address<0x40000000,0xffffffff>;
    }
    namespace Nonetasks_hfclkstop{
        using Addr = Register::Address<0x40000004,0xffffffff>;
    }
    namespace Nonetasks_lfclkstart{
        using Addr = Register::Address<0x40000008,0xffffffff>;
    }
    namespace Nonetasks_lfclkstop{
        using Addr = Register::Address<0x4000000c,0xffffffff>;
    }
    namespace Nonetasks_cal{
        using Addr = Register::Address<0x40000010,0xffffffff>;
    }
    namespace Nonetasks_ctstart{
        using Addr = Register::Address<0x40000014,0xffffffff>;
    }
    namespace Nonetasks_ctstop{
        using Addr = Register::Address<0x40000018,0xffffffff>;
    }
    namespace Noneevents_hfclkstarted{
        using Addr = Register::Address<0x40000100,0xffffffff>;
    }
    namespace Noneevents_lfclkstarted{
        using Addr = Register::Address<0x40000104,0xffffffff>;
    }
    namespace Noneevents_done{
        using Addr = Register::Address<0x4000010c,0xffffffff>;
    }
    namespace Noneevents_ctto{
        using Addr = Register::Address<0x40000110,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40000304,0xffffffe4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HFCLKSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFCLKSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTTO; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40000308,0xffffffe4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HFCLKSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFCLKSTARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTTO; 
    }
    namespace Nonehfclkrun{
        using Addr = Register::Address<0x40000408,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS; 
    }
    namespace Nonehfclkstat{
        using Addr = Register::Address<0x4000040c,0xfffefffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATE; 
    }
    namespace Nonelfclkrun{
        using Addr = Register::Address<0x40000414,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS; 
    }
    namespace Nonelfclkstat{
        using Addr = Register::Address<0x40000418,0xfffefffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> STATE; 
    }
    namespace Nonelfclksrccopy{
        using Addr = Register::Address<0x4000041c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRC; 
    }
    namespace Nonelfclksrc{
        using Addr = Register::Address<0x40000518,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SRC; 
    }
    namespace Nonectiv{
        using Addr = Register::Address<0x40000538,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CTIV; 
    }
    namespace Nonetraceconfig{
        using Addr = Register::Address<0x4000055c,0xfffcfffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TRACEPORTSPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TRACEMUX; 
    }
}
