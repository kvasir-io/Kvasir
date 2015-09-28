#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40003010,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40003014,0xffffffff>;
    }
    namespace Nonetasks_suspend{
        using Addr = Register::Address<0x4000301c,0xffffffff>;
    }
    namespace Nonetasks_resume{
        using Addr = Register::Address<0x40003020,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x40003104,0xffffffff>;
    }
    namespace Noneevents_endrx{
        using Addr = Register::Address<0x40003110,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x40003118,0xffffffff>;
    }
    namespace Noneevents_endtx{
        using Addr = Register::Address<0x40003120,0xffffffff>;
    }
    namespace Noneevents_started{
        using Addr = Register::Address<0x4000314c,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40003200,0xfffdffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> END_START; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40003304,0xfff7fead>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STARTED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40003308,0xfff7fead>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STARTED; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40003500,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENABLE; 
    }
    namespace Nonefrequency{
        using Addr = Register::Address<0x40003524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FREQUENCY; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40003554,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPOL; 
    }
    namespace Noneorc{
        using Addr = Register::Address<0x400035c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ORC; 
    }
}
