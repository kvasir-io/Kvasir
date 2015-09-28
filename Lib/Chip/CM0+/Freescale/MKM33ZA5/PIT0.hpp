#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PIT0_mcr{
        using Addr = Register::Address<0x4002d000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIS; 
    }
    namespace PIT0_ldval0{
        using Addr = Register::Address<0x4002d100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT0_ldval1{
        using Addr = Register::Address<0x4002d110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT0_cval0{
        using Addr = Register::Address<0x4002d104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT0_cval1{
        using Addr = Register::Address<0x4002d114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT0_tctrl0{
        using Addr = Register::Address<0x4002d108,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT0_tctrl1{
        using Addr = Register::Address<0x4002d118,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT0_tflg0{
        using Addr = Register::Address<0x4002d10c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT0_tflg1{
        using Addr = Register::Address<0x4002d11c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
}
