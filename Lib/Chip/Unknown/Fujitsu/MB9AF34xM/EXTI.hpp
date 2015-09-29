#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt and NMI Control
    namespace Noneenir{    ///<Enable Interrupt Request Register
        using Addr = Register::Address<0x40030000,0xffff3e00,0,unsigned>;
        ///Bit15 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        ///Bit14 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
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
        using Addr = Register::Address<0x40030004,0xffff3e00,0,unsigned>;
        ///Bit15 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        ///Bit14 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
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
        using Addr = Register::Address<0x40030008,0xffff3e00,0,unsigned>;
        ///Bit15 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        ///Bit14 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
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
        using Addr = Register::Address<0x4003000c,0x0ffc0000,0,unsigned>;
        ///Bit31 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        ///Bit30 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        ///Bit29 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        ///Bit28 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
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
