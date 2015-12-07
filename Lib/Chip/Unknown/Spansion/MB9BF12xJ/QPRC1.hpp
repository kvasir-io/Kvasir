#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral QPRC1 
    namespace Noneqpcr{    ///< register QPCR 
        using Addr = Register::Address<0x40026040,0xffffffff,0,unsigned>;
    }
    namespace Noneqrcr{    ///< register QRCR 
        using Addr = Register::Address<0x40026044,0xffffffff,0,unsigned>;
    }
    namespace Noneqpccr{    ///< register QPCCR 
        using Addr = Register::Address<0x40026048,0xffffffff,0,unsigned>;
    }
    namespace Noneqprcr{    ///< register QPRCR 
        using Addr = Register::Address<0x4002604c,0xffffffff,0,unsigned>;
    }
    namespace Noneqcr{    ///< register QCR 
        using Addr = Register::Address<0x40026058,0xffff0000,0,unsigned>;
        /// bitfield CGE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> cge{}; 
        namespace CgeValC{
        }
        /// bitfield BES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> bes{}; 
        namespace BesValC{
        }
        /// bitfield AES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> aes{}; 
        namespace AesValC{
        }
        /// bitfield PCRM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcrm{}; 
        namespace PcrmValC{
        }
        /// bitfield SWAP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swap{}; 
        namespace SwapValC{
        }
        /// bitfield RSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsel{}; 
        namespace RselValC{
        }
        /// bitfield CGSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cgsc{}; 
        namespace CgscValC{
        }
        /// bitfield PSTP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pstp{}; 
        namespace PstpValC{
        }
        /// bitfield RCM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rcm{}; 
        namespace RcmValC{
        }
        /// bitfield PCM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pcm{}; 
        namespace PcmValC{
        }
    }
    namespace Noneqecr{    ///< register QECR 
        using Addr = Register::Address<0x4002605c,0xfffffff8,0,unsigned>;
        /// bitfield ORNGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> orngie{}; 
        namespace OrngieValC{
        }
        /// bitfield ORNGF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> orngf{}; 
        namespace OrngfValC{
        }
        /// bitfield ORNGMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orngmd{}; 
        namespace OrngmdValC{
        }
    }
    namespace Noneqicrl{    ///< register QICRL 
        using Addr = Register::Address<0x40026054,0xffffff00,0,unsigned char>;
        /// bitfield ZIIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ziif{}; 
        namespace ZiifValC{
        }
        /// bitfield OFDF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ofdf{}; 
        namespace OfdfValC{
        }
        /// bitfield UFDF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ufdf{}; 
        namespace UfdfValC{
        }
        /// bitfield OUZIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ouzie{}; 
        namespace OuzieValC{
        }
        /// bitfield QPRCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qprcmf{}; 
        namespace QprcmfValC{
        }
        /// bitfield QPRCMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qprcmie{}; 
        namespace QprcmieValC{
        }
        /// bitfield QPCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qpcmf{}; 
        namespace QpcmfValC{
        }
        /// bitfield QPCMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qpcmie{}; 
        namespace QpcmieValC{
        }
    }
    namespace Noneqicrh{    ///< register QICRH 
        using Addr = Register::Address<0x40026055,0xffffffc0,0,unsigned char>;
        /// bitfield QPCNRCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qpcnrcmf{}; 
        namespace QpcnrcmfValC{
        }
        /// bitfield QPCNRCMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qpcnrcmie{}; 
        namespace QpcnrcmieValC{
        }
        /// bitfield DIROU 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirou{}; 
        namespace DirouValC{
        }
        /// bitfield DIRPC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirpc{}; 
        namespace DirpcValC{
        }
        /// bitfield CDCF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cdcf{}; 
        namespace CdcfValC{
        }
        /// bitfield CDCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdcie{}; 
        namespace CdcieValC{
        }
    }
    namespace Noneqmpr{    ///< register QMPR 
        using Addr = Register::Address<0x40026050,0xffffffff,0,unsigned>;
    }
    namespace Noneqrcrr{    ///< register QRCRR 
        using Addr = Register::Address<0x4002607c,0xffffffff,0,unsigned>;
    }
    namespace Noneqpcrr{    ///< register QPCRR 
        using Addr = Register::Address<0x4002607e,0xffffffff,0,unsigned>;
    }
}
