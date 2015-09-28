#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SMC_pmprot{
        using Addr = Register::Address<0x4007e000,0xffffffd5>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AVLLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ALLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AVLP; 
    }
    namespace SMC_pmctrl{
        using Addr = Register::Address<0x4007e001,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> STOPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> RUNM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPWUI; 
    }
    namespace SMC_vllsctrl{
        using Addr = Register::Address<0x4007e002,0xffffffd8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VLLSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PORPO; 
    }
    namespace SMC_pmstat{
        using Addr = Register::Address<0x4007e003,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PMSTAT; 
    }
}
