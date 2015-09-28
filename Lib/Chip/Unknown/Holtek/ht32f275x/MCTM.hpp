#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemctm_cntcfr{
        using Addr = Register::Address<0x4002c000,0xfefcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UEV1DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UGDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DIR; 
    }
    namespace Nonemctm_mdcfr{
        using Addr = Register::Address<0x4002c004,0xfef8f8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> MMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SPMSET; 
    }
    namespace Nonemctm_trcfr{
        using Addr = Register::Address<0x4002c008,0xfefec0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETIPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETIPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ECME; 
    }
    namespace Nonemctm_ctr{
        using Addr = Register::Address<0x4002c010,0xfffefcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> COMPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COMUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CHCCDS; 
    }
    namespace Nonemctm_ch0icfr{
        using Addr = Register::Address<0x4002c020,0x7ff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH0CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH0PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TI0SRC; 
    }
    namespace Nonemctm_ch1icfr{
        using Addr = Register::Address<0x4002c024,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH1CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH1PSC; 
    }
    namespace Nonemctm_ch2icfr{
        using Addr = Register::Address<0x4002c028,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH2CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH2PSC; 
    }
    namespace Nonemctm_ch3icfr{
        using Addr = Register::Address<0x4002c02c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TI3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CH3CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> CH3PSC; 
    }
    namespace Nonemctm_ch0ocfr{
        using Addr = Register::Address<0x4002c040,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH0OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF0CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH0PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH0IMAE; 
    }
    namespace Nonemctm_ch1ocfr{
        using Addr = Register::Address<0x4002c044,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH1OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF1CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH1PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH1IMAE; 
    }
    namespace Nonemctm_ch2ocfr{
        using Addr = Register::Address<0x4002c048,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH2OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF2CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH2IMAE; 
    }
    namespace Nonemctm_ch3ocfr{
        using Addr = Register::Address<0x4002c04c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CH3OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REF3CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH3PRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH3IMAE; 
    }
    namespace Nonemctm_chctr{
        using Addr = Register::Address<0x4002c050,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH0NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH1NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH2NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3E; 
    }
    namespace Nonemctm_chpolr{
        using Addr = Register::Address<0x4002c054,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH0NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH2NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3P; 
    }
    namespace Nonemctm_chbrkcfr{
        using Addr = Register::Address<0x4002c06c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0OIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH0OISN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH1OIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH1OISN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH2OIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH2OISN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH3OIS; 
    }
    namespace Nonemctm_chbrkctr{
        using Addr = Register::Address<0x4002c070,0x00ccf0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHMOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHAOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LOCKLV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CHOSSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CHOSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CHDTG; 
    }
    namespace Nonemctm_dictr{
        using Addr = Register::Address<0x4002c074,0xf8f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEV1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UEV2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BRKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH0CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CH1CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH2CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH3CCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UEV1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> UEV2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TEVDE; 
    }
    namespace Nonemctm_evgr{
        using Addr = Register::Address<0x4002c078,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEV1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UEV2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BRKG; 
    }
    namespace Nonemctm_intsr{
        using Addr = Register::Address<0x4002c07c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3CCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH0OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH1OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH2OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH3OCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEV1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UEV2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TEVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BRKIF; 
    }
    namespace Nonemctm_cntr{
        using Addr = Register::Address<0x4002c080,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTV; 
    }
    namespace Nonemctm_pscr{
        using Addr = Register::Address<0x4002c084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSCV; 
    }
    namespace Nonemctm_crr{
        using Addr = Register::Address<0x4002c088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRV; 
    }
    namespace Nonemctm_repr{
        using Addr = Register::Address<0x4002c08c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REPV; 
    }
    namespace Nonemctm_ch0ccr{
        using Addr = Register::Address<0x4002c090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH0CCV; 
    }
    namespace Nonemctm_ch1ccr{
        using Addr = Register::Address<0x4002c094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH1CCV; 
    }
    namespace Nonemctm_ch2ccr{
        using Addr = Register::Address<0x4002c098,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH2CCV; 
    }
    namespace Nonemctm_ch3ccr{
        using Addr = Register::Address<0x4002c09c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CH3CCV; 
    }
}
