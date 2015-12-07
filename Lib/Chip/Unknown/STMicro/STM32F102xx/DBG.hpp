#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<DBGMCU_IDCODE
        using Addr = Register::Address<0xe0042000,0x0000f000,0,unsigned>;
        ///DEV_ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        namespace DevidValC{
        }
        ///REV_ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
        namespace RevidValC{
        }
    }
    namespace Nonecr{    ///<DBGMCU_CR
        using Addr = Register::Address<0xe0042004,0xffff6418,0,unsigned>;
        ///DBG_SLEEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        namespace DbgsleepValC{
        }
        ///DBG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        namespace DbgstopValC{
        }
        ///DBG_STANDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        namespace DbgstandbyValC{
        }
        ///TRACE_IOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> traceIoen{}; 
        namespace TraceioenValC{
        }
        ///TRACE_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> traceMode{}; 
        namespace TracemodeValC{
        }
        ///DBG_IWDG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        namespace DbgiwdgstopValC{
        }
        ///DBG_WWDG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        namespace DbgwwdgstopValC{
        }
        ///DBG_TIM2_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        namespace Dbgtim2stopValC{
        }
        ///DBG_TIM3_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        namespace Dbgtim3stopValC{
        }
        ///DBG_I2C1_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgI2c1SmbusTimeout{}; 
        namespace Dbgi2c1smbustimeoutValC{
        }
    }
}
