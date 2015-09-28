#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0600,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0604,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0608,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c060c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0F2; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0628,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c062c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0UP; 
    }
    namespace Nonepgn{
        using Addr = Register::Address<0x400c0630,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0638,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PG0IE; 
    }
}
