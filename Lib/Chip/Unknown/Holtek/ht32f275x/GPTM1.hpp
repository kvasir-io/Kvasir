#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//GPTM1
    namespace Gptm1Gptm1Cntcfr{    ///<GPTM1_CNTCFR
        using Addr = Register::Address<0x4006f000,0x00fcfcfc,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Mdcfr{    ///<GPTM1_MDCFR
        using Addr = Register::Address<0x4006f004,0x00f8f8fe,0x00000000,unsigned>;
        ///TSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        ///SMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> smsel{}; 
        ///MMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mmsel{}; 
        ///SPMSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spmset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Trcfr{    ///<GPTM1_TRCFR
        using Addr = Register::Address<0x4006f008,0x00fec0f0,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ctr{    ///<GPTM1_CTR
        using Addr = Register::Address<0x4006f010,0x0000fffc,0x00000000,unsigned>;
        ///TME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tme{}; 
        ///CRBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crbe{}; 
        ///CHCCDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chccds{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch0icfr{    ///<GPTM1_CH0ICFR
        using Addr = Register::Address<0x4006f020,0x7ff0fff0,0x00000000,unsigned>;
        ///TI0F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti0f{}; 
        ///CH0CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch0ccs{}; 
        ///CH0PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch0psc{}; 
        ///TI0SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ti0src{}; 
    }
    namespace Gptm1Gptm1Ch1icfr{    ///<GPTM1_CH1ICFR
        using Addr = Register::Address<0x4006f024,0x0000fff0,0x00000000,unsigned>;
        ///TI1F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti1f{}; 
        ///CH1CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch1ccs{}; 
        ///CH1PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch1psc{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch2icfr{    ///<GPTM1_CH2ICFR
        using Addr = Register::Address<0x4006f028,0x0000fff0,0x00000000,unsigned>;
        ///TI2F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti2f{}; 
        ///CH2CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch2ccs{}; 
        ///CH2PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch2psc{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch3icfr{    ///<GPTM1_CH3ICFR
        using Addr = Register::Address<0x4006f02c,0x0000fff0,0x00000000,unsigned>;
        ///TI3F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti3f{}; 
        ///CH3CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch3ccs{}; 
        ///CH3PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch3psc{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch0ocfr{    ///<GPTM1_CH0OCFR
        using Addr = Register::Address<0x4006f040,0x00000000,0x00000000,unsigned>;
        ///CH0OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch0om{}; 
        ///REF0CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref0ce{}; 
        ///CH0PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0pre{}; 
        ///CH0IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch0imae{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch1ocfr{    ///<GPTM1_CH1OCFR
        using Addr = Register::Address<0x4006f044,0x00000000,0x00000000,unsigned>;
        ///CH1OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch1om{}; 
        ///REF1CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref1ce{}; 
        ///CH1PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch1pre{}; 
        ///CH1IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1imae{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch2ocfr{    ///<GPTM1_CH2OCFR
        using Addr = Register::Address<0x4006f048,0x00000000,0x00000000,unsigned>;
        ///CH2OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch2om{}; 
        ///REF2CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref2ce{}; 
        ///CH2PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2pre{}; 
        ///CH2IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2imae{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch3ocfr{    ///<GPTM1_CH3OCFR
        using Addr = Register::Address<0x4006f04c,0x00000000,0x00000000,unsigned>;
        ///CH3OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch3om{}; 
        ///REF3CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref3ce{}; 
        ///CH3PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch3pre{}; 
        ///CH3IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch3imae{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Chctr{    ///<GPTM1_CHCTR
        using Addr = Register::Address<0x4006f050,0x0000002a,0x00000000,unsigned>;
        ///CH0E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0e{}; 
        ///CH1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1e{}; 
        ///CH2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2e{}; 
        ///CH3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3e{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Chpolr{    ///<GPTM1_CHPOLR
        using Addr = Register::Address<0x4006f054,0x0000002a,0x00000000,unsigned>;
        ///CH0P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0p{}; 
        ///CH1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1p{}; 
        ///CH2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2p{}; 
        ///CH3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3p{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Dictr{    ///<GPTM1_DICTR
        using Addr = Register::Address<0x4006f074,0x02f0faf0,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Evgr{    ///<GPTM1_EVGR
        using Addr = Register::Address<0x4006f078,0x000002f0,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Intsr{    ///<GPTM1_INTSR
        using Addr = Register::Address<0x4006f07c,0x00000200,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Cntr{    ///<GPTM1_CNTR
        using Addr = Register::Address<0x4006f080,0x00000000,0x00000000,unsigned>;
        ///CNTV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Pscr{    ///<GPTM1_PSCR
        using Addr = Register::Address<0x4006f084,0x00000000,0x00000000,unsigned>;
        ///PSCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pscv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Crr{    ///<GPTM1_CRR
        using Addr = Register::Address<0x4006f088,0x00000000,0x00000000,unsigned>;
        ///CRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch0ccr{    ///<GPTM1_CH0CCR
        using Addr = Register::Address<0x4006f090,0x00000000,0x00000000,unsigned>;
        ///CH0CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch0ccv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch1ccr{    ///<GPTM1_CH1CCR
        using Addr = Register::Address<0x4006f094,0x00000000,0x00000000,unsigned>;
        ///CH1CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch1ccv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch2ccr{    ///<GPTM1_CH2CCR
        using Addr = Register::Address<0x4006f098,0x00000000,0x00000000,unsigned>;
        ///CH2CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch2ccv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Gptm1Gptm1Ch3ccr{    ///<GPTM1_CH3CCR
        using Addr = Register::Address<0x4006f09c,0x00000000,0x00000000,unsigned>;
        ///CH3CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch3ccv{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
