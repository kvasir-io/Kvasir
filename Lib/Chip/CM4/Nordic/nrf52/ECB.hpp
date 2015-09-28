#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_startecb{
        using Addr = Register::Address<0x4000e000,0xffffffff>;
    }
    namespace Nonetasks_stopecb{
        using Addr = Register::Address<0x4000e004,0xffffffff>;
    }
    namespace Noneevents_endecb{
        using Addr = Register::Address<0x4000e100,0xffffffff>;
    }
    namespace Noneevents_errorecb{
        using Addr = Register::Address<0x4000e104,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4000e304,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDECB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERRORECB; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4000e308,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDECB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERRORECB; 
    }
    namespace Noneecbdataptr{
        using Addr = Register::Address<0x4000e504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECBDATAPTR; 
    }
}
