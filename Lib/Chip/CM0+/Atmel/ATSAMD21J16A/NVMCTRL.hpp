#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace NVMCTRL_addr{
        using Addr = Register::Address<0x4100401c,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> ADDR; 
    }
    namespace NVMCTRL_ctrla{
        using Addr = Register::Address<0x41004000,0xffff0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CMDEX; 
    }
    namespace NVMCTRL_ctrlb{
        using Addr = Register::Address<0x41004004,0xfff8fc61>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> RWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MANW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SLEEPPRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> READMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CACHEDIS; 
    }
    namespace NVMCTRL_intenclr{
        using Addr = Register::Address<0x4100400c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERROR; 
    }
    namespace NVMCTRL_intenset{
        using Addr = Register::Address<0x41004010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERROR; 
    }
    namespace NVMCTRL_intflag{
        using Addr = Register::Address<0x41004014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERROR; 
    }
    namespace NVMCTRL_lock{
        using Addr = Register::Address<0x41004020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LOCK; 
    }
    namespace NVMCTRL_param{
        using Addr = Register::Address<0x41004008,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NVMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> PSZ; 
    }
    namespace NVMCTRL_status{
        using Addr = Register::Address<0x41004018,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PROGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LOCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NVME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SB; 
    }
}
