#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40004010,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40004014,0xffffffff>;
    }
    namespace Nonetasks_suspend{
        using Addr = Register::Address<0x4000401c,0xffffffff>;
    }
    namespace Nonetasks_resume{
        using Addr = Register::Address<0x40004020,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x40004104,0xffffffff>;
    }
    namespace Noneevents_endrx{
        using Addr = Register::Address<0x40004110,0xffffffff>;
    }
    namespace Noneevents_endtx{
        using Addr = Register::Address<0x40004120,0xffffffff>;
    }
    namespace Noneevents_started{
        using Addr = Register::Address<0x4000414c,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40004304,0xfff7feed>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STARTED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40004308,0xfff7feed>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STARTED; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40004500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
    }
    namespace Nonefrequency{
        using Addr = Register::Address<0x40004524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FREQUENCY; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40004554,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPOL; 
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
