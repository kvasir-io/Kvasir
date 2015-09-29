#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt and NMI Control
    namespace Noneenir{    ///<Enable Interrupt Request Register
        using Addr = Register::Address<0x40030000,0xffff0000,0,unsigned>;
        ///Bit15 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        ///Bit14 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        ///Bit13 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> en13{}; 
        ///Bit12 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> en12{}; 
        ///Bit11 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> en11{}; 
        ///Bit10 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> en10{}; 
        ///Bit9 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> en9{}; 
        ///Bit8 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> en8{}; 
        ///Bit7 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        ///Bit6 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        ///Bit5 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> en5{}; 
        ///Bit4 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en4{}; 
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
        using Addr = Register::Address<0x40030004,0xffff0000,0,unsigned>;
        ///Bit15 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        ///Bit14 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        ///Bit13 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> er13{}; 
        ///Bit12 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> er12{}; 
        ///Bit11 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> er11{}; 
        ///Bit10 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> er10{}; 
        ///Bit9 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> er9{}; 
        ///Bit8 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> er8{}; 
        ///Bit7 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        ///Bit6 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        ///Bit5 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> er5{}; 
        ///Bit4 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> er4{}; 
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
        using Addr = Register::Address<0x40030008,0xffff0000,0,unsigned>;
        ///Bit15 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        ///Bit14 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        ///Bit13 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ecl13{}; 
        ///Bit12 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ecl12{}; 
        ///Bit11 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ecl11{}; 
        ///Bit10 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ecl10{}; 
        ///Bit9 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ecl9{}; 
        ///Bit8 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ecl8{}; 
        ///Bit7 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        ///Bit6 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        ///Bit5 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ecl5{}; 
        ///Bit4 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ecl4{}; 
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
        using Addr = Register::Address<0x4003000c,0x00000000,0,unsigned>;
        ///Bit31 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        ///Bit30 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        ///Bit29 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        ///Bit28 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        ///Bit27 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> lb13{}; 
        ///Bit26 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> la13{}; 
        ///Bit25 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lb12{}; 
        ///Bit24 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> la12{}; 
        ///Bit23 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> lb11{}; 
        ///Bit22 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> la11{}; 
        ///Bit21 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lb10{}; 
        ///Bit20 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> la10{}; 
        ///Bit19 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lb9{}; 
        ///Bit18 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> la9{}; 
        ///Bit17 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lb8{}; 
        ///Bit16 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> la8{}; 
        ///Bit15 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        ///Bit14 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        ///Bit13 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        ///Bit12 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        ///Bit11 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb5{}; 
        ///Bit10 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la5{}; 
        ///Bit9 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb4{}; 
        ///Bit8 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la4{}; 
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
