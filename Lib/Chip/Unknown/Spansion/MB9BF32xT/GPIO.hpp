#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral GPIO 
    namespace Nonepfr0{    ///< register PFR0 
        using Addr = Register::Address<0x40033000,0xfffffc00,0,unsigned>;
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr1{    ///< register PFR1 
        using Addr = Register::Address<0x40033004,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr2{    ///< register PFR2 
        using Addr = Register::Address<0x40033008,0xfffffc00,0,unsigned>;
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr3{    ///< register PFR3 
        using Addr = Register::Address<0x4003300c,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr4{    ///< register PFR4 
        using Addr = Register::Address<0x40033010,0xffff8000,0,unsigned>;
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr5{    ///< register PFR5 
        using Addr = Register::Address<0x40033014,0xffffc000,0,unsigned>;
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr6{    ///< register PFR6 
        using Addr = Register::Address<0x40033018,0xfffffff8,0,unsigned>;
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr7{    ///< register PFR7 
        using Addr = Register::Address<0x4003301c,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr8{    ///< register PFR8 
        using Addr = Register::Address<0x40033020,0xfffffff0,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr9{    ///< register PFR9 
        using Addr = Register::Address<0x40033024,0xffffffc0,0,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfra{    ///< register PFRA 
        using Addr = Register::Address<0x40033028,0xffffffc0,0,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrb{    ///< register PFRB 
        using Addr = Register::Address<0x4003302c,0xffffff00,0,unsigned>;
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrc{    ///< register PFRC 
        using Addr = Register::Address<0x40033030,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrd{    ///< register PFRD 
        using Addr = Register::Address<0x40033034,0xfffffff0,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfre{    ///< register PFRE 
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfrf{    ///< register PFRF 
        using Addr = Register::Address<0x4003303c,0xffffff80,0,unsigned>;
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepcr0{    ///< register PCR0 
        using Addr = Register::Address<0x40033100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///< register PCR1 
        using Addr = Register::Address<0x40033104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///< register PCR2 
        using Addr = Register::Address<0x40033108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///< register PCR3 
        using Addr = Register::Address<0x4003310c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///< register PCR4 
        using Addr = Register::Address<0x40033110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///< register PCR5 
        using Addr = Register::Address<0x40033114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///< register PCR6 
        using Addr = Register::Address<0x40033118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr7{    ///< register PCR7 
        using Addr = Register::Address<0x4003311c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///< register PCR8 
        using Addr = Register::Address<0x40033120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr9{    ///< register PCR9 
        using Addr = Register::Address<0x40033124,0xffffffff,0,unsigned>;
    }
    namespace Nonepcra{    ///< register PCRA 
        using Addr = Register::Address<0x40033128,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrb{    ///< register PCRB 
        using Addr = Register::Address<0x4003312c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrc{    ///< register PCRC 
        using Addr = Register::Address<0x40033130,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrd{    ///< register PCRD 
        using Addr = Register::Address<0x40033134,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///< register PCRE 
        using Addr = Register::Address<0x40033138,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrf{    ///< register PCRF 
        using Addr = Register::Address<0x4003313c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///< register DDR0 
        using Addr = Register::Address<0x40033200,0xfffffc00,0,unsigned>;
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Noneddr1{    ///< register DDR1 
        using Addr = Register::Address<0x40033204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///< register DDR2 
        using Addr = Register::Address<0x40033208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///< register DDR3 
        using Addr = Register::Address<0x4003320c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///< register DDR4 
        using Addr = Register::Address<0x40033210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///< register DDR5 
        using Addr = Register::Address<0x40033214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///< register DDR6 
        using Addr = Register::Address<0x40033218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr7{    ///< register DDR7 
        using Addr = Register::Address<0x4003321c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///< register DDR8 
        using Addr = Register::Address<0x40033220,0xffffffff,0,unsigned>;
    }
    namespace Noneddr9{    ///< register DDR9 
        using Addr = Register::Address<0x40033224,0xffffffff,0,unsigned>;
    }
    namespace Noneddra{    ///< register DDRA 
        using Addr = Register::Address<0x40033228,0xffffffff,0,unsigned>;
    }
    namespace Noneddrb{    ///< register DDRB 
        using Addr = Register::Address<0x4003322c,0xffffffff,0,unsigned>;
    }
    namespace Noneddrc{    ///< register DDRC 
        using Addr = Register::Address<0x40033230,0xffffffff,0,unsigned>;
    }
    namespace Noneddrd{    ///< register DDRD 
        using Addr = Register::Address<0x40033234,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///< register DDRE 
        using Addr = Register::Address<0x40033238,0xffffffff,0,unsigned>;
    }
    namespace Noneddrf{    ///< register DDRF 
        using Addr = Register::Address<0x4003323c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///< register PDIR0 
        using Addr = Register::Address<0x40033300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///< register PDIR1 
        using Addr = Register::Address<0x40033304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///< register PDIR2 
        using Addr = Register::Address<0x40033308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///< register PDIR3 
        using Addr = Register::Address<0x4003330c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///< register PDIR4 
        using Addr = Register::Address<0x40033310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///< register PDIR5 
        using Addr = Register::Address<0x40033314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///< register PDIR6 
        using Addr = Register::Address<0x40033318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir7{    ///< register PDIR7 
        using Addr = Register::Address<0x4003331c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///< register PDIR8 
        using Addr = Register::Address<0x40033320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir9{    ///< register PDIR9 
        using Addr = Register::Address<0x40033324,0xffffffff,0,unsigned>;
    }
    namespace Nonepdira{    ///< register PDIRA 
        using Addr = Register::Address<0x40033328,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirb{    ///< register PDIRB 
        using Addr = Register::Address<0x4003332c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirc{    ///< register PDIRC 
        using Addr = Register::Address<0x40033330,0xffffffff,0,unsigned>;
    }
    namespace Nonepdird{    ///< register PDIRD 
        using Addr = Register::Address<0x40033334,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///< register PDIRE 
        using Addr = Register::Address<0x40033338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirf{    ///< register PDIRF 
        using Addr = Register::Address<0x4003333c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///< register PDOR0 
        using Addr = Register::Address<0x40033400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///< register PDOR1 
        using Addr = Register::Address<0x40033404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///< register PDOR2 
        using Addr = Register::Address<0x40033408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///< register PDOR3 
        using Addr = Register::Address<0x4003340c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///< register PDOR4 
        using Addr = Register::Address<0x40033410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///< register PDOR5 
        using Addr = Register::Address<0x40033414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///< register PDOR6 
        using Addr = Register::Address<0x40033418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor7{    ///< register PDOR7 
        using Addr = Register::Address<0x4003341c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///< register PDOR8 
        using Addr = Register::Address<0x40033420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor9{    ///< register PDOR9 
        using Addr = Register::Address<0x40033424,0xffffffff,0,unsigned>;
    }
    namespace Nonepdora{    ///< register PDORA 
        using Addr = Register::Address<0x40033428,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorb{    ///< register PDORB 
        using Addr = Register::Address<0x4003342c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorc{    ///< register PDORC 
        using Addr = Register::Address<0x40033430,0xffffffff,0,unsigned>;
    }
    namespace Nonepdord{    ///< register PDORD 
        using Addr = Register::Address<0x40033434,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///< register PDORE 
        using Addr = Register::Address<0x40033438,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorf{    ///< register PDORF 
        using Addr = Register::Address<0x4003343c,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///< register ADE 
        using Addr = Register::Address<0x40033500,0x00000000,0,unsigned>;
        /// bitfield AN31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        /// bitfield AN30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        /// bitfield AN29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        /// bitfield AN28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        /// bitfield AN27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        /// bitfield AN26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        /// bitfield AN25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        /// bitfield AN24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
        /// bitfield AN23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        /// bitfield AN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        /// bitfield AN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        /// bitfield AN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        /// bitfield AN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        /// bitfield AN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        /// bitfield AN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        /// bitfield AN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
        /// bitfield AN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        /// bitfield AN11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        /// bitfield AN10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        /// bitfield AN9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an9{}; 
        namespace An9ValC{
        }
        /// bitfield AN8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an8{}; 
        namespace An8ValC{
        }
        /// bitfield AN7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        namespace An7ValC{
        }
        /// bitfield AN6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        namespace An6ValC{
        }
        /// bitfield AN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        /// bitfield AN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        /// bitfield AN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        namespace An3ValC{
        }
        /// bitfield AN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        /// bitfield AN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
        /// bitfield AN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
        namespace An0ValC{
        }
    }
    namespace Nonespsr{    ///< register SPSR 
        using Addr = Register::Address<0x40033580,0xffffffe0,0,unsigned>;
        /// bitfield USB0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        namespace Usb0cValC{
        }
        /// bitfield MAINXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
        /// bitfield SUBXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
        namespace SubxcValC{
        }
    }
    namespace Noneepfr00{    ///< register EPFR00 
        using Addr = Register::Address<0x40033600,0xfcfcfd08,0,unsigned>;
        /// bitfield TRC1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        namespace Trc1eValC{
        }
        /// bitfield TRC0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        namespace Trc0eValC{
        }
        /// bitfield JTAGEN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        namespace Jtagen1sValC{
        }
        /// bitfield JTAGEN0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        namespace Jtagen0bValC{
        }
        /// bitfield USBP0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        namespace Usbp0eValC{
        }
        /// bitfield SUBOUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        namespace SubouteValC{
        }
        /// bitfield RTCCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        namespace RtccoeValC{
        }
        /// bitfield CROUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        namespace CrouteValC{
        }
        /// bitfield NMIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
        namespace NmisValC{
        }
    }
    namespace Noneepfr01{    ///< register EPFR01 
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        /// bitfield IC03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        namespace Ic03sValC{
        }
        /// bitfield IC02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        namespace Ic02sValC{
        }
        /// bitfield IC01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        namespace Ic01sValC{
        }
        /// bitfield IC00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        namespace Ic00sValC{
        }
        /// bitfield FRCK0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        namespace Frck0sValC{
        }
        /// bitfield DTTI0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        namespace Dtti0sValC{
        }
        /// bitfield DTTI0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        namespace Dtti0cValC{
        }
        /// bitfield RTO05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        namespace Rto05eValC{
        }
        /// bitfield RTO04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        namespace Rto04eValC{
        }
        /// bitfield RTO03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        namespace Rto03eValC{
        }
        /// bitfield RTO02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        namespace Rto02eValC{
        }
        /// bitfield RTO01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        namespace Rto01eValC{
        }
        /// bitfield RTO00E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
        namespace Rto00eValC{
        }
    }
    namespace Noneepfr02{    ///< register EPFR02 
        using Addr = Register::Address<0x40033608,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr03{    ///< register EPFR03 
        using Addr = Register::Address<0x4003360c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr04{    ///< register EPFR04 
        using Addr = Register::Address<0x40033610,0xc0c3c083,0,unsigned>;
        /// bitfield TIOB3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        namespace Tiob3sValC{
        }
        /// bitfield TIOA3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        namespace Tioa3eValC{
        }
        /// bitfield TIOA3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        namespace Tioa3sValC{
        }
        /// bitfield TIOB2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        namespace Tiob2sValC{
        }
        /// bitfield TIOA2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        namespace Tioa2eValC{
        }
        /// bitfield TIOB1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        namespace Tiob1sValC{
        }
        /// bitfield TIOA1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        namespace Tioa1eValC{
        }
        /// bitfield TIOA1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        namespace Tioa1sValC{
        }
        /// bitfield TIOB0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        namespace Tiob0sValC{
        }
        /// bitfield TIOA0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
        namespace Tioa0eValC{
        }
    }
    namespace Noneepfr05{    ///< register EPFR05 
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        namespace Tiob7sValC{
        }
        /// bitfield TIOA7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        namespace Tioa7eValC{
        }
        /// bitfield TIOA7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        namespace Tioa7sValC{
        }
        /// bitfield TIOB6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        namespace Tiob6sValC{
        }
        /// bitfield TIOA6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        namespace Tioa6eValC{
        }
        /// bitfield TIOB5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        namespace Tiob5sValC{
        }
        /// bitfield TIOA5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        namespace Tioa5eValC{
        }
        /// bitfield TIOA5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        namespace Tioa5sValC{
        }
        /// bitfield TIOB4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        namespace Tiob4sValC{
        }
        /// bitfield TIOA4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
        namespace Tioa4eValC{
        }
    }
    namespace Noneepfr06{    ///< register EPFR06 
        using Addr = Register::Address<0x40033618,0x00000000,0,unsigned>;
        /// bitfield EINT15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        namespace Eint15sValC{
        }
        /// bitfield EINT14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        namespace Eint14sValC{
        }
        /// bitfield EINT13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        namespace Eint13sValC{
        }
        /// bitfield EINT12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        namespace Eint12sValC{
        }
        /// bitfield EINT11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        namespace Eint11sValC{
        }
        /// bitfield EINT10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        namespace Eint10sValC{
        }
        /// bitfield EINT09S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        namespace Eint09sValC{
        }
        /// bitfield EINT08S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        namespace Eint08sValC{
        }
        /// bitfield EINT07S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        namespace Eint07sValC{
        }
        /// bitfield EINT06S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        namespace Eint06sValC{
        }
        /// bitfield EINT05S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        namespace Eint05sValC{
        }
        /// bitfield EINT04S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        namespace Eint04sValC{
        }
        /// bitfield EINT03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        namespace Eint03sValC{
        }
        /// bitfield EINT02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        namespace Eint02sValC{
        }
        /// bitfield EINT01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        namespace Eint01sValC{
        }
        /// bitfield EINT00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
        namespace Eint00sValC{
        }
    }
    namespace Noneepfr07{    ///< register EPFR07 
        using Addr = Register::Address<0x4003361c,0xf000000f,0,unsigned>;
        /// bitfield SCK3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        namespace Sck3bValC{
        }
        /// bitfield SOT3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        namespace Sot3bValC{
        }
        /// bitfield SIN3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        namespace Sin3sValC{
        }
        /// bitfield SCK2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        namespace Sck2bValC{
        }
        /// bitfield SOT2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        namespace Sot2bValC{
        }
        /// bitfield SIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        namespace Sin2sValC{
        }
        /// bitfield SCK1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        namespace Sck1bValC{
        }
        /// bitfield SOT1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        namespace Sot1bValC{
        }
        /// bitfield SIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        namespace Sin1sValC{
        }
        /// bitfield SCK0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        namespace Sck0bValC{
        }
        /// bitfield SOT0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        namespace Sot0bValC{
        }
        /// bitfield SIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
        namespace Sin0sValC{
        }
    }
    namespace Noneepfr08{    ///< register EPFR08 
        using Addr = Register::Address<0x40033620,0xf0000000,0,unsigned>;
        /// bitfield SCK7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        namespace Sck7bValC{
        }
        /// bitfield SOT7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        namespace Sot7bValC{
        }
        /// bitfield SIN7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        namespace Sin7sValC{
        }
        /// bitfield SCK6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        namespace Sck6bValC{
        }
        /// bitfield SOT6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        namespace Sot6bValC{
        }
        /// bitfield SIN6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        namespace Sin6sValC{
        }
        /// bitfield SCK5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        namespace Sck5bValC{
        }
        /// bitfield SOT5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        namespace Sot5bValC{
        }
        /// bitfield SIN5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        namespace Sin5sValC{
        }
        /// bitfield SCK4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        namespace Sck4bValC{
        }
        /// bitfield SOT4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        namespace Sot4bValC{
        }
        /// bitfield SIN4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        namespace Sin4sValC{
        }
        /// bitfield CTS4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        namespace Cts4sValC{
        }
        /// bitfield RTS4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
        namespace Rts4eValC{
        }
    }
    namespace Noneepfr09{    ///< register EPFR09 
        using Addr = Register::Address<0x40033624,0xfff00000,0,unsigned>;
        /// bitfield ADTRG1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        namespace Adtrg1sValC{
        }
        /// bitfield ADTRG0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        namespace Adtrg0sValC{
        }
        /// bitfield QZIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        namespace Qzin1sValC{
        }
        /// bitfield QBIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        namespace Qbin1sValC{
        }
        /// bitfield QAIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        namespace Qain1sValC{
        }
        /// bitfield QZIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        namespace Qzin0sValC{
        }
        /// bitfield QBIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        namespace Qbin0sValC{
        }
        /// bitfield QAIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
        namespace Qain0sValC{
        }
    }
    namespace Noneepfr10{    ///< register EPFR10 
        using Addr = Register::Address<0x40033628,0x00000000,0,unsigned>;
        /// bitfield UEA24E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        namespace Uea24eValC{
        }
        /// bitfield UEA23E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        namespace Uea23eValC{
        }
        /// bitfield UEA22E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        namespace Uea22eValC{
        }
        /// bitfield UEA21E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        namespace Uea21eValC{
        }
        /// bitfield UEA20E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        namespace Uea20eValC{
        }
        /// bitfield UEA19E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        namespace Uea19eValC{
        }
        /// bitfield UEA18E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        namespace Uea18eValC{
        }
        /// bitfield UEA17E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        namespace Uea17eValC{
        }
        /// bitfield UEA16E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        namespace Uea16eValC{
        }
        /// bitfield UEA15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        namespace Uea15eValC{
        }
        /// bitfield UEA14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        namespace Uea14eValC{
        }
        /// bitfield UEA13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        namespace Uea13eValC{
        }
        /// bitfield UEA12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        namespace Uea12eValC{
        }
        /// bitfield UEA11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        namespace Uea11eValC{
        }
        /// bitfield UEA10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        namespace Uea10eValC{
        }
        /// bitfield UEA09E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        namespace Uea09eValC{
        }
        /// bitfield UEA08E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        namespace Uea08eValC{
        }
        /// bitfield UEAOOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        namespace UeaooeValC{
        }
        /// bitfield UECS7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        namespace Uecs7eValC{
        }
        /// bitfield UECS6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        namespace Uecs6eValC{
        }
        /// bitfield UECS5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        namespace Uecs5eValC{
        }
        /// bitfield UECS4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        namespace Uecs4eValC{
        }
        /// bitfield UECS3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        namespace Uecs3eValC{
        }
        /// bitfield UECS2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        namespace Uecs2eValC{
        }
        /// bitfield UECS1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        namespace Uecs1eValC{
        }
        /// bitfield UEFLSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        namespace UeflseValC{
        }
        /// bitfield UEOEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        namespace UeoexeValC{
        }
        /// bitfield UEDQME 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        namespace UedqmeValC{
        }
        /// bitfield UEWEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        namespace UewexeValC{
        }
        /// bitfield UECLKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        namespace UeclkeValC{
        }
        /// bitfield UEDTHB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        namespace UedthbValC{
        }
        /// bitfield UEDEFB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
        namespace UedefbValC{
        }
    }
    namespace Noneepfr11{    ///< register EPFR11 
        using Addr = Register::Address<0x4003362c,0xfc000000,0,unsigned>;
        /// bitfield UERLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        namespace UerlcValC{
        }
        /// bitfield UED15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        namespace Ued15bValC{
        }
        /// bitfield UED14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        namespace Ued14bValC{
        }
        /// bitfield UED13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        namespace Ued13bValC{
        }
        /// bitfield UED12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        namespace Ued12bValC{
        }
        /// bitfield UED11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        namespace Ued11bValC{
        }
        /// bitfield UED10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        namespace Ued10bValC{
        }
        /// bitfield UED09B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        namespace Ued09bValC{
        }
        /// bitfield UED08B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        namespace Ued08bValC{
        }
        /// bitfield UED07B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        namespace Ued07bValC{
        }
        /// bitfield UED06B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        namespace Ued06bValC{
        }
        /// bitfield UED05B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        namespace Ued05bValC{
        }
        /// bitfield UED04B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        namespace Ued04bValC{
        }
        /// bitfield UED03B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        namespace Ued03bValC{
        }
        /// bitfield UED02B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        namespace Ued02bValC{
        }
        /// bitfield UED01B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        namespace Ued01bValC{
        }
        /// bitfield UED00B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        namespace Ued00bValC{
        }
        /// bitfield UEA07E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        namespace Uea07eValC{
        }
        /// bitfield UEA06E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        namespace Uea06eValC{
        }
        /// bitfield UEA05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        namespace Uea05eValC{
        }
        /// bitfield UEA04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        namespace Uea04eValC{
        }
        /// bitfield UEA03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        namespace Uea03eValC{
        }
        /// bitfield UEA02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        namespace Uea02eValC{
        }
        /// bitfield UEA01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        namespace Uea01eValC{
        }
        /// bitfield UECS0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        namespace Uecs0eValC{
        }
        /// bitfield UEALEE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
        namespace UealeeValC{
        }
    }
    namespace Noneepfr12{    ///< register EPFR12 
        using Addr = Register::Address<0x40033630,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        namespace Tiob11sValC{
        }
        /// bitfield TIOA11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        namespace Tioa11eValC{
        }
        /// bitfield TIOA11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        namespace Tioa11sValC{
        }
        /// bitfield TIOB10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        namespace Tiob10sValC{
        }
        /// bitfield TIOA10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        namespace Tioa10eValC{
        }
        /// bitfield TIOB9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        namespace Tiob9sValC{
        }
        /// bitfield TIOA9E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        namespace Tioa9eValC{
        }
        /// bitfield TIOA9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        namespace Tioa9sValC{
        }
        /// bitfield TIOB8S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        namespace Tiob8sValC{
        }
        /// bitfield TIOA8E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
        namespace Tioa8eValC{
        }
    }
    namespace Noneepfr13{    ///< register EPFR13 
        using Addr = Register::Address<0x40033634,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        namespace Tiob15sValC{
        }
        /// bitfield TIOA15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        namespace Tioa15eValC{
        }
        /// bitfield TIOA15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        namespace Tioa15sValC{
        }
        /// bitfield TIOB14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        namespace Tiob14sValC{
        }
        /// bitfield TIOA14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        namespace Tioa14eValC{
        }
        /// bitfield TIOB13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        namespace Tiob13sValC{
        }
        /// bitfield TIOA13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        namespace Tioa13eValC{
        }
        /// bitfield TIOA13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        namespace Tioa13sValC{
        }
        /// bitfield TIOB12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        namespace Tiob12sValC{
        }
        /// bitfield TIOA12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
        namespace Tioa12eValC{
        }
    }
    namespace Noneepfr14{    ///< register EPFR14 
        using Addr = Register::Address<0x40033638,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr15{    ///< register EPFR15 
        using Addr = Register::Address<0x4003363c,0x00000000,0,unsigned>;
        /// bitfield EINT31S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        namespace Eint31sValC{
        }
        /// bitfield EINT30S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        namespace Eint30sValC{
        }
        /// bitfield EINT29S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        namespace Eint29sValC{
        }
        /// bitfield EINT28S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        namespace Eint28sValC{
        }
        /// bitfield EINT27S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        namespace Eint27sValC{
        }
        /// bitfield EINT26S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        namespace Eint26sValC{
        }
        /// bitfield EINT25S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        namespace Eint25sValC{
        }
        /// bitfield EINT24S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        namespace Eint24sValC{
        }
        /// bitfield EINT23S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        namespace Eint23sValC{
        }
        /// bitfield EINT22S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        namespace Eint22sValC{
        }
        /// bitfield EINT21S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        namespace Eint21sValC{
        }
        /// bitfield EINT20S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        namespace Eint20sValC{
        }
        /// bitfield EINT19S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        namespace Eint19sValC{
        }
        /// bitfield EINT18S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        namespace Eint18sValC{
        }
        /// bitfield EINT17S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        namespace Eint17sValC{
        }
        /// bitfield EINT16S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
        namespace Eint16sValC{
        }
    }
    namespace Noneepfr16{    ///< register EPFR16 
        using Addr = Register::Address<0x40033640,0xf000000f,0,unsigned>;
        /// bitfield SCK11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        namespace Sck11bValC{
        }
        /// bitfield SOT11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        namespace Sot11bValC{
        }
        /// bitfield SIN11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        namespace Sin11sValC{
        }
        /// bitfield SCK10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        namespace Sck10bValC{
        }
        /// bitfield SOT10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        namespace Sot10bValC{
        }
        /// bitfield SIN10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        namespace Sin10sValC{
        }
        /// bitfield SCK9B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        namespace Sck9bValC{
        }
        /// bitfield SOT9B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        namespace Sot9bValC{
        }
        /// bitfield SIN9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        namespace Sin9sValC{
        }
        /// bitfield SCK8B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        namespace Sck8bValC{
        }
        /// bitfield SOT8B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        namespace Sot8bValC{
        }
        /// bitfield SIN8S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
        namespace Sin8sValC{
        }
    }
    namespace Noneepfr17{    ///< register EPFR17 
        using Addr = Register::Address<0x40033644,0xf000000f,0,unsigned>;
        /// bitfield SCK15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        namespace Sck15bValC{
        }
        /// bitfield SOT15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        namespace Sot15bValC{
        }
        /// bitfield SIN15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        namespace Sin15sValC{
        }
        /// bitfield SCK14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        namespace Sck14bValC{
        }
        /// bitfield SOT14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        namespace Sot14bValC{
        }
        /// bitfield SIN14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        namespace Sin14sValC{
        }
        /// bitfield SCK13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        namespace Sck13bValC{
        }
        /// bitfield SOT13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        namespace Sot13bValC{
        }
        /// bitfield SIN13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        namespace Sin13sValC{
        }
        /// bitfield SCK12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        namespace Sck12bValC{
        }
        /// bitfield SOT12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        namespace Sot12bValC{
        }
        /// bitfield SIN12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
        namespace Sin12sValC{
        }
    }
    namespace Noneepfr18{    ///< register EPFR18 
        using Addr = Register::Address<0x40033648,0xfffffff0,0,unsigned>;
        /// bitfield CECR1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cecr1b{}; 
        namespace Cecr1bValC{
        }
        /// bitfield CECR0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cecr0b{}; 
        namespace Cecr0bValC{
        }
    }
    namespace Nonepzr0{    ///< register PZR0 
        using Addr = Register::Address<0x40033700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///< register PZR1 
        using Addr = Register::Address<0x40033704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///< register PZR2 
        using Addr = Register::Address<0x40033708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///< register PZR3 
        using Addr = Register::Address<0x4003370c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///< register PZR4 
        using Addr = Register::Address<0x40033710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///< register PZR5 
        using Addr = Register::Address<0x40033714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///< register PZR6 
        using Addr = Register::Address<0x40033718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr7{    ///< register PZR7 
        using Addr = Register::Address<0x4003371c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///< register PZR8 
        using Addr = Register::Address<0x40033720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr9{    ///< register PZR9 
        using Addr = Register::Address<0x40033724,0xffffffff,0,unsigned>;
    }
    namespace Nonepzra{    ///< register PZRA 
        using Addr = Register::Address<0x40033728,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrb{    ///< register PZRB 
        using Addr = Register::Address<0x4003372c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrc{    ///< register PZRC 
        using Addr = Register::Address<0x40033730,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrd{    ///< register PZRD 
        using Addr = Register::Address<0x40033734,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///< register PZRE 
        using Addr = Register::Address<0x40033738,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrf{    ///< register PZRF 
        using Addr = Register::Address<0x4003373c,0xffffffff,0,unsigned>;
    }
}
