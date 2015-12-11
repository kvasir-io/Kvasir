#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral GPIO 
    namespace Nonepfr0{    ///< register PFR0 
        using Addr = Register::Address<0x40033000,0xfffffc00,0,unsigned>;
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr1{    ///< register PFR1 
        using Addr = Register::Address<0x40033004,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr2{    ///< register PFR2 
        using Addr = Register::Address<0x40033008,0xfffffc00,0,unsigned>;
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr3{    ///< register PFR3 
        using Addr = Register::Address<0x4003300c,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr4{    ///< register PFR4 
        using Addr = Register::Address<0x40033010,0xffff8000,0,unsigned>;
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr5{    ///< register PFR5 
        using Addr = Register::Address<0x40033014,0xffffc000,0,unsigned>;
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr6{    ///< register PFR6 
        using Addr = Register::Address<0x40033018,0xfffffff8,0,unsigned>;
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr7{    ///< register PFR7 
        using Addr = Register::Address<0x4003301c,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr8{    ///< register PFR8 
        using Addr = Register::Address<0x40033020,0xfffffff0,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfr9{    ///< register PFR9 
        using Addr = Register::Address<0x40033024,0xffffffc0,0,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfra{    ///< register PFRA 
        using Addr = Register::Address<0x40033028,0xffffffc0,0,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfrb{    ///< register PFRB 
        using Addr = Register::Address<0x4003302c,0xffffff00,0,unsigned>;
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfrc{    ///< register PFRC 
        using Addr = Register::Address<0x40033030,0xffff0000,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        /// bitfield P9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfrd{    ///< register PFRD 
        using Addr = Register::Address<0x40033034,0xfffffff0,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfre{    ///< register PFRE 
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace Nonepfrf{    ///< register PFRF 
        using Addr = Register::Address<0x4003303c,0xffffff80,0,unsigned>;
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
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
        /// bitfield P8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
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
        /// bitfield AN30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        /// bitfield AN29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        /// bitfield AN28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        /// bitfield AN27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        /// bitfield AN26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        /// bitfield AN25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        /// bitfield AN24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        /// bitfield AN23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        /// bitfield AN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        /// bitfield AN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        /// bitfield AN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        /// bitfield AN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        /// bitfield AN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        /// bitfield AN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        /// bitfield AN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        /// bitfield AN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        /// bitfield AN11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        /// bitfield AN10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        /// bitfield AN9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an9{}; 
        /// bitfield AN8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an8{}; 
        /// bitfield AN7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        /// bitfield AN6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        /// bitfield AN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        /// bitfield AN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        /// bitfield AN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        /// bitfield AN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        /// bitfield AN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        /// bitfield AN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
    }
    namespace Nonespsr{    ///< register SPSR 
        using Addr = Register::Address<0x40033580,0xfffffff0,0,unsigned>;
        /// bitfield MAINXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        /// bitfield SUBXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
    }
    namespace Noneepfr00{    ///< register EPFR00 
        using Addr = Register::Address<0x40033600,0xfcfcff08,0,unsigned>;
        /// bitfield TRC1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        /// bitfield TRC0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        /// bitfield JTAGEN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        /// bitfield JTAGEN0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        /// bitfield SUBOUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        /// bitfield RTCCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        /// bitfield CROUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        /// bitfield NMIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace Noneepfr01{    ///< register EPFR01 
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        /// bitfield IC03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        /// bitfield IC02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        /// bitfield IC01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        /// bitfield IC00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        /// bitfield FRCK0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        /// bitfield DTTI0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        /// bitfield DTTI0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        /// bitfield RTO05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        /// bitfield RTO04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        /// bitfield RTO03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        /// bitfield RTO02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        /// bitfield RTO01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        /// bitfield RTO00E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
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
        /// bitfield TIOA3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        /// bitfield TIOA3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        /// bitfield TIOB2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        /// bitfield TIOA2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        /// bitfield TIOB1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        /// bitfield TIOA1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        /// bitfield TIOA1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        /// bitfield TIOB0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        /// bitfield TIOA0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace Noneepfr05{    ///< register EPFR05 
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        /// bitfield TIOA7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        /// bitfield TIOA7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        /// bitfield TIOB6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        /// bitfield TIOA6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        /// bitfield TIOB5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        /// bitfield TIOA5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        /// bitfield TIOA5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        /// bitfield TIOB4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        /// bitfield TIOA4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace Noneepfr06{    ///< register EPFR06 
        using Addr = Register::Address<0x40033618,0x00000000,0,unsigned>;
        /// bitfield EINT15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        /// bitfield EINT14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        /// bitfield EINT13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        /// bitfield EINT12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        /// bitfield EINT11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        /// bitfield EINT10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        /// bitfield EINT09S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        /// bitfield EINT08S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        /// bitfield EINT07S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        /// bitfield EINT06S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        /// bitfield EINT05S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        /// bitfield EINT04S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        /// bitfield EINT03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        /// bitfield EINT02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        /// bitfield EINT01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        /// bitfield EINT00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
    }
    namespace Noneepfr07{    ///< register EPFR07 
        using Addr = Register::Address<0x4003361c,0xf000000f,0,unsigned>;
        /// bitfield SCK3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        /// bitfield SOT3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        /// bitfield SIN3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        /// bitfield SCK2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        /// bitfield SOT2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        /// bitfield SIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        /// bitfield SCK1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        /// bitfield SOT1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        /// bitfield SIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        /// bitfield SCK0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        /// bitfield SOT0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        /// bitfield SIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace Noneepfr08{    ///< register EPFR08 
        using Addr = Register::Address<0x40033620,0xf0000000,0,unsigned>;
        /// bitfield SCK7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        /// bitfield SOT7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        /// bitfield SIN7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        /// bitfield SCK6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        /// bitfield SOT6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        /// bitfield SIN6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        /// bitfield SCK5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        /// bitfield SOT5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        /// bitfield SIN5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        /// bitfield SCK4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        /// bitfield SOT4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        /// bitfield SIN4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        /// bitfield CTS4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        /// bitfield RTS4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
    }
    namespace Noneepfr09{    ///< register EPFR09 
        using Addr = Register::Address<0x40033624,0xfff00000,0,unsigned>;
        /// bitfield ADTRG1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        /// bitfield ADTRG0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        /// bitfield QZIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        /// bitfield QBIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        /// bitfield QAIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        /// bitfield QZIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        /// bitfield QBIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        /// bitfield QAIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
    }
    namespace Noneepfr10{    ///< register EPFR10 
        using Addr = Register::Address<0x40033628,0x00000000,0,unsigned>;
        /// bitfield UEA24E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        /// bitfield UEA23E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        /// bitfield UEA22E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        /// bitfield UEA21E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        /// bitfield UEA20E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        /// bitfield UEA19E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        /// bitfield UEA18E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        /// bitfield UEA17E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        /// bitfield UEA16E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        /// bitfield UEA15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        /// bitfield UEA14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        /// bitfield UEA13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        /// bitfield UEA12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        /// bitfield UEA11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        /// bitfield UEA10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        /// bitfield UEA09E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        /// bitfield UEA08E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        /// bitfield UEAOOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        /// bitfield UECS7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        /// bitfield UECS6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        /// bitfield UECS5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        /// bitfield UECS4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        /// bitfield UECS3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        /// bitfield UECS2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        /// bitfield UECS1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        /// bitfield UEFLSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        /// bitfield UEOEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        /// bitfield UEDQME 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        /// bitfield UEWEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        /// bitfield UECLKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        /// bitfield UEDTHB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        /// bitfield UEDEFB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
    }
    namespace Noneepfr11{    ///< register EPFR11 
        using Addr = Register::Address<0x4003362c,0xfc000000,0,unsigned>;
        /// bitfield UERLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        /// bitfield UED15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        /// bitfield UED14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        /// bitfield UED13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        /// bitfield UED12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        /// bitfield UED11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        /// bitfield UED10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        /// bitfield UED09B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        /// bitfield UED08B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        /// bitfield UED07B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        /// bitfield UED06B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        /// bitfield UED05B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        /// bitfield UED04B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        /// bitfield UED03B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        /// bitfield UED02B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        /// bitfield UED01B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        /// bitfield UED00B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        /// bitfield UEA07E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        /// bitfield UEA06E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        /// bitfield UEA05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        /// bitfield UEA04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        /// bitfield UEA03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        /// bitfield UEA02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        /// bitfield UEA01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        /// bitfield UECS0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        /// bitfield UEALEE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
    }
    namespace Noneepfr12{    ///< register EPFR12 
        using Addr = Register::Address<0x40033630,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        /// bitfield TIOA11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        /// bitfield TIOA11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        /// bitfield TIOB10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        /// bitfield TIOA10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        /// bitfield TIOB9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        /// bitfield TIOA9E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        /// bitfield TIOA9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        /// bitfield TIOB8S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        /// bitfield TIOA8E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
    }
    namespace Noneepfr13{    ///< register EPFR13 
        using Addr = Register::Address<0x40033634,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        /// bitfield TIOA15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        /// bitfield TIOA15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        /// bitfield TIOB14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        /// bitfield TIOA14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        /// bitfield TIOB13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        /// bitfield TIOA13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        /// bitfield TIOA13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        /// bitfield TIOB12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        /// bitfield TIOA12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
    }
    namespace Noneepfr14{    ///< register EPFR14 
        using Addr = Register::Address<0x40033638,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr15{    ///< register EPFR15 
        using Addr = Register::Address<0x4003363c,0x00000000,0,unsigned>;
        /// bitfield EINT31S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        /// bitfield EINT30S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        /// bitfield EINT29S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        /// bitfield EINT28S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        /// bitfield EINT27S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        /// bitfield EINT26S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        /// bitfield EINT25S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        /// bitfield EINT24S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        /// bitfield EINT23S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        /// bitfield EINT22S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        /// bitfield EINT21S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        /// bitfield EINT20S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        /// bitfield EINT19S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        /// bitfield EINT18S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        /// bitfield EINT17S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        /// bitfield EINT16S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
    }
    namespace Noneepfr16{    ///< register EPFR16 
        using Addr = Register::Address<0x40033640,0xf000000f,0,unsigned>;
        /// bitfield SCK11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        /// bitfield SOT11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        /// bitfield SIN11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        /// bitfield SCK10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        /// bitfield SOT10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        /// bitfield SIN10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        /// bitfield SCK9B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        /// bitfield SOT9B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        /// bitfield SIN9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        /// bitfield SCK8B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        /// bitfield SOT8B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        /// bitfield SIN8S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
    }
    namespace Noneepfr17{    ///< register EPFR17 
        using Addr = Register::Address<0x40033644,0xf000000f,0,unsigned>;
        /// bitfield SCK15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        /// bitfield SOT15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        /// bitfield SIN15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        /// bitfield SCK14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        /// bitfield SOT14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        /// bitfield SIN14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        /// bitfield SCK13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        /// bitfield SOT13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        /// bitfield SIN13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        /// bitfield SCK12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        /// bitfield SOT12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        /// bitfield SIN12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
    }
    namespace Noneepfr18{    ///< register EPFR18 
        using Addr = Register::Address<0x40033648,0xfffffff0,0,unsigned>;
        /// bitfield CECR1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cecr1b{}; 
        /// bitfield CECR0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cecr0b{}; 
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
