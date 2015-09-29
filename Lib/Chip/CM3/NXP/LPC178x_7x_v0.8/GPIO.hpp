#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose I/O 
    namespace Nonedir0{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098000,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
    }
    namespace Nonedir1{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098020,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
    }
    namespace Nonedir2{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098040,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
    }
    namespace Nonedir3{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098060,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
    }
    namespace Nonedir4{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098080,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
    }
    namespace Nonedir5{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x200980a0,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
    }
    namespace Nonemask0{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098010,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
    }
    namespace Nonemask1{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098030,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
    }
    namespace Nonemask2{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098050,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
    }
    namespace Nonemask3{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098070,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
    }
    namespace Nonemask4{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098090,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
    }
    namespace Nonemask5{    ///<Mask register for Port0.
        using Addr = Register::Address<0x200980b0,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
    }
    namespace Nonepin0{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098014,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
    }
    namespace Nonepin1{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098034,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
    }
    namespace Nonepin2{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098054,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
    }
    namespace Nonepin3{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098074,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
    }
    namespace Nonepin4{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098094,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
    }
    namespace Nonepin5{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x200980b4,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
    }
    namespace Noneset0{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098018,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
    }
    namespace Noneset1{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098038,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
    }
    namespace Noneset2{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098058,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
    }
    namespace Noneset3{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098078,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
    }
    namespace Noneset4{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098098,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
    }
    namespace Noneset5{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x200980b8,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
    }
    namespace Noneclr0{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009801c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
    }
    namespace Noneclr1{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009803c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
    }
    namespace Noneclr2{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009805c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
    }
    namespace Noneclr3{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009807c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
    }
    namespace Noneclr4{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009809c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
    }
    namespace Noneclr5{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x200980bc,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
    }
}
