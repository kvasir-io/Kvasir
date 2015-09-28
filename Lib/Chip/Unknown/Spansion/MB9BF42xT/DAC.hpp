#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedadr0{
        using Addr = Register::Address<0x40028000,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DA0; 
    }
    namespace Nonedacr0{
        using Addr = Register::Address<0x40028002,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DAE; 
    }
    namespace Nonedadr1{
        using Addr = Register::Address<0x40028004,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DA0; 
    }
    namespace Nonedacr1{
        using Addr = Register::Address<0x40028006,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DAE; 
    }
}
