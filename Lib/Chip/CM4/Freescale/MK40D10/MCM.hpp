#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCM_plasc{
        using Addr = Register::Address<0xe0080008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ASC; 
    }
    namespace MCM_plamc{
        using Addr = Register::Address<0xe008000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AMC; 
    }
    namespace MCM_cr{
        using Addr = Register::Address<0xe008000c,0x88ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRAMUAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SRAMUWP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> SRAMLAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRAMLWP; 
    }
    namespace MCM_isr{
        using Addr = Register::Address<0xe0080010,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DHREQ; 
    }
    namespace MCM_etbcc{
        using Addr = Register::Address<0xe0080014,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CNTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> RSPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RLRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ITDIS; 
    }
    namespace MCM_etbrl{
        using Addr = Register::Address<0xe0080018,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> RELOAD; 
    }
    namespace MCM_etbcnt{
        using Addr = Register::Address<0xe008001c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> COUNTER; 
    }
    namespace MCM_pid{
        using Addr = Register::Address<0xe0080030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PID; 
    }
}
