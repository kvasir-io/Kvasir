#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AHB Bus Matrix
    namespace NonematrixMcfg0{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0200,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace NonematrixMcfg1{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0204,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace NonematrixMcfg2{    ///<Master Configuration Register
        using Addr = Register::Address<0x400e0208,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace NonematrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0240,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace NonematrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0244,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace NonematrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e0248,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace NonematrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0x400e024c,0xfce0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace NonematrixPras0{    ///<Priority Register A for Slave 0
        using Addr = Register::Address<0x400e0280,0xffffcccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
    }
    namespace NonematrixPras1{    ///<Priority Register A for Slave 1
        using Addr = Register::Address<0x400e0288,0xffffcccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
    }
    namespace NonematrixPras2{    ///<Priority Register A for Slave 2
        using Addr = Register::Address<0x400e0290,0xffffcccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
    }
    namespace NonematrixPras3{    ///<Priority Register A for Slave 3
        using Addr = Register::Address<0x400e0298,0xffffcccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
    }
    namespace NoneccfgSysio{    ///<System I/O Configuration register
        using Addr = Register::Address<0x400e0314,0xffffef0f,0,unsigned>;
        ///PB4 or TDI Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sysio4{}; 
        ///PB5 or TDO/TRACESWO Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sysio5{}; 
        ///PB6 or TMS/SWDIO Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sysio6{}; 
        ///PB7 or TCK/SWCLK Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sysio7{}; 
        ///PB12 or ERASE Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sysio12{}; 
    }
    namespace NonematrixWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400e03e4,0x000000fe,0,unsigned>;
        ///Write Protect ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace NonematrixWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400e03e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
