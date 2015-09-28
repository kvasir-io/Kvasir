#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_pmprot{
        using Addr = Register::Address<0x40056000,0xffffffdf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AVLP; 
    }
    namespace SMC_pmctrl{
        using Addr = Register::Address<0x40056001,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> STOPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOPA; 
    }
    namespace SMC_pmstat{
        using Addr = Register::Address<0x40056003,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VLPS; 
    }
}
