#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPTM1
    namespace Nonegptm1Cntcfr{    ///<GPTM1_CNTCFR
        using Addr = Register::Address<0x4006f000,0xfefcfcfc,0,unsigned>;
        ///UEVDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uevdis{}; 
        namespace UevdisValC{
        }
        ///UGDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ugdis{}; 
        namespace UgdisValC{
        }
        ///CKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckdiv{}; 
        namespace CkdivValC{
        }
        ///CMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> cmsel{}; 
        namespace CmselValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
    }
    namespace Nonegptm1Mdcfr{    ///<GPTM1_MDCFR
        using Addr = Register::Address<0x4006f004,0xfef8f8fe,0,unsigned>;
        ///TSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        namespace TseValC{
        }
        ///SMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> smsel{}; 
        namespace SmselValC{
        }
        ///MMSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mmsel{}; 
        namespace MmselValC{
        }
        ///SPMSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spmset{}; 
        namespace SpmsetValC{
        }
    }
    namespace Nonegptm1Trcfr{    ///<GPTM1_TRCFR
        using Addr = Register::Address<0x4006f008,0xfefec0f0,0,unsigned>;
        ///TRSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trsel{}; 
        namespace TrselValC{
        }
        ///ETF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        namespace EtfValC{
        }
        ///ETIPSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etipsc{}; 
        namespace EtipscValC{
        }
        ///ETIPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etipol{}; 
        namespace EtipolValC{
        }
        ///ECME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ecme{}; 
        namespace EcmeValC{
        }
    }
    namespace Nonegptm1Ctr{    ///<GPTM1_CTR
        using Addr = Register::Address<0x4006f010,0xfffffffc,0,unsigned>;
        ///TME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tme{}; 
        namespace TmeValC{
        }
        ///CRBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crbe{}; 
        namespace CrbeValC{
        }
    }
    namespace Nonegptm1Ch0icfr{    ///<GPTM1_CH0ICFR
        using Addr = Register::Address<0x4006f020,0x7ff0fff0,0,unsigned>;
        ///TI0F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti0f{}; 
        namespace Ti0fValC{
        }
        ///CH0CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch0ccs{}; 
        namespace Ch0ccsValC{
        }
        ///CH0PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch0psc{}; 
        namespace Ch0pscValC{
        }
        ///TI0SRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ti0src{}; 
        namespace Ti0srcValC{
        }
    }
    namespace Nonegptm1Ch1icfr{    ///<GPTM1_CH1ICFR
        using Addr = Register::Address<0x4006f024,0xfff0fff0,0,unsigned>;
        ///TI1F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti1f{}; 
        namespace Ti1fValC{
        }
        ///CH1CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch1ccs{}; 
        namespace Ch1ccsValC{
        }
        ///CH1PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch1psc{}; 
        namespace Ch1pscValC{
        }
    }
    namespace Nonegptm1Ch2icfr{    ///<GPTM1_CH2ICFR
        using Addr = Register::Address<0x4006f028,0xfff0fff0,0,unsigned>;
        ///TI2F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti2f{}; 
        namespace Ti2fValC{
        }
        ///CH2CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch2ccs{}; 
        namespace Ch2ccsValC{
        }
        ///CH2PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch2psc{}; 
        namespace Ch2pscValC{
        }
    }
    namespace Nonegptm1Ch3icfr{    ///<GPTM1_CH3ICFR
        using Addr = Register::Address<0x4006f02c,0xfff0fff0,0,unsigned>;
        ///TI3F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti3f{}; 
        namespace Ti3fValC{
        }
        ///CH3CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch3ccs{}; 
        namespace Ch3ccsValC{
        }
        ///CH3PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch3psc{}; 
        namespace Ch3pscValC{
        }
    }
    namespace Nonegptm1Ch0ocfr{    ///<GPTM1_CH0OCFR
        using Addr = Register::Address<0x4006f040,0xffffffc0,0,unsigned>;
        ///CH0OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch0om{}; 
        namespace Ch0omValC{
        }
        ///REF0CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref0ce{}; 
        namespace Ref0ceValC{
        }
        ///CH0PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0pre{}; 
        namespace Ch0preValC{
        }
        ///CH0IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch0imae{}; 
        namespace Ch0imaeValC{
        }
    }
    namespace Nonegptm1Ch1ocfr{    ///<GPTM1_CH1OCFR
        using Addr = Register::Address<0x4006f044,0xffffffc0,0,unsigned>;
        ///CH1OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch1om{}; 
        namespace Ch1omValC{
        }
        ///REF1CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref1ce{}; 
        namespace Ref1ceValC{
        }
        ///CH1PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch1pre{}; 
        namespace Ch1preValC{
        }
        ///CH1IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1imae{}; 
        namespace Ch1imaeValC{
        }
    }
    namespace Nonegptm1Ch2ocfr{    ///<GPTM1_CH2OCFR
        using Addr = Register::Address<0x4006f048,0xffffffc0,0,unsigned>;
        ///CH2OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch2om{}; 
        namespace Ch2omValC{
        }
        ///REF2CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref2ce{}; 
        namespace Ref2ceValC{
        }
        ///CH2PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2pre{}; 
        namespace Ch2preValC{
        }
        ///CH2IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2imae{}; 
        namespace Ch2imaeValC{
        }
    }
    namespace Nonegptm1Ch3ocfr{    ///<GPTM1_CH3OCFR
        using Addr = Register::Address<0x4006f04c,0xffffffc0,0,unsigned>;
        ///CH3OM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch3om{}; 
        namespace Ch3omValC{
        }
        ///REF3CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref3ce{}; 
        namespace Ref3ceValC{
        }
        ///CH3PRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch3pre{}; 
        namespace Ch3preValC{
        }
        ///CH3IMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch3imae{}; 
        namespace Ch3imaeValC{
        }
    }
    namespace Nonegptm1Chctr{    ///<GPTM1_CHCTR
        using Addr = Register::Address<0x4006f050,0xffffffaa,0,unsigned>;
        ///CH0E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0e{}; 
        namespace Ch0eValC{
        }
        ///CH1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1e{}; 
        namespace Ch1eValC{
        }
        ///CH2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2e{}; 
        namespace Ch2eValC{
        }
        ///CH3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3e{}; 
        namespace Ch3eValC{
        }
    }
    namespace Nonegptm1Chpolr{    ///<GPTM1_CHPOLR
        using Addr = Register::Address<0x4006f054,0xffffffaa,0,unsigned>;
        ///CH0P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0p{}; 
        namespace Ch0pValC{
        }
        ///CH1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1p{}; 
        namespace Ch1pValC{
        }
        ///CH2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2p{}; 
        namespace Ch2pValC{
        }
        ///CH3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3p{}; 
        namespace Ch3pValC{
        }
    }
    namespace Nonegptm1Ictr{    ///<GPTM1_ICTR
        using Addr = Register::Address<0x4006f074,0xfffffaf0,0,unsigned>;
        ///CH0CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccie{}; 
        namespace Ch0ccieValC{
        }
        ///CH1CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccie{}; 
        namespace Ch1ccieValC{
        }
        ///CH2CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccie{}; 
        namespace Ch2ccieValC{
        }
        ///CH3CCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccie{}; 
        namespace Ch3ccieValC{
        }
        ///UEVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevie{}; 
        namespace UevieValC{
        }
        ///TEVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevie{}; 
        namespace TevieValC{
        }
    }
    namespace Nonegptm1Evgr{    ///<GPTM1_EVGR
        using Addr = Register::Address<0x4006f078,0xfffffaf0,0,unsigned>;
        ///CH0CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccg{}; 
        namespace Ch0ccgValC{
        }
        ///CH1CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccg{}; 
        namespace Ch1ccgValC{
        }
        ///CH2CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccg{}; 
        namespace Ch2ccgValC{
        }
        ///CH3CCG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccg{}; 
        namespace Ch3ccgValC{
        }
        ///UEVG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevg{}; 
        namespace UevgValC{
        }
        ///TEVG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevg{}; 
        namespace TevgValC{
        }
    }
    namespace Nonegptm1Intsr{    ///<GPTM1_INTSR
        using Addr = Register::Address<0x4006f07c,0xfffffa00,0,unsigned>;
        ///CH0CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccif{}; 
        namespace Ch0ccifValC{
        }
        ///CH1CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccif{}; 
        namespace Ch1ccifValC{
        }
        ///CH2CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccif{}; 
        namespace Ch2ccifValC{
        }
        ///CH3CCIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccif{}; 
        namespace Ch3ccifValC{
        }
        ///CH0OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0ocf{}; 
        namespace Ch0ocfValC{
        }
        ///CH1OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1ocf{}; 
        namespace Ch1ocfValC{
        }
        ///CH2OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch2ocf{}; 
        namespace Ch2ocfValC{
        }
        ///CH3OCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch3ocf{}; 
        namespace Ch3ocfValC{
        }
        ///UEVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevif{}; 
        namespace UevifValC{
        }
        ///TEVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevif{}; 
        namespace TevifValC{
        }
    }
    namespace Nonegptm1Cntr{    ///<GPTM1_CNTR
        using Addr = Register::Address<0x4006f080,0xffff0000,0,unsigned>;
        ///CNTV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntv{}; 
        namespace CntvValC{
        }
    }
    namespace Nonegptm1Pscr{    ///<GPTM1_PSCR
        using Addr = Register::Address<0x4006f084,0xffff0000,0,unsigned>;
        ///PSCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pscv{}; 
        namespace PscvValC{
        }
    }
    namespace Nonegptm1Crr{    ///<GPTM1_CRR
        using Addr = Register::Address<0x4006f088,0xffff0000,0,unsigned>;
        ///CRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crv{}; 
        namespace CrvValC{
        }
    }
    namespace Nonegptm1Ch0ccr{    ///<GPTM1_CH0CCR
        using Addr = Register::Address<0x4006f090,0xffff0000,0,unsigned>;
        ///CH0CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch0ccv{}; 
        namespace Ch0ccvValC{
        }
    }
    namespace Nonegptm1Ch1ccr{    ///<GPTM1_CH1CCR
        using Addr = Register::Address<0x4006f094,0xffff0000,0,unsigned>;
        ///CH1CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch1ccv{}; 
        namespace Ch1ccvValC{
        }
    }
    namespace Nonegptm1Ch2ccr{    ///<GPTM1_CH2CCR
        using Addr = Register::Address<0x4006f098,0xffff0000,0,unsigned>;
        ///CH2CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch2ccv{}; 
        namespace Ch2ccvValC{
        }
    }
    namespace Nonegptm1Ch3ccr{    ///<GPTM1_CH3CCR
        using Addr = Register::Address<0x4006f09c,0xffff0000,0,unsigned>;
        ///CH3CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch3ccv{}; 
        namespace Ch3ccvValC{
        }
    }
}
