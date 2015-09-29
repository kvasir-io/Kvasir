#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral EXTI 
    namespace Noneenir{    ///< register ENIR 
        using Addr = Register::Address<0x40030000,0xff800f00,0,unsigned>;
        /// bitfield EN22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> en22{}; 
        /// bitfield EN21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> en21{}; 
        /// bitfield EN20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> en20{}; 
        /// bitfield EN19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        /// bitfield EN18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        /// bitfield EN17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> en17{}; 
        /// bitfield EN16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en16{}; 
        /// bitfield EN15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        /// bitfield EN14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        /// bitfield EN13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> en13{}; 
        /// bitfield EN12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> en12{}; 
        /// bitfield EN7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        /// bitfield EN6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        /// bitfield EN5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> en5{}; 
        /// bitfield EN4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en4{}; 
        /// bitfield EN3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        /// bitfield EN2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        /// bitfield EN1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
        /// bitfield EN0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
    }
    namespace Noneeirr{    ///< register EIRR 
        using Addr = Register::Address<0x40030004,0xff800f00,0,unsigned>;
        /// bitfield ER22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> er22{}; 
        /// bitfield ER21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> er21{}; 
        /// bitfield ER20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> er20{}; 
        /// bitfield ER19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        /// bitfield ER18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        /// bitfield ER17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> er17{}; 
        /// bitfield ER16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> er16{}; 
        /// bitfield ER15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        /// bitfield ER14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        /// bitfield ER13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> er13{}; 
        /// bitfield ER12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> er12{}; 
        /// bitfield ER7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        /// bitfield ER6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        /// bitfield ER5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> er5{}; 
        /// bitfield ER4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> er4{}; 
        /// bitfield ER3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        /// bitfield ER2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        /// bitfield ER1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> er1{}; 
        /// bitfield ER0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> er0{}; 
    }
    namespace Noneeicl{    ///< register EICL 
        using Addr = Register::Address<0x40030008,0xff800f00,0,unsigned>;
        /// bitfield ECL22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ecl22{}; 
        /// bitfield ECL21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ecl21{}; 
        /// bitfield ECL20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ecl20{}; 
        /// bitfield ECL19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        /// bitfield ECL18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        /// bitfield ECL17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ecl17{}; 
        /// bitfield ECL16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ecl16{}; 
        /// bitfield ECL15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        /// bitfield ECL14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        /// bitfield ECL13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ecl13{}; 
        /// bitfield ECL12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ecl12{}; 
        /// bitfield ECL7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        /// bitfield ECL6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        /// bitfield ECL5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ecl5{}; 
        /// bitfield ECL4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ecl4{}; 
        /// bitfield ECL3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        /// bitfield ECL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        /// bitfield ECL1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecl1{}; 
        /// bitfield ECL0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ecl0{}; 
    }
    namespace Noneelvr{    ///< register ELVR 
        using Addr = Register::Address<0x4003000c,0x00ff0000,0,unsigned>;
        /// bitfield LB15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        /// bitfield LA15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        /// bitfield LB14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        /// bitfield LA14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        /// bitfield LB13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> lb13{}; 
        /// bitfield LA13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> la13{}; 
        /// bitfield LB12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lb12{}; 
        /// bitfield LA12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> la12{}; 
        /// bitfield LB7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        /// bitfield LA7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        /// bitfield LB6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        /// bitfield LA6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        /// bitfield LB5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb5{}; 
        /// bitfield LA5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la5{}; 
        /// bitfield LB4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb4{}; 
        /// bitfield LA4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la4{}; 
        /// bitfield LB3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        /// bitfield LA3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        /// bitfield LB2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        /// bitfield LA2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
        /// bitfield LB1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb1{}; 
        /// bitfield LA1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la1{}; 
        /// bitfield LB0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb0{}; 
        /// bitfield LA0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la0{}; 
    }
    namespace Noneelvr1{    ///< register ELVR1 
        using Addr = Register::Address<0x40030010,0xffffc000,0,unsigned>;
        /// bitfield LB22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb22{}; 
        /// bitfield LA22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la22{}; 
        /// bitfield LB21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb21{}; 
        /// bitfield LA21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la21{}; 
        /// bitfield LB20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb20{}; 
        /// bitfield LA20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la20{}; 
        /// bitfield LB19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb19{}; 
        /// bitfield LA19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la19{}; 
        /// bitfield LB18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb18{}; 
        /// bitfield LA18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la18{}; 
        /// bitfield LB17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb17{}; 
        /// bitfield LA17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la17{}; 
        /// bitfield LB16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb16{}; 
        /// bitfield LA16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la16{}; 
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
