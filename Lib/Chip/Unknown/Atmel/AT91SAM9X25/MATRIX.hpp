#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AHB Bus Matrix
    namespace MatrixMcfg0{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde00,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg1{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde04,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg2{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde08,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg3{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde0c,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg4{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde10,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg5{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde14,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg6{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde18,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg7{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde1c,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg8{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde20,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg9{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde24,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixMcfg10{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffde28,0xfffffff8,0,unsigned>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
        namespace UlbtValC{
        }
    }
    namespace MatrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde40,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde44,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde48,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde4c,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg4{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde50,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg5{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde54,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg6{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde58,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg7{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde5c,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg8{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde60,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixScfg9{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffde64,0xffc0fe00,0,unsigned>;
        ///Maximum Bus Grant Duration for Masters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace MatrixPras0{    ///<Priority Register A for Slave 0
        using Addr = Register::Address<0xffffde80,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs0{    ///<Priority Register B for Slave 0
        using Addr = Register::Address<0xffffde84,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras1{    ///<Priority Register A for Slave 1
        using Addr = Register::Address<0xffffde88,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs1{    ///<Priority Register B for Slave 1
        using Addr = Register::Address<0xffffde8c,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras2{    ///<Priority Register A for Slave 2
        using Addr = Register::Address<0xffffde90,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs2{    ///<Priority Register B for Slave 2
        using Addr = Register::Address<0xffffde94,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras3{    ///<Priority Register A for Slave 3
        using Addr = Register::Address<0xffffde98,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs3{    ///<Priority Register B for Slave 3
        using Addr = Register::Address<0xffffde9c,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras4{    ///<Priority Register A for Slave 4
        using Addr = Register::Address<0xffffdea0,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs4{    ///<Priority Register B for Slave 4
        using Addr = Register::Address<0xffffdea4,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras5{    ///<Priority Register A for Slave 5
        using Addr = Register::Address<0xffffdea8,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs5{    ///<Priority Register B for Slave 5
        using Addr = Register::Address<0xffffdeac,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras6{    ///<Priority Register A for Slave 6
        using Addr = Register::Address<0xffffdeb0,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs6{    ///<Priority Register B for Slave 6
        using Addr = Register::Address<0xffffdeb4,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras7{    ///<Priority Register A for Slave 7
        using Addr = Register::Address<0xffffdeb8,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs7{    ///<Priority Register B for Slave 7
        using Addr = Register::Address<0xffffdebc,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras8{    ///<Priority Register A for Slave 8
        using Addr = Register::Address<0xffffdec0,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs8{    ///<Priority Register B for Slave 8
        using Addr = Register::Address<0xffffdec4,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixPras9{    ///<Priority Register A for Slave 9
        using Addr = Register::Address<0xffffdec8,0xcccccccc,0,unsigned>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        namespace M0prValC{
        }
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        namespace M1prValC{
        }
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        namespace M2prValC{
        }
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        namespace M3prValC{
        }
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        namespace M4prValC{
        }
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
        namespace M5prValC{
        }
        ///Master 6 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> m6pr{}; 
        namespace M6prValC{
        }
        ///Master 7 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> m7pr{}; 
        namespace M7prValC{
        }
    }
    namespace MatrixPrbs9{    ///<Priority Register B for Slave 9
        using Addr = Register::Address<0xffffdecc,0xfffffccc,0,unsigned>;
        ///Master 8 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m8pr{}; 
        namespace M8prValC{
        }
        ///Master 9 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m9pr{}; 
        namespace M9prValC{
        }
        ///Master 10 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m10pr{}; 
        namespace M10prValC{
        }
    }
    namespace MatrixMrcr{    ///<Master Remap Control Register
        using Addr = Register::Address<0xffffdf00,0xfffff800,0,unsigned>;
        ///Remap Command Bit for Master 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcb0{}; 
        namespace Rcb0ValC{
        }
        ///Remap Command Bit for Master 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcb1{}; 
        namespace Rcb1ValC{
        }
        ///Remap Command Bit for Master 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcb2{}; 
        namespace Rcb2ValC{
        }
        ///Remap Command Bit for Master 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcb3{}; 
        namespace Rcb3ValC{
        }
        ///Remap Command Bit for Master 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcb4{}; 
        namespace Rcb4ValC{
        }
        ///Remap Command Bit for Master 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcb5{}; 
        namespace Rcb5ValC{
        }
        ///Remap Command Bit for Master 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcb6{}; 
        namespace Rcb6ValC{
        }
        ///Remap Command Bit for Master 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rcb7{}; 
        namespace Rcb7ValC{
        }
        ///Remap Command Bit for Master 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rcb8{}; 
        namespace Rcb8ValC{
        }
        ///Remap Command Bit for Master 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rcb9{}; 
        namespace Rcb9ValC{
        }
        ///Remap Command Bit for Master 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rcb10{}; 
        namespace Rcb10ValC{
        }
    }
    namespace MatrixWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xffffdfe4,0x000000fe,0,unsigned>;
        ///Write Protect ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace MatrixWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xffffdfe8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
