#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// CAN controller
    namespace Nonetxsr{    ///<CAN Central Transmit Status Register
        using Addr = Register::Address<0x40040000,0xfffcfcfc,0,unsigned>;
        ///When 1, the CAN controller 1 is sending a message (same as TS in the CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts1{}; 
        namespace Ts1ValC{
        }
        ///When 1, the CAN controller 2 is sending a message (same as TS in the CAN2GSR)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts2{}; 
        namespace Ts2ValC{
        }
        ///When 1, all 3 Tx Buffers of the CAN1 controller are available to the CPU (same as TBS in CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tbs1{}; 
        namespace Tbs1ValC{
        }
        ///When 1, all 3 Tx Buffers of the CAN2 controller are available to the CPU (same as TBS in CAN2GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tbs2{}; 
        namespace Tbs2ValC{
        }
        ///When 1, all requested transmissions have been completed successfully by the CAN1 controller (same as TCS in CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tcs1{}; 
        namespace Tcs1ValC{
        }
        ///When 1, all requested transmissions have been completed successfully by the CAN2 controller (same as TCS in CAN2GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcs2{}; 
        namespace Tcs2ValC{
        }
    }
    namespace Nonerxsr{    ///<CAN Central Receive Status Register
        using Addr = Register::Address<0x40040004,0xfffcfcfc,0,unsigned>;
        ///When 1, CAN1 is receiving a message (same as RS in CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rs1{}; 
        namespace Rs1ValC{
        }
        ///When 1, CAN2 is receiving a message (same as RS in CAN2GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rs2{}; 
        namespace Rs2ValC{
        }
        ///When 1, a received message is available in the CAN1 controller (same as RBS in CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rb1{}; 
        namespace Rb1ValC{
        }
        ///When 1, a received message is available in the CAN2 controller (same as RBS in CAN2GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rb2{}; 
        namespace Rb2ValC{
        }
        ///When 1, a message was lost because the preceding message to CAN1 controller was not read out quickly enough (same as DOS in CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dos1{}; 
        namespace Dos1ValC{
        }
        ///When 1, a message was lost because the preceding message to CAN2 controller was not read out quickly enough (same as DOS in CAN2GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dos2{}; 
        namespace Dos2ValC{
        }
    }
    namespace Nonemsr{    ///<CAN Central Miscellaneous Register
        using Addr = Register::Address<0x40040008,0xfffffcfc,0,unsigned>;
        ///When 1, one or both of the CAN1 Tx and Rx Error Counters has reached the limit set in the CAN1EWL register (same as ES in CAN1GSR)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e1{}; 
        namespace E1ValC{
        }
        ///When 1, one or both of the CAN2 Tx and Rx Error Counters has reached the limit set in the CAN2EWL register (same as ES in CAN2GSR)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> e2{}; 
        namespace E2ValC{
        }
        ///When 1, the CAN1 controller is currently involved in bus activities (same as BS in CAN1GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bs1{}; 
        namespace Bs1ValC{
        }
        ///When 1, the CAN2 controller is currently involved in bus activities (same as BS in CAN2GSR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bs2{}; 
        namespace Bs2ValC{
        }
    }
}
