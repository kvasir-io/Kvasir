#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonegptm0_cntcfr{
        using Addr = Register::Address<0x4006e000,0xfefcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UEVDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UGDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DIR; 
    }
    namespace Nonegptm0_mdcfr{
        using Addr = Register::Address<0x4006e004,0xfef8f8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> MMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SPMSET; 
    }
    namespace Nonegptm0_trcfr{
        using Addr = Register::Address<0x4006e008,0xfefec0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETIPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETIPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ECME; 
    }
    namespace Nonegptm0_ctr{
        using Addr = Register::Address<0x4006e010,0xfffefffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CHCCDS; 
    }
    namespace Nonegptm0_ch0icfr{
        using Addr = Register::Address<0x4006e020,0x7ff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH0CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH0PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TI0SRC; 
    }
    namespace Nonegptm0_ch1icfr{
        using Addr = Register::Address<0x4006e024,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH1CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH1PSC; 
    }
    namespace Nonegptm0_ch2icfr{
        using Addr = Register::Address<0x4006e028,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH2CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH2PSC; 
    }
    namespace Nonegptm0_ch3icfr{
        using Addr = Register::Address<0x4006e02c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH3CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH3PSC; 
    }
    namespace Nonegptm0_ch0ocfr{
        using Addr = Register::Address<0x4006e040,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH0OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF0CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH0PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH0IMAE; 
    }
    namespace Nonegptm0_ch1ocfr{
        using Addr = Register::Address<0x4006e044,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH1OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF1CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH1PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH1IMAE; 
    }
    namespace Nonegptm0_ch2ocfr{
        using Addr = Register::Address<0x4006e048,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH2OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF2CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH2IMAE; 
    }
    namespace Nonegptm0_ch3ocfr{
        using Addr = Register::Address<0x4006e04c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH3OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF3CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH3PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH3IMAE; 
    }
    namespace Nonegptm0_chctr{
        using Addr = Register::Address<0x4006e050,0xffffffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3E; 
    }
    namespace Nonegptm0_chpolr{
        using Addr = Register::Address<0x4006e054,0xffffffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3P; 
    }
    namespace Nonegptm0_dictr{
        using Addr = Register::Address<0x4006e074,0xfaf0faf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH0CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CH1CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH2CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH3CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UEVDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TEVDE; 
    }
    namespace Nonegptm0_evgr{
        using Addr = Register::Address<0x4006e078,0xfffffaf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEVG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVG; 
    }
    namespace Nonegptm0_intsr{
        using Addr = Register::Address<0x4006e07c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH0OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH1OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH2OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH3OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVIF; 
    }
    namespace Nonegptm0_cntr{
        using Addr = Register::Address<0x4006e080,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTV; 
    }
    namespace Nonegptm0_pscr{
        using Addr = Register::Address<0x4006e084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSCV; 
    }
    namespace Nonegptm0_crr{
        using Addr = Register::Address<0x4006e088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRV; 
    }
    namespace Nonegptm0_ch0ccr{
        using Addr = Register::Address<0x4006e090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH0CCV; 
    }
    namespace Nonegptm0_ch1ccr{
        using Addr = Register::Address<0x4006e094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH1CCV; 
    }
    namespace Nonegptm0_ch2ccr{
        using Addr = Register::Address<0x4006e098,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH2CCV; 
    }
    namespace Nonegptm0_ch3ccr{
        using Addr = Register::Address<0x4006e09c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH3CCV; 
    }
}
