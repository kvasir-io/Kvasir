#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose I/Os
    namespace Nonemoder{    ///<GPIO port mode register
        using Addr = Register::Address<0x50000400,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> mode15{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> mode14{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> mode13{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> mode12{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> mode11{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mode10{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> mode9{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode8{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> mode7{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> mode6{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> mode5{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mode4{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> mode3{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mode2{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mode1{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode0{}; 
    }
    namespace Noneotyper{    ///<GPIO port output type register
        using Addr = Register::Address<0x50000404,0xffff0000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ot15{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ot14{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ot13{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ot12{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ot11{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ot10{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ot9{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ot8{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ot7{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ot6{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ot5{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ot4{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ot3{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ot2{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ot1{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ot0{}; 
    }
    namespace Noneospeedr{    ///<GPIO port output speed
          register
        using Addr = Register::Address<0x50000408,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ospeed15{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ospeed14{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ospeed13{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ospeed12{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> ospeed11{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ospeed10{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ospeed9{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ospeed8{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> ospeed7{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ospeed6{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ospeed5{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ospeed4{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ospeed3{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ospeed2{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ospeed1{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ospeed0{}; 
    }
    namespace Nonepupdr{    ///<GPIO port pull-up/pull-down
          register
        using Addr = Register::Address<0x5000040c,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pupd15{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pupd14{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pupd13{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pupd12{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pupd11{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pupd10{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pupd9{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pupd8{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pupd7{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pupd6{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pupd5{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pupd4{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pupd3{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pupd2{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pupd1{}; 
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pupd0{}; 
    }
    namespace Noneidr{    ///<GPIO port input data register
        using Addr = Register::Address<0x50000410,0xffff0000,0,unsigned>;
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        ///Port input data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
    }
    namespace Noneodr{    ///<GPIO port output data register
        using Addr = Register::Address<0x50000414,0xffff0000,0,unsigned>;
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> od15{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> od14{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> od13{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> od12{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> od11{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> od10{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> od9{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> od8{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> od7{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> od6{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> od5{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> od4{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> od3{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> od2{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> od1{}; 
        ///Port output data bit (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> od0{}; 
    }
    namespace Nonebsrr{    ///<GPIO port bit set/reset
          register
        using Addr = Register::Address<0x50000418,0x00000000,0,unsigned>;
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> br15{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> br14{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> br13{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> br12{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> br11{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> br10{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> br9{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> br8{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br7{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br6{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br5{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br4{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br3{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br2{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br1{}; 
        ///Port x reset bit y (y =
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br0{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs15{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bs14{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bs13{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bs12{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bs11{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bs10{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bs9{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bs8{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        ///Port x set bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
    }
    namespace Nonelckr{    ///<GPIO port configuration lock
          register
        using Addr = Register::Address<0x5000041c,0xfffe0000,0,unsigned>;
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lckk{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lck15{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lck14{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck13{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lck12{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lck11{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lck10{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lck9{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lck8{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lck7{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lck6{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lck5{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lck4{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lck3{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lck2{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lck1{}; 
        ///Port x lock bit y (y=
              0..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lck0{}; 
    }
    namespace Noneafrl{    ///<GPIO alternate function low
          register
        using Addr = Register::Address<0x50000420,0x00000000,0,unsigned>;
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afsel7{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afsel6{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afsel5{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afsel4{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afsel3{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afsel2{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afsel1{}; 
        ///Alternate function selection for port x
              pin y (y = 0..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afsel0{}; 
    }
    namespace Noneafrh{    ///<GPIO alternate function high
          register
        using Addr = Register::Address<0x50000424,0x00000000,0,unsigned>;
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afsel15{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afsel14{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afsel13{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afsel12{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afsel11{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afsel10{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afsel9{}; 
        ///Alternate function selection for port x
              pin y (y = 8..15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afsel8{}; 
    }
    namespace Nonebrr{    ///<GPIO port bit reset register
        using Addr = Register::Address<0x50000428,0xffff0000,0,unsigned>;
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        ///Port x Reset bit y (y= 0 ..
              15)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
    }
}
