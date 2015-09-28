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
    namespace MCM_placr{
        using Addr = Register::Address<0xe008000c,0xfffffdff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARB; 
    }
    namespace MCM_iscr{
        using Addr = Register::Address<0xe0080010,0x60ff60f1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DHREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FIOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FDZC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FOFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FUFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FIXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FIDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FIOCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FDZCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FOFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FUFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FIXCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FIDCE; 
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
