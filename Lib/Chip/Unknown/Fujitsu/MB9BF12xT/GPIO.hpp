#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose I/O ports
    namespace Nonepfr0{    ///<Port function setting register 0
        using Addr = Register::Address<0x40033000,0xfffffc00,0,unsigned>;
        ///Bit9 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr1{    ///<Port function setting register 1
        using Addr = Register::Address<0x40033004,0xffff0000,0,unsigned>;
        ///Bit15 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit14 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Bit13 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr2{    ///<Port function setting register 2
        using Addr = Register::Address<0x40033008,0xfffffc00,0,unsigned>;
        ///Bit9 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr3{    ///<Port function setting register 3
        using Addr = Register::Address<0x4003300c,0xffff0000,0,unsigned>;
        ///Bit15 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit14 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Bit13 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr4{    ///<Port function setting register 4
        using Addr = Register::Address<0x40033010,0xffff8000,0,unsigned>;
        ///Bit14 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Bit13 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr5{    ///<Port function setting register 5
        using Addr = Register::Address<0x40033014,0xffffc000,0,unsigned>;
        ///Bit13 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr6{    ///<Port function setting register 6
        using Addr = Register::Address<0x40033018,0xfffffff8,0,unsigned>;
        ///Bit2 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr7{    ///<Port function setting register 7
        using Addr = Register::Address<0x4003301c,0xffff0000,0,unsigned>;
        ///Bit15 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit14 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Bit13 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr8{    ///<Port function setting register 8
        using Addr = Register::Address<0x40033020,0xfffffff0,0,unsigned>;
        ///Bit3 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr9{    ///<Port function setting register 9
        using Addr = Register::Address<0x40033024,0xffffffc0,0,unsigned>;
        ///Bit5 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfra{    ///<Port function setting register A
        using Addr = Register::Address<0x40033028,0xffffffc0,0,unsigned>;
        ///Bit5 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrb{    ///<Port function setting register B
        using Addr = Register::Address<0x4003302c,0xffffff00,0,unsigned>;
        ///Bit7 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrc{    ///<Port function setting register C
        using Addr = Register::Address<0x40033030,0xffff0000,0,unsigned>;
        ///Bit15 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit14 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Bit13 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrd{    ///<Port function setting register D
        using Addr = Register::Address<0x40033034,0xfffffff0,0,unsigned>;
        ///Bit3 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfre{    ///<Port function setting register E
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit0 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrf{    ///<Port function setting register F
        using Addr = Register::Address<0x4003303c,0xffffff80,0,unsigned>;
        ///Bit6 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x40033100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x40033104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x40033108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4003310c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x40033110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x40033114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x40033118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr7{    ///<Pull-up Setting Register 7
        using Addr = Register::Address<0x4003311c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x40033120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr9{    ///<Pull-up Setting Register 9
        using Addr = Register::Address<0x40033124,0xffffffff,0,unsigned>;
    }
    namespace Nonepcra{    ///<Pull-up Setting Register A
        using Addr = Register::Address<0x40033128,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrb{    ///<Pull-up Setting Register B
        using Addr = Register::Address<0x4003312c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrc{    ///<Pull-up Setting Register C
        using Addr = Register::Address<0x40033130,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrd{    ///<Pull-up Setting Register D
        using Addr = Register::Address<0x40033134,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x40033138,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrf{    ///<Pull-up Setting Register F
        using Addr = Register::Address<0x4003313c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output direction setting register 0
        using Addr = Register::Address<0x40033200,0xfffffc00,0,unsigned>;
        ///Bit9 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit8 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Bit7 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Bit5 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Noneddr1{    ///<Port input/output direction setting register 1
        using Addr = Register::Address<0x40033204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output direction setting register 2
        using Addr = Register::Address<0x40033208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output direction setting register 3
        using Addr = Register::Address<0x4003320c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output direction setting register 4
        using Addr = Register::Address<0x40033210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output direction setting register 5
        using Addr = Register::Address<0x40033214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output direction setting register 6
        using Addr = Register::Address<0x40033218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr7{    ///<Port input/output direction setting register 7
        using Addr = Register::Address<0x4003321c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output direction setting register 8
        using Addr = Register::Address<0x40033220,0xffffffff,0,unsigned>;
    }
    namespace Noneddr9{    ///<Port input/output direction setting register 9
        using Addr = Register::Address<0x40033224,0xffffffff,0,unsigned>;
    }
    namespace Noneddra{    ///<Port input/output direction setting register A
        using Addr = Register::Address<0x40033228,0xffffffff,0,unsigned>;
    }
    namespace Noneddrb{    ///<Port input/output direction setting register B
        using Addr = Register::Address<0x4003322c,0xffffffff,0,unsigned>;
    }
    namespace Noneddrc{    ///<Port input/output direction setting register C
        using Addr = Register::Address<0x40033230,0xffffffff,0,unsigned>;
    }
    namespace Noneddrd{    ///<Port input/output direction setting register D
        using Addr = Register::Address<0x40033234,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output direction setting register E
        using Addr = Register::Address<0x40033238,0xffffffff,0,unsigned>;
    }
    namespace Noneddrf{    ///<Port input/output direction setting register F
        using Addr = Register::Address<0x4003323c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port input data register 0
        using Addr = Register::Address<0x40033300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///<Port input data register 1
        using Addr = Register::Address<0x40033304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///<Port input data register 2
        using Addr = Register::Address<0x40033308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///<Port input data register 3
        using Addr = Register::Address<0x4003330c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///<Port input data register 4
        using Addr = Register::Address<0x40033310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///<Port input data register 5
        using Addr = Register::Address<0x40033314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///<Port input data register 6
        using Addr = Register::Address<0x40033318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir7{    ///<Port input data register 7
        using Addr = Register::Address<0x4003331c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///<Port input data register 8
        using Addr = Register::Address<0x40033320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir9{    ///<Port input data register 9
        using Addr = Register::Address<0x40033324,0xffffffff,0,unsigned>;
    }
    namespace Nonepdira{    ///<Port input data register A
        using Addr = Register::Address<0x40033328,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirb{    ///<Port input data register B
        using Addr = Register::Address<0x4003332c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirc{    ///<Port input data register C
        using Addr = Register::Address<0x40033330,0xffffffff,0,unsigned>;
    }
    namespace Nonepdird{    ///<Port input data register D
        using Addr = Register::Address<0x40033334,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///<Port input data register E
        using Addr = Register::Address<0x40033338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirf{    ///<Port input data register F
        using Addr = Register::Address<0x4003333c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///<Port output data register 0
        using Addr = Register::Address<0x40033400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port output data register 1
        using Addr = Register::Address<0x40033404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port output data register 2
        using Addr = Register::Address<0x40033408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port output data register 3
        using Addr = Register::Address<0x4003340c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port output data register 4
        using Addr = Register::Address<0x40033410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port output data register 5
        using Addr = Register::Address<0x40033414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port output data register 6
        using Addr = Register::Address<0x40033418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor7{    ///<Port output data register 7
        using Addr = Register::Address<0x4003341c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port output data register 8
        using Addr = Register::Address<0x40033420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor9{    ///<Port output data register 9
        using Addr = Register::Address<0x40033424,0xffffffff,0,unsigned>;
    }
    namespace Nonepdora{    ///<Port output data register A
        using Addr = Register::Address<0x40033428,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorb{    ///<Port output data register B
        using Addr = Register::Address<0x4003342c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorc{    ///<Port output data register C
        using Addr = Register::Address<0x40033430,0xffffffff,0,unsigned>;
    }
    namespace Nonepdord{    ///<Port output data register D
        using Addr = Register::Address<0x40033434,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port output data register E
        using Addr = Register::Address<0x40033438,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorf{    ///<Port output data register F
        using Addr = Register::Address<0x4003343c,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog input setting register
        using Addr = Register::Address<0x40033500,0x00000000,0,unsigned>;
        ///Bit31 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        ///Bit30 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        ///Bit29 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        ///Bit28 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        ///Bit27 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        ///Bit26 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        ///Bit25 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        ///Bit24 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
        ///Bit23 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        ///Bit22 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        ///Bit21 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        ///Bit20 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        ///Bit19 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        ///Bit18 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        ///Bit17 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        ///Bit16 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
        ///Bit15 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        ///Bit14 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        ///Bit13 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        ///Bit12 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        ///Bit11 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        ///Bit10 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        ///Bit9 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an9{}; 
        namespace An9ValC{
        }
        ///Bit8 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an8{}; 
        namespace An8ValC{
        }
        ///Bit7 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        namespace An7ValC{
        }
        ///Bit6 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        namespace An6ValC{
        }
        ///Bit5 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        ///Bit4 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        ///Bit3 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        namespace An3ValC{
        }
        ///Bit2 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        ///Bit1 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
        ///Bit0 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
        namespace An0ValC{
        }
    }
    namespace Nonespsr{    ///<Special port setting register
        using Addr = Register::Address<0x40033580,0xfffffff0,0,unsigned>;
        ///Main clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
        ///Sub clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
        namespace SubxcValC{
        }
    }
    namespace Noneepfr00{    ///<Extended pin function setting register 00
        using Addr = Register::Address<0x40033600,0xfcfcff08,0,unsigned>;
        ///TRACED function select bit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        namespace Trc1eValC{
        }
        ///TRACED function select bit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        namespace Trc0eValC{
        }
        ///JTAG function select bit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        namespace Jtagen1sValC{
        }
        ///JTAG function select bit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        namespace Jtagen0bValC{
        }
        ///Sub clock divide output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        namespace SubouteValC{
        }
        ///RTC clock output select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        namespace RtccoeValC{
        }
        ///Internal high-speed CR oscillation output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        namespace CrouteValC{
        }
        ///NMIX function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
        namespace NmisValC{
        }
    }
    namespace Noneepfr01{    ///<Extended pin function setting register 01
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        ///IC03 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        namespace Ic03sValC{
        }
        ///IC02 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        namespace Ic02sValC{
        }
        ///IC01 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        namespace Ic01sValC{
        }
        ///IC00 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        namespace Ic00sValC{
        }
        ///FRCK0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        namespace Frck0sValC{
        }
        ///DTTIX0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        namespace Dtti0sValC{
        }
        ///DTTIX0 function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        namespace Dtti0cValC{
        }
        ///RTO05E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        namespace Rto05eValC{
        }
        ///RTO04E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        namespace Rto04eValC{
        }
        ///RTO03E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        namespace Rto03eValC{
        }
        ///RTO02E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        namespace Rto02eValC{
        }
        ///RTO01E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        namespace Rto01eValC{
        }
        ///RTO00E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
        namespace Rto00eValC{
        }
    }
    namespace Noneepfr02{    ///<Extended pin function setting register 02
        using Addr = Register::Address<0x40033608,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr03{    ///<Extended pin function setting register 03
        using Addr = Register::Address<0x4003360c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr04{    ///<Extended pin function setting register 04
        using Addr = Register::Address<0x40033610,0xc0c3c083,0,unsigned>;
        ///TIOB3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        namespace Tiob3sValC{
        }
        ///TIOA3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        namespace Tioa3eValC{
        }
        ///TIOA3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        namespace Tioa3sValC{
        }
        ///TIOB2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        namespace Tiob2sValC{
        }
        ///TIOA2 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        namespace Tioa2eValC{
        }
        ///TIOB1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        namespace Tiob1sValC{
        }
        ///TIOA1E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        namespace Tioa1eValC{
        }
        ///TIOA1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        namespace Tioa1sValC{
        }
        ///TIOB0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        namespace Tiob0sValC{
        }
        ///TIOA0 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
        namespace Tioa0eValC{
        }
    }
    namespace Noneepfr05{    ///<Extended pin function setting register 05
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        ///TIOB7 input select Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        namespace Tiob7sValC{
        }
        ///TIOA7E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        namespace Tioa7eValC{
        }
        ///TIOA7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        namespace Tioa7sValC{
        }
        ///TIOB6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        namespace Tiob6sValC{
        }
        ///TIOA6 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        namespace Tioa6eValC{
        }
        ///TIOB5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        namespace Tiob5sValC{
        }
        ///TIOA5E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        namespace Tioa5eValC{
        }
        ///TIOA5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        namespace Tioa5sValC{
        }
        ///TIOB4 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        namespace Tiob4sValC{
        }
        ///TIOA4 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
        namespace Tioa4eValC{
        }
    }
    namespace Noneepfr06{    ///<Extended pin function setting register 06
        using Addr = Register::Address<0x40033618,0x00000000,0,unsigned>;
        ///External interrupt 15 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        namespace Eint15sValC{
        }
        ///External interrupt 14 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        namespace Eint14sValC{
        }
        ///External interrupt 13 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        namespace Eint13sValC{
        }
        ///External interrupt 12 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        namespace Eint12sValC{
        }
        ///External interrupt 11 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        namespace Eint11sValC{
        }
        ///External interrupt 10 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        namespace Eint10sValC{
        }
        ///External interrupt 9 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        namespace Eint09sValC{
        }
        ///External interrupt 8 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        namespace Eint08sValC{
        }
        ///External interrupt 7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        namespace Eint07sValC{
        }
        ///External interrupt 6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        namespace Eint06sValC{
        }
        ///External interrupt 5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        namespace Eint05sValC{
        }
        ///External interrupt 4 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        namespace Eint04sValC{
        }
        ///External interrupt 3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        namespace Eint03sValC{
        }
        ///External interrupt 2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        namespace Eint02sValC{
        }
        ///External interrupt 1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        namespace Eint01sValC{
        }
        ///External interrupt 0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
        namespace Eint00sValC{
        }
    }
    namespace Noneepfr07{    ///<Extended pin function setting register 07
        using Addr = Register::Address<0x4003361c,0xf000000f,0,unsigned>;
        ///SCK3 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        namespace Sck3bValC{
        }
        ///SOT3B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        namespace Sot3bValC{
        }
        ///SIN3S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        namespace Sin3sValC{
        }
        ///SCK2 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        namespace Sck2bValC{
        }
        ///SOT2B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        namespace Sot2bValC{
        }
        ///SIN2S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        namespace Sin2sValC{
        }
        ///SCK1 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        namespace Sck1bValC{
        }
        ///SCK1B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        namespace Sot1bValC{
        }
        ///SIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        namespace Sin1sValC{
        }
        ///SCK0 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        namespace Sck0bValC{
        }
        ///SOT0B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        namespace Sot0bValC{
        }
        ///SIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
        namespace Sin0sValC{
        }
    }
    namespace Noneepfr08{    ///<Extended pin function setting register 08
        using Addr = Register::Address<0x40033620,0xf0000000,0,unsigned>;
        ///SCK7 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        namespace Sck7bValC{
        }
        ///SOT7B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        namespace Sot7bValC{
        }
        ///SIN7S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        namespace Sin7sValC{
        }
        ///SCK6 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        namespace Sck6bValC{
        }
        ///SOT6B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        namespace Sot6bValC{
        }
        ///SIN6S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        namespace Sin6sValC{
        }
        ///SCK5 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        namespace Sck5bValC{
        }
        ///SOT5B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        namespace Sot5bValC{
        }
        ///SIN5S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        namespace Sin5sValC{
        }
        ///SCK4 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        namespace Sck4bValC{
        }
        ///SOT4B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        namespace Sot4bValC{
        }
        ///SIN4S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        namespace Sin4sValC{
        }
        ///CTS4S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        namespace Cts4sValC{
        }
        ///RTS4E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
        namespace Rts4eValC{
        }
    }
    namespace Noneepfr09{    ///<Extended pin function setting register 09
        using Addr = Register::Address<0x40033624,0xfff00000,0,unsigned>;
        ///ADTRG1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        namespace Adtrg1sValC{
        }
        ///ADTRG0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        namespace Adtrg0sValC{
        }
        ///QZIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        namespace Qzin1sValC{
        }
        ///QBIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        namespace Qbin1sValC{
        }
        ///QAIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        namespace Qain1sValC{
        }
        ///QZIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        namespace Qzin0sValC{
        }
        ///QBIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        namespace Qbin0sValC{
        }
        ///QAIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
        namespace Qain0sValC{
        }
    }
    namespace Noneepfr10{    ///<Extended pin function setting register 10
        using Addr = Register::Address<0x40033628,0x00000000,0,unsigned>;
        ///UEA24E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        namespace Uea24eValC{
        }
        ///UEA23E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        namespace Uea23eValC{
        }
        ///UEA22E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        namespace Uea22eValC{
        }
        ///UEA21E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        namespace Uea21eValC{
        }
        ///UEA20E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        namespace Uea20eValC{
        }
        ///UEA19E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        namespace Uea19eValC{
        }
        ///UEA18E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        namespace Uea18eValC{
        }
        ///UEA17E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        namespace Uea17eValC{
        }
        ///UEA16E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        namespace Uea16eValC{
        }
        ///UEA15E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        namespace Uea15eValC{
        }
        ///UEA14E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        namespace Uea14eValC{
        }
        ///UEA13E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        namespace Uea13eValC{
        }
        ///UEA12E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        namespace Uea12eValC{
        }
        ///UEA11E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        namespace Uea11eValC{
        }
        ///UEA10E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        namespace Uea10eValC{
        }
        ///UEA09E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        namespace Uea09eValC{
        }
        ///UEA08E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        namespace Uea08eValC{
        }
        ///UEAOOE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        namespace UeaooeValC{
        }
        ///UECS7E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        namespace Uecs7eValC{
        }
        ///UECS6E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        namespace Uecs6eValC{
        }
        ///UECS5E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        namespace Uecs5eValC{
        }
        ///UECS4E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        namespace Uecs4eValC{
        }
        ///UECS3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        namespace Uecs3eValC{
        }
        ///UECS2E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        namespace Uecs2eValC{
        }
        ///UECS1E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        namespace Uecs1eValC{
        }
        ///UEFLSE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        namespace UeflseValC{
        }
        ///UEOEXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        namespace UeoexeValC{
        }
        ///UEDQME output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        namespace UedqmeValC{
        }
        ///UEWEXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        namespace UewexeValC{
        }
        ///UECLKE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        namespace UeclkeValC{
        }
        ///UEDTHB input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        namespace UedthbValC{
        }
        ///UEDEFB input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
        namespace UedefbValC{
        }
    }
    namespace Noneepfr11{    ///<Extended pin function setting register 11
        using Addr = Register::Address<0x4003362c,0xfc000000,0,unsigned>;
        ///UERLC relocation select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        namespace UerlcValC{
        }
        ///UED15B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        namespace Ued15bValC{
        }
        ///UED14B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        namespace Ued14bValC{
        }
        ///UED13B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        namespace Ued13bValC{
        }
        ///UED12B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        namespace Ued12bValC{
        }
        ///UED11B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        namespace Ued11bValC{
        }
        ///UED10B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        namespace Ued10bValC{
        }
        ///UED09B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        namespace Ued09bValC{
        }
        ///UED08B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        namespace Ued08bValC{
        }
        ///UED07B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        namespace Ued07bValC{
        }
        ///UED06B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        namespace Ued06bValC{
        }
        ///UED05B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        namespace Ued05bValC{
        }
        ///UED04B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        namespace Ued04bValC{
        }
        ///UED03B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        namespace Ued03bValC{
        }
        ///UED02B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        namespace Ued02bValC{
        }
        ///UED01B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        namespace Ued01bValC{
        }
        ///UED00B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        namespace Ued00bValC{
        }
        ///UEA07E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        namespace Uea07eValC{
        }
        ///UEA06E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        namespace Uea06eValC{
        }
        ///UEA05E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        namespace Uea05eValC{
        }
        ///UEA04E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        namespace Uea04eValC{
        }
        ///UEA03E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        namespace Uea03eValC{
        }
        ///UEA02E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        namespace Uea02eValC{
        }
        ///UEA01E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        namespace Uea01eValC{
        }
        ///UECS0E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        namespace Uecs0eValC{
        }
        ///UEALEE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
        namespace UealeeValC{
        }
    }
    namespace Noneepfr12{    ///<Extended pin function setting register 12
        using Addr = Register::Address<0x40033630,0xc0c3c0c3,0,unsigned>;
        ///TIOB11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        namespace Tiob11sValC{
        }
        ///TIOA11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        namespace Tioa11eValC{
        }
        ///TIOA11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        namespace Tioa11sValC{
        }
        ///TIOB10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        namespace Tiob10sValC{
        }
        ///TIOA10 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        namespace Tioa10eValC{
        }
        ///TIOB9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        namespace Tiob9sValC{
        }
        ///TIOA9 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        namespace Tioa9eValC{
        }
        ///TIOA9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        namespace Tioa9sValC{
        }
        ///TIOB8 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        namespace Tiob8sValC{
        }
        ///TIOA8 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
        namespace Tioa8eValC{
        }
    }
    namespace Noneepfr13{    ///<Extended pin function setting register 13
        using Addr = Register::Address<0x40033634,0xc0c3c0c3,0,unsigned>;
        ///TIOB15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        namespace Tiob15sValC{
        }
        ///TIOA15 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        namespace Tioa15eValC{
        }
        ///TIOA15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        namespace Tioa15sValC{
        }
        ///TIOB14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        namespace Tiob14sValC{
        }
        ///TIOA14 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        namespace Tioa14eValC{
        }
        ///TIOB13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        namespace Tiob13sValC{
        }
        ///TIOA13 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        namespace Tioa13eValC{
        }
        ///TIOA13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        namespace Tioa13sValC{
        }
        ///TIOB12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        namespace Tiob12sValC{
        }
        ///TIOA12 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
        namespace Tioa12eValC{
        }
    }
    namespace Noneepfr14{    ///<Extended pin function setting register 14
        using Addr = Register::Address<0x40033638,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr15{    ///<Extended pin function setting register 15
        using Addr = Register::Address<0x4003363c,0x00000000,0,unsigned>;
        ///External interrupt 31 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        namespace Eint31sValC{
        }
        ///External interrupt 30 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        namespace Eint30sValC{
        }
        ///External interrupt 29 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        namespace Eint29sValC{
        }
        ///External interrupt 28 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        namespace Eint28sValC{
        }
        ///External interrupt 27 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        namespace Eint27sValC{
        }
        ///External interrupt 26 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        namespace Eint26sValC{
        }
        ///External interrupt 25 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        namespace Eint25sValC{
        }
        ///External interrupt 24 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        namespace Eint24sValC{
        }
        ///External interrupt 23 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        namespace Eint23sValC{
        }
        ///External interrupt 22 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        namespace Eint22sValC{
        }
        ///External interrupt 21 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        namespace Eint21sValC{
        }
        ///External interrupt 20 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        namespace Eint20sValC{
        }
        ///External interrupt 19 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        namespace Eint19sValC{
        }
        ///External interrupt 18 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        namespace Eint18sValC{
        }
        ///External interrupt 17 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        namespace Eint17sValC{
        }
        ///External interrupt 16 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
        namespace Eint16sValC{
        }
    }
    namespace Noneepfr16{    ///<Extended pin function setting register 16
        using Addr = Register::Address<0x40033640,0xf000000f,0,unsigned>;
        ///SCK11 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        namespace Sck11bValC{
        }
        ///SOT11B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        namespace Sot11bValC{
        }
        ///SIN11S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        namespace Sin11sValC{
        }
        ///SCK10 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        namespace Sck10bValC{
        }
        ///SOT10B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        namespace Sot10bValC{
        }
        ///SIN10S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        namespace Sin10sValC{
        }
        ///SCK9 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        namespace Sck9bValC{
        }
        ///SCK9B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        namespace Sot9bValC{
        }
        ///SIN9S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        namespace Sin9sValC{
        }
        ///SCK8 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        namespace Sck8bValC{
        }
        ///SOT8B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        namespace Sot8bValC{
        }
        ///SIN8S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
        namespace Sin8sValC{
        }
    }
    namespace Noneepfr17{    ///<Extended pin function setting register 17
        using Addr = Register::Address<0x40033644,0xf000000f,0,unsigned>;
        ///SCK7 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        namespace Sck15bValC{
        }
        ///SOT7B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        namespace Sot15bValC{
        }
        ///SIN7S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        namespace Sin15sValC{
        }
        ///SCK6 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        namespace Sck14bValC{
        }
        ///SOT6B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        namespace Sot14bValC{
        }
        ///SIN6S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        namespace Sin14sValC{
        }
        ///SCK5 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        namespace Sck13bValC{
        }
        ///SOT5B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        namespace Sot13bValC{
        }
        ///SIN5S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        namespace Sin13sValC{
        }
        ///SCK4 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        namespace Sck12bValC{
        }
        ///SOT4B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        namespace Sot12bValC{
        }
        ///SIN4S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
        namespace Sin12sValC{
        }
    }
    namespace Noneepfr18{    ///<Extended pin function setting register 18
        using Addr = Register::Address<0x40033648,0xfffffff0,0,unsigned>;
        ///CEC1 Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cecr1b{}; 
        namespace Cecr1bValC{
        }
        ///CEC0 Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cecr0b{}; 
        namespace Cecr0bValC{
        }
    }
    namespace Nonepzr0{    ///<Port Pseudo Open Drain Setting Register 0
        using Addr = Register::Address<0x40033700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x40033704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x40033708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///<Port Pseudo Open Drain Setting Register 3
        using Addr = Register::Address<0x4003370c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///<Port Pseudo Open Drain Setting Register 4
        using Addr = Register::Address<0x40033710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x40033714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x40033718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr7{    ///<Port Pseudo Open Drain Setting Register 7
        using Addr = Register::Address<0x4003371c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x40033720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr9{    ///<Port Pseudo Open Drain Setting Register 9
        using Addr = Register::Address<0x40033724,0xffffffff,0,unsigned>;
    }
    namespace Nonepzra{    ///<Port Pseudo Open Drain Setting Register A
        using Addr = Register::Address<0x40033728,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrb{    ///<Port Pseudo Open Drain Setting Register B
        using Addr = Register::Address<0x4003372c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrc{    ///<Port Pseudo Open Drain Setting Register C
        using Addr = Register::Address<0x40033730,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrd{    ///<Port Pseudo Open Drain Setting Register D
        using Addr = Register::Address<0x40033734,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x40033738,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrf{    ///<Port Pseudo Open Drain Setting Register F
        using Addr = Register::Address<0x4003373c,0xffffffff,0,unsigned>;
    }
}
