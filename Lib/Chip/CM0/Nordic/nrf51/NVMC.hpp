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
        using Addr = Register::Address<0x4001e508,0xffffffff>;
    }
    namespace Noneerasepcr1{
        using Addr = Register::Address<0x4001e508,0xffffffff>;
    }
    namespace Noneeraseall{
        using Addr = Register::Address<0x4001e50c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERASEALL; 
    }
    namespace Noneerasepcr0{
        using Addr = Register::Address<0x4001e510,0xffffffff>;
    }
    namespace Noneeraseuicr{
        using Addr = Register::Address<0x4001e514,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERASEUICR; 
    }
}
