#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40028000,0xfffff0c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SINITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> POLYSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BBREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> ORDER; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40028010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonerdata{
        using Addr = Register::Address<0x40028020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDATA; 
    }
}
