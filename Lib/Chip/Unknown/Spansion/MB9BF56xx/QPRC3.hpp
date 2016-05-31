#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral QPRC0 
    namespace Qprc3Qpcr{    ///< register QPCR 
        using Addr = Register::Address<0x400260c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace Qprc3Qrcr{    ///< register QRCR 
        using Addr = Register::Address<0x400260c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace Qprc3Qpccr{    ///< register QPCCR 
        using Addr = Register::Address<0x400260c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Qprc3Qprcr{    ///< register QPRCR 
        using Addr = Register::Address<0x400260cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace Qprc3Qcr{    ///< register QCR 
        using Addr = Register::Address<0x400260d8,0xffff0000,0x00000000,unsigned>;
        /// bitfield CGE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> cge{}; 
        /// bitfield BES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> bes{}; 
        /// bitfield AES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> aes{}; 
        /// bitfield PCRM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcrm{}; 
        /// bitfield SWAP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swap{}; 
        /// bitfield RSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsel{}; 
        /// bitfield CGSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cgsc{}; 
        /// bitfield PSTP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pstp{}; 
        /// bitfield RCM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rcm{}; 
        /// bitfield PCM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pcm{}; 
    }
    namespace Qprc3Qecr{    ///< register QECR 
        using Addr = Register::Address<0x400260dc,0xfffffff8,0x00000000,unsigned>;
        /// bitfield ORNGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> orngie{}; 
        /// bitfield ORNGF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> orngf{}; 
        /// bitfield ORNGMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orngmd{}; 
    }
    namespace Qprc3Qicrl{    ///< register QICRL 
        using Addr = Register::Address<0x400260d4,0xffffff00,0x00000000,unsigned char>;
        /// bitfield ZIIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ziif{}; 
        /// bitfield OFDF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ofdf{}; 
        /// bitfield UFDF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ufdf{}; 
        /// bitfield OUZIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ouzie{}; 
        /// bitfield QPRCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qprcmf{}; 
        /// bitfield QPRCMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qprcmie{}; 
        /// bitfield QPCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qpcmf{}; 
        /// bitfield QPCMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qpcmie{}; 
    }
    namespace Qprc3Qicrh{    ///< register QICRH 
        using Addr = Register::Address<0x400260d5,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield QPCNRCMF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qpcnrcmf{}; 
        /// bitfield QPCNRCMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qpcnrcmie{}; 
        /// bitfield DIROU 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dirou{}; 
        /// bitfield DIRPC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dirpc{}; 
        /// bitfield CDCF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cdcf{}; 
        /// bitfield CDCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdcie{}; 
    }
    namespace Qprc3Qmpr{    ///< register QMPR 
        using Addr = Register::Address<0x400260d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace Qprc3Qrcrr{    ///< register QRCRR 
        using Addr = Register::Address<0x400260fc,0xffffffff,0x00000000,unsigned>;
    }
    namespace Qprc3Qpcrr{    ///< register QPCRR 
        using Addr = Register::Address<0x400260fe,0xffffffff,0x00000000,unsigned>;
    }
}
