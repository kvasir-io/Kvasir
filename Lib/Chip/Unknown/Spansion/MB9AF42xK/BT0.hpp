#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral BT0 
    namespace NonepwmTmcr{    ///< register PWM_TMCR 
        using Addr = Register::Address<0x4002500c,0xffff8080,0,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        /// bitfield RTGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        namespace RtgenValC{
        }
        /// bitfield PMSK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        namespace PmskValC{
        }
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        /// bitfield OSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
        /// bitfield STRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
        namespace StrgValC{
        }
    }
    namespace NonepwmTmcr2{    ///< register PWM_TMCR2 
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NonepwmStc{    ///< register PWM_STC 
        using Addr = Register::Address<0x40025010,0xffffff88,0,unsigned char>;
        /// bitfield TGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        namespace TgieValC{
        }
        /// bitfield DTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtie{}; 
        namespace DtieValC{
        }
        /// bitfield UDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        namespace UdieValC{
        }
        /// bitfield TGIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        namespace TgirValC{
        }
        /// bitfield DTIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtir{}; 
        namespace DtirValC{
        }
        /// bitfield UDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
        namespace UdirValC{
        }
    }
    namespace NonepwmPcsr{    ///< register PWM_PCSR 
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NonepwmPdut{    ///< register PWM_PDUT 
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
    namespace NonepwmTmr{    ///< register PWM_TMR 
        using Addr = Register::Address<0x40025008,0xffffffff,0,unsigned>;
    }
    namespace NoneppgTmcr{    ///< register PPG_TMCR 
        using Addr = Register::Address<0x4002500c,0xffff8080,0,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        /// bitfield RTGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        namespace RtgenValC{
        }
        /// bitfield PMSK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        namespace PmskValC{
        }
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        /// bitfield OSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
        /// bitfield STRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
        namespace StrgValC{
        }
    }
    namespace NoneppgTmcr2{    ///< register PPG_TMCR2 
        using Addr = Register::Address<0x40025011,0xfffffffd,0,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NoneppgStc{    ///< register PPG_STC 
        using Addr = Register::Address<0x40025010,0xffffffaa,0,unsigned char>;
        /// bitfield TGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        namespace TgieValC{
        }
        /// bitfield UDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        namespace UdieValC{
        }
        /// bitfield TGIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        namespace TgirValC{
        }
        /// bitfield UDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
        namespace UdirValC{
        }
    }
    namespace NoneppgPrll{    ///< register PPG_PRLL 
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NoneppgPrlh{    ///< register PPG_PRLH 
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
    namespace NoneppgTmr{    ///< register PPG_TMR 
        using Addr = Register::Address<0x40025008,0xffffffff,0,unsigned>;
    }
    namespace NonertTmcr{    ///< register RT_TMCR 
        using Addr = Register::Address<0x4002500c,0xffff8c00,0,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        /// bitfield T32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        namespace T32ValC{
        }
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        /// bitfield OSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
        /// bitfield STRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
        namespace StrgValC{
        }
    }
    namespace NonertTmcr2{    ///< register RT_TMCR2 
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NonertStc{    ///< register RT_STC 
        using Addr = Register::Address<0x40025010,0xffffffaa,0,unsigned char>;
        /// bitfield TGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        namespace TgieValC{
        }
        /// bitfield UDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        namespace UdieValC{
        }
        /// bitfield TGIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        namespace TgirValC{
        }
        /// bitfield UDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
        namespace UdirValC{
        }
    }
    namespace NonertPcsr{    ///< register RT_PCSR 
        using Addr = Register::Address<0x40025000,0xffffffff,0,unsigned>;
    }
    namespace NonertTmr{    ///< register RT_TMR 
        using Addr = Register::Address<0x40025008,0xffffffff,0,unsigned>;
    }
    namespace NonepwcTmcr{    ///< register PWC_TMCR 
        using Addr = Register::Address<0x4002500c,0xffff8809,0,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        namespace Cks20ValC{
        }
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> egs{}; 
        namespace EgsValC{
        }
        /// bitfield T32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        namespace T32ValC{
        }
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        namespace FmdValC{
        }
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        namespace MdseValC{
        }
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        namespace CtenValC{
        }
    }
    namespace NonepwcTmcr2{    ///< register PWC_TMCR2 
        using Addr = Register::Address<0x40025011,0xfffffffe,0,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
        namespace Cks3ValC{
        }
    }
    namespace NonepwcStc{    ///< register PWC_STC 
        using Addr = Register::Address<0x40025010,0xffffff2a,0,unsigned char>;
        /// bitfield ERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        /// bitfield EDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> edie{}; 
        namespace EdieValC{
        }
        /// bitfield OVIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovie{}; 
        namespace OvieValC{
        }
        /// bitfield EDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> edir{}; 
        namespace EdirValC{
        }
        /// bitfield OVIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovir{}; 
        namespace OvirValC{
        }
    }
    namespace NonepwcDtbf{    ///< register PWC_DTBF 
        using Addr = Register::Address<0x40025004,0xffffffff,0,unsigned>;
    }
}
