#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<MCU Device ID Code Register
        using Addr = Register::Address<0xe0042000,0x0000f000,0,unsigned>;
        ///Device Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        ///Revision Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
    }
    namespace Nonecr{    ///<Debug MCU Configuration
          Register
        using Addr = Register::Address<0xe0042004,0xffffff18,0,unsigned>;
        ///Debug Sleep mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        ///Debug Stop Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        ///Debug Standby Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        ///Trace pin assignment
              control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> traceIoen{}; 
        ///Trace pin assignment
              control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> traceMode{}; 
    }
    namespace Noneapb1fz{    ///<APB Low Freeze Register
        using Addr = Register::Address<0xe0042008,0xfd9fe000,0,unsigned>;
        ///Debug Timer 2 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        ///Debug Timer 3 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        ///Debug Timer 4 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTim4Stop{}; 
        ///Debug Timer 5 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        ///Debug Timer 6 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTim6Stop{}; 
        ///Debug Timer 7 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
        ///Debug Timer 12 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgTim12Stop{}; 
        ///Debug Timer 13 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbgTim13Stop{}; 
        ///Debug Timer 14 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbgTimer14Stop{}; 
        ///Debug Timer 18 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dbgTim18Stop{}; 
        ///Debug RTC stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgRtcStop{}; 
        ///Debug Window Wachdog stopped when Core
              is halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        ///Debug Independent Wachdog stopped when
              Core is halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        ///SMBUS timeout mode stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1SmbusTimeout{}; 
        ///SMBUS timeout mode stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2SmbusTimeout{}; 
        ///Debug CAN stopped when core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dbgCanStop{}; 
    }
    namespace Noneapb2fz{    ///<APB High Freeze Register
        using Addr = Register::Address<0xe004200c,0xffffffc3,0,unsigned>;
        ///Debug Timer 15 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTim15Stop{}; 
        ///Debug Timer 16 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbgTim16Stop{}; 
        ///Debug Timer 17 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTim17Sto{}; 
        ///Debug Timer 19 stopped when Core is
              halted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgTim19Stop{}; 
    }
}
