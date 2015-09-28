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
    namespace Noneevents_samplerdy{
        using Addr = Register::Address<0x40012100,0xffffffff>;
    }
    namespace Noneevents_reportrdy{
        using Addr = Register::Address<0x40012104,0xffffffff>;
    }
    namespace Noneevents_accof{
        using Addr = Register::Address<0x40012108,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40012200,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REPORTRDY_READCLRACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SAMPLERDY_STOP; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40012304,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SAMPLERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REPORTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACCOF; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40012308,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SAMPLERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REPORTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACCOF; 
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
        using Addr = Register::Address<0x40012508,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SAMPLEPER; 
    }
    namespace Nonesample{
        using Addr = Register::Address<0x4001250c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAMPLE; 
    }
    namespace Nonereportper{
        using Addr = Register::Address<0x40012510,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> REPORTPER; 
    }
    namespace Noneacc{
        using Addr = Register::Address<0x40012514,0xffffffff>;
    }
    namespace Noneaccread{
        using Addr = Register::Address<0x40012518,0xffffffff>;
    }
    namespace Nonepselled{
        using Addr = Register::Address<0x4001251c,0xffffffff>;
    }
    namespace Nonepsela{
        using Addr = Register::Address<0x40012520,0xffffffff>;
    }
    namespace Nonepselb{
        using Addr = Register::Address<0x40012524,0xffffffff>;
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
    namespace Nonepower{
        using Addr = Register::Address<0x40012ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
