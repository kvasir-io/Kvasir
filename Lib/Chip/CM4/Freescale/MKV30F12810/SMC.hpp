#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_pmprot{
        using Addr = Register::Address<0x4007e000,0xffffff55>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AVLLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ALLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AVLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AHSRUN; 
    }
    namespace SMC_pmctrl{
        using Addr = Register::Address<0x4007e001,0xffffff90>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> STOPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> RUNM; 
    }
    namespace SMC_stopctrl{
        using Addr = Register::Address<0x4007e002,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LLSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PORPO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PSTOPO; 
    }
    namespace SMC_pmstat{
        using Addr = Register::Address<0x4007e003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PMSTAT; 
    }
}
