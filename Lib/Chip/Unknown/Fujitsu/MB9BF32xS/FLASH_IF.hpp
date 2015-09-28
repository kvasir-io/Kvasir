#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefrwtr{
        using Addr = Register::Address<0x40000004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RWT; 
    }
    namespace Nonefstr{
        using Addr = Register::Address<0x40000008,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PGMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SERS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CERS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDY; 
    }
    namespace Noneficr{
        using Addr = Register::Address<0x40000020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HANGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYIE; 
    }
    namespace Nonefisr{
        using Addr = Register::Address<0x40000024,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HANGIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYIF; 
    }
    namespace Noneficlr{
        using Addr = Register::Address<0x40000028,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HANGC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYC; 
    }
    namespace Nonefstr1{
        using Addr = Register::Address<0x40000088,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PGMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SERS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CERS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDY; 
    }
    namespace Nonecrtrmm{
        using Addr = Register::Address<0x40000100,0xffe0fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> TTRMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TRMM; 
    }
}
