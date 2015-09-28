#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PIT1_mcr{
        using Addr = Register::Address<0x4002e000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIS; 
    }
    namespace PIT1_ldval0{
        using Addr = Register::Address<0x4002e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT1_ldval1{
        using Addr = Register::Address<0x4002e110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT1_cval0{
        using Addr = Register::Address<0x4002e104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT1_cval1{
        using Addr = Register::Address<0x4002e114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT1_tctrl0{
        using Addr = Register::Address<0x4002e108,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT1_tctrl1{
        using Addr = Register::Address<0x4002e118,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT1_tflg0{
        using Addr = Register::Address<0x4002e10c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT1_tflg1{
        using Addr = Register::Address<0x4002e11c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
}
