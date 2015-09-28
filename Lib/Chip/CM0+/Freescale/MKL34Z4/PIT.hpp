#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PIT_mcr{
        using Addr = Register::Address<0x40037000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIS; 
    }
    namespace PIT_ltmr64h{
        using Addr = Register::Address<0x400370e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LTH; 
    }
    namespace PIT_ltmr64l{
        using Addr = Register::Address<0x400370e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LTL; 
    }
    namespace PIT_ldval0{
        using Addr = Register::Address<0x40037100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval1{
        using Addr = Register::Address<0x40037110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_cval0{
        using Addr = Register::Address<0x40037104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_cval1{
        using Addr = Register::Address<0x40037114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_tctrl0{
        using Addr = Register::Address<0x40037108,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT_tctrl1{
        using Addr = Register::Address<0x40037118,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT_tflg0{
        using Addr = Register::Address<0x4003710c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg1{
        using Addr = Register::Address<0x4003711c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
}
