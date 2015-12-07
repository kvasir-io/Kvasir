#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Crossbar switch
    namespace AxbsPrs0{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004000,0xff888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,M0Val> m0{}; 
        namespace M0ValC{
            constexpr Register::FieldValue<decltype(m0),M0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v111> v111{};
        }
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,M1Val> m1{}; 
        namespace M1ValC{
            constexpr Register::FieldValue<decltype(m1),M1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v111> v111{};
        }
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,M2Val> m2{}; 
        namespace M2ValC{
            constexpr Register::FieldValue<decltype(m2),M2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v111> v111{};
        }
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,M3Val> m3{}; 
        namespace M3ValC{
            constexpr Register::FieldValue<decltype(m3),M3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v111> v111{};
        }
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,M4Val> m4{}; 
        namespace M4ValC{
            constexpr Register::FieldValue<decltype(m4),M4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v111> v111{};
        }
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,M5Val> m5{}; 
        namespace M5ValC{
            constexpr Register::FieldValue<decltype(m5),M5Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v111> v111{};
        }
    }
    namespace AxbsPrs1{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004100,0xff888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,M0Val> m0{}; 
        namespace M0ValC{
            constexpr Register::FieldValue<decltype(m0),M0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v111> v111{};
        }
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,M1Val> m1{}; 
        namespace M1ValC{
            constexpr Register::FieldValue<decltype(m1),M1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v111> v111{};
        }
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,M2Val> m2{}; 
        namespace M2ValC{
            constexpr Register::FieldValue<decltype(m2),M2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v111> v111{};
        }
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,M3Val> m3{}; 
        namespace M3ValC{
            constexpr Register::FieldValue<decltype(m3),M3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v111> v111{};
        }
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,M4Val> m4{}; 
        namespace M4ValC{
            constexpr Register::FieldValue<decltype(m4),M4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v111> v111{};
        }
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,M5Val> m5{}; 
        namespace M5ValC{
            constexpr Register::FieldValue<decltype(m5),M5Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v111> v111{};
        }
    }
    namespace AxbsPrs2{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004200,0xff888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,M0Val> m0{}; 
        namespace M0ValC{
            constexpr Register::FieldValue<decltype(m0),M0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v111> v111{};
        }
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,M1Val> m1{}; 
        namespace M1ValC{
            constexpr Register::FieldValue<decltype(m1),M1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v111> v111{};
        }
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,M2Val> m2{}; 
        namespace M2ValC{
            constexpr Register::FieldValue<decltype(m2),M2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v111> v111{};
        }
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,M3Val> m3{}; 
        namespace M3ValC{
            constexpr Register::FieldValue<decltype(m3),M3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v111> v111{};
        }
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,M4Val> m4{}; 
        namespace M4ValC{
            constexpr Register::FieldValue<decltype(m4),M4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v111> v111{};
        }
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,M5Val> m5{}; 
        namespace M5ValC{
            constexpr Register::FieldValue<decltype(m5),M5Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v111> v111{};
        }
    }
    namespace AxbsPrs3{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004300,0xff888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,M0Val> m0{}; 
        namespace M0ValC{
            constexpr Register::FieldValue<decltype(m0),M0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v111> v111{};
        }
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,M1Val> m1{}; 
        namespace M1ValC{
            constexpr Register::FieldValue<decltype(m1),M1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v111> v111{};
        }
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,M2Val> m2{}; 
        namespace M2ValC{
            constexpr Register::FieldValue<decltype(m2),M2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v111> v111{};
        }
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,M3Val> m3{}; 
        namespace M3ValC{
            constexpr Register::FieldValue<decltype(m3),M3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v111> v111{};
        }
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,M4Val> m4{}; 
        namespace M4ValC{
            constexpr Register::FieldValue<decltype(m4),M4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v111> v111{};
        }
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,M5Val> m5{}; 
        namespace M5ValC{
            constexpr Register::FieldValue<decltype(m5),M5Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v111> v111{};
        }
    }
    namespace AxbsPrs4{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004400,0xff888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,M0Val> m0{}; 
        namespace M0ValC{
            constexpr Register::FieldValue<decltype(m0),M0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m0),M0Val::v111> v111{};
        }
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,M1Val> m1{}; 
        namespace M1ValC{
            constexpr Register::FieldValue<decltype(m1),M1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m1),M1Val::v111> v111{};
        }
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,M2Val> m2{}; 
        namespace M2ValC{
            constexpr Register::FieldValue<decltype(m2),M2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m2),M2Val::v111> v111{};
        }
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,M3Val> m3{}; 
        namespace M3ValC{
            constexpr Register::FieldValue<decltype(m3),M3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m3),M3Val::v111> v111{};
        }
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,M4Val> m4{}; 
        namespace M4ValC{
            constexpr Register::FieldValue<decltype(m4),M4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m4),M4Val::v111> v111{};
        }
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class M5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,M5Val> m5{}; 
        namespace M5ValC{
            constexpr Register::FieldValue<decltype(m5),M5Val::v000> v000{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v001> v001{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v010> v010{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v011> v011{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v100> v100{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v101> v101{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v110> v110{};
            constexpr Register::FieldValue<decltype(m5),M5Val::v111> v111{};
        }
    }
    namespace AxbsCrs0{    ///<Control Register
        using Addr = Register::Address<0x40004010,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class ParkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ParkVal> park{}; 
        namespace ParkValC{
            constexpr Register::FieldValue<decltype(park),ParkVal::v000> v000{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v001> v001{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v010> v010{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v011> v011{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v100> v100{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v101> v101{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v110> v110{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v111> v111{};
        }
        ///Parking Control
        enum class PctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PctlVal> pctl{}; 
        namespace PctlValC{
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v10> v10{};
        }
        ///Arbitration Mode
        enum class ArbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::v01> v01{};
        }
        ///Halt Low Priority
        enum class HlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,HlpVal> hlp{}; 
        namespace HlpValC{
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v1> v1{};
        }
        ///Read Only
        enum class RoVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RoVal> ro{}; 
        namespace RoValC{
            constexpr Register::FieldValue<decltype(ro),RoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ro),RoVal::v1> v1{};
        }
    }
    namespace AxbsCrs1{    ///<Control Register
        using Addr = Register::Address<0x40004110,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class ParkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ParkVal> park{}; 
        namespace ParkValC{
            constexpr Register::FieldValue<decltype(park),ParkVal::v000> v000{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v001> v001{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v010> v010{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v011> v011{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v100> v100{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v101> v101{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v110> v110{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v111> v111{};
        }
        ///Parking Control
        enum class PctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PctlVal> pctl{}; 
        namespace PctlValC{
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v10> v10{};
        }
        ///Arbitration Mode
        enum class ArbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::v01> v01{};
        }
        ///Halt Low Priority
        enum class HlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,HlpVal> hlp{}; 
        namespace HlpValC{
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v1> v1{};
        }
        ///Read Only
        enum class RoVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RoVal> ro{}; 
        namespace RoValC{
            constexpr Register::FieldValue<decltype(ro),RoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ro),RoVal::v1> v1{};
        }
    }
    namespace AxbsCrs2{    ///<Control Register
        using Addr = Register::Address<0x40004210,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class ParkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ParkVal> park{}; 
        namespace ParkValC{
            constexpr Register::FieldValue<decltype(park),ParkVal::v000> v000{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v001> v001{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v010> v010{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v011> v011{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v100> v100{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v101> v101{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v110> v110{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v111> v111{};
        }
        ///Parking Control
        enum class PctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PctlVal> pctl{}; 
        namespace PctlValC{
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v10> v10{};
        }
        ///Arbitration Mode
        enum class ArbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::v01> v01{};
        }
        ///Halt Low Priority
        enum class HlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,HlpVal> hlp{}; 
        namespace HlpValC{
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v1> v1{};
        }
        ///Read Only
        enum class RoVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RoVal> ro{}; 
        namespace RoValC{
            constexpr Register::FieldValue<decltype(ro),RoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ro),RoVal::v1> v1{};
        }
    }
    namespace AxbsCrs3{    ///<Control Register
        using Addr = Register::Address<0x40004310,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class ParkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ParkVal> park{}; 
        namespace ParkValC{
            constexpr Register::FieldValue<decltype(park),ParkVal::v000> v000{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v001> v001{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v010> v010{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v011> v011{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v100> v100{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v101> v101{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v110> v110{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v111> v111{};
        }
        ///Parking Control
        enum class PctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PctlVal> pctl{}; 
        namespace PctlValC{
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v10> v10{};
        }
        ///Arbitration Mode
        enum class ArbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::v01> v01{};
        }
        ///Halt Low Priority
        enum class HlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,HlpVal> hlp{}; 
        namespace HlpValC{
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v1> v1{};
        }
        ///Read Only
        enum class RoVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RoVal> ro{}; 
        namespace RoValC{
            constexpr Register::FieldValue<decltype(ro),RoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ro),RoVal::v1> v1{};
        }
    }
    namespace AxbsCrs4{    ///<Control Register
        using Addr = Register::Address<0x40004410,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class ParkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ParkVal> park{}; 
        namespace ParkValC{
            constexpr Register::FieldValue<decltype(park),ParkVal::v000> v000{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v001> v001{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v010> v010{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v011> v011{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v100> v100{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v101> v101{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v110> v110{};
            constexpr Register::FieldValue<decltype(park),ParkVal::v111> v111{};
        }
        ///Parking Control
        enum class PctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PctlVal> pctl{}; 
        namespace PctlValC{
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pctl),PctlVal::v10> v10{};
        }
        ///Arbitration Mode
        enum class ArbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb),ArbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(arb),ArbVal::v01> v01{};
        }
        ///Halt Low Priority
        enum class HlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,HlpVal> hlp{}; 
        namespace HlpValC{
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlp),HlpVal::v1> v1{};
        }
        ///Read Only
        enum class RoVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RoVal> ro{}; 
        namespace RoValC{
            constexpr Register::FieldValue<decltype(ro),RoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ro),RoVal::v1> v1{};
        }
    }
    namespace AxbsMgpcr0{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004800,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class AulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AulbVal> aulb{}; 
        namespace AulbValC{
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v000> v000{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v001> v001{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v010> v010{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v011> v011{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v100> v100{};
        }
    }
    namespace AxbsMgpcr1{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004900,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class AulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AulbVal> aulb{}; 
        namespace AulbValC{
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v000> v000{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v001> v001{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v010> v010{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v011> v011{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v100> v100{};
        }
    }
    namespace AxbsMgpcr2{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004a00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class AulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AulbVal> aulb{}; 
        namespace AulbValC{
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v000> v000{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v001> v001{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v010> v010{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v011> v011{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v100> v100{};
        }
    }
    namespace AxbsMgpcr4{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004c00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class AulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AulbVal> aulb{}; 
        namespace AulbValC{
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v000> v000{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v001> v001{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v010> v010{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v011> v011{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v100> v100{};
        }
    }
    namespace AxbsMgpcr5{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004d00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class AulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AulbVal> aulb{}; 
        namespace AulbValC{
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v000> v000{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v001> v001{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v010> v010{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v011> v011{};
            constexpr Register::FieldValue<decltype(aulb),AulbVal::v100> v100{};
        }
    }
}
