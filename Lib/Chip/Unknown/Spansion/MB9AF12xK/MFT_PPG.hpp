#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFT_PPG 
    namespace Nonettcr0{    ///< register TTCR0 
        using Addr = Register::Address<0x40024000,0xffff00ff,0,unsigned>;
        /// bitfield TRG6O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        namespace Trg6oValC{
        }
        /// bitfield TRG4O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        namespace Trg4oValC{
        }
        /// bitfield TRG2O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        namespace Trg2oValC{
        }
        /// bitfield TRG0O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        namespace Trg0oValC{
        }
        /// bitfield CS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        namespace Cs0ValC{
        }
        /// bitfield MONI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni0{}; 
        namespace Moni0ValC{
        }
        /// bitfield STR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
        namespace Str0ValC{
        }
    }
    namespace Nonecomp0{    ///< register COMP0 
        using Addr = Register::Address<0x40024008,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp2{    ///< register COMP2 
        using Addr = Register::Address<0x4002400c,0xffffffff,0,unsigned char>;
    }
    namespace Nonecomp4{    ///< register COMP4 
        using Addr = Register::Address<0x40024010,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp6{    ///< register COMP6 
        using Addr = Register::Address<0x40024014,0xffffffff,0,unsigned>;
    }
    namespace Nonetrg{    ///< register TRG 
        using Addr = Register::Address<0x40024100,0xffffff00,0,unsigned>;
        /// bitfield PEN07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        namespace Pen07ValC{
        }
        /// bitfield PEN06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        namespace Pen06ValC{
        }
        /// bitfield PEN05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        namespace Pen05ValC{
        }
        /// bitfield PEN04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        namespace Pen04ValC{
        }
        /// bitfield PEN03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        namespace Pen03ValC{
        }
        /// bitfield PEN02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        namespace Pen02ValC{
        }
        /// bitfield PEN01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        namespace Pen01ValC{
        }
        /// bitfield PEN00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
        namespace Pen00ValC{
        }
    }
    namespace Nonerevc{    ///< register REVC 
        using Addr = Register::Address<0x40024104,0xffffff00,0,unsigned>;
        /// bitfield REV07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        namespace Rev07ValC{
        }
        /// bitfield REV06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        namespace Rev06ValC{
        }
        /// bitfield REV05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        namespace Rev05ValC{
        }
        /// bitfield REV04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        namespace Rev04ValC{
        }
        /// bitfield REV03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        namespace Rev03ValC{
        }
        /// bitfield REV02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        namespace Rev02ValC{
        }
        /// bitfield REV01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        namespace Rev01ValC{
        }
        /// bitfield REV00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
        namespace Rev00ValC{
        }
    }
    namespace Noneppgc0{    ///< register PPGC0 
        using Addr = Register::Address<0x40024201,0xffffff00,0,unsigned char>;
        /// bitfield PIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        namespace PieValC{
        }
        /// bitfield PUF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        namespace PufValC{
        }
        /// bitfield INTM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        namespace IntmValC{
        }
        /// bitfield PCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        namespace PcsValC{
        }
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        /// bitfield TTRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
        namespace TtrgValC{
        }
    }
    namespace Noneppgc1{    ///< register PPGC1 
        using Addr = Register::Address<0x40024200,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc2{    ///< register PPGC2 
        using Addr = Register::Address<0x40024205,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc3{    ///< register PPGC3 
        using Addr = Register::Address<0x40024204,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc4{    ///< register PPGC4 
        using Addr = Register::Address<0x40024241,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc5{    ///< register PPGC5 
        using Addr = Register::Address<0x40024240,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc6{    ///< register PPGC6 
        using Addr = Register::Address<0x40024245,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc7{    ///< register PPGC7 
        using Addr = Register::Address<0x40024244,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh0{    ///< register PRLH0 
        using Addr = Register::Address<0x40024209,0xffffff00,0,unsigned char>;
        /// bitfield PRLH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
        namespace PrlhValC{
        }
    }
    namespace Noneprll0{    ///< register PRLL0 
        using Addr = Register::Address<0x40024208,0xffffff00,0,unsigned char>;
        /// bitfield PRLL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
        namespace PrllValC{
        }
    }
    namespace Noneprlh1{    ///< register PRLH1 
        using Addr = Register::Address<0x4002420d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll1{    ///< register PRLL1 
        using Addr = Register::Address<0x4002420c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh2{    ///< register PRLH2 
        using Addr = Register::Address<0x40024211,0xffffffff,0,unsigned>;
    }
    namespace Noneprll2{    ///< register PRLL2 
        using Addr = Register::Address<0x40024210,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh3{    ///< register PRLH3 
        using Addr = Register::Address<0x40024215,0xffffffff,0,unsigned>;
    }
    namespace Noneprll3{    ///< register PRLL3 
        using Addr = Register::Address<0x40024214,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh4{    ///< register PRLH4 
        using Addr = Register::Address<0x40024249,0xffffffff,0,unsigned>;
    }
    namespace Noneprll4{    ///< register PRLL4 
        using Addr = Register::Address<0x40024248,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh5{    ///< register PRLH5 
        using Addr = Register::Address<0x4002424d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll5{    ///< register PRLL5 
        using Addr = Register::Address<0x4002424c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh6{    ///< register PRLH6 
        using Addr = Register::Address<0x40024251,0xffffffff,0,unsigned>;
    }
    namespace Noneprll6{    ///< register PRLL6 
        using Addr = Register::Address<0x40024250,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh7{    ///< register PRLH7 
        using Addr = Register::Address<0x40024255,0xffffffff,0,unsigned>;
    }
    namespace Noneprll7{    ///< register PRLL7 
        using Addr = Register::Address<0x40024254,0xffffffff,0,unsigned>;
    }
    namespace Nonegatec0{    ///< register GATEC0 
        using Addr = Register::Address<0x40024218,0xffffffcc,0,unsigned char>;
        /// bitfield STRG2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        namespace Strg2ValC{
        }
        /// bitfield EDGE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        namespace Edge2ValC{
        }
        /// bitfield STRG0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        namespace Strg0ValC{
        }
        /// bitfield EDGE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
        namespace Edge0ValC{
        }
    }
    namespace Nonegatec4{    ///< register GATEC4 
        using Addr = Register::Address<0x40024258,0xffffffcc,0,unsigned char>;
        /// bitfield STRG6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        namespace Strg6ValC{
        }
        /// bitfield EDGE6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        namespace Edge6ValC{
        }
        /// bitfield STRG4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        namespace Strg4ValC{
        }
        /// bitfield EDGE4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
        namespace Edge4ValC{
        }
    }
    namespace Noneigbtc{    ///< register IGBTC 
        using Addr = Register::Address<0x40024380,0xffffff00,0,unsigned char>;
        /// bitfield IGATIH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igatih{}; 
        namespace IgatihValC{
        }
        /// bitfield IGNFW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ignfw{}; 
        namespace IgnfwValC{
        }
        /// bitfield IGOSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igosel{}; 
        namespace IgoselValC{
        }
        /// bitfield IGTRGLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igtrglv{}; 
        namespace IgtrglvValC{
        }
        /// bitfield IGBTMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igbtmd{}; 
        namespace IgbtmdValC{
        }
    }
}
