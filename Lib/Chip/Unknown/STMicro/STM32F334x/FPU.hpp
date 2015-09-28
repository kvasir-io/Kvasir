#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecpacr{
        using Addr = Register::Address<0xe000ed88,0xffaf8aaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CP11; 
    }
    namespace Nonefpccr{
        using Addr = Register::Address<0xe000ef34,0x3ffffe84>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSPACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> THREAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HFRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MMRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BFRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MONRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> LSPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ASPEN; 
    }
    namespace Nonefpcar{
        using Addr = Register::Address<0xe000ef38,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> ADDRESS; 
    }
    namespace Nonefpdscr{
        using Addr = Register::Address<0xe000ef3c,0xf83fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> RMode; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AHP; 
    }
    namespace Nonemvfr0{
        using Addr = Register::Address<0xe000ef40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> A_SIMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> Single_precision; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> Double_precision; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FP_exception_trapping; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> Divide; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> Square_root; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> Short_vectors; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FP_rounding_modes; 
    }
    namespace Nonemvfr1{
        using Addr = Register::Address<0xe000ef44,0x00ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FtZ_mode; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> D_NaN_mode; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FP_HPFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FP_fused_MAC; 
    }
}
