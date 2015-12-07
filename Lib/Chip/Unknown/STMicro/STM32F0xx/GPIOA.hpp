#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose I/Os
    namespace Nonemoder{    ///<GPIO port mode register
        using Addr = Register::Address<0x48000000,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> moder15{}; 
        namespace Moder15ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> moder14{}; 
        namespace Moder14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> moder13{}; 
        namespace Moder13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> moder12{}; 
        namespace Moder12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> moder11{}; 
        namespace Moder11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> moder10{}; 
        namespace Moder10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> moder9{}; 
        namespace Moder9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> moder8{}; 
        namespace Moder8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> moder7{}; 
        namespace Moder7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> moder6{}; 
        namespace Moder6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> moder5{}; 
        namespace Moder5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> moder4{}; 
        namespace Moder4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> moder3{}; 
        namespace Moder3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> moder2{}; 
        namespace Moder2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> moder1{}; 
        namespace Moder1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> moder0{}; 
        namespace Moder0ValC{
        }
    }
    namespace Noneotyper{    ///<GPIO port output type register
        using Addr = Register::Address<0x48000004,0xffff0000,0,unsigned>;
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
        using Addr = Register::Address<0x48000008,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ospeedr15{}; 
        namespace Ospeedr15ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ospeedr14{}; 
        namespace Ospeedr14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ospeedr13{}; 
        namespace Ospeedr13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ospeedr12{}; 
        namespace Ospeedr12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> ospeedr11{}; 
        namespace Ospeedr11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ospeedr10{}; 
        namespace Ospeedr10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ospeedr9{}; 
        namespace Ospeedr9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ospeedr8{}; 
        namespace Ospeedr8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> ospeedr7{}; 
        namespace Ospeedr7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ospeedr6{}; 
        namespace Ospeedr6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ospeedr5{}; 
        namespace Ospeedr5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ospeedr4{}; 
        namespace Ospeedr4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ospeedr3{}; 
        namespace Ospeedr3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ospeedr2{}; 
        namespace Ospeedr2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ospeedr1{}; 
        namespace Ospeedr1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ospeedr0{}; 
        namespace Ospeedr0ValC{
        }
    }
    namespace Nonepupdr{    ///<GPIO port pull-up/pull-down
          register
        using Addr = Register::Address<0x4800000c,0x00000000,0,unsigned>;
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pupdr15{}; 
        namespace Pupdr15ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pupdr14{}; 
        namespace Pupdr14ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pupdr13{}; 
        namespace Pupdr13ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pupdr12{}; 
        namespace Pupdr12ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pupdr11{}; 
        namespace Pupdr11ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pupdr10{}; 
        namespace Pupdr10ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pupdr9{}; 
        namespace Pupdr9ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pupdr8{}; 
        namespace Pupdr8ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pupdr7{}; 
        namespace Pupdr7ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pupdr6{}; 
        namespace Pupdr6ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pupdr5{}; 
        namespace Pupdr5ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pupdr4{}; 
        namespace Pupdr4ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pupdr3{}; 
        namespace Pupdr3ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pupdr2{}; 
        namespace Pupdr2ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pupdr1{}; 
        namespace Pupdr1ValC{
        }
        ///Port x configuration bits (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pupdr0{}; 
        namespace Pupdr0ValC{
        }
    }
    namespace Noneidr{    ///<GPIO port input data register
        using Addr = Register::Address<0x48000010,0xffff0000,0,unsigned>;
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> idr15{}; 
        namespace Idr15ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> idr14{}; 
        namespace Idr14ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> idr13{}; 
        namespace Idr13ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> idr12{}; 
        namespace Idr12ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> idr11{}; 
        namespace Idr11ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> idr10{}; 
        namespace Idr10ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idr9{}; 
        namespace Idr9ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idr8{}; 
        namespace Idr8ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idr7{}; 
        namespace Idr7ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> idr6{}; 
        namespace Idr6ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> idr5{}; 
        namespace Idr5ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idr4{}; 
        namespace Idr4ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idr3{}; 
        namespace Idr3ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idr2{}; 
        namespace Idr2ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idr1{}; 
        namespace Idr1ValC{
        }
        ///Port input data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idr0{}; 
        namespace Idr0ValC{
        }
    }
    namespace Noneodr{    ///<GPIO port output data register
        using Addr = Register::Address<0x48000014,0xffff0000,0,unsigned>;
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> odr15{}; 
        namespace Odr15ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> odr14{}; 
        namespace Odr14ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> odr13{}; 
        namespace Odr13ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> odr12{}; 
        namespace Odr12ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> odr11{}; 
        namespace Odr11ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> odr10{}; 
        namespace Odr10ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> odr9{}; 
        namespace Odr9ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odr8{}; 
        namespace Odr8ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> odr7{}; 
        namespace Odr7ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> odr6{}; 
        namespace Odr6ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> odr5{}; 
        namespace Odr5ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> odr4{}; 
        namespace Odr4ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> odr3{}; 
        namespace Odr3ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odr2{}; 
        namespace Odr2ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odr1{}; 
        namespace Odr1ValC{
        }
        ///Port output data (y =
              0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> odr0{}; 
        namespace Odr0ValC{
        }
    }
    namespace Nonebsrr{    ///<GPIO port bit set/reset
          register
        using Addr = Register::Address<0x48000018,0x00000000,0,unsigned>;
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
        ///Port x set bit y (y=
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
        using Addr = Register::Address<0x4800001c,0xfffe0000,0,unsigned>;
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
        using Addr = Register::Address<0x48000020,0x00000000,0,unsigned>;
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afrl7{}; 
        namespace Afrl7ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afrl6{}; 
        namespace Afrl6ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afrl5{}; 
        namespace Afrl5ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afrl4{}; 
        namespace Afrl4ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afrl3{}; 
        namespace Afrl3ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afrl2{}; 
        namespace Afrl2ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afrl1{}; 
        namespace Afrl1ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 0..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afrl0{}; 
        namespace Afrl0ValC{
        }
    }
    namespace Noneafrh{    ///<GPIO alternate function high
          register
        using Addr = Register::Address<0x48000024,0x00000000,0,unsigned>;
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afrh15{}; 
        namespace Afrh15ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afrh14{}; 
        namespace Afrh14ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afrh13{}; 
        namespace Afrh13ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afrh12{}; 
        namespace Afrh12ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afrh11{}; 
        namespace Afrh11ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afrh10{}; 
        namespace Afrh10ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afrh9{}; 
        namespace Afrh9ValC{
        }
        ///Alternate function selection for port x
              bit y (y = 8..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afrh8{}; 
        namespace Afrh8ValC{
        }
    }
    namespace Nonebrr{    ///<Port bit reset register
        using Addr = Register::Address<0x48000028,0xffff0000,0,unsigned>;
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        ///Port x Reset bit y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
    }
}
