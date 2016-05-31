#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//GPIO
    namespace GpioDir0{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098000,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
    }
    namespace GpioDir1{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098020,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
    }
    namespace GpioDir2{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098040,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
    }
    namespace GpioDir3{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098060,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
    }
    namespace GpioDir4{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098080,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
    }
    namespace GpioDir5{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x200980a0,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
    }
    namespace GpioMask0{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098010,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
    }
    namespace GpioMask1{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098030,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
    }
    namespace GpioMask2{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098050,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
    }
    namespace GpioMask3{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098070,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
    }
    namespace GpioMask4{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098090,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
    }
    namespace GpioMask5{    ///<Mask register for Port.
        using Addr = Register::Address<0x200980b0,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
    }
    namespace GpioPin0{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098014,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
    }
    namespace GpioPin1{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098034,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
    }
    namespace GpioPin2{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098054,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
    }
    namespace GpioPin3{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098074,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
    }
    namespace GpioPin4{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098094,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
    }
    namespace GpioPin5{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x200980b4,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
    }
    namespace GpioSet0{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098018,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
    }
    namespace GpioSet1{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098038,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
    }
    namespace GpioSet2{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098058,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
    }
    namespace GpioSet3{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098078,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
    }
    namespace GpioSet4{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098098,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
    }
    namespace GpioSet5{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x200980b8,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
    }
    namespace GpioClr0{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009801c,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
    }
    namespace GpioClr1{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009803c,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
    }
    namespace GpioClr2{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009805c,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
    }
    namespace GpioClr3{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009807c,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
    }
    namespace GpioClr4{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009809c,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
    }
    namespace GpioClr5{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x200980bc,0x00000000,0x00000000,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
    }
}
