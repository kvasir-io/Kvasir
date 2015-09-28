#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneready{
        using Addr = Register::Address<0x4001e400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4001e504,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WEN; 
    }
    namespace Noneerasepage{
        using Addr = Register::Address<0x4001e508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ERASEPAGE; 
    }
    namespace Noneerasepcr1{
        using Addr = Register::Address<0x4001e508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ERASEPCR1; 
    }
    namespace Noneeraseall{
        using Addr = Register::Address<0x4001e50c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERASEALL; 
    }
    namespace Noneerasepcr0{
        using Addr = Register::Address<0x4001e510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ERASEPCR0; 
    }
    namespace Noneeraseuicr{
        using Addr = Register::Address<0x4001e514,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERASEUICR; 
    }
    namespace Noneicachecnf{
        using Addr = Register::Address<0x4001e540,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CACHEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CACHEPROFEN; 
    }
    namespace Noneihit{
        using Addr = Register::Address<0x4001e548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HITS; 
    }
    namespace Noneimiss{
        using Addr = Register::Address<0x4001e54c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MISSES; 
    }
}
