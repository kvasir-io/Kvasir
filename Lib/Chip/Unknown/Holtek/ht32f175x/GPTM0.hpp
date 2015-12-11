#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPTM0
    namespace Nonegptm0Cntcfr{    ///<GPTM0_CNTCFR
        using Addr = Register::Address<0x4006e000,0xfefcfcfc,0,unsigned>;
        ///UEVDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uevdis{}; 
        ///UGDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ugdis{}; 
        ///CKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckdiv{}; 
        ///CMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> cmsel{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace Nonegptm0Mdcfr{    ///<GPTM0_MDCFR
        using Addr = Register::Address<0x4006e004,0xfef8f8fe,0,unsigned>;
        ///TSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        ///SMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> smsel{}; 
        ///MMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mmsel{}; 
        ///SPMSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spmset{}; 
    }
    namespace Nonegptm0Trcfr{    ///<GPTM0_TRCFR
        using Addr = Register::Address<0x4006e008,0xfefec0f0,0,unsigned>;
        ///TRSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trsel{}; 
        ///ETF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        ///ETIPSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etipsc{}; 
        ///ETIPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etipol{}; 
        ///ECME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ecme{}; 
    }
    namespace Nonegptm0Ctr{    ///<GPTM0_CTR
        using Addr = Register::Address<0x4006e010,0xfffefffc,0,unsigned>;
        ///TME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tme{}; 
        ///CRBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crbe{}; 
        ///CHCCDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chccds{}; 
    }
    namespace Nonegptm0Ch0icfr{    ///<GPTM0_CH0ICFR
        using Addr = Register::Address<0x4006e020,0x7ff0fff0,0,unsigned>;
        ///TI0F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti0f{}; 
        ///CH0CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch0ccs{}; 
        ///CH0PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch0psc{}; 
        ///TI0SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ti0src{}; 
    }
    namespace Nonegptm0Ch1icfr{    ///<GPTM0_CH1ICFR
        using Addr = Register::Address<0x4006e024,0xfff0fff0,0,unsigned>;
        ///TI1F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti1f{}; 
        ///CH1CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch1ccs{}; 
        ///CH1PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch1psc{}; 
    }
    namespace Nonegptm0Ch2icfr{    ///<GPTM0_CH2ICFR
        using Addr = Register::Address<0x4006e028,0xfff0fff0,0,unsigned>;
        ///TI2F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti2f{}; 
        ///CH2CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch2ccs{}; 
        ///CH2PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch2psc{}; 
    }
    namespace Nonegptm0Ch3icfr{    ///<GPTM0_CH3ICFR
        using Addr = Register::Address<0x4006e02c,0xfff0fff0,0,unsigned>;
        ///TI3F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti3f{}; 
        ///CH3CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch3ccs{}; 
        ///CH3PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch3psc{}; 
    }
    namespace Nonegptm0Ch0ocfr{    ///<GPTM0_CH0OCFR
        using Addr = Register::Address<0x4006e040,0xffffffc0,0,unsigned>;
        ///CH0OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch0om{}; 
        ///REF0CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref0ce{}; 
        ///CH0PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0pre{}; 
        ///CH0IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch0imae{}; 
    }
    namespace Nonegptm0Ch1ocfr{    ///<GPTM0_CH1OCFR
        using Addr = Register::Address<0x4006e044,0xffffffc0,0,unsigned>;
        ///CH1OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch1om{}; 
        ///REF1CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref1ce{}; 
        ///CH1PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch1pre{}; 
        ///CH1IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1imae{}; 
    }
    namespace Nonegptm0Ch2ocfr{    ///<GPTM0_CH2OCFR
        using Addr = Register::Address<0x4006e048,0xffffffc0,0,unsigned>;
        ///CH2OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch2om{}; 
        ///REF2CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref2ce{}; 
        ///CH2PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2pre{}; 
        ///CH2IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2imae{}; 
    }
    namespace Nonegptm0Ch3ocfr{    ///<GPTM0_CH3OCFR
        using Addr = Register::Address<0x4006e04c,0xffffffc0,0,unsigned>;
        ///CH3OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch3om{}; 
        ///REF3CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref3ce{}; 
        ///CH3PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch3pre{}; 
        ///CH3IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch3imae{}; 
    }
    namespace Nonegptm0Chctr{    ///<GPTM0_CHCTR
        using Addr = Register::Address<0x4006e050,0xffffffaa,0,unsigned>;
        ///CH0E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0e{}; 
        ///CH1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1e{}; 
        ///CH2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2e{}; 
        ///CH3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3e{}; 
    }
    namespace Nonegptm0Chpolr{    ///<GPTM0_CHPOLR
        using Addr = Register::Address<0x4006e054,0xffffffaa,0,unsigned>;
        ///CH0P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0p{}; 
        ///CH1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1p{}; 
        ///CH2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2p{}; 
        ///CH3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3p{}; 
    }
    namespace Nonegptm0Dictr{    ///<GPTM0_DICTR
        using Addr = Register::Address<0x4006e074,0xfaf0faf0,0,unsigned>;
        ///CH0CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccie{}; 
        ///CH1CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccie{}; 
        ///CH2CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccie{}; 
        ///CH3CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccie{}; 
        ///UEVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevie{}; 
        ///TEVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevie{}; 
        ///CH0CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ch0ccde{}; 
        ///CH1CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ch1ccde{}; 
        ///CH2CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ch2ccde{}; 
        ///CH3CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ch3ccde{}; 
        ///UEVDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uevde{}; 
        ///TEVDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tevde{}; 
    }
    namespace Nonegptm0Evgr{    ///<GPTM0_EVGR
        using Addr = Register::Address<0x4006e078,0xfffffaf0,0,unsigned>;
        ///CH0CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccg{}; 
        ///CH1CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccg{}; 
        ///CH2CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccg{}; 
        ///CH3CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccg{}; 
        ///UEVG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevg{}; 
        ///TEVG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevg{}; 
    }
    namespace Nonegptm0Intsr{    ///<GPTM0_INTSR
        using Addr = Register::Address<0x4006e07c,0xfffffa00,0,unsigned>;
        ///CH0CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccif{}; 
        ///CH1CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccif{}; 
        ///CH2CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccif{}; 
        ///CH3CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccif{}; 
        ///CH0OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0ocf{}; 
        ///CH1OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1ocf{}; 
        ///CH2OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch2ocf{}; 
        ///CH3OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch3ocf{}; 
        ///UEVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevif{}; 
        ///TEVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevif{}; 
    }
    namespace Nonegptm0Cntr{    ///<GPTM0_CNTR
        using Addr = Register::Address<0x4006e080,0xffff0000,0,unsigned>;
        ///CNTV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntv{}; 
    }
    namespace Nonegptm0Pscr{    ///<GPTM0_PSCR
        using Addr = Register::Address<0x4006e084,0xffff0000,0,unsigned>;
        ///PSCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pscv{}; 
    }
    namespace Nonegptm0Crr{    ///<GPTM0_CRR
        using Addr = Register::Address<0x4006e088,0xffff0000,0,unsigned>;
        ///CRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crv{}; 
    }
    namespace Nonegptm0Ch0ccr{    ///<GPTM0_CH0CCR
        using Addr = Register::Address<0x4006e090,0xffff0000,0,unsigned>;
        ///CH0CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch0ccv{}; 
    }
    namespace Nonegptm0Ch1ccr{    ///<GPTM0_CH1CCR
        using Addr = Register::Address<0x4006e094,0xffff0000,0,unsigned>;
        ///CH1CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch1ccv{}; 
    }
    namespace Nonegptm0Ch2ccr{    ///<GPTM0_CH2CCR
        using Addr = Register::Address<0x4006e098,0xffff0000,0,unsigned>;
        ///CH2CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch2ccv{}; 
    }
    namespace Nonegptm0Ch3ccr{    ///<GPTM0_CH3CCR
        using Addr = Register::Address<0x4006e09c,0xffff0000,0,unsigned>;
        ///CH3CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch3ccv{}; 
    }
}
