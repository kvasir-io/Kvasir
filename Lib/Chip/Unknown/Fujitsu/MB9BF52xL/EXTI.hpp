#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt and NMI Control
    namespace Noneenir{    ///<Enable Interrupt Request Register
        using Addr = Register::Address<0x40030000,0xff800f00,0,unsigned>;
        ///Bit22 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> en22{}; 
        namespace En22ValC{
        }
        ///Bit21 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> en21{}; 
        namespace En21ValC{
        }
        ///Bit20 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> en20{}; 
        namespace En20ValC{
        }
        ///Bit19 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        namespace En19ValC{
        }
        ///Bit18 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        namespace En18ValC{
        }
        ///Bit17 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> en17{}; 
        namespace En17ValC{
        }
        ///Bit16 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en16{}; 
        namespace En16ValC{
        }
        ///Bit15 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        namespace En15ValC{
        }
        ///Bit14 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        namespace En14ValC{
        }
        ///Bit13 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> en13{}; 
        namespace En13ValC{
        }
        ///Bit12 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> en12{}; 
        namespace En12ValC{
        }
        ///Bit7 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        namespace En7ValC{
        }
        ///Bit6 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        namespace En6ValC{
        }
        ///Bit5 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> en5{}; 
        namespace En5ValC{
        }
        ///Bit4 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en4{}; 
        namespace En4ValC{
        }
        ///Bit3 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        namespace En3ValC{
        }
        ///Bit2 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        namespace En2ValC{
        }
        ///Bit1 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
        namespace En1ValC{
        }
        ///Bit0 of ENIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
        namespace En0ValC{
        }
    }
    namespace Noneeirr{    ///<External Interrupt Request Register
        using Addr = Register::Address<0x40030004,0xff800f00,0,unsigned>;
        ///Bit22 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> er22{}; 
        namespace Er22ValC{
        }
        ///Bit21 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> er21{}; 
        namespace Er21ValC{
        }
        ///Bit20 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> er20{}; 
        namespace Er20ValC{
        }
        ///Bit19 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        namespace Er19ValC{
        }
        ///Bit18 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        namespace Er18ValC{
        }
        ///Bit17 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> er17{}; 
        namespace Er17ValC{
        }
        ///Bit16 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> er16{}; 
        namespace Er16ValC{
        }
        ///Bit15 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        namespace Er15ValC{
        }
        ///Bit14 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        namespace Er14ValC{
        }
        ///Bit13 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> er13{}; 
        namespace Er13ValC{
        }
        ///Bit12 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> er12{}; 
        namespace Er12ValC{
        }
        ///Bit7 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        namespace Er7ValC{
        }
        ///Bit6 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        namespace Er6ValC{
        }
        ///Bit5 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> er5{}; 
        namespace Er5ValC{
        }
        ///Bit4 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> er4{}; 
        namespace Er4ValC{
        }
        ///Bit3 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        namespace Er3ValC{
        }
        ///Bit2 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        namespace Er2ValC{
        }
        ///Bit1 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> er1{}; 
        namespace Er1ValC{
        }
        ///Bit0 of EIRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> er0{}; 
        namespace Er0ValC{
        }
    }
    namespace Noneeicl{    ///<External Interrupt Clear Register
        using Addr = Register::Address<0x40030008,0xff800f00,0,unsigned>;
        ///Bit22 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ecl22{}; 
        namespace Ecl22ValC{
        }
        ///Bit21 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ecl21{}; 
        namespace Ecl21ValC{
        }
        ///Bit20 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ecl20{}; 
        namespace Ecl20ValC{
        }
        ///Bit19 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        namespace Ecl19ValC{
        }
        ///Bit18 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        namespace Ecl18ValC{
        }
        ///Bit17 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ecl17{}; 
        namespace Ecl17ValC{
        }
        ///Bit16 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ecl16{}; 
        namespace Ecl16ValC{
        }
        ///Bit15 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        namespace Ecl15ValC{
        }
        ///Bit14 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        namespace Ecl14ValC{
        }
        ///Bit13 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ecl13{}; 
        namespace Ecl13ValC{
        }
        ///Bit12 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ecl12{}; 
        namespace Ecl12ValC{
        }
        ///Bit7 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        namespace Ecl7ValC{
        }
        ///Bit6 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        namespace Ecl6ValC{
        }
        ///Bit5 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ecl5{}; 
        namespace Ecl5ValC{
        }
        ///Bit4 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ecl4{}; 
        namespace Ecl4ValC{
        }
        ///Bit3 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        namespace Ecl3ValC{
        }
        ///Bit2 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        namespace Ecl2ValC{
        }
        ///Bit1 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecl1{}; 
        namespace Ecl1ValC{
        }
        ///Bit0 of EICL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ecl0{}; 
        namespace Ecl0ValC{
        }
    }
    namespace Noneelvr{    ///<External Interrupt Level Register
        using Addr = Register::Address<0x4003000c,0x00ff0000,0,unsigned>;
        ///Bit31 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        namespace Lb15ValC{
        }
        ///Bit30 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        namespace La15ValC{
        }
        ///Bit29 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb14{}; 
        namespace Lb14ValC{
        }
        ///Bit28 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la14{}; 
        namespace La14ValC{
        }
        ///Bit27 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> lb13{}; 
        namespace Lb13ValC{
        }
        ///Bit26 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> la13{}; 
        namespace La13ValC{
        }
        ///Bit25 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lb12{}; 
        namespace Lb12ValC{
        }
        ///Bit24 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> la12{}; 
        namespace La12ValC{
        }
        ///Bit15 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb7{}; 
        namespace Lb7ValC{
        }
        ///Bit14 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la7{}; 
        namespace La7ValC{
        }
        ///Bit13 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        namespace Lb6ValC{
        }
        ///Bit12 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        namespace La6ValC{
        }
        ///Bit11 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb5{}; 
        namespace Lb5ValC{
        }
        ///Bit10 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la5{}; 
        namespace La5ValC{
        }
        ///Bit9 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb4{}; 
        namespace Lb4ValC{
        }
        ///Bit8 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la4{}; 
        namespace La4ValC{
        }
        ///Bit7 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        namespace Lb3ValC{
        }
        ///Bit6 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        namespace La3ValC{
        }
        ///Bit5 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        namespace Lb2ValC{
        }
        ///Bit4 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
        namespace La2ValC{
        }
        ///Bit3 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb1{}; 
        namespace Lb1ValC{
        }
        ///Bit2 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la1{}; 
        namespace La1ValC{
        }
        ///Bit1 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb0{}; 
        namespace Lb0ValC{
        }
        ///Bit0 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la0{}; 
        namespace La0ValC{
        }
    }
    namespace Noneelvr1{    ///<External Interrupt Level Register 1
        using Addr = Register::Address<0x40030010,0xffffc000,0,unsigned>;
        ///Bit13 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb22{}; 
        namespace Lb22ValC{
        }
        ///Bit12 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la22{}; 
        namespace La22ValC{
        }
        ///Bit11 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lb21{}; 
        namespace Lb21ValC{
        }
        ///Bit10 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> la21{}; 
        namespace La21ValC{
        }
        ///Bit9 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lb20{}; 
        namespace Lb20ValC{
        }
        ///Bit8 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> la20{}; 
        namespace La20ValC{
        }
        ///Bit7 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb19{}; 
        namespace Lb19ValC{
        }
        ///Bit6 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la19{}; 
        namespace La19ValC{
        }
        ///Bit5 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb18{}; 
        namespace Lb18ValC{
        }
        ///Bit4 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la18{}; 
        namespace La18ValC{
        }
        ///Bit3 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb17{}; 
        namespace Lb17ValC{
        }
        ///Bit2 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la17{}; 
        namespace La17ValC{
        }
        ///Bit1 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb16{}; 
        namespace Lb16ValC{
        }
        ///Bit0 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la16{}; 
        namespace La16ValC{
        }
    }
    namespace Nonenmirr{    ///<Non Maskable Interrupt Request Register
        using Addr = Register::Address<0x40030014,0xfffffffe,0,unsigned char>;
        ///NMI interrupt request detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nr{}; 
        namespace NrValC{
        }
    }
    namespace Nonenmicl{    ///<Non Maskable Interrupt Clear Register
        using Addr = Register::Address<0x40030018,0xfffffffe,0,unsigned char>;
        ///NMI interrupt cause clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
        namespace NclValC{
        }
    }
}
