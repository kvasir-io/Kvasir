#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace XBAR_sel0{
        using Addr = Register::Address<0x40055000,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL1; 
    }
    namespace XBAR_sel1{
        using Addr = Register::Address<0x40055002,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL3; 
    }
    namespace XBAR_sel2{
        using Addr = Register::Address<0x40055004,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL5; 
    }
    namespace XBAR_sel3{
        using Addr = Register::Address<0x40055006,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL7; 
    }
    namespace XBAR_sel4{
        using Addr = Register::Address<0x40055008,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL9; 
    }
    namespace XBAR_sel5{
        using Addr = Register::Address<0x4005500a,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL11; 
    }
    namespace XBAR_sel6{
        using Addr = Register::Address<0x4005500c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL13; 
    }
    namespace XBAR_sel7{
        using Addr = Register::Address<0x4005500e,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL15; 
    }
    namespace XBAR_sel8{
        using Addr = Register::Address<0x40055010,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL17; 
    }
    namespace XBAR_sel9{
        using Addr = Register::Address<0x40055012,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL19; 
    }
    namespace XBAR_sel10{
        using Addr = Register::Address<0x40055014,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL21; 
    }
    namespace XBAR_sel11{
        using Addr = Register::Address<0x40055016,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL23; 
    }
    namespace XBAR_sel12{
        using Addr = Register::Address<0x40055018,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL25; 
    }
    namespace XBAR_sel13{
        using Addr = Register::Address<0x4005501a,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL27; 
    }
    namespace XBAR_sel14{
        using Addr = Register::Address<0x4005501c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL29; 
    }
    namespace XBAR_sel15{
        using Addr = Register::Address<0x4005501e,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEL30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SEL31; 
    }
    namespace XBAR_sel16{
        using Addr = Register::Address<0x40055020,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL32; 
    }
    namespace XBAR_ctrl0{
        using Addr = Register::Address<0x40055022,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STS0; 
    }
}
