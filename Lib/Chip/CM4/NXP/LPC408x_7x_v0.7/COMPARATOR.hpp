#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40020000,0xffff0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMP_PD_IREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CMP_PD_VBG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CMP_VTEMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CMP_TEMPSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMP_ROSCCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMP_EXT_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMP_T0CAP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMP_T0CAP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMP_T1CAP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMP_T1CAP3; 
    }
    namespace Nonectrl0{
        using Addr = Register::Address<0x40020004,0xe0800880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMP0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP0_OE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP0_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CMP0_VM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMP0_VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMP0_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> CMP0_HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMP0_INTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMP0_INTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> CMP0_INTEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP0_INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> CMP0_VLADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CMP0_VLADREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CMP0_VSEL; 
    }
    namespace Nonectrl1{
        using Addr = Register::Address<0x40020008,0xe0800880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMP1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP1_OE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CMP1_VM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMP1_VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMP1_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> CMP1_HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMP1_INTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMP1_INTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> CMP1_INTEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP1_INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> CMP1_VLADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CMP1_VLADREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CMP1_VSel; 
    }
}
