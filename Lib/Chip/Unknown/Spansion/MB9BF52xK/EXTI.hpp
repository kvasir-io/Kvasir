#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt and NMI Control
    namespace Noneenir{    ///<Enable Interrupt Request Register
        using Addr = Register::Address<0x40030000,0xffc03f30,0,unsigned>;
        ///Bit21 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> en21{}; 
        ///Bit20 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> en20{}; 
        ///Bit19 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        ///Bit18 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        ///Bit17 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> en17{}; 
        ///Bit16 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en16{}; 
        ///Bit15 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        ///Bit14 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        ///Bit7 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        ///Bit6 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        ///Bit3 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        ///Bit2 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        ///Bit1 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
        ///Bit0 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
    }
    namespace Noneeirr{    ///<External Interrupt Request Register
        using Addr = Register::Address<0x40030004,0xffc03f30,0,unsigned>;
        ///Bit21 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> er21{}; 
        ///Bit20 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> er20{}; 
        ///Bit19 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        ///Bit18 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        ///Bit17 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> er17{}; 
        ///Bit16 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> er16{}; 
        ///Bit15 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        ///Bit14 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        ///Bit7 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        ///Bit6 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        ///Bit3 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        ///Bit2 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        ///Bit1 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> er1{}; 
        ///Bit0 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> er0{}; 
    }
    namespace Noneeicl{    ///<External Interrupt Clear Register
        using Addr = Register::Address<0x40030008,0xffc03f30,0,unsigned>;
        ///Bit21 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ecl21{}; 
        ///Bit20 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ecl20{}; 
        ///Bit19 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        ///Bit18 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        ///Bit17 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ecl17{}; 
        ///Bit16 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ecl16{}; 
        ///Bit15 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        ///Bit14 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        ///Bit7 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        ///Bit6 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        ///Bit3 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        ///Bit2 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        ///Bit1 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecl1{}; 
        ///Bit0 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ecl0{}; 
    }
    namespace Noneelvr{    ///<External Interrupt Level Register
        using Addr = Register::Address<0x4003000c,0x0fff0f00,0,unsigned>;
        ///Bit31 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        ///Bit30 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        ///Bit29 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        ///Bit28 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        ///Bit15 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        ///Bit14 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        ///Bit13 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        ///Bit12 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        ///Bit7 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        ///Bit6 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        ///Bit5 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        ///Bit4 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
        ///Bit3 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb1{}; 
        ///Bit2 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la1{}; 
        ///Bit1 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb0{}; 
        ///Bit0 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la0{}; 
    }
    namespace Noneelvr1{    ///<External Interrupt Level Register 1
        using Addr = Register::Address<0x40030010,0xfffff000,0,unsigned>;
        ///Bit11 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb21{}; 
        ///Bit10 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la21{}; 
        ///Bit9 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb20{}; 
        ///Bit8 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la20{}; 
        ///Bit7 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb19{}; 
        ///Bit6 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la19{}; 
        ///Bit5 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb18{}; 
        ///Bit4 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la18{}; 
        ///Bit3 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb17{}; 
        ///Bit2 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la17{}; 
        ///Bit1 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb16{}; 
        ///Bit0 of ELVR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la16{}; 
    }
    namespace Nonenmirr{    ///<Non Maskable Interrupt Request Register
        using Addr = Register::Address<0x40030014,0xfffffffe,0,unsigned char>;
        ///NMI interrupt request detection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nr{}; 
    }
    namespace Nonenmicl{    ///<Non Maskable Interrupt Clear Register
        using Addr = Register::Address<0x40030018,0xfffffffe,0,unsigned char>;
        ///NMI interrupt cause clear bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
    }
}
