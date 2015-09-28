#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneid{
        using Addr = Register::Address<0x40005000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RFH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> GAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IDE; 
    }
    namespace Nonetsvmcf{
        using Addr = Register::Address<0x40005008,0x0000ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TSV; 
    }
    namespace Nonedl{
        using Addr = Register::Address<0x40005010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> D0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> D1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> D2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> D3; 
    }
    namespace Nonedh{
        using Addr = Register::Address<0x40005018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> D4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> D5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> D6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> D7; 
    }
}
