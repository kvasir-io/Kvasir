#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40028000,0xffff90e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SINITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> POLYSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BBREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ASEEDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ASEEDSEL; 
    }
    namespace Nonepoly{
        using Addr = Register::Address<0x40028010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POLY; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40028020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonerdata{
        using Addr = Register::Address<0x40028030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDATA; 
    }
    namespace Nonebrdata{
        using Addr = Register::Address<0x40028040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BRDATA; 
    }
    namespace Nonescontrol{
        using Addr = Register::Address<0x40028050,0xf003ff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDIRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SPERISEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,18)> SADDR; 
    }
}
