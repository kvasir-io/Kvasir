#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt and NMI Control
    namespace Noneenir{    ///<External Interrupt Enable Register
        using Addr = Register::Address<0x40030000,0x00000000,0,unsigned>;
        ///External interrupt Ch.31 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> en31{}; 
        namespace En31ValC{
        }
        ///External interrupt Ch.30 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> en30{}; 
        namespace En30ValC{
        }
        ///External interrupt Ch.29 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> en29{}; 
        namespace En29ValC{
        }
        ///External interrupt Ch.28 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> en28{}; 
        namespace En28ValC{
        }
        ///External interrupt Ch.27 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> en27{}; 
        namespace En27ValC{
        }
        ///External interrupt Ch.26 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> en26{}; 
        namespace En26ValC{
        }
        ///External interrupt Ch.25 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> en25{}; 
        namespace En25ValC{
        }
        ///External interrupt Ch.24 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> en24{}; 
        namespace En24ValC{
        }
        ///External interrupt Ch.23 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> en23{}; 
        namespace En23ValC{
        }
        ///External interrupt Ch.22 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> en22{}; 
        namespace En22ValC{
        }
        ///External interrupt Ch.21 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> en21{}; 
        namespace En21ValC{
        }
        ///External interrupt Ch.20 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> en20{}; 
        namespace En20ValC{
        }
        ///External interrupt Ch.19 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> en19{}; 
        namespace En19ValC{
        }
        ///External interrupt Ch.18 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> en18{}; 
        namespace En18ValC{
        }
        ///External interrupt Ch.17 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> en17{}; 
        namespace En17ValC{
        }
        ///External interrupt Ch.16 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en16{}; 
        namespace En16ValC{
        }
        ///External interrupt Ch.15 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        namespace En15ValC{
        }
        ///External interrupt Ch.14 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> en14{}; 
        namespace En14ValC{
        }
        ///External interrupt Ch.13 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> en13{}; 
        namespace En13ValC{
        }
        ///External interrupt Ch.12 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> en12{}; 
        namespace En12ValC{
        }
        ///External interrupt Ch.11 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> en11{}; 
        namespace En11ValC{
        }
        ///External interrupt Ch.10 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> en10{}; 
        namespace En10ValC{
        }
        ///External interrupt Ch.9 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> en9{}; 
        namespace En9ValC{
        }
        ///External interrupt Ch.8 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> en8{}; 
        namespace En8ValC{
        }
        ///External interrupt Ch.7 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en7{}; 
        namespace En7ValC{
        }
        ///External interrupt Ch.6 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        namespace En6ValC{
        }
        ///External interrupt Ch.5 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> en5{}; 
        namespace En5ValC{
        }
        ///External interrupt Ch.4 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en4{}; 
        namespace En4ValC{
        }
        ///External interrupt Ch.3 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        namespace En3ValC{
        }
        ///External interrupt Ch.2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        namespace En2ValC{
        }
        ///External interrupt Ch.1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
        namespace En1ValC{
        }
        ///External interrupt Ch.0 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
        namespace En0ValC{
        }
    }
    namespace Noneeirr{    ///<External Interrupt Factor Register
        using Addr = Register::Address<0x40030004,0x00000000,0,unsigned>;
        ///External interrupt Ch.31 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> er31{}; 
        namespace Er31ValC{
        }
        ///External interrupt Ch.30 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> er30{}; 
        namespace Er30ValC{
        }
        ///External interrupt Ch.29 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> er29{}; 
        namespace Er29ValC{
        }
        ///External interrupt Ch.28 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> er28{}; 
        namespace Er28ValC{
        }
        ///External interrupt Ch.27 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> er27{}; 
        namespace Er27ValC{
        }
        ///External interrupt Ch.26 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> er26{}; 
        namespace Er26ValC{
        }
        ///External interrupt Ch.25 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> er25{}; 
        namespace Er25ValC{
        }
        ///External interrupt Ch.24 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> er24{}; 
        namespace Er24ValC{
        }
        ///External interrupt Ch.23 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> er23{}; 
        namespace Er23ValC{
        }
        ///External interrupt Ch.22 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> er22{}; 
        namespace Er22ValC{
        }
        ///External interrupt Ch.21 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> er21{}; 
        namespace Er21ValC{
        }
        ///External interrupt Ch.20 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> er20{}; 
        namespace Er20ValC{
        }
        ///External interrupt Ch.19 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> er19{}; 
        namespace Er19ValC{
        }
        ///External interrupt Ch.18 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> er18{}; 
        namespace Er18ValC{
        }
        ///External interrupt Ch.17 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> er17{}; 
        namespace Er17ValC{
        }
        ///External interrupt Ch.16 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> er16{}; 
        namespace Er16ValC{
        }
        ///External interrupt Ch.15 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        namespace Er15ValC{
        }
        ///External interrupt Ch.14 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> er14{}; 
        namespace Er14ValC{
        }
        ///External interrupt Ch.13 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> er13{}; 
        namespace Er13ValC{
        }
        ///External interrupt Ch.12 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> er12{}; 
        namespace Er12ValC{
        }
        ///External interrupt Ch.11 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> er11{}; 
        namespace Er11ValC{
        }
        ///External interrupt Ch.10 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> er10{}; 
        namespace Er10ValC{
        }
        ///External interrupt Ch.9 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> er9{}; 
        namespace Er9ValC{
        }
        ///External interrupt Ch.8 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> er8{}; 
        namespace Er8ValC{
        }
        ///External interrupt Ch.7 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> er7{}; 
        namespace Er7ValC{
        }
        ///External interrupt Ch.6 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        namespace Er6ValC{
        }
        ///External interrupt Ch.5 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> er5{}; 
        namespace Er5ValC{
        }
        ///External interrupt Ch.4 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> er4{}; 
        namespace Er4ValC{
        }
        ///External interrupt Ch.3 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        namespace Er3ValC{
        }
        ///External interrupt Ch.2 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        namespace Er2ValC{
        }
        ///External interrupt Ch.1 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> er1{}; 
        namespace Er1ValC{
        }
        ///External interrupt Ch.0 request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> er0{}; 
        namespace Er0ValC{
        }
    }
    namespace Noneeicl{    ///<External Interrupt Factor Clear Register
        using Addr = Register::Address<0x40030008,0x00000000,0,unsigned>;
        ///External interrupt Ch.31 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ecl31{}; 
        namespace Ecl31ValC{
        }
        ///External interrupt Ch.30 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ecl30{}; 
        namespace Ecl30ValC{
        }
        ///External interrupt Ch.29 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ecl29{}; 
        namespace Ecl29ValC{
        }
        ///External interrupt Ch.28 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ecl28{}; 
        namespace Ecl28ValC{
        }
        ///External interrupt Ch.27 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ecl27{}; 
        namespace Ecl27ValC{
        }
        ///External interrupt Ch.26 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ecl26{}; 
        namespace Ecl26ValC{
        }
        ///External interrupt Ch.25 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ecl25{}; 
        namespace Ecl25ValC{
        }
        ///External interrupt Ch.24 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ecl24{}; 
        namespace Ecl24ValC{
        }
        ///External interrupt Ch.23 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ecl23{}; 
        namespace Ecl23ValC{
        }
        ///External interrupt Ch.22 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ecl22{}; 
        namespace Ecl22ValC{
        }
        ///External interrupt Ch.21 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ecl21{}; 
        namespace Ecl21ValC{
        }
        ///External interrupt Ch.20 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ecl20{}; 
        namespace Ecl20ValC{
        }
        ///External interrupt Ch.19 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ecl19{}; 
        namespace Ecl19ValC{
        }
        ///External interrupt Ch.18 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ecl18{}; 
        namespace Ecl18ValC{
        }
        ///External interrupt Ch.17 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ecl17{}; 
        namespace Ecl17ValC{
        }
        ///External interrupt Ch.16 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ecl16{}; 
        namespace Ecl16ValC{
        }
        ///External interrupt Ch.15 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        namespace Ecl15ValC{
        }
        ///External interrupt Ch.14 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ecl14{}; 
        namespace Ecl14ValC{
        }
        ///External interrupt Ch.13 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ecl13{}; 
        namespace Ecl13ValC{
        }
        ///External interrupt Ch.12 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ecl12{}; 
        namespace Ecl12ValC{
        }
        ///External interrupt Ch.11 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ecl11{}; 
        namespace Ecl11ValC{
        }
        ///External interrupt Ch.10 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ecl10{}; 
        namespace Ecl10ValC{
        }
        ///External interrupt Ch.9 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ecl9{}; 
        namespace Ecl9ValC{
        }
        ///External interrupt Ch.8 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ecl8{}; 
        namespace Ecl8ValC{
        }
        ///External interrupt Ch.7 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ecl7{}; 
        namespace Ecl7ValC{
        }
        ///External interrupt Ch.6 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        namespace Ecl6ValC{
        }
        ///External interrupt Ch.5 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ecl5{}; 
        namespace Ecl5ValC{
        }
        ///External interrupt Ch.4 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ecl4{}; 
        namespace Ecl4ValC{
        }
        ///External interrupt Ch.3 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        namespace Ecl3ValC{
        }
        ///External interrupt Ch.2 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        namespace Ecl2ValC{
        }
        ///External interrupt Ch.1 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecl1{}; 
        namespace Ecl1ValC{
        }
        ///External interrupt Ch.0 factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ecl0{}; 
        namespace Ecl0ValC{
        }
    }
    namespace Noneelvr{    ///<External Interrupt Factor Level Register
        using Addr = Register::Address<0x4003000c,0x00000000,0,unsigned>;
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
        ///Bit23 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> lb11{}; 
        namespace Lb11ValC{
        }
        ///Bit22 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> la11{}; 
        namespace La11ValC{
        }
        ///Bit21 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lb10{}; 
        namespace Lb10ValC{
        }
        ///Bit20 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> la10{}; 
        namespace La10ValC{
        }
        ///Bit19 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lb9{}; 
        namespace Lb9ValC{
        }
        ///Bit18 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> la9{}; 
        namespace La9ValC{
        }
        ///Bit17 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lb8{}; 
        namespace Lb8ValC{
        }
        ///Bit16 of ELVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> la8{}; 
        namespace La8ValC{
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
    namespace Noneelvr1{    ///<External Interrupt Factor Level Register 1
        using Addr = Register::Address<0x40030010,0x00000000,0,unsigned>;
        ///Bit31 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb31{}; 
        namespace Lb31ValC{
        }
        ///Bit30 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la31{}; 
        namespace La31ValC{
        }
        ///Bit29 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> lb30{}; 
        namespace Lb30ValC{
        }
        ///Bit28 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> la30{}; 
        namespace La30ValC{
        }
        ///Bit27 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> lb29{}; 
        namespace Lb29ValC{
        }
        ///Bit26 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> la29{}; 
        namespace La29ValC{
        }
        ///Bit25 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lb28{}; 
        namespace Lb28ValC{
        }
        ///Bit24 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> la28{}; 
        namespace La28ValC{
        }
        ///Bit23 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> lb27{}; 
        namespace Lb27ValC{
        }
        ///Bit22 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> la27{}; 
        namespace La27ValC{
        }
        ///Bit21 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lb26{}; 
        namespace Lb26ValC{
        }
        ///Bit20 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> la26{}; 
        namespace La26ValC{
        }
        ///Bit19 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lb25{}; 
        namespace Lb25ValC{
        }
        ///Bit18 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> la25{}; 
        namespace La25ValC{
        }
        ///Bit17 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lb24{}; 
        namespace Lb24ValC{
        }
        ///Bit16 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> la24{}; 
        namespace La24ValC{
        }
        ///Bit15 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lb23{}; 
        namespace Lb23ValC{
        }
        ///Bit14 of ELVR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> la23{}; 
        namespace La23ValC{
        }
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
    namespace Nonenmirr{    ///<Non Maskable Interrupt Factor Register
        using Addr = Register::Address<0x40030014,0xfffffffe,0,unsigned>;
        ///NMI interrupt request detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nr{}; 
        namespace NrValC{
        }
    }
    namespace Nonenmicl{    ///<Non Maskable Interrupt Factor Clear Register
        using Addr = Register::Address<0x40030018,0xfffffffe,0,unsigned>;
        ///NMI interrupt factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
        namespace NclValC{
        }
    }
}
