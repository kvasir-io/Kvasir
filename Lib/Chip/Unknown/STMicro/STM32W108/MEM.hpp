#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneramprotr1{
        using Addr = Register::Address<0x40005000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT1; 
    }
    namespace Noneramprotr2{
        using Addr = Register::Address<0x40005004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT2; 
    }
    namespace Noneramprotr3{
        using Addr = Register::Address<0x40005008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT3; 
    }
    namespace Noneramprotr4{
        using Addr = Register::Address<0x4000500c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT4; 
    }
    namespace Noneramprotr5{
        using Addr = Register::Address<0x40005010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT5; 
    }
    namespace Noneramprotr6{
        using Addr = Register::Address<0x40005014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT6; 
    }
    namespace Noneramprotr7{
        using Addr = Register::Address<0x40005018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT7; 
    }
    namespace Noneramprotr8{
        using Addr = Register::Address<0x4000501c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAMPROT8; 
    }
    namespace Nonedmaprotr1{
        using Addr = Register::Address<0x40005020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ADDRESS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,14)> OFFSET; 
    }
    namespace Nonedmaprotr2{
        using Addr = Register::Address<0x40005024,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CHANNEL; 
    }
    namespace Noneramcr{
        using Addr = Register::Address<0x40005028,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WEN; 
    }
}
