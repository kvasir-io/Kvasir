#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefaszr{
        using Addr = Register::Address<0x40000000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ASZ; 
    }
    namespace Nonefrwtr{
        using Addr = Register::Address<0x40000004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RWT; 
    }
    namespace Nonefstr{
        using Addr = Register::Address<0x40000008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDY; 
    }
    namespace Nonefsyndn{
        using Addr = Register::Address<0x40000010,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SD; 
    }
    namespace Nonecrtrmm{
        using Addr = Register::Address<0x40000100,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TRMM; 
    }
}
