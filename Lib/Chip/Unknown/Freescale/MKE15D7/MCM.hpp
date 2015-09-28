#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCM_plasc{
        using Addr = Register::Address<0xe0080008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ASC; 
    }
    namespace MCM_plamc{
        using Addr = Register::Address<0xe008000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AMC; 
    }
    namespace MCM_cr{
        using Addr = Register::Address<0xe008000c,0x88fffdff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRAMUAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRAMUWP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> SRAMLAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRAMLWP; 
    }
    namespace MCM_pid{
        using Addr = Register::Address<0xe0080030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PID; 
    }
}
