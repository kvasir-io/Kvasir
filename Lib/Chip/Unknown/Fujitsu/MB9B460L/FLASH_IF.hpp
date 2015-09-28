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
    namespace Nonefbfcr{
        using Addr = Register::Address<0x40000014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BE; 
    }
    namespace Noneficr{
        using Addr = Register::Address<0x40000020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HANGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYIE; 
    }
    namespace Nonefisr{
        using Addr = Register::Address<0x40000024,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HANGIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYIF; 
    }
    namespace Noneficlr{
        using Addr = Register::Address<0x40000028,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HANGIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYIC; 
    }
    namespace Nonecrtrmm{
        using Addr = Register::Address<0x40000100,0xffe0fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> TTRMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TRMM; 
    }
}
