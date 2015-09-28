#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AOI_bfcrt010{
        using Addr = Register::Address<0x4005b000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT0_AC; 
    }
    namespace AOI_bfcrt011{
        using Addr = Register::Address<0x4005b004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT0_AC; 
    }
    namespace AOI_bfcrt012{
        using Addr = Register::Address<0x4005b008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT0_AC; 
    }
    namespace AOI_bfcrt013{
        using Addr = Register::Address<0x4005b00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT1_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT1_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT1_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT1_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT0_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT0_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT0_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT0_AC; 
    }
    namespace AOI_bfcrt230{
        using Addr = Register::Address<0x4005b002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
    }
    namespace AOI_bfcrt231{
        using Addr = Register::Address<0x4005b006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
    }
    namespace AOI_bfcrt232{
        using Addr = Register::Address<0x4005b00a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
    }
    namespace AOI_bfcrt233{
        using Addr = Register::Address<0x4005b00e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PT3_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PT3_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PT3_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PT3_AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PT2_DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PT2_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PT2_BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PT2_AC; 
    }
}
