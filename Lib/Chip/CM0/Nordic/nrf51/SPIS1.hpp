#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_acquire{
        using Addr = Register::Address<0x40004024,0xffffffff>;
    }
    namespace Nonetasks_release{
        using Addr = Register::Address<0x40004028,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x40004104,0xffffffff>;
    }
    namespace Noneevents_acquired{
        using Addr = Register::Address<0x40004128,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40004200,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_ACQUIRE; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40004304,0xfffffbfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACQUIRED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40004308,0xfffffbfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACQUIRED; 
    }
    namespace Nonesemstat{
        using Addr = Register::Address<0x40004400,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEMSTAT; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40004440,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVERREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVERFLOW; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40004500,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENABLE; 
    }
    namespace Nonepselsck{
        using Addr = Register::Address<0x40004508,0xffffffff>;
    }
    namespace Nonepselmiso{
        using Addr = Register::Address<0x4000450c,0xffffffff>;
    }
    namespace Nonepselmosi{
        using Addr = Register::Address<0x40004510,0xffffffff>;
    }
    namespace Nonepselcsn{
        using Addr = Register::Address<0x40004514,0xffffffff>;
    }
    namespace Nonerxdptr{
        using Addr = Register::Address<0x40004534,0xffffffff>;
    }
    namespace Nonemaxrx{
        using Addr = Register::Address<0x40004538,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MAXRX; 
    }
    namespace Noneamountrx{
        using Addr = Register::Address<0x4000453c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AMOUNTRX; 
    }
    namespace Nonetxdptr{
        using Addr = Register::Address<0x40004544,0xffffffff>;
    }
    namespace Nonemaxtx{
        using Addr = Register::Address<0x40004548,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MAXTX; 
    }
    namespace Noneamounttx{
        using Addr = Register::Address<0x4000454c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AMOUNTTX; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40004554,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPOL; 
    }
    namespace Nonedef{
        using Addr = Register::Address<0x4000455c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DEF; 
    }
    namespace Noneorc{
        using Addr = Register::Address<0x400045c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ORC; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40004ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
