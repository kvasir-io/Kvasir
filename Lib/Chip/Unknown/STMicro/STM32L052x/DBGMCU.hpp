#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<MCU Device ID Code Register
        using Addr = Register::Address<0x40015800,0x0000f000,0,unsigned>;
        ///Device Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        ///Revision Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
    }
    namespace Nonecr{    ///<Debug MCU Configuration
          Register
        using Addr = Register::Address<0x40015804,0xfffffff8,0,unsigned>;
        ///Debug Stop Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        ///Debug Standby Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        ///Debug Sleep Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
    }
    namespace Noneapb1Fz{    ///<APB Low Freeze Register
        using Addr = Register::Address<0x40015808,0x7f9fe3ee,0,unsigned>;
        ///Debug Timer 2 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTimer2Stop{}; 
        ///Debug Timer 6 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTimer6Stop{}; 
        ///Debug RTC stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgRtcStop{}; 
        ///Debug Window Wachdog stopped when Core
              is halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        ///Debug Independent Wachdog stopped when
              Core is halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        ///I2C1 SMBUS timeout mode stopped when
              core is halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dbgI2c1Stop{}; 
        ///I2C2 SMBUS timeout mode stopped when
              core is halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgI2c2Stop{}; 
        ///LPTIM1 counter stopped when core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dbgLptimerStop{}; 
    }
    namespace Noneapb2Fz{    ///<APB High Freeze Register
        using Addr = Register::Address<0x4001580c,0xffffffbb,0,unsigned>;
        ///Debug Timer 21 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTimer21Stop{}; 
        ///Debug Timer 22 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgTimer22Sto{}; 
    }
}
