#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General-purpose I/Os
    namespace GpioeModer{    ///<GPIO port mode register
        using Addr = Register::Address<0x48001000,0x00000000,0x00000000,unsigned>;
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> moder15{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> moder14{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> moder13{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> moder12{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> moder11{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> moder10{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> moder9{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> moder8{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> moder7{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> moder6{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> moder5{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> moder4{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> moder3{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> moder2{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> moder1{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> moder0{}; 
    }
    namespace GpioeOtyper{    ///<GPIO port output type register
        using Addr = Register::Address<0x48001004,0xffff0000,0x00000000,unsigned>;
        ///Port x configuration bit              15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ot15{}; 
        ///Port x configuration bit              14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ot14{}; 
        ///Port x configuration bit              13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ot13{}; 
        ///Port x configuration bit              12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ot12{}; 
        ///Port x configuration bit              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ot11{}; 
        ///Port x configuration bit              10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ot10{}; 
        ///Port x configuration bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ot9{}; 
        ///Port x configuration bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ot8{}; 
        ///Port x configuration bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ot7{}; 
        ///Port x configuration bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ot6{}; 
        ///Port x configuration bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ot5{}; 
        ///Port x configuration bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ot4{}; 
        ///Port x configuration bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ot3{}; 
        ///Port x configuration bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ot2{}; 
        ///Port x configuration bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ot1{}; 
        ///Port x configuration bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ot0{}; 
    }
    namespace GpioeOspeedr{    ///<GPIO port output speed          register
        using Addr = Register::Address<0x48001008,0x00000000,0x00000000,unsigned>;
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ospeedr15{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ospeedr14{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ospeedr13{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ospeedr12{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> ospeedr11{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ospeedr10{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ospeedr9{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ospeedr8{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> ospeedr7{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ospeedr6{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ospeedr5{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ospeedr4{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ospeedr3{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ospeedr2{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ospeedr1{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ospeedr0{}; 
    }
    namespace GpioePupdr{    ///<GPIO port pull-up/pull-down          register
        using Addr = Register::Address<0x4800100c,0x00000000,0x00000000,unsigned>;
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pupdr15{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pupdr14{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pupdr13{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pupdr12{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pupdr11{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pupdr10{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pupdr9{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pupdr8{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pupdr7{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pupdr6{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pupdr5{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pupdr4{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pupdr3{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pupdr2{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pupdr1{}; 
        ///Port x configuration bits (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pupdr0{}; 
    }
    namespace GpioeIdr{    ///<GPIO port input data register
        using Addr = Register::Address<0x48001010,0xffff0000,0x00000000,unsigned>;
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> idr15{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> idr14{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> idr13{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> idr12{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> idr11{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> idr10{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idr9{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idr8{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idr7{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> idr6{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> idr5{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idr4{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idr3{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idr2{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idr1{}; 
        ///Port input data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idr0{}; 
    }
    namespace GpioeOdr{    ///<GPIO port output data register
        using Addr = Register::Address<0x48001014,0xffff0000,0x00000000,unsigned>;
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> odr15{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> odr14{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> odr13{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> odr12{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> odr11{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> odr10{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> odr9{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odr8{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> odr7{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> odr6{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> odr5{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> odr4{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> odr3{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odr2{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odr1{}; 
        ///Port output data (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> odr0{}; 
    }
    namespace GpioeBsrr{    ///<GPIO port bit set/reset          register
        using Addr = Register::Address<0x48001018,0x00000000,0x00000000,unsigned>;
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> br15{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> br14{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> br13{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> br12{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> br11{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> br10{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> br9{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> br8{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br7{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br6{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br5{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br4{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br3{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br2{}; 
        ///Port x reset bit y (y =              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br1{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br0{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs15{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bs14{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bs13{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bs12{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bs11{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bs10{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bs9{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bs8{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        ///Port x set bit y (y=              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
    }
    namespace GpioeAfrl{    ///<GPIO alternate function low          register
        using Addr = Register::Address<0x48001020,0x00000000,0x00000000,unsigned>;
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afrl7{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afrl6{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afrl5{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afrl4{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afrl3{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afrl2{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afrl1{}; 
        ///Alternate function selection for port x              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afrl0{}; 
    }
    namespace GpioeAfrh{    ///<GPIO alternate function high          register
        using Addr = Register::Address<0x48001024,0x00000000,0x00000000,unsigned>;
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afrh15{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afrh14{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afrh13{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afrh12{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afrh11{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afrh10{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afrh9{}; 
        ///Alternate function selection for port x              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afrh8{}; 
    }
    namespace GpioeBrr{    ///<Port bit reset register
        using Addr = Register::Address<0x48001028,0xffff0000,0x00000000,unsigned>;
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
    }
}
