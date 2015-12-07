#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//MCTM
    namespace NonemctmCntcfr{    ///<MCTM_CNTCFR
        using Addr = Register::Address<0x4002c000,0xfefcfcfc,0,unsigned>;
        ///UEV1DIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uev1dis{}; 
        namespace Uev1disValC{
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
    namespace NonemctmMdcfr{    ///<MCTM_MDCFR
        using Addr = Register::Address<0x4002c004,0xfef8f8fe,0,unsigned>;
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
    namespace NonemctmTrcfr{    ///<MCTM_TRCFR
        using Addr = Register::Address<0x4002c008,0xfefec0f0,0,unsigned>;
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
    namespace NonemctmCtr{    ///<MCTM_CTR
        using Addr = Register::Address<0x4002c010,0xfffefcfc,0,unsigned>;
        ///TME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tme{}; 
        namespace TmeValC{
        }
        ///CRBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crbe{}; 
        namespace CrbeValC{
        }
        ///COMPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> compre{}; 
        namespace CompreValC{
        }
        ///COMUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comus{}; 
        namespace ComusValC{
        }
        ///CHCCDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chccds{}; 
        namespace ChccdsValC{
        }
    }
    namespace NonemctmCh0icfr{    ///<MCTM_CH0ICFR
        using Addr = Register::Address<0x4002c020,0x7ff0fff0,0,unsigned>;
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
    namespace NonemctmCh1icfr{    ///<MCTM_CH1ICFR
        using Addr = Register::Address<0x4002c024,0xfff0fff0,0,unsigned>;
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
    namespace NonemctmCh2icfr{    ///<MCTM_CH2ICFR
        using Addr = Register::Address<0x4002c028,0xfff0fff0,0,unsigned>;
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
    namespace NonemctmCh3icfr{    ///<MCTM_CH3ICFR
        using Addr = Register::Address<0x4002c02c,0xfff0fff0,0,unsigned>;
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
    namespace NonemctmCh0ocfr{    ///<MCTM_CH0OCFR
        using Addr = Register::Address<0x4002c040,0xffffffc0,0,unsigned>;
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
    namespace NonemctmCh1ocfr{    ///<MCTM_CH1OCFR
        using Addr = Register::Address<0x4002c044,0xffffffc0,0,unsigned>;
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
    namespace NonemctmCh2ocfr{    ///<MCTM_CH2OCFR
        using Addr = Register::Address<0x4002c048,0xffffffc0,0,unsigned>;
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
    namespace NonemctmCh3ocfr{    ///<MCTM_CH3OCFR
        using Addr = Register::Address<0x4002c04c,0xffffffc0,0,unsigned>;
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
    namespace NonemctmChctr{    ///<MCTM_CHCTR
        using Addr = Register::Address<0x4002c050,0xffffff80,0,unsigned>;
        ///CH0E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0e{}; 
        namespace Ch0eValC{
        }
        ///CH0NE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch0ne{}; 
        namespace Ch0neValC{
        }
        ///CH1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1e{}; 
        namespace Ch1eValC{
        }
        ///CH1NE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch1ne{}; 
        namespace Ch1neValC{
        }
        ///CH2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2e{}; 
        namespace Ch2eValC{
        }
        ///CH2NE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2ne{}; 
        namespace Ch2neValC{
        }
        ///CH3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3e{}; 
        namespace Ch3eValC{
        }
    }
    namespace NonemctmChpolr{    ///<MCTM_CHPOLR
        using Addr = Register::Address<0x4002c054,0xffffff80,0,unsigned>;
        ///CH0P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0p{}; 
        namespace Ch0pValC{
        }
        ///CH0NP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch0np{}; 
        namespace Ch0npValC{
        }
        ///CH1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1p{}; 
        namespace Ch1pValC{
        }
        ///CH1NP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch1np{}; 
        namespace Ch1npValC{
        }
        ///CH2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2p{}; 
        namespace Ch2pValC{
        }
        ///CH2NP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2np{}; 
        namespace Ch2npValC{
        }
        ///CH3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3p{}; 
        namespace Ch3pValC{
        }
    }
    namespace NonemctmChbrkcfr{    ///<MCTM_CHBRKCFR
        using Addr = Register::Address<0x4002c06c,0xffffff80,0,unsigned>;
        ///CH0OIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ois{}; 
        namespace Ch0oisValC{
        }
        ///CH0OISN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch0oisn{}; 
        namespace Ch0oisnValC{
        }
        ///CH1OIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1ois{}; 
        namespace Ch1oisValC{
        }
        ///CH1OISN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch1oisn{}; 
        namespace Ch1oisnValC{
        }
        ///CH2OIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2ois{}; 
        namespace Ch2oisValC{
        }
        ///CH2OISN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2oisn{}; 
        namespace Ch2oisnValC{
        }
        ///CH3OIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3ois{}; 
        namespace Ch3oisValC{
        }
    }
    namespace NonemctmChbrkctr{    ///<MCTM_CHBRKCTR
        using Addr = Register::Address<0x4002c070,0x00ccf0cc,0,unsigned>;
        ///BKE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bke{}; 
        namespace BkeValC{
        }
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
        ///CHMOE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chmoe{}; 
        namespace ChmoeValC{
        }
        ///CHAOE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chaoe{}; 
        namespace ChaoeValC{
        }
        ///BKF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> bkf{}; 
        namespace BkfValC{
        }
        ///LOCKLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> locklv{}; 
        namespace LocklvValC{
        }
        ///CHOSSI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chossi{}; 
        namespace ChossiValC{
        }
        ///CHOSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> chossr{}; 
        namespace ChossrValC{
        }
        ///CHDTG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> chdtg{}; 
        namespace ChdtgValC{
        }
    }
    namespace NonemctmDictr{    ///<MCTM_DICTR
        using Addr = Register::Address<0x4002c074,0xf8f0f0f0,0,unsigned>;
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
        ///UEV1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uev1ie{}; 
        namespace Uev1ieValC{
        }
        ///UEV2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uev2ie{}; 
        namespace Uev2ieValC{
        }
        ///TEVIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevie{}; 
        namespace TevieValC{
        }
        ///BRKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> brkie{}; 
        namespace BrkieValC{
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
        ///UEV1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uev1de{}; 
        namespace Uev1deValC{
        }
        ///UEV2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uev2de{}; 
        namespace Uev2deValC{
        }
        ///TEVDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tevde{}; 
        namespace TevdeValC{
        }
    }
    namespace NonemctmEvgr{    ///<MCTM_EVGR
        using Addr = Register::Address<0x4002c078,0xfffff0f0,0,unsigned>;
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
        ///UEV1G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uev1g{}; 
        namespace Uev1gValC{
        }
        ///UEV2G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uev2g{}; 
        namespace Uev2gValC{
        }
        ///TEVG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevg{}; 
        namespace TevgValC{
        }
        ///BRKG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> brkg{}; 
        namespace BrkgValC{
        }
    }
    namespace NonemctmIntsr{    ///<MCTM_INTSR
        using Addr = Register::Address<0x4002c07c,0xfffff000,0,unsigned>;
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
        ///UEV1IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uev1if{}; 
        namespace Uev1ifValC{
        }
        ///UEV2IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uev2if{}; 
        namespace Uev2ifValC{
        }
        ///TEVIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevif{}; 
        namespace TevifValC{
        }
        ///BRKIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> brkif{}; 
        namespace BrkifValC{
        }
    }
    namespace NonemctmCntr{    ///<MCTM_CNTR
        using Addr = Register::Address<0x4002c080,0xffff0000,0,unsigned>;
        ///CNTV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntv{}; 
        namespace CntvValC{
        }
    }
    namespace NonemctmPscr{    ///<MCTM_PSCR
        using Addr = Register::Address<0x4002c084,0xffff0000,0,unsigned>;
        ///PSCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pscv{}; 
        namespace PscvValC{
        }
    }
    namespace NonemctmCrr{    ///<MCTM_CRR
        using Addr = Register::Address<0x4002c088,0xffff0000,0,unsigned>;
        ///CRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crv{}; 
        namespace CrvValC{
        }
    }
    namespace NonemctmRepr{    ///<MCTM_REPR
        using Addr = Register::Address<0x4002c08c,0xffffff00,0,unsigned>;
        ///REPV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> repv{}; 
        namespace RepvValC{
        }
    }
    namespace NonemctmCh0ccr{    ///<MCTM_CH0CCR
        using Addr = Register::Address<0x4002c090,0xffff0000,0,unsigned>;
        ///CH0CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch0ccv{}; 
        namespace Ch0ccvValC{
        }
    }
    namespace NonemctmCh1ccr{    ///<MCTM_CH1CCR
        using Addr = Register::Address<0x4002c094,0xffff0000,0,unsigned>;
        ///CH1CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch1ccv{}; 
        namespace Ch1ccvValC{
        }
    }
    namespace NonemctmCh2ccr{    ///<MCTM_CH2CCR
        using Addr = Register::Address<0x4002c098,0xffff0000,0,unsigned>;
        ///CH2CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch2ccv{}; 
        namespace Ch2ccvValC{
        }
    }
    namespace NonemctmCh3ccr{    ///<MCTM_CH3CCR
        using Addr = Register::Address<0x4002c09c,0xffff0000,0,unsigned>;
        ///CH3CCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch3ccv{}; 
        namespace Ch3ccvValC{
        }
    }
}
