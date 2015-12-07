#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO
    namespace Nonedir0{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098000,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        namespace Pdir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        namespace Pdir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        namespace Pdir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        namespace Pdir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        namespace Pdir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        namespace Pdir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        namespace Pdir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        namespace Pdir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        namespace Pdir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        namespace Pdir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        namespace Pdir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        namespace Pdir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        namespace Pdir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        namespace Pdir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        namespace Pdir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        namespace Pdir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        namespace Pdir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        namespace Pdir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        namespace Pdir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        namespace Pdir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        namespace Pdir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        namespace Pdir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        namespace Pdir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        namespace Pdir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        namespace Pdir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        namespace Pdir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        namespace Pdir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        namespace Pdir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        namespace Pdir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        namespace Pdir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        namespace Pdir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
        namespace Pdir31ValC{
        }
    }
    namespace Nonedir1{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098020,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        namespace Pdir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        namespace Pdir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        namespace Pdir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        namespace Pdir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        namespace Pdir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        namespace Pdir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        namespace Pdir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        namespace Pdir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        namespace Pdir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        namespace Pdir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        namespace Pdir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        namespace Pdir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        namespace Pdir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        namespace Pdir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        namespace Pdir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        namespace Pdir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        namespace Pdir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        namespace Pdir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        namespace Pdir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        namespace Pdir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        namespace Pdir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        namespace Pdir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        namespace Pdir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        namespace Pdir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        namespace Pdir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        namespace Pdir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        namespace Pdir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        namespace Pdir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        namespace Pdir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        namespace Pdir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        namespace Pdir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
        namespace Pdir31ValC{
        }
    }
    namespace Nonedir2{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098040,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        namespace Pdir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        namespace Pdir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        namespace Pdir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        namespace Pdir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        namespace Pdir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        namespace Pdir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        namespace Pdir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        namespace Pdir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        namespace Pdir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        namespace Pdir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        namespace Pdir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        namespace Pdir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        namespace Pdir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        namespace Pdir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        namespace Pdir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        namespace Pdir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        namespace Pdir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        namespace Pdir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        namespace Pdir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        namespace Pdir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        namespace Pdir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        namespace Pdir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        namespace Pdir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        namespace Pdir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        namespace Pdir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        namespace Pdir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        namespace Pdir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        namespace Pdir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        namespace Pdir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        namespace Pdir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        namespace Pdir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
        namespace Pdir31ValC{
        }
    }
    namespace Nonedir3{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098060,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        namespace Pdir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        namespace Pdir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        namespace Pdir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        namespace Pdir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        namespace Pdir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        namespace Pdir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        namespace Pdir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        namespace Pdir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        namespace Pdir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        namespace Pdir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        namespace Pdir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        namespace Pdir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        namespace Pdir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        namespace Pdir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        namespace Pdir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        namespace Pdir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        namespace Pdir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        namespace Pdir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        namespace Pdir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        namespace Pdir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        namespace Pdir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        namespace Pdir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        namespace Pdir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        namespace Pdir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        namespace Pdir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        namespace Pdir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        namespace Pdir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        namespace Pdir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        namespace Pdir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        namespace Pdir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        namespace Pdir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
        namespace Pdir31ValC{
        }
    }
    namespace Nonedir4{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x20098080,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        namespace Pdir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        namespace Pdir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        namespace Pdir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        namespace Pdir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        namespace Pdir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        namespace Pdir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        namespace Pdir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        namespace Pdir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        namespace Pdir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        namespace Pdir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        namespace Pdir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        namespace Pdir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        namespace Pdir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        namespace Pdir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        namespace Pdir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        namespace Pdir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        namespace Pdir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        namespace Pdir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        namespace Pdir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        namespace Pdir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        namespace Pdir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        namespace Pdir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        namespace Pdir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        namespace Pdir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        namespace Pdir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        namespace Pdir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        namespace Pdir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        namespace Pdir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        namespace Pdir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        namespace Pdir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        namespace Pdir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
        namespace Pdir31ValC{
        }
    }
    namespace Nonedir5{    ///<GPIO Port Direction control register.
        using Addr = Register::Address<0x200980a0,0x00000000,0,unsigned>;
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdir0{}; 
        namespace Pdir0ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdir1{}; 
        namespace Pdir1ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdir2{}; 
        namespace Pdir2ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdir3{}; 
        namespace Pdir3ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdir4{}; 
        namespace Pdir4ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdir5{}; 
        namespace Pdir5ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdir6{}; 
        namespace Pdir6ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdir7{}; 
        namespace Pdir7ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdir8{}; 
        namespace Pdir8ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pdir9{}; 
        namespace Pdir9ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdir10{}; 
        namespace Pdir10ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pdir11{}; 
        namespace Pdir11ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdir12{}; 
        namespace Pdir12ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdir13{}; 
        namespace Pdir13ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdir14{}; 
        namespace Pdir14ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdir15{}; 
        namespace Pdir15ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdir16{}; 
        namespace Pdir16ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdir17{}; 
        namespace Pdir17ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pdir18{}; 
        namespace Pdir18ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdir19{}; 
        namespace Pdir19ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdir20{}; 
        namespace Pdir20ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pdir21{}; 
        namespace Pdir21ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdir22{}; 
        namespace Pdir22ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdir23{}; 
        namespace Pdir23ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pdir24{}; 
        namespace Pdir24ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pdir25{}; 
        namespace Pdir25ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pdir26{}; 
        namespace Pdir26ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pdir27{}; 
        namespace Pdir27ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pdir28{}; 
        namespace Pdir28ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pdir29{}; 
        namespace Pdir29ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pdir30{}; 
        namespace Pdir30ValC{
        }
        ///Fast GPIO Direction PORTx control bits. Bit 0 in xDIR controls pin Px[0], bit 31 in xDIR controls pin Px[31]. 0 = Controlled pin is input. 1 = Controlled pin is output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pdir31{}; 
        namespace Pdir31ValC{
        }
    }
    namespace Nonemask0{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098010,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        namespace Pmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        namespace Pmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        namespace Pmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        namespace Pmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        namespace Pmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        namespace Pmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        namespace Pmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        namespace Pmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        namespace Pmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        namespace Pmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        namespace Pmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        namespace Pmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        namespace Pmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        namespace Pmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        namespace Pmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        namespace Pmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        namespace Pmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        namespace Pmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        namespace Pmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        namespace Pmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        namespace Pmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        namespace Pmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        namespace Pmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        namespace Pmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        namespace Pmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        namespace Pmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        namespace Pmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        namespace Pmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        namespace Pmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        namespace Pmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        namespace Pmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
        namespace Pmask31ValC{
        }
    }
    namespace Nonemask1{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098030,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        namespace Pmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        namespace Pmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        namespace Pmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        namespace Pmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        namespace Pmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        namespace Pmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        namespace Pmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        namespace Pmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        namespace Pmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        namespace Pmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        namespace Pmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        namespace Pmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        namespace Pmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        namespace Pmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        namespace Pmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        namespace Pmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        namespace Pmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        namespace Pmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        namespace Pmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        namespace Pmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        namespace Pmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        namespace Pmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        namespace Pmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        namespace Pmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        namespace Pmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        namespace Pmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        namespace Pmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        namespace Pmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        namespace Pmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        namespace Pmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        namespace Pmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
        namespace Pmask31ValC{
        }
    }
    namespace Nonemask2{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098050,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        namespace Pmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        namespace Pmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        namespace Pmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        namespace Pmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        namespace Pmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        namespace Pmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        namespace Pmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        namespace Pmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        namespace Pmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        namespace Pmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        namespace Pmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        namespace Pmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        namespace Pmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        namespace Pmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        namespace Pmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        namespace Pmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        namespace Pmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        namespace Pmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        namespace Pmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        namespace Pmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        namespace Pmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        namespace Pmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        namespace Pmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        namespace Pmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        namespace Pmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        namespace Pmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        namespace Pmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        namespace Pmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        namespace Pmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        namespace Pmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        namespace Pmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
        namespace Pmask31ValC{
        }
    }
    namespace Nonemask3{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098070,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        namespace Pmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        namespace Pmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        namespace Pmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        namespace Pmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        namespace Pmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        namespace Pmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        namespace Pmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        namespace Pmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        namespace Pmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        namespace Pmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        namespace Pmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        namespace Pmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        namespace Pmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        namespace Pmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        namespace Pmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        namespace Pmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        namespace Pmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        namespace Pmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        namespace Pmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        namespace Pmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        namespace Pmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        namespace Pmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        namespace Pmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        namespace Pmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        namespace Pmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        namespace Pmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        namespace Pmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        namespace Pmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        namespace Pmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        namespace Pmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        namespace Pmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
        namespace Pmask31ValC{
        }
    }
    namespace Nonemask4{    ///<Mask register for Port.
        using Addr = Register::Address<0x20098090,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        namespace Pmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        namespace Pmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        namespace Pmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        namespace Pmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        namespace Pmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        namespace Pmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        namespace Pmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        namespace Pmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        namespace Pmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        namespace Pmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        namespace Pmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        namespace Pmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        namespace Pmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        namespace Pmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        namespace Pmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        namespace Pmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        namespace Pmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        namespace Pmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        namespace Pmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        namespace Pmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        namespace Pmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        namespace Pmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        namespace Pmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        namespace Pmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        namespace Pmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        namespace Pmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        namespace Pmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        namespace Pmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        namespace Pmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        namespace Pmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        namespace Pmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
        namespace Pmask31ValC{
        }
    }
    namespace Nonemask5{    ///<Mask register for Port.
        using Addr = Register::Address<0x200980b0,0x00000000,0,unsigned>;
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmask0{}; 
        namespace Pmask0ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmask1{}; 
        namespace Pmask1ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmask2{}; 
        namespace Pmask2ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmask3{}; 
        namespace Pmask3ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmask4{}; 
        namespace Pmask4ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmask5{}; 
        namespace Pmask5ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmask6{}; 
        namespace Pmask6ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmask7{}; 
        namespace Pmask7ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pmask8{}; 
        namespace Pmask8ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pmask9{}; 
        namespace Pmask9ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmask10{}; 
        namespace Pmask10ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pmask11{}; 
        namespace Pmask11ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pmask12{}; 
        namespace Pmask12ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmask13{}; 
        namespace Pmask13ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmask14{}; 
        namespace Pmask14ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pmask15{}; 
        namespace Pmask15ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmask16{}; 
        namespace Pmask16ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pmask17{}; 
        namespace Pmask17ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pmask18{}; 
        namespace Pmask18ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pmask19{}; 
        namespace Pmask19ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pmask20{}; 
        namespace Pmask20ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pmask21{}; 
        namespace Pmask21ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pmask22{}; 
        namespace Pmask22ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmask23{}; 
        namespace Pmask23ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pmask24{}; 
        namespace Pmask24ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pmask25{}; 
        namespace Pmask25ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pmask26{}; 
        namespace Pmask26ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pmask27{}; 
        namespace Pmask27ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmask28{}; 
        namespace Pmask28ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pmask29{}; 
        namespace Pmask29ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pmask30{}; 
        namespace Pmask30ValC{
        }
        ///Fast GPIO physical pin access control. 0 = Controlled pin is affected by writes to the port's xSET, xCLR, and xPIN register(s). Current state of the pin can be read from the xPIN register. 1 = Controlled pin is not affected by writes into the port's xSET, xCLR and xPIN register(s). When the xPIN register is read, this bit will not be updated with the state of the physical pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pmask31{}; 
        namespace Pmask31ValC{
        }
    }
    namespace Nonepin0{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098014,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        namespace Val0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        namespace Val1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        namespace Val2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        namespace Val3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        namespace Val4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        namespace Val5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        namespace Val6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        namespace Val7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        namespace Val8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        namespace Val9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        namespace Val10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        namespace Val11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        namespace Val12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        namespace Val13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        namespace Val14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        namespace Val15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        namespace Val16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        namespace Val17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        namespace Val18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        namespace Val19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        namespace Val20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        namespace Val21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        namespace Val22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        namespace Val23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        namespace Val24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        namespace Val25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        namespace Val26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        namespace Val27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        namespace Val28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        namespace Val29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        namespace Val30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
        namespace Val31ValC{
        }
    }
    namespace Nonepin1{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098034,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        namespace Val0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        namespace Val1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        namespace Val2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        namespace Val3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        namespace Val4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        namespace Val5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        namespace Val6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        namespace Val7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        namespace Val8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        namespace Val9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        namespace Val10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        namespace Val11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        namespace Val12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        namespace Val13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        namespace Val14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        namespace Val15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        namespace Val16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        namespace Val17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        namespace Val18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        namespace Val19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        namespace Val20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        namespace Val21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        namespace Val22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        namespace Val23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        namespace Val24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        namespace Val25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        namespace Val26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        namespace Val27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        namespace Val28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        namespace Val29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        namespace Val30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
        namespace Val31ValC{
        }
    }
    namespace Nonepin2{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098054,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        namespace Val0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        namespace Val1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        namespace Val2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        namespace Val3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        namespace Val4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        namespace Val5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        namespace Val6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        namespace Val7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        namespace Val8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        namespace Val9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        namespace Val10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        namespace Val11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        namespace Val12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        namespace Val13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        namespace Val14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        namespace Val15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        namespace Val16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        namespace Val17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        namespace Val18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        namespace Val19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        namespace Val20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        namespace Val21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        namespace Val22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        namespace Val23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        namespace Val24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        namespace Val25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        namespace Val26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        namespace Val27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        namespace Val28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        namespace Val29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        namespace Val30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
        namespace Val31ValC{
        }
    }
    namespace Nonepin3{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098074,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        namespace Val0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        namespace Val1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        namespace Val2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        namespace Val3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        namespace Val4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        namespace Val5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        namespace Val6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        namespace Val7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        namespace Val8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        namespace Val9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        namespace Val10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        namespace Val11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        namespace Val12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        namespace Val13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        namespace Val14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        namespace Val15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        namespace Val16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        namespace Val17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        namespace Val18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        namespace Val19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        namespace Val20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        namespace Val21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        namespace Val22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        namespace Val23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        namespace Val24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        namespace Val25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        namespace Val26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        namespace Val27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        namespace Val28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        namespace Val29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        namespace Val30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
        namespace Val31ValC{
        }
    }
    namespace Nonepin4{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x20098094,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        namespace Val0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        namespace Val1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        namespace Val2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        namespace Val3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        namespace Val4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        namespace Val5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        namespace Val6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        namespace Val7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        namespace Val8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        namespace Val9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        namespace Val10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        namespace Val11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        namespace Val12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        namespace Val13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        namespace Val14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        namespace Val15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        namespace Val16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        namespace Val17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        namespace Val18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        namespace Val19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        namespace Val20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        namespace Val21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        namespace Val22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        namespace Val23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        namespace Val24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        namespace Val25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        namespace Val26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        namespace Val27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        namespace Val28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        namespace Val29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        namespace Val30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
        namespace Val31ValC{
        }
    }
    namespace Nonepin5{    ///<Port Pin value register using MASK.
        using Addr = Register::Address<0x200980b4,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> val0{}; 
        namespace Val0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> val1{}; 
        namespace Val1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> val2{}; 
        namespace Val2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> val3{}; 
        namespace Val3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> val4{}; 
        namespace Val4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> val5{}; 
        namespace Val5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> val6{}; 
        namespace Val6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> val7{}; 
        namespace Val7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> val8{}; 
        namespace Val8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> val9{}; 
        namespace Val9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> val10{}; 
        namespace Val10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> val11{}; 
        namespace Val11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> val12{}; 
        namespace Val12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> val13{}; 
        namespace Val13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> val14{}; 
        namespace Val14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> val15{}; 
        namespace Val15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> val16{}; 
        namespace Val16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> val17{}; 
        namespace Val17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> val18{}; 
        namespace Val18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> val19{}; 
        namespace Val19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> val20{}; 
        namespace Val20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> val21{}; 
        namespace Val21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> val22{}; 
        namespace Val22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> val23{}; 
        namespace Val23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> val24{}; 
        namespace Val24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> val25{}; 
        namespace Val25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> val26{}; 
        namespace Val26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> val27{}; 
        namespace Val27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> val28{}; 
        namespace Val28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> val29{}; 
        namespace Val29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> val30{}; 
        namespace Val30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xCLR corresponds to pin Px[0], bit 31 in xCLR corresponds to pin Px[31]. 0 = Controlled pin output is set to LOW. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> val31{}; 
        namespace Val31ValC{
        }
    }
    namespace Noneset0{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098018,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        namespace Pset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        namespace Pset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        namespace Pset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        namespace Pset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        namespace Pset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        namespace Pset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        namespace Pset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        namespace Pset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        namespace Pset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        namespace Pset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        namespace Pset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        namespace Pset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        namespace Pset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        namespace Pset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        namespace Pset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        namespace Pset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        namespace Pset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        namespace Pset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        namespace Pset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        namespace Pset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        namespace Pset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        namespace Pset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        namespace Pset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        namespace Pset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        namespace Pset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        namespace Pset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        namespace Pset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        namespace Pset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        namespace Pset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        namespace Pset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        namespace Pset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
        namespace Pset31ValC{
        }
    }
    namespace Noneset1{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098038,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        namespace Pset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        namespace Pset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        namespace Pset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        namespace Pset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        namespace Pset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        namespace Pset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        namespace Pset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        namespace Pset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        namespace Pset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        namespace Pset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        namespace Pset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        namespace Pset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        namespace Pset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        namespace Pset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        namespace Pset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        namespace Pset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        namespace Pset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        namespace Pset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        namespace Pset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        namespace Pset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        namespace Pset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        namespace Pset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        namespace Pset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        namespace Pset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        namespace Pset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        namespace Pset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        namespace Pset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        namespace Pset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        namespace Pset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        namespace Pset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        namespace Pset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
        namespace Pset31ValC{
        }
    }
    namespace Noneset2{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098058,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        namespace Pset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        namespace Pset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        namespace Pset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        namespace Pset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        namespace Pset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        namespace Pset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        namespace Pset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        namespace Pset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        namespace Pset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        namespace Pset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        namespace Pset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        namespace Pset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        namespace Pset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        namespace Pset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        namespace Pset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        namespace Pset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        namespace Pset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        namespace Pset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        namespace Pset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        namespace Pset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        namespace Pset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        namespace Pset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        namespace Pset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        namespace Pset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        namespace Pset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        namespace Pset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        namespace Pset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        namespace Pset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        namespace Pset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        namespace Pset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        namespace Pset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
        namespace Pset31ValC{
        }
    }
    namespace Noneset3{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098078,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        namespace Pset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        namespace Pset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        namespace Pset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        namespace Pset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        namespace Pset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        namespace Pset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        namespace Pset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        namespace Pset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        namespace Pset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        namespace Pset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        namespace Pset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        namespace Pset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        namespace Pset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        namespace Pset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        namespace Pset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        namespace Pset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        namespace Pset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        namespace Pset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        namespace Pset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        namespace Pset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        namespace Pset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        namespace Pset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        namespace Pset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        namespace Pset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        namespace Pset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        namespace Pset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        namespace Pset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        namespace Pset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        namespace Pset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        namespace Pset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        namespace Pset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
        namespace Pset31ValC{
        }
    }
    namespace Noneset4{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x20098098,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        namespace Pset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        namespace Pset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        namespace Pset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        namespace Pset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        namespace Pset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        namespace Pset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        namespace Pset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        namespace Pset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        namespace Pset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        namespace Pset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        namespace Pset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        namespace Pset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        namespace Pset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        namespace Pset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        namespace Pset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        namespace Pset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        namespace Pset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        namespace Pset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        namespace Pset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        namespace Pset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        namespace Pset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        namespace Pset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        namespace Pset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        namespace Pset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        namespace Pset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        namespace Pset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        namespace Pset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        namespace Pset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        namespace Pset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        namespace Pset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        namespace Pset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
        namespace Pset31ValC{
        }
    }
    namespace Noneset5{    ///<Port Output Set register using MASK.
        using Addr = Register::Address<0x200980b8,0x00000000,0,unsigned>;
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pset0{}; 
        namespace Pset0ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pset1{}; 
        namespace Pset1ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pset2{}; 
        namespace Pset2ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pset3{}; 
        namespace Pset3ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pset4{}; 
        namespace Pset4ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pset5{}; 
        namespace Pset5ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pset6{}; 
        namespace Pset6ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pset7{}; 
        namespace Pset7ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pset8{}; 
        namespace Pset8ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pset9{}; 
        namespace Pset9ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pset10{}; 
        namespace Pset10ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pset11{}; 
        namespace Pset11ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pset12{}; 
        namespace Pset12ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pset13{}; 
        namespace Pset13ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pset14{}; 
        namespace Pset14ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pset15{}; 
        namespace Pset15ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pset16{}; 
        namespace Pset16ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pset17{}; 
        namespace Pset17ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pset18{}; 
        namespace Pset18ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pset19{}; 
        namespace Pset19ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pset20{}; 
        namespace Pset20ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pset21{}; 
        namespace Pset21ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pset22{}; 
        namespace Pset22ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pset23{}; 
        namespace Pset23ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pset24{}; 
        namespace Pset24ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pset25{}; 
        namespace Pset25ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pset26{}; 
        namespace Pset26ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pset27{}; 
        namespace Pset27ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pset28{}; 
        namespace Pset28ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pset29{}; 
        namespace Pset29ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pset30{}; 
        namespace Pset30ValC{
        }
        ///Fast GPIO output value Set bits. Bit 0 in xSET controls pin Px[0], bit 31 in xSET controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pset31{}; 
        namespace Pset31ValC{
        }
    }
    namespace Noneclr0{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009801c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        namespace Pclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        namespace Pclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        namespace Pclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        namespace Pclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        namespace Pclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        namespace Pclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        namespace Pclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        namespace Pclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        namespace Pclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        namespace Pclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        namespace Pclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        namespace Pclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        namespace Pclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        namespace Pclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        namespace Pclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        namespace Pclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        namespace Pclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        namespace Pclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        namespace Pclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        namespace Pclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        namespace Pclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        namespace Pclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        namespace Pclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        namespace Pclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        namespace Pclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        namespace Pclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        namespace Pclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        namespace Pclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        namespace Pclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        namespace Pclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        namespace Pclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
        namespace Pclr31ValC{
        }
    }
    namespace Noneclr1{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009803c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        namespace Pclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        namespace Pclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        namespace Pclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        namespace Pclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        namespace Pclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        namespace Pclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        namespace Pclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        namespace Pclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        namespace Pclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        namespace Pclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        namespace Pclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        namespace Pclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        namespace Pclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        namespace Pclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        namespace Pclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        namespace Pclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        namespace Pclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        namespace Pclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        namespace Pclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        namespace Pclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        namespace Pclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        namespace Pclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        namespace Pclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        namespace Pclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        namespace Pclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        namespace Pclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        namespace Pclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        namespace Pclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        namespace Pclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        namespace Pclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        namespace Pclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
        namespace Pclr31ValC{
        }
    }
    namespace Noneclr2{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009805c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        namespace Pclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        namespace Pclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        namespace Pclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        namespace Pclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        namespace Pclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        namespace Pclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        namespace Pclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        namespace Pclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        namespace Pclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        namespace Pclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        namespace Pclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        namespace Pclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        namespace Pclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        namespace Pclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        namespace Pclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        namespace Pclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        namespace Pclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        namespace Pclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        namespace Pclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        namespace Pclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        namespace Pclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        namespace Pclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        namespace Pclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        namespace Pclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        namespace Pclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        namespace Pclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        namespace Pclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        namespace Pclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        namespace Pclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        namespace Pclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        namespace Pclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
        namespace Pclr31ValC{
        }
    }
    namespace Noneclr3{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009807c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        namespace Pclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        namespace Pclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        namespace Pclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        namespace Pclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        namespace Pclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        namespace Pclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        namespace Pclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        namespace Pclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        namespace Pclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        namespace Pclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        namespace Pclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        namespace Pclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        namespace Pclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        namespace Pclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        namespace Pclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        namespace Pclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        namespace Pclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        namespace Pclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        namespace Pclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        namespace Pclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        namespace Pclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        namespace Pclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        namespace Pclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        namespace Pclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        namespace Pclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        namespace Pclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        namespace Pclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        namespace Pclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        namespace Pclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        namespace Pclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        namespace Pclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
        namespace Pclr31ValC{
        }
    }
    namespace Noneclr4{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x2009809c,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        namespace Pclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        namespace Pclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        namespace Pclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        namespace Pclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        namespace Pclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        namespace Pclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        namespace Pclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        namespace Pclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        namespace Pclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        namespace Pclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        namespace Pclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        namespace Pclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        namespace Pclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        namespace Pclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        namespace Pclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        namespace Pclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        namespace Pclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        namespace Pclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        namespace Pclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        namespace Pclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        namespace Pclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        namespace Pclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        namespace Pclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        namespace Pclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        namespace Pclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        namespace Pclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        namespace Pclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        namespace Pclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        namespace Pclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        namespace Pclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        namespace Pclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
        namespace Pclr31ValC{
        }
    }
    namespace Noneclr5{    ///<Port Output Clear register using MASK.
        using Addr = Register::Address<0x200980bc,0x00000000,0,unsigned>;
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pclr0{}; 
        namespace Pclr0ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pclr1{}; 
        namespace Pclr1ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pclr2{}; 
        namespace Pclr2ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pclr3{}; 
        namespace Pclr3ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pclr4{}; 
        namespace Pclr4ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pclr5{}; 
        namespace Pclr5ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pclr6{}; 
        namespace Pclr6ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pclr7{}; 
        namespace Pclr7ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pclr8{}; 
        namespace Pclr8ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pclr9{}; 
        namespace Pclr9ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pclr10{}; 
        namespace Pclr10ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pclr11{}; 
        namespace Pclr11ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pclr12{}; 
        namespace Pclr12ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pclr13{}; 
        namespace Pclr13ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pclr14{}; 
        namespace Pclr14ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pclr15{}; 
        namespace Pclr15ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pclr16{}; 
        namespace Pclr16ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pclr17{}; 
        namespace Pclr17ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pclr18{}; 
        namespace Pclr18ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pclr19{}; 
        namespace Pclr19ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pclr20{}; 
        namespace Pclr20ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pclr21{}; 
        namespace Pclr21ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pclr22{}; 
        namespace Pclr22ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pclr23{}; 
        namespace Pclr23ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pclr24{}; 
        namespace Pclr24ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pclr25{}; 
        namespace Pclr25ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pclr26{}; 
        namespace Pclr26ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pclr27{}; 
        namespace Pclr27ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pclr28{}; 
        namespace Pclr28ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pclr29{}; 
        namespace Pclr29ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pclr30{}; 
        namespace Pclr30ValC{
        }
        ///Fast GPIO output value Clear bits. Bit 0 in xCLR controls pin Px[0], bit 31 controls pin Px[31]. 0 = Controlled pin output is unchanged. 1 = Controlled pin output is set to LOW.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pclr31{}; 
        namespace Pclr31ValC{
        }
    }
}
