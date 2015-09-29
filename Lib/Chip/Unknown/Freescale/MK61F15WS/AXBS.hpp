#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Crossbar switch
    namespace AxbsPrs0{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004000,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs1{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004100,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs2{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004200,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs3{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004300,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs4{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004400,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs5{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004500,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs6{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004600,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsPrs7{    ///<Priority Registers Slave
        using Addr = Register::Address<0x40004700,0x88888888,0,unsigned>;
        ///Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m0Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::v000> v000{};
            constexpr MPL::Value<m0Val,m0Val::v001> v001{};
            constexpr MPL::Value<m0Val,m0Val::v010> v010{};
            constexpr MPL::Value<m0Val,m0Val::v011> v011{};
            constexpr MPL::Value<m0Val,m0Val::v100> v100{};
            constexpr MPL::Value<m0Val,m0Val::v101> v101{};
            constexpr MPL::Value<m0Val,m0Val::v110> v110{};
            constexpr MPL::Value<m0Val,m0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,m0Val> m0{}; 
        ///Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m1Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::v000> v000{};
            constexpr MPL::Value<m1Val,m1Val::v001> v001{};
            constexpr MPL::Value<m1Val,m1Val::v010> v010{};
            constexpr MPL::Value<m1Val,m1Val::v011> v011{};
            constexpr MPL::Value<m1Val,m1Val::v100> v100{};
            constexpr MPL::Value<m1Val,m1Val::v101> v101{};
            constexpr MPL::Value<m1Val,m1Val::v110> v110{};
            constexpr MPL::Value<m1Val,m1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,m1Val> m1{}; 
        ///Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m2Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m2ValC{
            constexpr MPL::Value<m2Val,m2Val::v000> v000{};
            constexpr MPL::Value<m2Val,m2Val::v001> v001{};
            constexpr MPL::Value<m2Val,m2Val::v010> v010{};
            constexpr MPL::Value<m2Val,m2Val::v011> v011{};
            constexpr MPL::Value<m2Val,m2Val::v100> v100{};
            constexpr MPL::Value<m2Val,m2Val::v101> v101{};
            constexpr MPL::Value<m2Val,m2Val::v110> v110{};
            constexpr MPL::Value<m2Val,m2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,m2Val> m2{}; 
        ///Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m3Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m3ValC{
            constexpr MPL::Value<m3Val,m3Val::v000> v000{};
            constexpr MPL::Value<m3Val,m3Val::v001> v001{};
            constexpr MPL::Value<m3Val,m3Val::v010> v010{};
            constexpr MPL::Value<m3Val,m3Val::v011> v011{};
            constexpr MPL::Value<m3Val,m3Val::v100> v100{};
            constexpr MPL::Value<m3Val,m3Val::v101> v101{};
            constexpr MPL::Value<m3Val,m3Val::v110> v110{};
            constexpr MPL::Value<m3Val,m3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,m3Val> m3{}; 
        ///Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m4Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m4ValC{
            constexpr MPL::Value<m4Val,m4Val::v000> v000{};
            constexpr MPL::Value<m4Val,m4Val::v001> v001{};
            constexpr MPL::Value<m4Val,m4Val::v010> v010{};
            constexpr MPL::Value<m4Val,m4Val::v011> v011{};
            constexpr MPL::Value<m4Val,m4Val::v100> v100{};
            constexpr MPL::Value<m4Val,m4Val::v101> v101{};
            constexpr MPL::Value<m4Val,m4Val::v110> v110{};
            constexpr MPL::Value<m4Val,m4Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,m4Val> m4{}; 
        ///Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m5Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m5ValC{
            constexpr MPL::Value<m5Val,m5Val::v000> v000{};
            constexpr MPL::Value<m5Val,m5Val::v001> v001{};
            constexpr MPL::Value<m5Val,m5Val::v010> v010{};
            constexpr MPL::Value<m5Val,m5Val::v011> v011{};
            constexpr MPL::Value<m5Val,m5Val::v100> v100{};
            constexpr MPL::Value<m5Val,m5Val::v101> v101{};
            constexpr MPL::Value<m5Val,m5Val::v110> v110{};
            constexpr MPL::Value<m5Val,m5Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,m5Val> m5{}; 
        ///Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m6Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m6ValC{
            constexpr MPL::Value<m6Val,m6Val::v000> v000{};
            constexpr MPL::Value<m6Val,m6Val::v001> v001{};
            constexpr MPL::Value<m6Val,m6Val::v010> v010{};
            constexpr MPL::Value<m6Val,m6Val::v011> v011{};
            constexpr MPL::Value<m6Val,m6Val::v100> v100{};
            constexpr MPL::Value<m6Val,m6Val::v101> v101{};
            constexpr MPL::Value<m6Val,m6Val::v110> v110{};
            constexpr MPL::Value<m6Val,m6Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,m6Val> m6{}; 
        ///Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.
        enum class m7Val {
            v000=0x00000000,     ///<This master has level 1, or highest, priority when accessing the slave port.
            v001=0x00000001,     ///<This master has level 2 priority when accessing the slave port.
            v010=0x00000002,     ///<This master has level 3 priority when accessing the slave port.
            v011=0x00000003,     ///<This master has level 4 priority when accessing the slave port.
            v100=0x00000004,     ///<This master has level 5 priority when accessing the slave port.
            v101=0x00000005,     ///<This master has level 6 priority when accessing the slave port.
            v110=0x00000006,     ///<This master has level 7 priority when accessing the slave port.
            v111=0x00000007,     ///<This master has level 8, or lowest, priority when accessing the slave port.
        };
        namespace m7ValC{
            constexpr MPL::Value<m7Val,m7Val::v000> v000{};
            constexpr MPL::Value<m7Val,m7Val::v001> v001{};
            constexpr MPL::Value<m7Val,m7Val::v010> v010{};
            constexpr MPL::Value<m7Val,m7Val::v011> v011{};
            constexpr MPL::Value<m7Val,m7Val::v100> v100{};
            constexpr MPL::Value<m7Val,m7Val::v101> v101{};
            constexpr MPL::Value<m7Val,m7Val::v110> v110{};
            constexpr MPL::Value<m7Val,m7Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,m7Val> m7{}; 
    }
    namespace AxbsCrs0{    ///<Control Register
        using Addr = Register::Address<0x40004010,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs1{    ///<Control Register
        using Addr = Register::Address<0x40004110,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs2{    ///<Control Register
        using Addr = Register::Address<0x40004210,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs3{    ///<Control Register
        using Addr = Register::Address<0x40004310,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs4{    ///<Control Register
        using Addr = Register::Address<0x40004410,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs5{    ///<Control Register
        using Addr = Register::Address<0x40004510,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs6{    ///<Control Register
        using Addr = Register::Address<0x40004610,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsCrs7{    ///<Control Register
        using Addr = Register::Address<0x40004710,0x3ffffcc8,0,unsigned>;
        ///Park
        enum class parkVal {
            v000=0x00000000,     ///<Park on master port M0
            v001=0x00000001,     ///<Park on master port M1
            v010=0x00000002,     ///<Park on master port M2
            v011=0x00000003,     ///<Park on master port M3
            v100=0x00000004,     ///<Park on master port M4
            v101=0x00000005,     ///<Park on master port M5
            v110=0x00000006,     ///<Park on master port M6
            v111=0x00000007,     ///<Park on master port M7
        };
        namespace parkValC{
            constexpr MPL::Value<parkVal,parkVal::v000> v000{};
            constexpr MPL::Value<parkVal,parkVal::v001> v001{};
            constexpr MPL::Value<parkVal,parkVal::v010> v010{};
            constexpr MPL::Value<parkVal,parkVal::v011> v011{};
            constexpr MPL::Value<parkVal,parkVal::v100> v100{};
            constexpr MPL::Value<parkVal,parkVal::v101> v101{};
            constexpr MPL::Value<parkVal,parkVal::v110> v110{};
            constexpr MPL::Value<parkVal,parkVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,parkVal> park{}; 
        ///Parking Control
        enum class pctlVal {
            v00=0x00000000,     ///<When no master makes a request, the arbiter parks the slave port on the master port defined by the PARK field
            v01=0x00000001,     ///<When no master makes a request, the arbiter parks the slave port on the last master to be in control of the slave port
            v10=0x00000002,     ///<When no master makes a request, the slave port is not parked on a master and the arbiter drives all outputs to a constant safe state
            v11=0x00000003,     ///<Reserved
        };
        namespace pctlValC{
            constexpr MPL::Value<pctlVal,pctlVal::v00> v00{};
            constexpr MPL::Value<pctlVal,pctlVal::v01> v01{};
            constexpr MPL::Value<pctlVal,pctlVal::v10> v10{};
            constexpr MPL::Value<pctlVal,pctlVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pctlVal> pctl{}; 
        ///Arbitration Mode
        enum class arbVal {
            v00=0x00000000,     ///<Fixed priority
            v01=0x00000001,     ///<Round-robin, or rotating, priority
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v00> v00{};
            constexpr MPL::Value<arbVal,arbVal::v01> v01{};
            constexpr MPL::Value<arbVal,arbVal::v10> v10{};
            constexpr MPL::Value<arbVal,arbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Halt Low Priority
        enum class hlpVal {
            v0=0x00000000,     ///<The low power mode request has the highest priority for arbitration on this slave port
            v1=0x00000001,     ///<The low power mode request has the lowest initial priority for arbitration on this slave port
        };
        namespace hlpValC{
            constexpr MPL::Value<hlpVal,hlpVal::v0> v0{};
            constexpr MPL::Value<hlpVal,hlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hlpVal> hlp{}; 
        ///Read Only
        enum class roVal {
            v0=0x00000000,     ///<The slave port's registers are writeable
            v1=0x00000001,     ///<The slave port's registers are read-only and cannot be written. Attempted writes have no effect on the registers and result in a bus error response.
        };
        namespace roValC{
            constexpr MPL::Value<roVal,roVal::v0> v0{};
            constexpr MPL::Value<roVal,roVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,roVal> ro{}; 
    }
    namespace AxbsMgpcr0{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004800,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class aulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace aulbValC{
            constexpr MPL::Value<aulbVal,aulbVal::v000> v000{};
            constexpr MPL::Value<aulbVal,aulbVal::v001> v001{};
            constexpr MPL::Value<aulbVal,aulbVal::v010> v010{};
            constexpr MPL::Value<aulbVal,aulbVal::v011> v011{};
            constexpr MPL::Value<aulbVal,aulbVal::v100> v100{};
            constexpr MPL::Value<aulbVal,aulbVal::v101> v101{};
            constexpr MPL::Value<aulbVal,aulbVal::v110> v110{};
            constexpr MPL::Value<aulbVal,aulbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,aulbVal> aulb{}; 
    }
    namespace AxbsMgpcr1{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004900,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class aulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace aulbValC{
            constexpr MPL::Value<aulbVal,aulbVal::v000> v000{};
            constexpr MPL::Value<aulbVal,aulbVal::v001> v001{};
            constexpr MPL::Value<aulbVal,aulbVal::v010> v010{};
            constexpr MPL::Value<aulbVal,aulbVal::v011> v011{};
            constexpr MPL::Value<aulbVal,aulbVal::v100> v100{};
            constexpr MPL::Value<aulbVal,aulbVal::v101> v101{};
            constexpr MPL::Value<aulbVal,aulbVal::v110> v110{};
            constexpr MPL::Value<aulbVal,aulbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,aulbVal> aulb{}; 
    }
    namespace AxbsMgpcr2{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004a00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class aulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace aulbValC{
            constexpr MPL::Value<aulbVal,aulbVal::v000> v000{};
            constexpr MPL::Value<aulbVal,aulbVal::v001> v001{};
            constexpr MPL::Value<aulbVal,aulbVal::v010> v010{};
            constexpr MPL::Value<aulbVal,aulbVal::v011> v011{};
            constexpr MPL::Value<aulbVal,aulbVal::v100> v100{};
            constexpr MPL::Value<aulbVal,aulbVal::v101> v101{};
            constexpr MPL::Value<aulbVal,aulbVal::v110> v110{};
            constexpr MPL::Value<aulbVal,aulbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,aulbVal> aulb{}; 
    }
    namespace AxbsMgpcr3{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004b00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class aulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace aulbValC{
            constexpr MPL::Value<aulbVal,aulbVal::v000> v000{};
            constexpr MPL::Value<aulbVal,aulbVal::v001> v001{};
            constexpr MPL::Value<aulbVal,aulbVal::v010> v010{};
            constexpr MPL::Value<aulbVal,aulbVal::v011> v011{};
            constexpr MPL::Value<aulbVal,aulbVal::v100> v100{};
            constexpr MPL::Value<aulbVal,aulbVal::v101> v101{};
            constexpr MPL::Value<aulbVal,aulbVal::v110> v110{};
            constexpr MPL::Value<aulbVal,aulbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,aulbVal> aulb{}; 
    }
    namespace AxbsMgpcr6{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004e00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class aulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace aulbValC{
            constexpr MPL::Value<aulbVal,aulbVal::v000> v000{};
            constexpr MPL::Value<aulbVal,aulbVal::v001> v001{};
            constexpr MPL::Value<aulbVal,aulbVal::v010> v010{};
            constexpr MPL::Value<aulbVal,aulbVal::v011> v011{};
            constexpr MPL::Value<aulbVal,aulbVal::v100> v100{};
            constexpr MPL::Value<aulbVal,aulbVal::v101> v101{};
            constexpr MPL::Value<aulbVal,aulbVal::v110> v110{};
            constexpr MPL::Value<aulbVal,aulbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,aulbVal> aulb{}; 
    }
    namespace AxbsMgpcr7{    ///<Master General Purpose Control Register
        using Addr = Register::Address<0x40004f00,0xfffffff8,0,unsigned>;
        ///Arbitrates On Undefined Length Bursts
        enum class aulbVal {
            v000=0x00000000,     ///<No arbitration is allowed during an undefined length burst
            v001=0x00000001,     ///<Arbitration is allowed at any time during an undefined length burst
            v010=0x00000002,     ///<Arbitration is allowed after four beats of an undefined length burst
            v011=0x00000003,     ///<Arbitration is allowed after eight beats of an undefined length burst
            v100=0x00000004,     ///<Arbitration is allowed after 16 beats of an undefined length burst
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace aulbValC{
            constexpr MPL::Value<aulbVal,aulbVal::v000> v000{};
            constexpr MPL::Value<aulbVal,aulbVal::v001> v001{};
            constexpr MPL::Value<aulbVal,aulbVal::v010> v010{};
            constexpr MPL::Value<aulbVal,aulbVal::v011> v011{};
            constexpr MPL::Value<aulbVal,aulbVal::v100> v100{};
            constexpr MPL::Value<aulbVal,aulbVal::v101> v101{};
            constexpr MPL::Value<aulbVal,aulbVal::v110> v110{};
            constexpr MPL::Value<aulbVal,aulbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,aulbVal> aulb{}; 
    }
}
