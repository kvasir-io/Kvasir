#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonegptm1_cntcfr{
        using Addr = Register::Address<0x4006f000,0xfefcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UEVDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UGDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DIR; 
    }
    namespace Nonegptm1_mdcfr{
        using Addr = Register::Address<0x4006f004,0xfef8f8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> MMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SPMSET; 
    }
    namespace Nonegptm1_trcfr{
        using Addr = Register::Address<0x4006f008,0xfefec0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETIPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETIPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ECME; 
    }
    namespace Nonegptm1_ctr{
        using Addr = Register::Address<0x4006f010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRBE; 
    }
    namespace Nonegptm1_ch0icfr{
        using Addr = Register::Address<0x4006f020,0x7ff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH0CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH0PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TI0SRC; 
    }
    namespace Nonegptm1_ch1icfr{
        using Addr = Register::Address<0x4006f024,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH1CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH1PSC; 
    }
    namespace Nonegptm1_ch2icfr{
        using Addr = Register::Address<0x4006f028,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH2CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH2PSC; 
    }
    namespace Nonegptm1_ch3icfr{
        using Addr = Register::Address<0x4006f02c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH3CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH3PSC; 
    }
    namespace Nonegptm1_ch0ocfr{
        using Addr = Register::Address<0x4006f040,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH0OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF0CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH0PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH0IMAE; 
    }
    namespace Nonegptm1_ch1ocfr{
        using Addr = Register::Address<0x4006f044,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH1OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF1CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH1PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH1IMAE; 
    }
    namespace Nonegptm1_ch2ocfr{
        using Addr = Register::Address<0x4006f048,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH2OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF2CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH2IMAE; 
    }
    namespace Nonegptm1_ch3ocfr{
        using Addr = Register::Address<0x4006f04c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH3OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF3CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH3PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH3IMAE; 
    }
    namespace Nonegptm1_chctr{
        using Addr = Register::Address<0x4006f050,0xffffffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3E; 
    }
    namespace Nonegptm1_chpolr{
        using Addr = Register::Address<0x4006f054,0xffffffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3P; 
    }
    namespace Nonegptm1_ictr{
        using Addr = Register::Address<0x4006f074,0xfffffaf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVIE; 
    }
    namespace Nonegptm1_evgr{
        using Addr = Register::Address<0x4006f078,0xfffffaf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEVG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVG; 
    }
    namespace Nonegptm1_intsr{
        using Addr = Register::Address<0x4006f07c,0xfffffa00>;
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
    namespace Nonegptm1_cntr{
        using Addr = Register::Address<0x4006f080,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTV; 
    }
    namespace Nonegptm1_pscr{
        using Addr = Register::Address<0x4006f084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSCV; 
    }
    namespace Nonegptm1_crr{
        using Addr = Register::Address<0x4006f088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRV; 
    }
    namespace Nonegptm1_ch0ccr{
        using Addr = Register::Address<0x4006f090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH0CCV; 
    }
    namespace Nonegptm1_ch1ccr{
        using Addr = Register::Address<0x4006f094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH1CCV; 
    }
    namespace Nonegptm1_ch2ccr{
        using Addr = Register::Address<0x4006f098,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH2CCV; 
    }
    namespace Nonegptm1_ch3ccr{
        using Addr = Register::Address<0x4006f09c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH3CCV; 
    }
}
