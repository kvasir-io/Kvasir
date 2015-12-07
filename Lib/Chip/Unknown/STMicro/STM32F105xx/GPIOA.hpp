#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose I/O
    namespace Nonecrl{    ///<Port configuration register low
          (GPIOn_CRL)
        using Addr = Register::Address<0x40010800,0x00000000,0,unsigned>;
        ///Port n.0 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode0{}; 
        namespace Mode0ValC{
        }
        ///Port n.0 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cnf0{}; 
        namespace Cnf0ValC{
        }
        ///Port n.1 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mode1{}; 
        namespace Mode1ValC{
        }
        ///Port n.1 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> cnf1{}; 
        namespace Cnf1ValC{
        }
        ///Port n.2 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mode2{}; 
        namespace Mode2ValC{
        }
        ///Port n.2 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cnf2{}; 
        namespace Cnf2ValC{
        }
        ///Port n.3 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> mode3{}; 
        namespace Mode3ValC{
        }
        ///Port n.3 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> cnf3{}; 
        namespace Cnf3ValC{
        }
        ///Port n.4 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode4{}; 
        namespace Mode4ValC{
        }
        ///Port n.4 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> cnf4{}; 
        namespace Cnf4ValC{
        }
        ///Port n.5 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mode5{}; 
        namespace Mode5ValC{
        }
        ///Port n.5 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> cnf5{}; 
        namespace Cnf5ValC{
        }
        ///Port n.6 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> mode6{}; 
        namespace Mode6ValC{
        }
        ///Port n.6 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> cnf6{}; 
        namespace Cnf6ValC{
        }
        ///Port n.7 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> mode7{}; 
        namespace Mode7ValC{
        }
        ///Port n.7 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cnf7{}; 
        namespace Cnf7ValC{
        }
    }
    namespace Nonecrh{    ///<Port configuration register high
          (GPIOn_CRL)
        using Addr = Register::Address<0x40010804,0x00000000,0,unsigned>;
        ///Port n.8 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode8{}; 
        namespace Mode8ValC{
        }
        ///Port n.8 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cnf8{}; 
        namespace Cnf8ValC{
        }
        ///Port n.9 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mode9{}; 
        namespace Mode9ValC{
        }
        ///Port n.9 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> cnf9{}; 
        namespace Cnf9ValC{
        }
        ///Port n.10 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mode10{}; 
        namespace Mode10ValC{
        }
        ///Port n.10 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cnf10{}; 
        namespace Cnf10ValC{
        }
        ///Port n.11 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> mode11{}; 
        namespace Mode11ValC{
        }
        ///Port n.11 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> cnf11{}; 
        namespace Cnf11ValC{
        }
        ///Port n.12 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode12{}; 
        namespace Mode12ValC{
        }
        ///Port n.12 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> cnf12{}; 
        namespace Cnf12ValC{
        }
        ///Port n.13 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mode13{}; 
        namespace Mode13ValC{
        }
        ///Port n.13 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> cnf13{}; 
        namespace Cnf13ValC{
        }
        ///Port n.14 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> mode14{}; 
        namespace Mode14ValC{
        }
        ///Port n.14 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> cnf14{}; 
        namespace Cnf14ValC{
        }
        ///Port n.15 mode bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> mode15{}; 
        namespace Mode15ValC{
        }
        ///Port n.15 configuration
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cnf15{}; 
        namespace Cnf15ValC{
        }
    }
    namespace Noneidr{    ///<Port input data register
          (GPIOn_IDR)
        using Addr = Register::Address<0x40010808,0xffff0000,0,unsigned>;
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idr0{}; 
        namespace Idr0ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idr1{}; 
        namespace Idr1ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idr2{}; 
        namespace Idr2ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idr3{}; 
        namespace Idr3ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idr4{}; 
        namespace Idr4ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> idr5{}; 
        namespace Idr5ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> idr6{}; 
        namespace Idr6ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idr7{}; 
        namespace Idr7ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idr8{}; 
        namespace Idr8ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idr9{}; 
        namespace Idr9ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> idr10{}; 
        namespace Idr10ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> idr11{}; 
        namespace Idr11ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> idr12{}; 
        namespace Idr12ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> idr13{}; 
        namespace Idr13ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> idr14{}; 
        namespace Idr14ValC{
        }
        ///Port input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> idr15{}; 
        namespace Idr15ValC{
        }
    }
    namespace Noneodr{    ///<Port output data register
          (GPIOn_ODR)
        using Addr = Register::Address<0x4001080c,0xffff0000,0,unsigned>;
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> odr0{}; 
        namespace Odr0ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odr1{}; 
        namespace Odr1ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odr2{}; 
        namespace Odr2ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> odr3{}; 
        namespace Odr3ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> odr4{}; 
        namespace Odr4ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> odr5{}; 
        namespace Odr5ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> odr6{}; 
        namespace Odr6ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> odr7{}; 
        namespace Odr7ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odr8{}; 
        namespace Odr8ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> odr9{}; 
        namespace Odr9ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> odr10{}; 
        namespace Odr10ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> odr11{}; 
        namespace Odr11ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> odr12{}; 
        namespace Odr12ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> odr13{}; 
        namespace Odr13ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> odr14{}; 
        namespace Odr14ValC{
        }
        ///Port output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> odr15{}; 
        namespace Odr15ValC{
        }
    }
    namespace Nonebsrr{    ///<Port bit set/reset register
          (GPIOn_BSRR)
        using Addr = Register::Address<0x40010810,0x00000000,0,unsigned>;
        ///Set bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
        namespace Bs0ValC{
        }
        ///Set bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        namespace Bs1ValC{
        }
        ///Set bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        namespace Bs2ValC{
        }
        ///Set bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        namespace Bs3ValC{
        }
        ///Set bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        namespace Bs4ValC{
        }
        ///Set bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        namespace Bs5ValC{
        }
        ///Set bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        namespace Bs6ValC{
        }
        ///Set bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        namespace Bs7ValC{
        }
        ///Set bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bs8{}; 
        namespace Bs8ValC{
        }
        ///Set bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bs9{}; 
        namespace Bs9ValC{
        }
        ///Set bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bs10{}; 
        namespace Bs10ValC{
        }
        ///Set bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bs11{}; 
        namespace Bs11ValC{
        }
        ///Set bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bs12{}; 
        namespace Bs12ValC{
        }
        ///Set bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bs13{}; 
        namespace Bs13ValC{
        }
        ///Set bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bs14{}; 
        namespace Bs14ValC{
        }
        ///Set bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs15{}; 
        namespace Bs15ValC{
        }
        ///Reset bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
        ///Reset bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///Reset bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///Reset bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///Reset bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///Reset bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///Reset bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///Reset bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///Reset bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        ///Reset bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        ///Reset bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        ///Reset bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        ///Reset bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        ///Reset bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        ///Reset bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        ///Reset bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
    }
    namespace Nonebrr{    ///<Port bit reset register
          (GPIOn_BRR)
        using Addr = Register::Address<0x40010814,0xffff0000,0,unsigned>;
        ///Reset bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
        ///Reset bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///Reset bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///Reset bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///Reset bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///Reset bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///Reset bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///Reset bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///Reset bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        ///Reset bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        ///Reset bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        ///Reset bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        ///Reset bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        ///Reset bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        ///Reset bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        ///Reset bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
    }
    namespace Nonelckr{    ///<Port configuration lock
          register
        using Addr = Register::Address<0x40010818,0xfffe0000,0,unsigned>;
        ///Port A Lock bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lck0{}; 
        namespace Lck0ValC{
        }
        ///Port A Lock bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lck1{}; 
        namespace Lck1ValC{
        }
        ///Port A Lock bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lck2{}; 
        namespace Lck2ValC{
        }
        ///Port A Lock bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lck3{}; 
        namespace Lck3ValC{
        }
        ///Port A Lock bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lck4{}; 
        namespace Lck4ValC{
        }
        ///Port A Lock bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lck5{}; 
        namespace Lck5ValC{
        }
        ///Port A Lock bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lck6{}; 
        namespace Lck6ValC{
        }
        ///Port A Lock bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lck7{}; 
        namespace Lck7ValC{
        }
        ///Port A Lock bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lck8{}; 
        namespace Lck8ValC{
        }
        ///Port A Lock bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lck9{}; 
        namespace Lck9ValC{
        }
        ///Port A Lock bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lck10{}; 
        namespace Lck10ValC{
        }
        ///Port A Lock bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lck11{}; 
        namespace Lck11ValC{
        }
        ///Port A Lock bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lck12{}; 
        namespace Lck12ValC{
        }
        ///Port A Lock bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck13{}; 
        namespace Lck13ValC{
        }
        ///Port A Lock bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lck14{}; 
        namespace Lck14ValC{
        }
        ///Port A Lock bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lck15{}; 
        namespace Lck15ValC{
        }
        ///Lock key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lckk{}; 
        namespace LckkValC{
        }
    }
}
