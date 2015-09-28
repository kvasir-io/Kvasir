#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonenfctla{
        using Addr = Register::Address<0x40026100,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AINMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AINLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AINNWS; 
    }
    namespace Nonenfctlb{
        using Addr = Register::Address<0x40026104,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BINMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BINLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BINNWS; 
    }
    namespace Nonenfctlz{
        using Addr = Register::Address<0x40026108,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ZINMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ZINLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ZINNWS; 
    }
}
