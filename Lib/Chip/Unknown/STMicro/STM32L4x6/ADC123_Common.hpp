#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsr{
        using Addr = Register::Address<0x50040300,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADDRDY_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOSMP_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOS_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVR_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JEOC_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> JEOS_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AWD1_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AWD2_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AWD3_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> JQOVF_MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRDY_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EOSMP_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EOC_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EOS_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OVR_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> JEOC_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> JEOS_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AWD1_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AWD2_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AWD3_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> JQOVF_SLV; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x50040308,0xfe3c10e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMACFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> MDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CKMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VREFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> VBATEN; 
    }
    namespace Nonecdr{
        using Addr = Register::Address<0x5004030c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RDATA_SLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RDATA_MST; 
    }
}
