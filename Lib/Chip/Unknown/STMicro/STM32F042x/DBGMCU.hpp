#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<MCU Device ID Code Register
        using Addr = Register::Address<0x40015800,0x00000000,0,unsigned>;
        ///Device Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        ///Division Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> divId{}; 
        ///Revision Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
    }
    namespace Nonecr{    ///<Debug MCU Configuration           Register
        using Addr = Register::Address<0x40015804,0xfffffff9,0,unsigned>;
        ///Debug Stop Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        ///Debug Standby Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
    }
    namespace Noneapblfz{    ///<APB Low Freeze Register
        using Addr = Register::Address<0x40015808,0xffdfe2ec,0,unsigned>;
        ///Debug Timer 2 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTimer2Stop{}; 
        ///Debug Timer 3 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgTimer3Stop{}; 
        ///Debug Timer 6 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTimer6Stop{}; 
        ///Debug Timer 14 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbgTimer14Stop{}; 
        ///Debug RTC stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgRtcStop{}; 
        ///Debug Window Wachdog stopped when Core               is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        ///Debug Independent Wachdog stopped when               Core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        ///SMBUS timeout mode stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1SmbusTimeout{}; 
    }
    namespace Noneapbhfz{    ///<APB High Freeze Register
        using Addr = Register::Address<0x4001580c,0xfff8f7ff,0,unsigned>;
        ///Debug Timer 1 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgTimer1Stop{}; 
        ///Debug Timer 15 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgTimer15Sto{}; 
        ///Debug Timer 16 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTimer16Sto{}; 
        ///Debug Timer 17 stopped when Core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTimer17Sto{}; 
    }
}
