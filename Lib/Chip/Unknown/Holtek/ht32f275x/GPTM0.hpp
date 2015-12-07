#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPTM0
    namespace Nonegptm0Cntcfr{    ///<GPTM0_CNTCFR
        using Addr = Register::Address<0x4006e000,0xfefcfcfc,0,unsigned>;
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
    namespace Nonegptm0Mdcfr{    ///<GPTM0_MDCFR
        using Addr = Register::Address<0x4006e004,0xfef8f8fe,0,unsigned>;
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
    namespace Nonegptm0Trcfr{    ///<GPTM0_TRCFR
        using Addr = Register::Address<0x4006e008,0xfefec0f0,0,unsigned>;
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
    namespace Nonegptm0Ctr{    ///<GPTM0_CTR
        using Addr = Register::Address<0x4006e010,0xfffefffc,0,unsigned>;
        ///TME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tme{}; 
        namespace TmeValC{
        }
        ///CRBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crbe{}; 
        namespace CrbeValC{
        }
        ///CHCCDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chccds{}; 
        namespace ChccdsValC{
        }
    }
    namespace Nonegptm0Ch0icfr{    ///<GPTM0_CH0ICFR
        using Addr = Register::Address<0x4006e020,0x7ff0fff0,0,unsigned>;
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
    namespace Nonegptm0Ch1icfr{    ///<GPTM0_CH1ICFR
        using Addr = Register::Address<0x4006e024,0xfff0fff0,0,unsigned>;
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
    namespace Nonegptm0Ch2icfr{    ///<GPTM0_CH2ICFR
        using Addr = Register::Address<0x4006e028,0xfff0fff0,0,unsigned>;
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
    namespace Nonegptm0Ch3icfr{    ///<GPTM0_CH3ICFR
        using Addr = Register::Address<0x4006e02c,0xfff0fff0,0,unsigned>;
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
    namespace Nonegptm0Ch0ocfr{    ///<GPTM0_CH0OCFR
        using Addr = Register::Address<0x4006e040,0xffffffc0,0,unsigned>;
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
    namespace Nonegptm0Ch1ocfr{    ///<GPTM0_CH1OCFR
        using Addr = Register::Address<0x4006e044,0xffffffc0,0,unsigned>;
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
    namespace Nonegptm0Ch2ocfr{    ///<GPTM0_CH2OCFR
        using Addr = Register::Address<0x4006e048,0xffffffc0,0,unsigned>;
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
    namespace Nonegptm0Ch3ocfr{    ///<GPTM0_CH3OCFR
        using Addr = Register::Address<0x4006e04c,0xffffffc0,0,unsigned>;
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
    namespace Nonegptm0Chctr{    ///<GPTM0_CHCTR
        using Addr = Register::Address<0x4006e050,0xffffffaa,0,unsigned>;
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
    namespace Nonegptm0Chpolr{    ///<GPTM0_CHPOLR
        using Addr = Register::Address<0x4006e054,0xffffffaa,0,unsigned>;
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
    namespace Nonegptm0Dictr{    ///<GPTM0_DICTR
        using Addr = Register::Address<0x4006e074,0xfaf0faf0,0,unsigned>;
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
        ///CH0CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ch0ccde{}; 
        namespace Ch0ccdeValC{
        }
        ///CH1CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ch1ccde{}; 
        namespace Ch1ccdeValC{
        }
        ///CH2CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ch2ccde{}; 
        namespace Ch2ccdeValC{
        }
        ///CH3CCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ch3ccde{}; 
        namespace Ch3ccdeValC{
        }
        ///UEVDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uevde{}; 
        namespace UevdeValC{
        }
        ///TEVDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tevde{}; 
        namespace TevdeValC{
        }
    }
    namespace Nonegptm0Evgr{    ///<GPTM0_EVGR
        using Addr = Register::Address<0x4006e078,0xfffffaf0,0,unsigned>;
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
    namespace Nonegptm0Intsr{    ///<GPTM0_INTSR
        using Addr = Register::Address<0x4006e07c,0xfffffa00,0,unsigned>;
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
    namespace Nonegptm0Cntr{    ///<GPTM0_CNTR
        using Addr = Register::Address<0x4006e080,0xffff0000,0,unsigned>;
        ///CNTV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntv{}; 
        namespace CntvValC{
        }
    }
    namespace Nonegptm0Pscr{    ///<GPTM0_PSCR
        using Addr = Register::Address<0x4006e084,0xffff0000,0,unsigned>;
        ///PSCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pscv{}; 
        namespace PscvValC{
        }
    }
    namespace Nonegptm0Crr{    ///<GPTM0_CRR
        using Addr = Register::Address<0x4006e088,0xffff0000,0,unsigned>;
        ///CRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crv{}; 
        namespace CrvValC{
        }
    }
    namespace Nonegptm0Ch0ccr{    ///<GPTM0_CH0CCR
        using Addr = Register::Address<0x4006e090,0xffff0000,0,unsigned>;
        ///CH0CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch0ccv{}; 
        namespace Ch0ccvValC{
        }
    }
    namespace Nonegptm0Ch1ccr{    ///<GPTM0_CH1CCR
        using Addr = Register::Address<0x4006e094,0xffff0000,0,unsigned>;
        ///CH1CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch1ccv{}; 
        namespace Ch1ccvValC{
        }
    }
    namespace Nonegptm0Ch2ccr{    ///<GPTM0_CH2CCR
        using Addr = Register::Address<0x4006e098,0xffff0000,0,unsigned>;
        ///CH2CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch2ccv{}; 
        namespace Ch2ccvValC{
        }
    }
    namespace Nonegptm0Ch3ccr{    ///<GPTM0_CH3CCR
        using Addr = Register::Address<0x4006e09c,0xffff0000,0,unsigned>;
        ///CH3CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch3ccv{}; 
        namespace Ch3ccvValC{
        }
    }
}
