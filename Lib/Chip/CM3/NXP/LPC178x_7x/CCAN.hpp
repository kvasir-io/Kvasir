#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetxsr{
        using Addr = Register::Address<0x40040000,0xfffcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TBS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TBS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TCS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TCS2; 
    }
    namespace Nonerxsr{
        using Addr = Register::Address<0x40040004,0xfffcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DOS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DOS2; 
    }
    namespace Nonemsr{
        using Addr = Register::Address<0x40040008,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> E2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BS2; 
    }
}
