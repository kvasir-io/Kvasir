#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral MFT_PPG 
    namespace MftPpgTtcr0{    ///< register TTCR0 
        using Addr = Register::Address<0x40024000,0xffff00ff,0x00000000,unsigned>;
        /// bitfield TRG6O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        /// bitfield TRG4O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        /// bitfield TRG2O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        /// bitfield TRG0O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        /// bitfield CS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        /// bitfield MONI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moni0{}; 
        /// bitfield STR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
    }
    namespace MftPpgComp0{    ///< register COMP0 
        using Addr = Register::Address<0x40024008,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp2{    ///< register COMP2 
        using Addr = Register::Address<0x4002400c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace MftPpgComp4{    ///< register COMP4 
        using Addr = Register::Address<0x40024010,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp6{    ///< register COMP6 
        using Addr = Register::Address<0x40024014,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgTrg{    ///< register TRG 
        using Addr = Register::Address<0x40024100,0xffffff00,0x00000000,unsigned>;
        /// bitfield PEN07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        /// bitfield PEN06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        /// bitfield PEN05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        /// bitfield PEN04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        /// bitfield PEN03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        /// bitfield PEN02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        /// bitfield PEN01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        /// bitfield PEN00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
    }
    namespace MftPpgRevc{    ///< register REVC 
        using Addr = Register::Address<0x40024104,0xffffff00,0x00000000,unsigned>;
        /// bitfield REV07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        /// bitfield REV06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        /// bitfield REV05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        /// bitfield REV04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        /// bitfield REV03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        /// bitfield REV02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        /// bitfield REV01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        /// bitfield REV00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
    }
    namespace MftPpgPpgc0{    ///< register PPGC0 
        using Addr = Register::Address<0x40024201,0xffffff00,0x00000000,unsigned char>;
        /// bitfield PIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        /// bitfield PUF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        /// bitfield INTM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        /// bitfield PCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield TTRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
    }
    namespace MftPpgPpgc1{    ///< register PPGC1 
        using Addr = Register::Address<0x40024200,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc2{    ///< register PPGC2 
        using Addr = Register::Address<0x40024205,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc3{    ///< register PPGC3 
        using Addr = Register::Address<0x40024204,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc4{    ///< register PPGC4 
        using Addr = Register::Address<0x40024241,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc5{    ///< register PPGC5 
        using Addr = Register::Address<0x40024240,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc6{    ///< register PPGC6 
        using Addr = Register::Address<0x40024245,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc7{    ///< register PPGC7 
        using Addr = Register::Address<0x40024244,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh0{    ///< register PRLH0 
        using Addr = Register::Address<0x40024209,0xffffff00,0x00000000,unsigned char>;
        /// bitfield PRLH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
    }
    namespace MftPpgPrll0{    ///< register PRLL0 
        using Addr = Register::Address<0x40024208,0xffffff00,0x00000000,unsigned char>;
        /// bitfield PRLL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
    }
    namespace MftPpgPrlh1{    ///< register PRLH1 
        using Addr = Register::Address<0x4002420d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll1{    ///< register PRLL1 
        using Addr = Register::Address<0x4002420c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh2{    ///< register PRLH2 
        using Addr = Register::Address<0x40024211,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll2{    ///< register PRLL2 
        using Addr = Register::Address<0x40024210,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh3{    ///< register PRLH3 
        using Addr = Register::Address<0x40024215,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll3{    ///< register PRLL3 
        using Addr = Register::Address<0x40024214,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh4{    ///< register PRLH4 
        using Addr = Register::Address<0x40024249,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll4{    ///< register PRLL4 
        using Addr = Register::Address<0x40024248,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh5{    ///< register PRLH5 
        using Addr = Register::Address<0x4002424d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll5{    ///< register PRLL5 
        using Addr = Register::Address<0x4002424c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh6{    ///< register PRLH6 
        using Addr = Register::Address<0x40024251,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll6{    ///< register PRLL6 
        using Addr = Register::Address<0x40024250,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh7{    ///< register PRLH7 
        using Addr = Register::Address<0x40024255,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll7{    ///< register PRLL7 
        using Addr = Register::Address<0x40024254,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgGatec0{    ///< register GATEC0 
        using Addr = Register::Address<0x40024218,0xffffffcc,0x00000000,unsigned char>;
        /// bitfield STRG2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        /// bitfield EDGE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        /// bitfield STRG0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        /// bitfield EDGE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
    }
    namespace MftPpgGatec4{    ///< register GATEC4 
        using Addr = Register::Address<0x40024258,0xffffffcc,0x00000000,unsigned char>;
        /// bitfield STRG6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        /// bitfield EDGE6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        /// bitfield STRG4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        /// bitfield EDGE4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
    }
    namespace MftPpgIgbtc{    ///< register IGBTC 
        using Addr = Register::Address<0x40024380,0xffffff00,0x00000000,unsigned char>;
        /// bitfield IGATIH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igatih{}; 
        /// bitfield IGNFW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ignfw{}; 
        /// bitfield IGOSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igosel{}; 
        /// bitfield IGTRGLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igtrglv{}; 
        /// bitfield IGBTMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igbtmd{}; 
    }
}
