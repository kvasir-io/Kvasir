#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4001c004,0xffffffff>;
    }
    namespace Nonetasks_seqstart0{
        using Addr = Register::Address<0x4001c008,0xffffffff>;
    }
    namespace Nonetasks_seqstart1{
        using Addr = Register::Address<0x4001c00c,0xffffffff>;
    }
    namespace Nonetasks_nextstep{
        using Addr = Register::Address<0x4001c010,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x4001c104,0xffffffff>;
    }
    namespace Noneevents_seqstarted0{
        using Addr = Register::Address<0x4001c108,0xffffffff>;
    }
    namespace Noneevents_seqstarted1{
        using Addr = Register::Address<0x4001c10c,0xffffffff>;
    }
    namespace Noneevents_seqend0{
        using Addr = Register::Address<0x4001c110,0xffffffff>;
    }
    namespace Noneevents_seqend1{
        using Addr = Register::Address<0x4001c114,0xffffffff>;
    }
    namespace Noneevents_pwmperiodend{
        using Addr = Register::Address<0x4001c118,0xffffffff>;
    }
    namespace Noneevents_loopsdone{
        using Addr = Register::Address<0x4001c11c,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x4001c200,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEQEND0_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SEQEND1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOOPSDONE_SEQSTART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LOOPSDONE_SEQSTART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOOPSDONE_STOP; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x4001c300,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEQSTARTED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEQSTARTED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEQEND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SEQEND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMPERIODEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPSDONE; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4001c304,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEQSTARTED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEQSTARTED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEQEND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SEQEND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMPERIODEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPSDONE; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4001c308,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEQSTARTED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEQSTARTED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEQEND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SEQEND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMPERIODEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPSDONE; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x4001c500,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x4001c504,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDOWN; 
    }
    namespace Nonecountertop{
        using Addr = Register::Address<0x4001c508,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> COUNTERTOP; 
    }
    namespace Noneprescaler{
        using Addr = Register::Address<0x4001c50c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRESCALER; 
    }
    namespace Nonedecoder{
        using Addr = Register::Address<0x4001c510,0xfffffef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MODE; 
    }
    namespace Noneloop{
        using Addr = Register::Address<0x4001c514,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
}
