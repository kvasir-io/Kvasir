#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral EXTI 
    namespace Noneenir{    ///< register ENIR 
        using Addr = Register::Address<0x40030000,0xff800f00,0,unsigned>;
        /// bitfield EN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> en22{}; 
        namespace En22ValC{
        }
        /// bitfield EN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> en21{}; 
        namespace En21ValC{
        }
        /// bitfield EN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> en20{}; 
        namespace En20ValC{
        }
        /// bitfield EN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        namespace En19ValC{
        }
        /// bitfield EN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        namespace En18ValC{
        }
        /// bitfield EN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> en17{}; 
        namespace En17ValC{
        }
        /// bitfield EN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en16{}; 
        namespace En16ValC{
        }
        /// bitfield EN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        namespace En15ValC{
        }
        /// bitfield EN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        namespace En14ValC{
        }
        /// bitfield EN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> en13{}; 
        namespace En13ValC{
        }
        /// bitfield EN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> en12{}; 
        namespace En12ValC{
        }
        /// bitfield EN7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        namespace En7ValC{
        }
        /// bitfield EN6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        namespace En6ValC{
        }
        /// bitfield EN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> en5{}; 
        namespace En5ValC{
        }
        /// bitfield EN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en4{}; 
        namespace En4ValC{
        }
        /// bitfield EN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        namespace En3ValC{
        }
        /// bitfield EN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        namespace En2ValC{
        }
        /// bitfield EN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
        namespace En1ValC{
        }
        /// bitfield EN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
        namespace En0ValC{
        }
    }
    namespace Noneeirr{    ///< register EIRR 
        using Addr = Register::Address<0x40030004,0xff800f00,0,unsigned>;
        /// bitfield ER22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> er22{}; 
        namespace Er22ValC{
        }
        /// bitfield ER21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> er21{}; 
        namespace Er21ValC{
        }
        /// bitfield ER20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> er20{}; 
        namespace Er20ValC{
        }
        /// bitfield ER19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        namespace Er19ValC{
        }
        /// bitfield ER18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        namespace Er18ValC{
        }
        /// bitfield ER17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> er17{}; 
        namespace Er17ValC{
        }
        /// bitfield ER16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> er16{}; 
        namespace Er16ValC{
        }
        /// bitfield ER15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        namespace Er15ValC{
        }
        /// bitfield ER14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        namespace Er14ValC{
        }
        /// bitfield ER13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> er13{}; 
        namespace Er13ValC{
        }
        /// bitfield ER12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> er12{}; 
        namespace Er12ValC{
        }
        /// bitfield ER7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        namespace Er7ValC{
        }
        /// bitfield ER6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        namespace Er6ValC{
        }
        /// bitfield ER5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> er5{}; 
        namespace Er5ValC{
        }
        /// bitfield ER4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> er4{}; 
        namespace Er4ValC{
        }
        /// bitfield ER3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        namespace Er3ValC{
        }
        /// bitfield ER2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        namespace Er2ValC{
        }
        /// bitfield ER1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> er1{}; 
        namespace Er1ValC{
        }
        /// bitfield ER0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> er0{}; 
        namespace Er0ValC{
        }
    }
    namespace Noneeicl{    ///< register EICL 
        using Addr = Register::Address<0x40030008,0xff800f00,0,unsigned>;
        /// bitfield ECL22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ecl22{}; 
        namespace Ecl22ValC{
        }
        /// bitfield ECL21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ecl21{}; 
        namespace Ecl21ValC{
        }
        /// bitfield ECL20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ecl20{}; 
        namespace Ecl20ValC{
        }
        /// bitfield ECL19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        namespace Ecl19ValC{
        }
        /// bitfield ECL18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        namespace Ecl18ValC{
        }
        /// bitfield ECL17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ecl17{}; 
        namespace Ecl17ValC{
        }
        /// bitfield ECL16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ecl16{}; 
        namespace Ecl16ValC{
        }
        /// bitfield ECL15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        namespace Ecl15ValC{
        }
        /// bitfield ECL14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        namespace Ecl14ValC{
        }
        /// bitfield ECL13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ecl13{}; 
        namespace Ecl13ValC{
        }
        /// bitfield ECL12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ecl12{}; 
        namespace Ecl12ValC{
        }
        /// bitfield ECL7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        namespace Ecl7ValC{
        }
        /// bitfield ECL6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        namespace Ecl6ValC{
        }
        /// bitfield ECL5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ecl5{}; 
        namespace Ecl5ValC{
        }
        /// bitfield ECL4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ecl4{}; 
        namespace Ecl4ValC{
        }
        /// bitfield ECL3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        namespace Ecl3ValC{
        }
        /// bitfield ECL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        namespace Ecl2ValC{
        }
        /// bitfield ECL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecl1{}; 
        namespace Ecl1ValC{
        }
        /// bitfield ECL0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ecl0{}; 
        namespace Ecl0ValC{
        }
    }
    namespace Noneelvr{    ///< register ELVR 
        using Addr = Register::Address<0x4003000c,0x00ff0000,0,unsigned>;
        /// bitfield LB15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        namespace Lb15ValC{
        }
        /// bitfield LA15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        namespace La15ValC{
        }
        /// bitfield LB14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        namespace Lb14ValC{
        }
        /// bitfield LA14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        namespace La14ValC{
        }
        /// bitfield LB13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> lb13{}; 
        namespace Lb13ValC{
        }
        /// bitfield LA13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> la13{}; 
        namespace La13ValC{
        }
        /// bitfield LB12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lb12{}; 
        namespace Lb12ValC{
        }
        /// bitfield LA12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> la12{}; 
        namespace La12ValC{
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
        /// bitfield LB5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb5{}; 
        namespace Lb5ValC{
        }
        /// bitfield LA5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la5{}; 
        namespace La5ValC{
        }
        /// bitfield LB4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb4{}; 
        namespace Lb4ValC{
        }
        /// bitfield LA4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la4{}; 
        namespace La4ValC{
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
        /// bitfield LB1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb1{}; 
        namespace Lb1ValC{
        }
        /// bitfield LA1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la1{}; 
        namespace La1ValC{
        }
        /// bitfield LB0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb0{}; 
        namespace Lb0ValC{
        }
        /// bitfield LA0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la0{}; 
        namespace La0ValC{
        }
    }
    namespace Noneelvr1{    ///< register ELVR1 
        using Addr = Register::Address<0x40030010,0xffffc000,0,unsigned>;
        /// bitfield LB22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb22{}; 
        namespace Lb22ValC{
        }
        /// bitfield LA22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la22{}; 
        namespace La22ValC{
        }
        /// bitfield LB21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb21{}; 
        namespace Lb21ValC{
        }
        /// bitfield LA21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la21{}; 
        namespace La21ValC{
        }
        /// bitfield LB20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb20{}; 
        namespace Lb20ValC{
        }
        /// bitfield LA20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la20{}; 
        namespace La20ValC{
        }
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
        /// bitfield LB17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb17{}; 
        namespace Lb17ValC{
        }
        /// bitfield LA17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la17{}; 
        namespace La17ValC{
        }
        /// bitfield LB16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb16{}; 
        namespace Lb16ValC{
        }
        /// bitfield LA16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la16{}; 
        namespace La16ValC{
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
