#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneclk{
        using Addr = Register::Address<0x44067000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ADCLK; 
    }
    namespace Nonecr0{
        using Addr = Register::Address<0x44067004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADRST; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x44067008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MODEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BIASEN; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x4406700c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADS; 
    }
    namespace Nonecr3{
        using Addr = Register::Address<0x44067010,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REPEAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADSYNC; 
    }
    namespace Nonecr4{
        using Addr = Register::Address<0x44067014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSGAIN; 
    }
    namespace Noneadj{
        using Addr = Register::Address<0x44067018,0x0000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> OFFSET; 
    }
    namespace Nonest{
        using Addr = Register::Address<0x4406701c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOCF; 
    }
    namespace Noneres{
        using Addr = Register::Address<0x44067020,0x000000fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> ADR; 
    }
}
