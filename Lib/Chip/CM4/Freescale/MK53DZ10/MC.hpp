#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MC_srsh{
        using Addr = Register::Address<0x4007e000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JTAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SW; 
    }
    namespace MC_srsl{
        using Addr = Register::Address<0x4007e001,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POR; 
    }
    namespace MC_pmprot{
        using Addr = Register::Address<0x4007e002,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AVLLS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AVLLS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AVLLS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ALLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AVLP; 
    }
    namespace MC_pmctrl{
        using Addr = Register::Address<0x4007e003,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LPLLSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> RUNM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPWUI; 
    }
}
