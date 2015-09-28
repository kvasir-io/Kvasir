#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PIT_mcr{
        using Addr = Register::Address<0x40037000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDIS; 
    }
    namespace PIT_ldval0{
        using Addr = Register::Address<0x40037100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval1{
        using Addr = Register::Address<0x40037110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval2{
        using Addr = Register::Address<0x40037120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSV; 
    }
    namespace PIT_ldval3{
        using Addr = Register::Address<0x40037130,0x00000000>;
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
    namespace PIT_cval2{
        using Addr = Register::Address<0x40037124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_cval3{
        using Addr = Register::Address<0x40037134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TVL; 
    }
    namespace PIT_tctrl0{
        using Addr = Register::Address<0x40037108,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
    }
    namespace PIT_tctrl1{
        using Addr = Register::Address<0x40037118,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
    }
    namespace PIT_tctrl2{
        using Addr = Register::Address<0x40037128,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
    }
    namespace PIT_tctrl3{
        using Addr = Register::Address<0x40037138,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE; 
    }
    namespace PIT_tflg0{
        using Addr = Register::Address<0x4003710c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg1{
        using Addr = Register::Address<0x4003711c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg2{
        using Addr = Register::Address<0x4003712c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
    namespace PIT_tflg3{
        using Addr = Register::Address<0x4003713c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
    }
}
