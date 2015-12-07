#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<MCU Device ID Code Register
        using Addr = Register::Address<0x40015800,0x0000f000,0,unsigned>;
        ///Device Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        namespace DevidValC{
        }
        ///Revision Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
        namespace RevidValC{
        }
    }
    namespace Nonecr{    ///<Debug MCU Configuration
          Register
        using Addr = Register::Address<0x40015804,0xfffffff8,0,unsigned>;
        ///Debug Stop Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        namespace DbgstopValC{
        }
        ///Debug Standby Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        namespace DbgstandbyValC{
        }
        ///Debug Sleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        namespace DbgsleepValC{
        }
    }
    namespace Noneapb1Fz{    ///<APB Low Freeze Register
        using Addr = Register::Address<0x40015808,0x7f9fe3ee,0,unsigned>;
        ///Debug Timer 2 stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTimer2Stop{}; 
        namespace Dbgtimer2stopValC{
        }
        ///Debug Timer 6 stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTimer6Stop{}; 
        namespace Dbgtimer6stopValC{
        }
        ///Debug RTC stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgRtcStop{}; 
        namespace DbgrtcstopValC{
        }
        ///Debug Window Wachdog stopped when Core
              is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        namespace DbgwwdgstopValC{
        }
        ///Debug Independent Wachdog stopped when
              Core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        namespace DbgiwdgstopValC{
        }
        ///I2C1 SMBUS timeout mode stopped when
              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dbgI2c1Stop{}; 
        namespace Dbgi2c1stopValC{
        }
        ///I2C2 SMBUS timeout mode stopped when
              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgI2c2Stop{}; 
        namespace Dbgi2c2stopValC{
        }
        ///LPTIM1 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dbgLptimerStop{}; 
        namespace DbglptimerstopValC{
        }
    }
    namespace Noneapb2Fz{    ///<APB High Freeze Register
        using Addr = Register::Address<0x4001580c,0xffffffbb,0,unsigned>;
        ///Debug Timer 21 stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTimer21Stop{}; 
        namespace Dbgtimer21stopValC{
        }
        ///Debug Timer 22 stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgTimer22Sto{}; 
        namespace Dbgtimer22stoValC{
        }
    }
}
