#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace OPAMP0_c0{
        using Addr = Register::Address<0x400f5000,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN; 
    }
    namespace OPAMP0_c1{
        using Addr = Register::Address<0x400f5001,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AMPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> AMPRF; 
    }
    namespace OPAMP0_c2{
        using Addr = Register::Address<0x400f5002,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AMPNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AMPPSEL; 
    }
}
