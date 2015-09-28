#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TMR2_comp1{
        using Addr = Register::Address<0x40059000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPARISON_1; 
    }
    namespace TMR2_comp2{
        using Addr = Register::Address<0x40059002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPARISON_2; 
    }
    namespace TMR2_capt{
        using Addr = Register::Address<0x40059004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTURE; 
    }
    namespace TMR2_load{
        using Addr = Register::Address<0x40059006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LOAD; 
    }
    namespace TMR2_hold{
        using Addr = Register::Address<0x40059008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HOLD; 
    }
    namespace TMR2_cntr{
        using Addr = Register::Address<0x4005900a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNTER; 
    }
    namespace TMR2_ctrl{
        using Addr = Register::Address<0x4005900c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> OUTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> COINIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ONCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> SCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CM; 
    }
    namespace TMR2_sctrl{
        using Addr = Register::Address<0x4005900e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FORCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EEOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CAPTURE_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INPUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IEFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TCFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TCF; 
    }
    namespace TMR2_cmpld1{
        using Addr = Register::Address<0x40059010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPARATOR_LOAD_1; 
    }
    namespace TMR2_cmpld2{
        using Addr = Register::Address<0x40059012,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPARATOR_LOAD_2; 
    }
    namespace TMR2_csctrl{
        using Addr = Register::Address<0x40059014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TCF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCF1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCF2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ROC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ALT_LOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FAULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DBG_EN; 
    }
    namespace TMR2_filt{
        using Addr = Register::Address<0x40059016,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FILT_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FILT_CNT; 
    }
}
