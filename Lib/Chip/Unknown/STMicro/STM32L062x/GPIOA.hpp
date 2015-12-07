#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose I/Os
    namespace Nonemoder{    ///<GPIO port mode register
        using Addr = Register::Address<0x50000000,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode0{}; 
        namespace Mode0ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mode1{}; 
        namespace Mode1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mode2{}; 
        namespace Mode2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> mode3{}; 
        namespace Mode3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mode4{}; 
        namespace Mode4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> mode5{}; 
        namespace Mode5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> mode6{}; 
        namespace Mode6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> mode7{}; 
        namespace Mode7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode8{}; 
        namespace Mode8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> mode9{}; 
        namespace Mode9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mode10{}; 
        namespace Mode10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> mode11{}; 
        namespace Mode11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> mode12{}; 
        namespace Mode12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> mode13{}; 
        namespace Mode13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> mode14{}; 
        namespace Mode14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> mode15{}; 
        namespace Mode15ValC{
        }
    }
    namespace Noneotyper{    ///<GPIO port output type register
        using Addr = Register::Address<0x50000004,0xffff0000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ot15{}; 
        namespace Ot15ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ot14{}; 
        namespace Ot14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ot13{}; 
        namespace Ot13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ot12{}; 
        namespace Ot12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ot11{}; 
        namespace Ot11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ot10{}; 
        namespace Ot10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ot9{}; 
        namespace Ot9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ot8{}; 
        namespace Ot8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ot7{}; 
        namespace Ot7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ot6{}; 
        namespace Ot6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ot5{}; 
        namespace Ot5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ot4{}; 
        namespace Ot4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ot3{}; 
        namespace Ot3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ot2{}; 
        namespace Ot2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ot1{}; 
        namespace Ot1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ot0{}; 
        namespace Ot0ValC{
        }
    }
    namespace Noneospeedr{    ///<GPIO port output speed
          register
        using Addr = Register::Address<0x50000008,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ospeed15{}; 
        namespace Ospeed15ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ospeed14{}; 
        namespace Ospeed14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ospeed13{}; 
        namespace Ospeed13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ospeed12{}; 
        namespace Ospeed12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> ospeed11{}; 
        namespace Ospeed11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ospeed10{}; 
        namespace Ospeed10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ospeed9{}; 
        namespace Ospeed9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ospeed8{}; 
        namespace Ospeed8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> ospeed7{}; 
        namespace Ospeed7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ospeed6{}; 
        namespace Ospeed6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ospeed5{}; 
        namespace Ospeed5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ospeed4{}; 
        namespace Ospeed4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ospeed3{}; 
        namespace Ospeed3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ospeed2{}; 
        namespace Ospeed2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ospeed1{}; 
        namespace Ospeed1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ospeed0{}; 
        namespace Ospeed0ValC{
        }
    }
    namespace Nonepupdr{    ///<GPIO port pull-up/pull-down
          register
        using Addr = Register::Address<0x5000000c,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pupd15{}; 
        namespace Pupd15ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pupd14{}; 
        namespace Pupd14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pupd13{}; 
        namespace Pupd13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pupd12{}; 
        namespace Pupd12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pupd11{}; 
        namespace Pupd11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pupd10{}; 
        namespace Pupd10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pupd9{}; 
        namespace Pupd9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pupd8{}; 
        namespace Pupd8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pupd7{}; 
        namespace Pupd7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pupd6{}; 
        namespace Pupd6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pupd5{}; 
        namespace Pupd5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pupd4{}; 
        namespace Pupd4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pupd3{}; 
        namespace Pupd3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pupd2{}; 
        namespace Pupd2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pupd1{}; 
        namespace Pupd1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pupd0{}; 
        namespace Pupd0ValC{
        }
    }
    namespace Noneidr{    ///<GPIO port input data register
        using Addr = Register::Address<0x50000010,0xffff0000,0,unsigned>;
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        namespace Id15ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        namespace Id14ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        namespace Id13ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        namespace Id12ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        namespace Id11ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        namespace Id10ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        namespace Id9ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        namespace Id8ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        namespace Id7ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        namespace Id6ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        namespace Id5ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        namespace Id4ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        namespace Id3ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        namespace Id2ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        namespace Id1ValC{
        }
        ///Port input data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        namespace Id0ValC{
        }
    }
    namespace Noneodr{    ///<GPIO port output data register
        using Addr = Register::Address<0x50000014,0xffff0000,0,unsigned>;
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> od15{}; 
        namespace Od15ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> od14{}; 
        namespace Od14ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> od13{}; 
        namespace Od13ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> od12{}; 
        namespace Od12ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> od11{}; 
        namespace Od11ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> od10{}; 
        namespace Od10ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> od9{}; 
        namespace Od9ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> od8{}; 
        namespace Od8ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> od7{}; 
        namespace Od7ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> od6{}; 
        namespace Od6ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> od5{}; 
        namespace Od5ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> od4{}; 
        namespace Od4ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> od3{}; 
        namespace Od3ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> od2{}; 
        namespace Od2ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> od1{}; 
        namespace Od1ValC{
        }
        ///Port output data bit (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> od0{}; 
        namespace Od0ValC{
        }
    }
    namespace Nonebsrr{    ///<GPIO port bit set/reset
          register
        using Addr = Register::Address<0x50000018,0x00000000,0,unsigned>;
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs15{}; 
        namespace Bs15ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bs14{}; 
        namespace Bs14ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bs13{}; 
        namespace Bs13ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bs12{}; 
        namespace Bs12ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bs11{}; 
        namespace Bs11ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bs10{}; 
        namespace Bs10ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bs9{}; 
        namespace Bs9ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bs8{}; 
        namespace Bs8ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        namespace Bs7ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        namespace Bs6ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        namespace Bs5ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        namespace Bs4ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        namespace Bs3ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        namespace Bs2ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        namespace Bs1ValC{
        }
        ///Port x set bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
        namespace Bs0ValC{
        }
    }
    namespace Nonelckr{    ///<GPIO port configuration lock
          register
        using Addr = Register::Address<0x5000001c,0xfffe0000,0,unsigned>;
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lckk{}; 
        namespace LckkValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lck15{}; 
        namespace Lck15ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lck14{}; 
        namespace Lck14ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck13{}; 
        namespace Lck13ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lck12{}; 
        namespace Lck12ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lck11{}; 
        namespace Lck11ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lck10{}; 
        namespace Lck10ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lck9{}; 
        namespace Lck9ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lck8{}; 
        namespace Lck8ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lck7{}; 
        namespace Lck7ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lck6{}; 
        namespace Lck6ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lck5{}; 
        namespace Lck5ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lck4{}; 
        namespace Lck4ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lck3{}; 
        namespace Lck3ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lck2{}; 
        namespace Lck2ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lck1{}; 
        namespace Lck1ValC{
        }
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lck0{}; 
        namespace Lck0ValC{
        }
    }
    namespace Noneafrl{    ///<GPIO alternate function low
          register
        using Addr = Register::Address<0x50000020,0x00000000,0,unsigned>;
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afsel7{}; 
        namespace Afsel7ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afsel6{}; 
        namespace Afsel6ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afsel5{}; 
        namespace Afsel5ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afsel4{}; 
        namespace Afsel4ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afsel3{}; 
        namespace Afsel3ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afsel2{}; 
        namespace Afsel2ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afsel1{}; 
        namespace Afsel1ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afsel0{}; 
        namespace Afsel0ValC{
        }
    }
    namespace Noneafrh{    ///<GPIO alternate function high
          register
        using Addr = Register::Address<0x50000024,0x00000000,0,unsigned>;
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afsel15{}; 
        namespace Afsel15ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afsel14{}; 
        namespace Afsel14ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afsel13{}; 
        namespace Afsel13ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afsel12{}; 
        namespace Afsel12ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afsel11{}; 
        namespace Afsel11ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afsel10{}; 
        namespace Afsel10ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afsel9{}; 
        namespace Afsel9ValC{
        }
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afsel8{}; 
        namespace Afsel8ValC{
        }
    }
    namespace Nonebrr{    ///<GPIO port bit reset register
        using Addr = Register::Address<0x50000028,0xffff0000,0,unsigned>;
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
    }
}
