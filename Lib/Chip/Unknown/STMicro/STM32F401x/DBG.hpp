#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace NonedbgmcuIdcode{    ///<IDCODE
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
    namespace NonedbgmcuCr{    ///<Control Register
        using Addr = Register::Address<0xe0042004,0xffffff18,0,unsigned>;
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
    }
    namespace NonedbgmcuApb1Fz{    ///<Debug MCU APB1 Freeze registe
        using Addr = Register::Address<0xe0042008,0xff1fe7f0,0,unsigned>;
        ///DBG_TIM2_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        namespace Dbgtim2stopValC{
        }
        ///DBG_TIM3 _STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        namespace Dbgtim3stopValC{
        }
        ///DBG_TIM4_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTim4Stop{}; 
        namespace Dbgtim4stopValC{
        }
        ///DBG_TIM5_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        namespace Dbgtim5stopValC{
        }
        ///DBG_WWDG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        namespace DbgwwdgstopValC{
        }
        ///DBG_IWDEG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdegStop{}; 
        namespace DbgiwdegstopValC{
        }
        ///DBG_J2C1_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dbgI2c1SmbusTimeout{}; 
        namespace Dbgi2c1smbustimeoutValC{
        }
        ///DBG_J2C2_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgI2c2SmbusTimeout{}; 
        namespace Dbgi2c2smbustimeoutValC{
        }
        ///DBG_J2C3SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dbgI2c3smbusTimeout{}; 
        namespace Dbgi2c3smbustimeoutValC{
        }
    }
    namespace NonedbgmcuApb2Fz{    ///<Debug MCU APB2 Freeze registe
        using Addr = Register::Address<0xe004200c,0xfff8fffe,0,unsigned>;
        ///TIM1 counter stopped when core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTim1Stop{}; 
        namespace Dbgtim1stopValC{
        }
        ///TIM9 counter stopped when core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgTim9Stop{}; 
        namespace Dbgtim9stopValC{
        }
        ///TIM10 counter stopped when core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTim10Stop{}; 
        namespace Dbgtim10stopValC{
        }
        ///TIM11 counter stopped when core is               halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTim11Stop{}; 
        namespace Dbgtim11stopValC{
        }
    }
}
