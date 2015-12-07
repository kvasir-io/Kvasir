#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose I/O 
    namespace Nonedir0{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098000,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        namespace Pindir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        namespace Pindir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        namespace Pindir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        namespace Pindir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        namespace Pindir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        namespace Pindir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        namespace Pindir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        namespace Pindir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        namespace Pindir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        namespace Pindir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        namespace Pindir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        namespace Pindir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        namespace Pindir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        namespace Pindir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        namespace Pindir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        namespace Pindir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        namespace Pindir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        namespace Pindir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        namespace Pindir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        namespace Pindir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        namespace Pindir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        namespace Pindir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        namespace Pindir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        namespace Pindir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        namespace Pindir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        namespace Pindir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        namespace Pindir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        namespace Pindir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        namespace Pindir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        namespace Pindir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        namespace Pindir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
        namespace Pindir31ValC{
        }
    }
    namespace Nonedir1{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098020,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        namespace Pindir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        namespace Pindir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        namespace Pindir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        namespace Pindir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        namespace Pindir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        namespace Pindir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        namespace Pindir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        namespace Pindir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        namespace Pindir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        namespace Pindir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        namespace Pindir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        namespace Pindir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        namespace Pindir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        namespace Pindir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        namespace Pindir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        namespace Pindir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        namespace Pindir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        namespace Pindir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        namespace Pindir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        namespace Pindir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        namespace Pindir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        namespace Pindir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        namespace Pindir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        namespace Pindir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        namespace Pindir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        namespace Pindir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        namespace Pindir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        namespace Pindir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        namespace Pindir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        namespace Pindir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        namespace Pindir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
        namespace Pindir31ValC{
        }
    }
    namespace Nonedir2{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098040,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        namespace Pindir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        namespace Pindir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        namespace Pindir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        namespace Pindir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        namespace Pindir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        namespace Pindir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        namespace Pindir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        namespace Pindir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        namespace Pindir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        namespace Pindir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        namespace Pindir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        namespace Pindir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        namespace Pindir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        namespace Pindir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        namespace Pindir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        namespace Pindir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        namespace Pindir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        namespace Pindir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        namespace Pindir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        namespace Pindir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        namespace Pindir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        namespace Pindir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        namespace Pindir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        namespace Pindir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        namespace Pindir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        namespace Pindir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        namespace Pindir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        namespace Pindir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        namespace Pindir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        namespace Pindir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        namespace Pindir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
        namespace Pindir31ValC{
        }
    }
    namespace Nonedir3{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098060,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        namespace Pindir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        namespace Pindir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        namespace Pindir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        namespace Pindir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        namespace Pindir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        namespace Pindir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        namespace Pindir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        namespace Pindir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        namespace Pindir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        namespace Pindir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        namespace Pindir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        namespace Pindir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        namespace Pindir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        namespace Pindir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        namespace Pindir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        namespace Pindir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        namespace Pindir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        namespace Pindir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        namespace Pindir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        namespace Pindir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        namespace Pindir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        namespace Pindir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        namespace Pindir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        namespace Pindir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        namespace Pindir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        namespace Pindir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        namespace Pindir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        namespace Pindir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        namespace Pindir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        namespace Pindir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        namespace Pindir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
        namespace Pindir31ValC{
        }
    }
    namespace Nonedir4{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x20098080,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        namespace Pindir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        namespace Pindir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        namespace Pindir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        namespace Pindir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        namespace Pindir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        namespace Pindir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        namespace Pindir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        namespace Pindir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        namespace Pindir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        namespace Pindir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        namespace Pindir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        namespace Pindir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        namespace Pindir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        namespace Pindir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        namespace Pindir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        namespace Pindir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        namespace Pindir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        namespace Pindir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        namespace Pindir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        namespace Pindir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        namespace Pindir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        namespace Pindir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        namespace Pindir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        namespace Pindir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        namespace Pindir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        namespace Pindir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        namespace Pindir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        namespace Pindir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        namespace Pindir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        namespace Pindir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        namespace Pindir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
        namespace Pindir31ValC{
        }
    }
    namespace Nonedir5{    ///<GPIO Port0 Direction control register.
        using Addr = Register::Address<0x200980a0,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pindir0{}; 
        namespace Pindir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pindir1{}; 
        namespace Pindir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pindir2{}; 
        namespace Pindir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pindir3{}; 
        namespace Pindir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pindir4{}; 
        namespace Pindir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pindir5{}; 
        namespace Pindir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pindir6{}; 
        namespace Pindir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pindir7{}; 
        namespace Pindir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pindir8{}; 
        namespace Pindir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pindir9{}; 
        namespace Pindir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pindir10{}; 
        namespace Pindir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pindir11{}; 
        namespace Pindir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pindir12{}; 
        namespace Pindir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pindir13{}; 
        namespace Pindir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pindir14{}; 
        namespace Pindir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pindir15{}; 
        namespace Pindir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pindir16{}; 
        namespace Pindir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pindir17{}; 
        namespace Pindir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pindir18{}; 
        namespace Pindir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pindir19{}; 
        namespace Pindir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pindir20{}; 
        namespace Pindir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pindir21{}; 
        namespace Pindir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pindir22{}; 
        namespace Pindir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pindir23{}; 
        namespace Pindir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pindir24{}; 
        namespace Pindir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pindir25{}; 
        namespace Pindir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pindir26{}; 
        namespace Pindir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pindir27{}; 
        namespace Pindir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pindir28{}; 
        namespace Pindir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pindir29{}; 
        namespace Pindir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pindir30{}; 
        namespace Pindir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in DIRx controls pin Px[0], bit 31 in DIRx controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pindir31{}; 
        namespace Pindir31ValC{
        }
    }
    namespace Nonemask0{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098010,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        namespace Pinmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        namespace Pinmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        namespace Pinmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        namespace Pinmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        namespace Pinmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        namespace Pinmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        namespace Pinmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        namespace Pinmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        namespace Pinmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        namespace Pinmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        namespace Pinmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        namespace Pinmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        namespace Pinmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        namespace Pinmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        namespace Pinmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        namespace Pinmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        namespace Pinmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        namespace Pinmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        namespace Pinmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        namespace Pinmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        namespace Pinmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        namespace Pinmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        namespace Pinmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        namespace Pinmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        namespace Pinmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        namespace Pinmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        namespace Pinmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        namespace Pinmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        namespace Pinmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        namespace Pinmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        namespace Pinmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
        namespace Pinmask31ValC{
        }
    }
    namespace Nonemask1{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098030,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        namespace Pinmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        namespace Pinmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        namespace Pinmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        namespace Pinmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        namespace Pinmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        namespace Pinmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        namespace Pinmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        namespace Pinmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        namespace Pinmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        namespace Pinmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        namespace Pinmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        namespace Pinmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        namespace Pinmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        namespace Pinmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        namespace Pinmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        namespace Pinmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        namespace Pinmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        namespace Pinmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        namespace Pinmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        namespace Pinmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        namespace Pinmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        namespace Pinmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        namespace Pinmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        namespace Pinmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        namespace Pinmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        namespace Pinmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        namespace Pinmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        namespace Pinmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        namespace Pinmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        namespace Pinmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        namespace Pinmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
        namespace Pinmask31ValC{
        }
    }
    namespace Nonemask2{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098050,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        namespace Pinmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        namespace Pinmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        namespace Pinmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        namespace Pinmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        namespace Pinmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        namespace Pinmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        namespace Pinmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        namespace Pinmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        namespace Pinmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        namespace Pinmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        namespace Pinmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        namespace Pinmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        namespace Pinmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        namespace Pinmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        namespace Pinmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        namespace Pinmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        namespace Pinmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        namespace Pinmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        namespace Pinmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        namespace Pinmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        namespace Pinmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        namespace Pinmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        namespace Pinmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        namespace Pinmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        namespace Pinmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        namespace Pinmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        namespace Pinmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        namespace Pinmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        namespace Pinmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        namespace Pinmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        namespace Pinmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
        namespace Pinmask31ValC{
        }
    }
    namespace Nonemask3{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098070,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        namespace Pinmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        namespace Pinmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        namespace Pinmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        namespace Pinmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        namespace Pinmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        namespace Pinmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        namespace Pinmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        namespace Pinmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        namespace Pinmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        namespace Pinmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        namespace Pinmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        namespace Pinmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        namespace Pinmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        namespace Pinmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        namespace Pinmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        namespace Pinmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        namespace Pinmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        namespace Pinmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        namespace Pinmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        namespace Pinmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        namespace Pinmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        namespace Pinmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        namespace Pinmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        namespace Pinmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        namespace Pinmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        namespace Pinmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        namespace Pinmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        namespace Pinmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        namespace Pinmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        namespace Pinmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        namespace Pinmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
        namespace Pinmask31ValC{
        }
    }
    namespace Nonemask4{    ///<Mask register for Port0.
        using Addr = Register::Address<0x20098090,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        namespace Pinmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        namespace Pinmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        namespace Pinmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        namespace Pinmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        namespace Pinmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        namespace Pinmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        namespace Pinmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        namespace Pinmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        namespace Pinmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        namespace Pinmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        namespace Pinmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        namespace Pinmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        namespace Pinmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        namespace Pinmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        namespace Pinmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        namespace Pinmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        namespace Pinmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        namespace Pinmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        namespace Pinmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        namespace Pinmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        namespace Pinmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        namespace Pinmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        namespace Pinmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        namespace Pinmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        namespace Pinmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        namespace Pinmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        namespace Pinmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        namespace Pinmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        namespace Pinmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        namespace Pinmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        namespace Pinmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
        namespace Pinmask31ValC{
        }
    }
    namespace Nonemask5{    ///<Mask register for Port0.
        using Addr = Register::Address<0x200980b0,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinmask0{}; 
        namespace Pinmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinmask1{}; 
        namespace Pinmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinmask2{}; 
        namespace Pinmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinmask3{}; 
        namespace Pinmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinmask4{}; 
        namespace Pinmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinmask5{}; 
        namespace Pinmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinmask6{}; 
        namespace Pinmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinmask7{}; 
        namespace Pinmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinmask8{}; 
        namespace Pinmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinmask9{}; 
        namespace Pinmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmask10{}; 
        namespace Pinmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinmask11{}; 
        namespace Pinmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinmask12{}; 
        namespace Pinmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinmask13{}; 
        namespace Pinmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinmask14{}; 
        namespace Pinmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinmask15{}; 
        namespace Pinmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinmask16{}; 
        namespace Pinmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinmask17{}; 
        namespace Pinmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinmask18{}; 
        namespace Pinmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinmask19{}; 
        namespace Pinmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinmask20{}; 
        namespace Pinmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinmask21{}; 
        namespace Pinmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinmask22{}; 
        namespace Pinmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinmask23{}; 
        namespace Pinmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinmask24{}; 
        namespace Pinmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinmask25{}; 
        namespace Pinmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinmask26{}; 
        namespace Pinmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinmask27{}; 
        namespace Pinmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinmask28{}; 
        namespace Pinmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinmask29{}; 
        namespace Pinmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinmask30{}; 
        namespace Pinmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's SETx, CLRx, and PINx register(s). Current state of the pin can be read from the PINx register. 1 = Controlled pin is not affected by writes into the port's SETx, CLRx and PINx register(s). When the PINx register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinmask31{}; 
        namespace Pinmask31ValC{
        }
    }
    namespace Nonepin0{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098014,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        namespace Pinval0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        namespace Pinval1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        namespace Pinval2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        namespace Pinval3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        namespace Pinval4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        namespace Pinval5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        namespace Pinval6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        namespace Pinval7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        namespace Pinval8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        namespace Pinval9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        namespace Pinval10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        namespace Pinval11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        namespace Pinval12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        namespace Pinval13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        namespace Pinval14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        namespace Pinval15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        namespace Pinval16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        namespace Pinval17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        namespace Pinval18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        namespace Pinval19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        namespace Pinval20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        namespace Pinval21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        namespace Pinval22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        namespace Pinval23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        namespace Pinval24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        namespace Pinval25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        namespace Pinval26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        namespace Pinval27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        namespace Pinval28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        namespace Pinval29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        namespace Pinval30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
        namespace Pinval31ValC{
        }
    }
    namespace Nonepin1{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098034,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        namespace Pinval0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        namespace Pinval1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        namespace Pinval2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        namespace Pinval3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        namespace Pinval4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        namespace Pinval5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        namespace Pinval6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        namespace Pinval7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        namespace Pinval8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        namespace Pinval9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        namespace Pinval10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        namespace Pinval11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        namespace Pinval12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        namespace Pinval13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        namespace Pinval14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        namespace Pinval15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        namespace Pinval16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        namespace Pinval17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        namespace Pinval18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        namespace Pinval19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        namespace Pinval20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        namespace Pinval21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        namespace Pinval22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        namespace Pinval23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        namespace Pinval24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        namespace Pinval25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        namespace Pinval26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        namespace Pinval27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        namespace Pinval28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        namespace Pinval29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        namespace Pinval30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
        namespace Pinval31ValC{
        }
    }
    namespace Nonepin2{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098054,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        namespace Pinval0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        namespace Pinval1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        namespace Pinval2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        namespace Pinval3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        namespace Pinval4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        namespace Pinval5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        namespace Pinval6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        namespace Pinval7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        namespace Pinval8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        namespace Pinval9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        namespace Pinval10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        namespace Pinval11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        namespace Pinval12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        namespace Pinval13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        namespace Pinval14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        namespace Pinval15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        namespace Pinval16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        namespace Pinval17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        namespace Pinval18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        namespace Pinval19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        namespace Pinval20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        namespace Pinval21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        namespace Pinval22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        namespace Pinval23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        namespace Pinval24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        namespace Pinval25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        namespace Pinval26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        namespace Pinval27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        namespace Pinval28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        namespace Pinval29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        namespace Pinval30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
        namespace Pinval31ValC{
        }
    }
    namespace Nonepin3{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098074,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        namespace Pinval0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        namespace Pinval1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        namespace Pinval2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        namespace Pinval3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        namespace Pinval4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        namespace Pinval5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        namespace Pinval6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        namespace Pinval7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        namespace Pinval8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        namespace Pinval9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        namespace Pinval10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        namespace Pinval11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        namespace Pinval12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        namespace Pinval13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        namespace Pinval14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        namespace Pinval15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        namespace Pinval16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        namespace Pinval17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        namespace Pinval18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        namespace Pinval19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        namespace Pinval20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        namespace Pinval21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        namespace Pinval22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        namespace Pinval23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        namespace Pinval24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        namespace Pinval25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        namespace Pinval26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        namespace Pinval27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        namespace Pinval28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        namespace Pinval29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        namespace Pinval30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
        namespace Pinval31ValC{
        }
    }
    namespace Nonepin4{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x20098094,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        namespace Pinval0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        namespace Pinval1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        namespace Pinval2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        namespace Pinval3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        namespace Pinval4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        namespace Pinval5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        namespace Pinval6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        namespace Pinval7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        namespace Pinval8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        namespace Pinval9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        namespace Pinval10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        namespace Pinval11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        namespace Pinval12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        namespace Pinval13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        namespace Pinval14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        namespace Pinval15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        namespace Pinval16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        namespace Pinval17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        namespace Pinval18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        namespace Pinval19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        namespace Pinval20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        namespace Pinval21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        namespace Pinval22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        namespace Pinval23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        namespace Pinval24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        namespace Pinval25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        namespace Pinval26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        namespace Pinval27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        namespace Pinval28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        namespace Pinval29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        namespace Pinval30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
        namespace Pinval31ValC{
        }
    }
    namespace Nonepin5{    ///<Port0 Pin value register using FIOMASK.
        using Addr = Register::Address<0x200980b4,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinval0{}; 
        namespace Pinval0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinval1{}; 
        namespace Pinval1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinval2{}; 
        namespace Pinval2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinval3{}; 
        namespace Pinval3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinval4{}; 
        namespace Pinval4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinval5{}; 
        namespace Pinval5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinval6{}; 
        namespace Pinval6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinval7{}; 
        namespace Pinval7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinval8{}; 
        namespace Pinval8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinval9{}; 
        namespace Pinval9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinval10{}; 
        namespace Pinval10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinval11{}; 
        namespace Pinval11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinval12{}; 
        namespace Pinval12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinval13{}; 
        namespace Pinval13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinval14{}; 
        namespace Pinval14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinval15{}; 
        namespace Pinval15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinval16{}; 
        namespace Pinval16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinval17{}; 
        namespace Pinval17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinval18{}; 
        namespace Pinval18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinval19{}; 
        namespace Pinval19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinval20{}; 
        namespace Pinval20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinval21{}; 
        namespace Pinval21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinval22{}; 
        namespace Pinval22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinval23{}; 
        namespace Pinval23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinval24{}; 
        namespace Pinval24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinval25{}; 
        namespace Pinval25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinval26{}; 
        namespace Pinval26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinval27{}; 
        namespace Pinval27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinval28{}; 
        namespace Pinval28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinval29{}; 
        namespace Pinval29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinval30{}; 
        namespace Pinval30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in PINx corresponds to pin Px[0], bit 31 in PINx corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinval31{}; 
        namespace Pinval31ValC{
        }
    }
    namespace Noneset0{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098018,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        namespace Pinset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        namespace Pinset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        namespace Pinset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        namespace Pinset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        namespace Pinset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        namespace Pinset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        namespace Pinset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        namespace Pinset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        namespace Pinset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        namespace Pinset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        namespace Pinset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        namespace Pinset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        namespace Pinset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        namespace Pinset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        namespace Pinset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        namespace Pinset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        namespace Pinset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        namespace Pinset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        namespace Pinset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        namespace Pinset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        namespace Pinset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        namespace Pinset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        namespace Pinset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        namespace Pinset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        namespace Pinset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        namespace Pinset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        namespace Pinset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        namespace Pinset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        namespace Pinset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        namespace Pinset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        namespace Pinset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
        namespace Pinset31ValC{
        }
    }
    namespace Noneset1{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098038,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        namespace Pinset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        namespace Pinset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        namespace Pinset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        namespace Pinset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        namespace Pinset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        namespace Pinset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        namespace Pinset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        namespace Pinset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        namespace Pinset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        namespace Pinset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        namespace Pinset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        namespace Pinset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        namespace Pinset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        namespace Pinset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        namespace Pinset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        namespace Pinset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        namespace Pinset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        namespace Pinset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        namespace Pinset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        namespace Pinset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        namespace Pinset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        namespace Pinset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        namespace Pinset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        namespace Pinset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        namespace Pinset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        namespace Pinset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        namespace Pinset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        namespace Pinset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        namespace Pinset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        namespace Pinset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        namespace Pinset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
        namespace Pinset31ValC{
        }
    }
    namespace Noneset2{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098058,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        namespace Pinset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        namespace Pinset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        namespace Pinset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        namespace Pinset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        namespace Pinset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        namespace Pinset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        namespace Pinset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        namespace Pinset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        namespace Pinset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        namespace Pinset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        namespace Pinset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        namespace Pinset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        namespace Pinset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        namespace Pinset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        namespace Pinset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        namespace Pinset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        namespace Pinset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        namespace Pinset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        namespace Pinset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        namespace Pinset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        namespace Pinset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        namespace Pinset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        namespace Pinset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        namespace Pinset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        namespace Pinset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        namespace Pinset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        namespace Pinset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        namespace Pinset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        namespace Pinset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        namespace Pinset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        namespace Pinset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
        namespace Pinset31ValC{
        }
    }
    namespace Noneset3{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098078,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        namespace Pinset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        namespace Pinset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        namespace Pinset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        namespace Pinset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        namespace Pinset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        namespace Pinset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        namespace Pinset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        namespace Pinset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        namespace Pinset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        namespace Pinset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        namespace Pinset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        namespace Pinset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        namespace Pinset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        namespace Pinset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        namespace Pinset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        namespace Pinset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        namespace Pinset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        namespace Pinset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        namespace Pinset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        namespace Pinset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        namespace Pinset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        namespace Pinset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        namespace Pinset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        namespace Pinset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        namespace Pinset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        namespace Pinset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        namespace Pinset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        namespace Pinset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        namespace Pinset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        namespace Pinset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        namespace Pinset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
        namespace Pinset31ValC{
        }
    }
    namespace Noneset4{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x20098098,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        namespace Pinset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        namespace Pinset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        namespace Pinset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        namespace Pinset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        namespace Pinset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        namespace Pinset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        namespace Pinset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        namespace Pinset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        namespace Pinset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        namespace Pinset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        namespace Pinset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        namespace Pinset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        namespace Pinset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        namespace Pinset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        namespace Pinset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        namespace Pinset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        namespace Pinset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        namespace Pinset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        namespace Pinset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        namespace Pinset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        namespace Pinset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        namespace Pinset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        namespace Pinset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        namespace Pinset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        namespace Pinset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        namespace Pinset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        namespace Pinset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        namespace Pinset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        namespace Pinset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        namespace Pinset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        namespace Pinset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
        namespace Pinset31ValC{
        }
    }
    namespace Noneset5{    ///<Port0 Output Set register using FIOMASK.
        using Addr = Register::Address<0x200980b8,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinset0{}; 
        namespace Pinset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinset1{}; 
        namespace Pinset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinset2{}; 
        namespace Pinset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinset3{}; 
        namespace Pinset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinset4{}; 
        namespace Pinset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinset5{}; 
        namespace Pinset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinset6{}; 
        namespace Pinset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinset7{}; 
        namespace Pinset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinset8{}; 
        namespace Pinset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinset9{}; 
        namespace Pinset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinset10{}; 
        namespace Pinset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinset11{}; 
        namespace Pinset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinset12{}; 
        namespace Pinset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinset13{}; 
        namespace Pinset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinset14{}; 
        namespace Pinset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinset15{}; 
        namespace Pinset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinset16{}; 
        namespace Pinset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinset17{}; 
        namespace Pinset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinset18{}; 
        namespace Pinset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinset19{}; 
        namespace Pinset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinset20{}; 
        namespace Pinset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinset21{}; 
        namespace Pinset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinset22{}; 
        namespace Pinset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinset23{}; 
        namespace Pinset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinset24{}; 
        namespace Pinset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinset25{}; 
        namespace Pinset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinset26{}; 
        namespace Pinset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinset27{}; 
        namespace Pinset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinset28{}; 
        namespace Pinset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinset29{}; 
        namespace Pinset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinset30{}; 
        namespace Pinset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in SETx controls pin Px[0], bit 31 in SETx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinset31{}; 
        namespace Pinset31ValC{
        }
    }
    namespace Noneclr0{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009801c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        namespace Pinclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        namespace Pinclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        namespace Pinclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        namespace Pinclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        namespace Pinclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        namespace Pinclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        namespace Pinclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        namespace Pinclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        namespace Pinclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        namespace Pinclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        namespace Pinclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        namespace Pinclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        namespace Pinclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        namespace Pinclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        namespace Pinclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        namespace Pinclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        namespace Pinclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        namespace Pinclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        namespace Pinclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        namespace Pinclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        namespace Pinclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        namespace Pinclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        namespace Pinclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        namespace Pinclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        namespace Pinclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        namespace Pinclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        namespace Pinclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        namespace Pinclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        namespace Pinclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        namespace Pinclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        namespace Pinclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
        namespace Pinclr31ValC{
        }
    }
    namespace Noneclr1{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009803c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        namespace Pinclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        namespace Pinclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        namespace Pinclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        namespace Pinclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        namespace Pinclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        namespace Pinclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        namespace Pinclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        namespace Pinclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        namespace Pinclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        namespace Pinclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        namespace Pinclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        namespace Pinclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        namespace Pinclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        namespace Pinclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        namespace Pinclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        namespace Pinclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        namespace Pinclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        namespace Pinclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        namespace Pinclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        namespace Pinclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        namespace Pinclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        namespace Pinclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        namespace Pinclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        namespace Pinclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        namespace Pinclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        namespace Pinclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        namespace Pinclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        namespace Pinclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        namespace Pinclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        namespace Pinclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        namespace Pinclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
        namespace Pinclr31ValC{
        }
    }
    namespace Noneclr2{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009805c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        namespace Pinclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        namespace Pinclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        namespace Pinclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        namespace Pinclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        namespace Pinclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        namespace Pinclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        namespace Pinclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        namespace Pinclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        namespace Pinclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        namespace Pinclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        namespace Pinclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        namespace Pinclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        namespace Pinclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        namespace Pinclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        namespace Pinclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        namespace Pinclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        namespace Pinclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        namespace Pinclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        namespace Pinclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        namespace Pinclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        namespace Pinclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        namespace Pinclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        namespace Pinclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        namespace Pinclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        namespace Pinclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        namespace Pinclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        namespace Pinclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        namespace Pinclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        namespace Pinclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        namespace Pinclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        namespace Pinclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
        namespace Pinclr31ValC{
        }
    }
    namespace Noneclr3{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009807c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        namespace Pinclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        namespace Pinclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        namespace Pinclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        namespace Pinclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        namespace Pinclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        namespace Pinclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        namespace Pinclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        namespace Pinclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        namespace Pinclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        namespace Pinclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        namespace Pinclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        namespace Pinclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        namespace Pinclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        namespace Pinclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        namespace Pinclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        namespace Pinclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        namespace Pinclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        namespace Pinclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        namespace Pinclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        namespace Pinclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        namespace Pinclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        namespace Pinclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        namespace Pinclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        namespace Pinclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        namespace Pinclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        namespace Pinclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        namespace Pinclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        namespace Pinclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        namespace Pinclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        namespace Pinclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        namespace Pinclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
        namespace Pinclr31ValC{
        }
    }
    namespace Noneclr4{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x2009809c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        namespace Pinclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        namespace Pinclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        namespace Pinclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        namespace Pinclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        namespace Pinclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        namespace Pinclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        namespace Pinclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        namespace Pinclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        namespace Pinclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        namespace Pinclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        namespace Pinclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        namespace Pinclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        namespace Pinclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        namespace Pinclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        namespace Pinclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        namespace Pinclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        namespace Pinclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        namespace Pinclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        namespace Pinclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        namespace Pinclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        namespace Pinclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        namespace Pinclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        namespace Pinclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        namespace Pinclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        namespace Pinclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        namespace Pinclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        namespace Pinclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        namespace Pinclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        namespace Pinclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        namespace Pinclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        namespace Pinclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
        namespace Pinclr31ValC{
        }
    }
    namespace Noneclr5{    ///<Port0 Output Clear register using FIOMASK.
        using Addr = Register::Address<0x200980bc,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinclr0{}; 
        namespace Pinclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pinclr1{}; 
        namespace Pinclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pinclr2{}; 
        namespace Pinclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pinclr3{}; 
        namespace Pinclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pinclr4{}; 
        namespace Pinclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pinclr5{}; 
        namespace Pinclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinclr6{}; 
        namespace Pinclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pinclr7{}; 
        namespace Pinclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pinclr8{}; 
        namespace Pinclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinclr9{}; 
        namespace Pinclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinclr10{}; 
        namespace Pinclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pinclr11{}; 
        namespace Pinclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pinclr12{}; 
        namespace Pinclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pinclr13{}; 
        namespace Pinclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pinclr14{}; 
        namespace Pinclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pinclr15{}; 
        namespace Pinclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinclr16{}; 
        namespace Pinclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinclr17{}; 
        namespace Pinclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinclr18{}; 
        namespace Pinclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pinclr19{}; 
        namespace Pinclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinclr20{}; 
        namespace Pinclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinclr21{}; 
        namespace Pinclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinclr22{}; 
        namespace Pinclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pinclr23{}; 
        namespace Pinclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pinclr24{}; 
        namespace Pinclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pinclr25{}; 
        namespace Pinclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinclr26{}; 
        namespace Pinclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pinclr27{}; 
        namespace Pinclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pinclr28{}; 
        namespace Pinclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pinclr29{}; 
        namespace Pinclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pinclr30{}; 
        namespace Pinclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in CLRx controls pin Px[0], bit 31 in CLRx controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pinclr31{}; 
        namespace Pinclr31ValC{
        }
    }
}
