#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral EXTI 
    namespace Noneenir{    ///< register ENIR 
        using Addr = Register::Address<0x40030000,0xfff3bf33,0,unsigned>;
        /// bitfield EN19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        /// bitfield EN18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        /// bitfield EN14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        /// bitfield EN7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        /// bitfield EN6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        /// bitfield EN3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        /// bitfield EN2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
    }
    namespace Noneeirr{    ///< register EIRR 
        using Addr = Register::Address<0x40030004,0xfff3bf33,0,unsigned>;
        /// bitfield ER19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        /// bitfield ER18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        /// bitfield ER14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        /// bitfield ER7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        /// bitfield ER6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        /// bitfield ER3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        /// bitfield ER2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
    }
    namespace Noneeicl{    ///< register EICL 
        using Addr = Register::Address<0x40030008,0xfff3bf33,0,unsigned>;
        /// bitfield ECL19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        /// bitfield ECL18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        /// bitfield ECL14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        /// bitfield ECL7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        /// bitfield ECL6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        /// bitfield ECL3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        /// bitfield ECL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
    }
    namespace Noneelvr{    ///< register ELVR 
        using Addr = Register::Address<0x4003000c,0xcfff0f0f,0,unsigned>;
        /// bitfield LB14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        /// bitfield LA14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        /// bitfield LB7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        /// bitfield LA7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        /// bitfield LB6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        /// bitfield LA6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        /// bitfield LB3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        /// bitfield LA3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        /// bitfield LB2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        /// bitfield LA2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
    }
    namespace Noneelvr1{    ///< register ELVR1 
        using Addr = Register::Address<0x40030010,0xffffff0f,0,unsigned>;
        /// bitfield LB19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb19{}; 
        /// bitfield LA19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la19{}; 
        /// bitfield LB18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb18{}; 
        /// bitfield LA18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la18{}; 
    }
    namespace Nonenmirr{    ///< register NMIRR 
        using Addr = Register::Address<0x40030014,0xfffffffe,0,unsigned char>;
        /// bitfield NR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nr{}; 
    }
    namespace Nonenmicl{    ///< register NMICL 
        using Addr = Register::Address<0x40030018,0xfffffffe,0,unsigned char>;
        /// bitfield NCL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
    }
}
