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
        using Addr = Register::Address<0xe0042004,0xffc00018,0,unsigned>;
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
        ///DBG_TIM1_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgTim1Stop{}; 
        namespace Dbgtim1stopValC{
        }
        ///DBG_TIM2_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        namespace Dbgtim2stopValC{
        }
        ///DBG_TIM3_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        namespace Dbgtim3stopValC{
        }
        ///DBG_TIM4_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dbgTim4Stop{}; 
        namespace Dbgtim4stopValC{
        }
        ///DBG_CAN1_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dbgCan1Stop{}; 
        namespace Dbgcan1stopValC{
        }
        ///DBG_I2C1_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgI2c1SmbusTimeout{}; 
        namespace Dbgi2c1smbustimeoutValC{
        }
        ///DBG_I2C2_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgI2c2SmbusTimeout{}; 
        namespace Dbgi2c2smbustimeoutValC{
        }
        ///DBG_TIM8_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTim8Stop{}; 
        namespace Dbgtim8stopValC{
        }
        ///DBG_TIM5_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        namespace Dbgtim5stopValC{
        }
        ///DBG_TIM6_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dbgTim6Stop{}; 
        namespace Dbgtim6stopValC{
        }
        ///DBG_TIM7_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
        namespace Dbgtim7stopValC{
        }
        ///DBG_CAN2_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dbgCan2Stop{}; 
        namespace Dbgcan2stopValC{
        }
    }
}
