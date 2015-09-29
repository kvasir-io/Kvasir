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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> cge{}; 
        /// bitfield BES 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> bes{}; 
        /// bitfield AES 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> aes{}; 
        /// bitfield PCRM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcrm{}; 
        /// bitfield SWAP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swap{}; 
        /// bitfield RSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsel{}; 
        /// bitfield CGSC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cgsc{}; 
        /// bitfield PSTP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pstp{}; 
        /// bitfield RCM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rcm{}; 
        /// bitfield PCM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pcm{}; 
    }
    namespace Noneqecr{    ///< register QECR 
        using Addr = Register::Address<0x4002605c,0xfffffff8,0,unsigned>;
        /// bitfield ORNGIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> orngie{}; 
        /// bitfield ORNGF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> orngf{}; 
        /// bitfield ORNGMD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> orngmd{}; 
    }
    namespace Noneqicrl{    ///< register QICRL 
        using Addr = Register::Address<0x40026054,0xffffff00,0,unsigned char>;
        /// bitfield ZIIF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ziif{}; 
        /// bitfield OFDF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ofdf{}; 
        /// bitfield UFDF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ufdf{}; 
        /// bitfield OUZIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ouzie{}; 
        /// bitfield QPRCMF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qprcmf{}; 
        /// bitfield QPRCMIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qprcmie{}; 
        /// bitfield QPCMF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qpcmf{}; 
        /// bitfield QPCMIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qpcmie{}; 
    }
    namespace Noneqicrh{    ///< register QICRH 
        using Addr = Register::Address<0x40026055,0xffffffc0,0,unsigned char>;
        /// bitfield QPCNRCMF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qpcnrcmf{}; 
        /// bitfield QPCNRCMIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qpcnrcmie{}; 
        /// bitfield DIROU 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirou{}; 
        /// bitfield DIRPC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirpc{}; 
        /// bitfield CDCF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cdcf{}; 
        /// bitfield CDCIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cdcie{}; 
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
