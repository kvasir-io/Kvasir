#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral EXTI 
    namespace Noneenir{    ///< register ENIR 
        using Addr = Register::Address<0x40030000,0xfff3bf33,0,unsigned>;
        /// bitfield EN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        namespace En19ValC{
        }
        /// bitfield EN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        namespace En18ValC{
        }
        /// bitfield EN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        namespace En14ValC{
        }
        /// bitfield EN7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        namespace En7ValC{
        }
        /// bitfield EN6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        namespace En6ValC{
        }
        /// bitfield EN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        namespace En3ValC{
        }
        /// bitfield EN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        namespace En2ValC{
        }
    }
    namespace Noneeirr{    ///< register EIRR 
        using Addr = Register::Address<0x40030004,0xfff3bf33,0,unsigned>;
        /// bitfield ER19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        namespace Er19ValC{
        }
        /// bitfield ER18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        namespace Er18ValC{
        }
        /// bitfield ER14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        namespace Er14ValC{
        }
        /// bitfield ER7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        namespace Er7ValC{
        }
        /// bitfield ER6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        namespace Er6ValC{
        }
        /// bitfield ER3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        namespace Er3ValC{
        }
        /// bitfield ER2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        namespace Er2ValC{
        }
    }
    namespace Noneeicl{    ///< register EICL 
        using Addr = Register::Address<0x40030008,0xfff3bf33,0,unsigned>;
        /// bitfield ECL19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        namespace Ecl19ValC{
        }
        /// bitfield ECL18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        namespace Ecl18ValC{
        }
        /// bitfield ECL14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        namespace Ecl14ValC{
        }
        /// bitfield ECL7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        namespace Ecl7ValC{
        }
        /// bitfield ECL6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        namespace Ecl6ValC{
        }
        /// bitfield ECL3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        namespace Ecl3ValC{
        }
        /// bitfield ECL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        namespace Ecl2ValC{
        }
    }
    namespace Noneelvr{    ///< register ELVR 
        using Addr = Register::Address<0x4003000c,0xcfff0f0f,0,unsigned>;
        /// bitfield LB14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        namespace Lb14ValC{
        }
        /// bitfield LA14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        namespace La14ValC{
        }
        /// bitfield LB7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        namespace Lb7ValC{
        }
        /// bitfield LA7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        namespace La7ValC{
        }
        /// bitfield LB6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        namespace Lb6ValC{
        }
        /// bitfield LA6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        namespace La6ValC{
        }
        /// bitfield LB3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        namespace Lb3ValC{
        }
        /// bitfield LA3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        namespace La3ValC{
        }
        /// bitfield LB2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        namespace Lb2ValC{
        }
        /// bitfield LA2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
        namespace La2ValC{
        }
    }
    namespace Noneelvr1{    ///< register ELVR1 
        using Addr = Register::Address<0x40030010,0xffffff0f,0,unsigned>;
        /// bitfield LB19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb19{}; 
        namespace Lb19ValC{
        }
        /// bitfield LA19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la19{}; 
        namespace La19ValC{
        }
        /// bitfield LB18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb18{}; 
        namespace Lb18ValC{
        }
        /// bitfield LA18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la18{}; 
        namespace La18ValC{
        }
    }
    namespace Nonenmirr{    ///< register NMIRR 
        using Addr = Register::Address<0x40030014,0xfffffffe,0,unsigned char>;
        /// bitfield NR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nr{}; 
        namespace NrValC{
        }
    }
    namespace Nonenmicl{    ///< register NMICL 
        using Addr = Register::Address<0x40030018,0xfffffffe,0,unsigned char>;
        /// bitfield NCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
        namespace NclValC{
        }
    }
}
