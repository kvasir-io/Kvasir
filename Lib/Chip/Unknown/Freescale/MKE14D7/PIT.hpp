#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PIT_mcr{
        using Addr = Register::Address<0x40023000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIS; 
    }
    namespace PIT_ltmr64h{
        using Addr = Register::Address<0x400230e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LTH; 
    }
    namespace PIT_ltmr64l{
        using Addr = Register::Address<0x400230e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LTL; 
    }
    namespace PIT_ldval0{
        using Addr = Register::Address<0x40023100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval1{
        using Addr = Register::Address<0x40023110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval2{
        using Addr = Register::Address<0x40023120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval3{
        using Addr = Register::Address<0x40023130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_cval0{
        using Addr = Register::Address<0x40023104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_cval1{
        using Addr = Register::Address<0x40023114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_cval2{
        using Addr = Register::Address<0x40023124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_cval3{
        using Addr = Register::Address<0x40023134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_tctrl0{
        using Addr = Register::Address<0x40023108,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT_tctrl1{
        using Addr = Register::Address<0x40023118,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT_tctrl2{
        using Addr = Register::Address<0x40023128,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT_tctrl3{
        using Addr = Register::Address<0x40023138,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHN; 
    }
    namespace PIT_tflg0{
        using Addr = Register::Address<0x4002310c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg1{
        using Addr = Register::Address<0x4002311c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg2{
        using Addr = Register::Address<0x4002312c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg3{
        using Addr = Register::Address<0x4002313c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
}
