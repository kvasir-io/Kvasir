#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AHB Bus Matrix
    namespace MatrixMcfg0{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea00,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg1{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea04,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg2{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea08,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg3{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea0c,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg4{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea10,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg5{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea14,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg6{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea18,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg7{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea1c,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg8{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea20,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg9{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea24,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMcfg10{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffea28,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea40,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea44,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea48,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea4c,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg4{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea50,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg5{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea54,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg6{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea58,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixScfg7{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffea5c,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
    }
    namespace MatrixPras0{    ///<Priority Register A for Slave 0
        using Addr = Register::Address<0xffffea80,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs0{    ///<Priority Register B for Slave 0
        using Addr = Register::Address<0xffffea84,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras1{    ///<Priority Register A for Slave 1
        using Addr = Register::Address<0xffffea88,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs1{    ///<Priority Register B for Slave 1
        using Addr = Register::Address<0xffffea8c,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras2{    ///<Priority Register A for Slave 2
        using Addr = Register::Address<0xffffea90,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs2{    ///<Priority Register B for Slave 2
        using Addr = Register::Address<0xffffea94,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras3{    ///<Priority Register A for Slave 3
        using Addr = Register::Address<0xffffea98,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs3{    ///<Priority Register B for Slave 3
        using Addr = Register::Address<0xffffea9c,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras4{    ///<Priority Register A for Slave 4
        using Addr = Register::Address<0xffffeaa0,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs4{    ///<Priority Register B for Slave 4
        using Addr = Register::Address<0xffffeaa4,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras5{    ///<Priority Register A for Slave 5
        using Addr = Register::Address<0xffffeaa8,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs5{    ///<Priority Register B for Slave 5
        using Addr = Register::Address<0xffffeaac,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras6{    ///<Priority Register A for Slave 6
        using Addr = Register::Address<0xffffeab0,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs6{    ///<Priority Register B for Slave 6
        using Addr = Register::Address<0xffffeab4,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixPras7{    ///<Priority Register A for Slave 7
        using Addr = Register::Address<0xffffeab8,0xcccccccc,0,unsigned>;
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
        ///Master 5 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        ///Master 6 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        ///Master 7 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
    }
    namespace MatrixPrbs7{    ///<Priority Register B for Slave 7
        using Addr = Register::Address<0xffffeabc,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        ///Master 9 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        ///Master 10 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
    }
    namespace MatrixMrcr{    ///<Master Remap Control Register
        using Addr = Register::Address<0xffffeb00,0xfffff800,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcb0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcb1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcb2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcb3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcb4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcb5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcb6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rcb7{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rcb8{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rcb9{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rcb10{}; 
    }
    namespace MatrixWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xffffebe4,0x000000fe,0,unsigned>;
        ///Write Protect ENable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY (Write-only)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace MatrixWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xffffebe8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
