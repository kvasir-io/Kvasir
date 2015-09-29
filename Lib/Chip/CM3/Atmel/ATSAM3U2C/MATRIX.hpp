#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AHB Bus Matrix
    namespace MatrixMcfg0{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0200,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg1{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0204,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg2{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0208,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg3{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e020c,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg4{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0210,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0240,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0244,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0248,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e024c,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg4{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0250,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg5{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0254,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg6{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0258,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg7{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e025c,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg8{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0260,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixScfg9{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0264,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixPras0{    ///<Priority Register A for Slave 0
        using Addr = Register::Address<0x400e0280,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras1{    ///<Priority Register A for Slave 1
        using Addr = Register::Address<0x400e0288,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras2{    ///<Priority Register A for Slave 2
        using Addr = Register::Address<0x400e0290,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras3{    ///<Priority Register A for Slave 3
        using Addr = Register::Address<0x400e0298,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras4{    ///<Priority Register A for Slave 4
        using Addr = Register::Address<0x400e02a0,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras5{    ///<Priority Register A for Slave 5
        using Addr = Register::Address<0x400e02a8,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras6{    ///<Priority Register A for Slave 6
        using Addr = Register::Address<0x400e02b0,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras7{    ///<Priority Register A for Slave 7
        using Addr = Register::Address<0x400e02b8,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras8{    ///<Priority Register A for Slave 8
        using Addr = Register::Address<0x400e02c0,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixPras9{    ///<Priority Register A for Slave 9
        using Addr = Register::Address<0x400e02c8,0xfffccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
    }
    namespace MatrixMrcr{    ///<Master Remap Control Register
        using Addr = Register::Address<0x400e0300,0xffffffe0,0,unsigned>;
        ///Remap Command Bit for AHB Master 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcb0{}; 
        ///Remap Command Bit for AHB Master 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcb1{}; 
        ///Remap Command Bit for AHB Master 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcb2{}; 
        ///Remap Command Bit for AHB Master 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcb3{}; 
        ///Remap Command Bit for AHB Master 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcb4{}; 
    }
    namespace MatrixWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400e03e4,0x000000fe,0,unsigned>;
        ///Write Protect ENable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY (Write-only)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace MatrixWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400e03e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
