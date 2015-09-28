#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x4000f000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4000f008,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x4000f100,0xffffffff>;
    }
    namespace Noneevents_resolved{
        using Addr = Register::Address<0x4000f104,0xffffffff>;
    }
    namespace Noneevents_notresolved{
        using Addr = Register::Address<0x4000f108,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4000f304,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESOLVED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NOTRESOLVED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4000f308,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESOLVED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NOTRESOLVED; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4000f400,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> STATUS; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x4000f500,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ENABLE; 
    }
    namespace Nonenirk{
        using Addr = Register::Address<0x4000f504,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> NIRK; 
    }
    namespace Noneirkptr{
        using Addr = Register::Address<0x4000f508,0xffffffff>;
    }
    namespace Noneaddrptr{
        using Addr = Register::Address<0x4000f510,0xffffffff>;
    }
    namespace Nonescratchptr{
        using Addr = Register::Address<0x4000f514,0xffffffff>;
    }
    namespace Nonepower{
        using Addr = Register::Address<0x4000fffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
