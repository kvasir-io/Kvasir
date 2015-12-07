#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CKCU
    namespace NoneckcuGcfgr{    ///<CKCU_GCFGR
        using Addr = Register::Address<0x40088000,0x1fcffef0,0,unsigned>;
        ///CKOUTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        namespace CkoutsrcValC{
        }
        ///WDTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdtsrc{}; 
        namespace WdtsrcValC{
        }
        ///PLLSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        namespace PllsrcValC{
        }
        ///URPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> urpre{}; 
        namespace UrpreValC{
        }
        ///LPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> lpmod{}; 
        namespace LpmodValC{
        }
    }
    namespace NoneckcuGccr{    ///<CKCU_GCCR
        using Addr = Register::Address<0x40088004,0xfffcf1fc,0,unsigned>;
        ///SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        namespace SwValC{
        }
        ///PLLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pllen{}; 
        namespace PllenValC{
        }
        ///HSEEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hseen{}; 
        namespace HseenValC{
        }
        ///HSIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsien{}; 
        namespace HsienValC{
        }
        ///CKMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ckmen{}; 
        namespace CkmenValC{
        }
        ///PSRCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> psrcen{}; 
        namespace PsrcenValC{
        }
    }
    namespace NoneckcuGcsr{    ///<CKCU_GCSR
        using Addr = Register::Address<0x40088008,0xffffffc1,0,unsigned>;
        ///PLLRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        namespace PllrdyValC{
        }
        ///HSERDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hserdy{}; 
        namespace HserdyValC{
        }
        ///HSIRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        namespace HsirdyValC{
        }
        ///LSERDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lserdy{}; 
        namespace LserdyValC{
        }
        ///LSIRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        namespace LsirdyValC{
        }
    }
    namespace NoneckcuGcir{    ///<CKCU_GCIR
        using Addr = Register::Address<0x4008800c,0xff82ff82,0,unsigned>;
        ///CKSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cksf{}; 
        namespace CksfValC{
        }
        ///PLLRDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        namespace PllrdyfValC{
        }
        ///HSERDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        namespace HserdyfValC{
        }
        ///HSIRDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        namespace HsirdyfValC{
        }
        ///LSERDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        namespace LserdyfValC{
        }
        ///LSIRDYF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        namespace LsirdyfValC{
        }
        ///CKSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cksie{}; 
        namespace CksieValC{
        }
        ///PLLRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        namespace PllrdyieValC{
        }
        ///HSERDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        namespace HserdyieValC{
        }
        ///HSIRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        namespace HsirdyieValC{
        }
        ///LSERDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        namespace LserdyieValC{
        }
        ///LSIRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        namespace LsirdyieValC{
        }
    }
    namespace NoneckcuPllcfgr{    ///<CKCU_PLLCFGR
        using Addr = Register::Address<0x40088018,0xe01fffff,0,unsigned>;
        ///POTD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> potd{}; 
        namespace PotdValC{
        }
        ///PFBD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,23),Register::ReadWriteAccess,unsigned> pfbd{}; 
        namespace PfbdValC{
        }
    }
    namespace NoneckcuPllcr{    ///<CKCU_PLLCR
        using Addr = Register::Address<0x4008801c,0x7fffffff,0,unsigned>;
        ///PLLBPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pllbps{}; 
        namespace PllbpsValC{
        }
    }
    namespace NoneckcuAhbcfgr{    ///<CKCU_AHBCFGR
        using Addr = Register::Address<0x40088020,0xfffffffc,0,unsigned>;
        ///AHBPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ahbpre{}; 
        namespace AhbpreValC{
        }
    }
    namespace NoneckcuAhbccr{    ///<CKCU_AHBCCR
        using Addr = Register::Address<0x40088024,0xfffffffa,0,unsigned>;
        ///FMCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcen{}; 
        namespace FmcenValC{
        }
        ///SRAMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sramen{}; 
        namespace SramenValC{
        }
    }
    namespace NoneckcuApbcfgr{    ///<CKCU_APBCFGR
        using Addr = Register::Address<0x40088028,0xfff8ffff,0,unsigned>;
        ///ADCDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> adcdiv{}; 
        namespace AdcdivValC{
        }
    }
    namespace NoneckcuApbccr0{    ///<CKCU_APBCCR0
        using Addr = Register::Address<0x4008802c,0xfffc3eee,0,unsigned>;
        ///I2CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2cen{}; 
        namespace I2cenValC{
        }
        ///SPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spien{}; 
        namespace SpienValC{
        }
        ///UREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uren{}; 
        namespace UrenValC{
        }
        ///AFIOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> afioen{}; 
        namespace AfioenValC{
        }
        ///EXTIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extien{}; 
        namespace ExtienValC{
        }
        ///PAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> paen{}; 
        namespace PaenValC{
        }
        ///PBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pben{}; 
        namespace PbenValC{
        }
    }
    namespace NoneckcuApbccr1{    ///<CKCU_APBCCR1
        using Addr = Register::Address<0x40088030,0xfe3ffcaf,0,unsigned>;
        ///WDTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdten{}; 
        namespace WdtenValC{
        }
        ///RTCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///GPTM0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gptm0en{}; 
        namespace Gptm0enValC{
        }
        ///GPTM1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gptm1en{}; 
        namespace Gptm1enValC{
        }
        ///OPA0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa0en{}; 
        namespace Opa0enValC{
        }
        ///OPA1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa1en{}; 
        namespace Opa1enValC{
        }
        ///ADCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adcen{}; 
        namespace AdcenValC{
        }
    }
    namespace NoneckcuCkst{    ///<CKCU_CKST
        using Addr = Register::Address<0x40088034,0xf8fcfeff,0,unsigned>;
        ///PLLST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllst{}; 
        namespace PllstValC{
        }
        ///HSEST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> hsest{}; 
        namespace HsestValC{
        }
        ///HSIST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> hsist{}; 
        namespace HsistValC{
        }
    }
    namespace NoneckcuLpcr{    ///<CKCU_LPCR
        using Addr = Register::Address<0x40088300,0xfffffffe,0,unsigned>;
        ///BKISO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bkiso{}; 
        namespace BkisoValC{
        }
    }
    namespace NoneckcuMcudbgcr{    ///<CKCU_MCUDBGCR
        using Addr = Register::Address<0x40088304,0xffffba30,0,unsigned>;
        ///DBSLP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbslp{}; 
        namespace DbslpValC{
        }
        ///DBDSLP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbdslp1{}; 
        namespace Dbdslp1ValC{
        }
        ///DBPD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbpd{}; 
        namespace DbpdValC{
        }
        ///DBWDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbwdt{}; 
        namespace DbwdtValC{
        }
        ///DBGPTM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgptm0{}; 
        namespace Dbgptm0ValC{
        }
        ///DBGPTM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbgptm1{}; 
        namespace Dbgptm1ValC{
        }
        ///DBUSART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbusart{}; 
        namespace DbusartValC{
        }
        ///DBSPI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbspi{}; 
        namespace DbspiValC{
        }
        ///DBDSLP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dbdslp2{}; 
        namespace Dbdslp2ValC{
        }
    }
}
