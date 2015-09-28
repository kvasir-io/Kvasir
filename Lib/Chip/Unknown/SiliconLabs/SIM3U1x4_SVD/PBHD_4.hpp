#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepb{
        using Addr = Register::Address<0x4002a3c0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PB; 
    }
    namespace Nonepbpin{
        using Addr = Register::Address<0x4002a3d0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PBPIN; 
    }
    namespace Nonepbmdsel{
        using Addr = Register::Address<0x4002a3e0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PBMDSEL; 
    }
    namespace Nonepbden{
        using Addr = Register::Address<0x4002a3f0,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PBNDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> PBPDEN; 
    }
    namespace Nonepbdrv{
        using Addr = Register::Address<0x4002a400,0xff10ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PBDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PBPUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PBLVMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PBSLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PBBIASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PBDRVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PBVTRKEN; 
    }
    namespace Nonepbilimit{
        using Addr = Register::Address<0x4002a410,0xff00ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PBILEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> NILIMIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> PILIMIT; 
    }
    namespace Nonepbfsel{
        using Addr = Register::Address<0x4002a430,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PB0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PB1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PB2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PB3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PB4SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> PB5SEL; 
    }
    namespace Nonepbss{
        using Addr = Register::Address<0x4002a440,0xfffcf000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PB0SSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PB1SSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PB2SSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PB3SSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PB4SSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PB5SSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SSMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PBSSSMD; 
    }
    namespace Nonepblock{
        using Addr = Register::Address<0x4002a450,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PBLOCK; 
    }
}
