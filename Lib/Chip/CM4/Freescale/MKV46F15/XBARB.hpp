#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace XBARB_sel0{
        using Addr = Register::Address<0x4005a000,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL1; 
    }
    namespace XBARB_sel1{
        using Addr = Register::Address<0x4005a002,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL3; 
    }
    namespace XBARB_sel2{
        using Addr = Register::Address<0x4005a004,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL5; 
    }
    namespace XBARB_sel3{
        using Addr = Register::Address<0x4005a006,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL7; 
    }
    namespace XBARB_sel4{
        using Addr = Register::Address<0x4005a008,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL9; 
    }
    namespace XBARB_sel5{
        using Addr = Register::Address<0x4005a00a,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL11; 
    }
    namespace XBARB_sel6{
        using Addr = Register::Address<0x4005a00c,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL13; 
    }
    namespace XBARB_sel7{
        using Addr = Register::Address<0x4005a00e,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL15; 
    }
}
