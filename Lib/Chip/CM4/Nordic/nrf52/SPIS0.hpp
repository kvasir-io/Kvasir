#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_acquire{
        using Addr = Register::Address<0x40003024,0xffffffff>;
    }
    namespace Nonetasks_release{
        using Addr = Register::Address<0x40003028,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x40003104,0xffffffff>;
    }
    namespace Noneevents_acquired{
        using Addr = Register::Address<0x40003128,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40003200,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_ACQUIRE; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40003304,0xfffffbfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACQUIRED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40003308,0xfffffbfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACQUIRED; 
    }
    namespace Nonesemstat{
        using Addr = Register::Address<0x40003400,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEMSTAT; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40003440,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVERREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVERFLOW; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40003500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40003554,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPOL; 
    }
    namespace Nonedef{
        using Addr = Register::Address<0x4000355c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DEF; 
    }
    namespace Noneorc{
        using Addr = Register::Address<0x400035c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ORC; 
    }
}
