#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectl{
        using Addr = Register::Address<0x40028000,0xf94fc0a7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> EDGESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> COMPSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> COMP_VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> COMP_VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EDGECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> COMPSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> COMPEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> HYS; 
    }
    namespace Nonelad{
        using Addr = Register::Address<0x40028004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> LADSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LADREF; 
    }
}
