#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40012000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40012004,0xffffffff>;
    }
    namespace Nonetasks_readclracc{
        using Addr = Register::Address<0x40012008,0xffffffff>;
    }
    namespace Nonetasks_rdclracc{
        using Addr = Register::Address<0x4001200c,0xffffffff>;
    }
    namespace Nonetasks_rdclrdbl{
        using Addr = Register::Address<0x40012010,0xffffffff>;
    }
    namespace Noneevents_samplerdy{
        using Addr = Register::Address<0x40012100,0xffffffff>;
    }
    namespace Noneevents_reportrdy{
        using Addr = Register::Address<0x40012104,0xffffffff>;
    }
    namespace Noneevents_accof{
        using Addr = Register::Address<0x40012108,0xffffffff>;
    }
    namespace Noneevents_dblrdy{
        using Addr = Register::Address<0x4001210c,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x40012110,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40012200,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REPORTRDY_READCLRACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SAMPLERDY_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REPORTRDY_RDCLRACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REPORTRDY_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBLRDY_RDCLRDBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBLRDY_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAMPLERDY_READCLRACC; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40012304,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SAMPLERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REPORTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACCOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STOPPED; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40012308,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SAMPLERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REPORTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACCOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STOPPED; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40012500,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Noneledpol{
        using Addr = Register::Address<0x40012504,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LEDPOL; 
    }
    namespace Nonesampleper{
        using Addr = Register::Address<0x40012508,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SAMPLEPER; 
    }
    namespace Nonesample{
        using Addr = Register::Address<0x4001250c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAMPLE; 
    }
    namespace Nonereportper{
        using Addr = Register::Address<0x40012510,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REPORTPER; 
    }
    namespace Noneacc{
        using Addr = Register::Address<0x40012514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACC; 
    }
    namespace Noneaccread{
        using Addr = Register::Address<0x40012518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACCREAD; 
    }
    namespace Nonedbfen{
        using Addr = Register::Address<0x40012528,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBFEN; 
    }
    namespace Noneledpre{
        using Addr = Register::Address<0x40012540,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> LEDPRE; 
    }
    namespace Noneaccdbl{
        using Addr = Register::Address<0x40012544,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ACCDBL; 
    }
    namespace Noneaccdblread{
        using Addr = Register::Address<0x40012548,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ACCDBLREAD; 
    }
}
