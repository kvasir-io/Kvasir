#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<MCU Device ID Code Register
        using Addr = Register::Address<0xe0042000,0x00000000,0,unsigned>;
        ///Device Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> devId{}; 
        namespace DevidValC{
        }
        ///Revision Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
        namespace RevidValC{
        }
    }
    namespace Nonecr{    ///<Debug MCU Configuration
          Register
        using Addr = Register::Address<0xe0042004,0xffffff18,0,unsigned>;
        ///Debug Sleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        namespace DbgsleepValC{
        }
        ///Debug Stop Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        namespace DbgstopValC{
        }
        ///Debug Standby Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        namespace DbgstandbyValC{
        }
        ///Trace pin assignment
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> traceIoen{}; 
        namespace TraceioenValC{
        }
        ///Trace pin assignment
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> traceMode{}; 
        namespace TracemodeValC{
        }
    }
    namespace Noneapb1Fzr1{    ///<APB Low Freeze Register 1
        using Addr = Register::Address<0xe0042008,0x7d1fe3c0,0,unsigned>;
        ///Debug Timer 2 stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTimer2Stop{}; 
        namespace Dbgtimer2stopValC{
        }
        ///TIM3 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        namespace Dbgtim3stopValC{
        }
        ///TIM4 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTim4Stop{}; 
        namespace Dbgtim4stopValC{
        }
        ///TIM5 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        namespace Dbgtim5stopValC{
        }
        ///Debug Timer 6 stopped when Core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTimer6Stop{}; 
        namespace Dbgtimer6stopValC{
        }
        ///TIM7 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
        namespace Dbgtim7stopValC{
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
        ///I2C3 SMBUS timeout counter stopped when
              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dbgI2c3Stop{}; 
        namespace Dbgi2c3stopValC{
        }
        ///bxCAN stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dbgCanStop{}; 
        namespace DbgcanstopValC{
        }
        ///LPTIM1 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dbgLptimerStop{}; 
        namespace DbglptimerstopValC{
        }
    }
    namespace Noneapb1Fzr2{    ///<APB Low Freeze Register 2
        using Addr = Register::Address<0xe004200c,0xffffffdf,0,unsigned>;
        ///LPTIM2 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgLptim2Stop{}; 
        namespace Dbglptim2stopValC{
        }
    }
    namespace Noneapb2Fzr{    ///<APB High Freeze Register
        using Addr = Register::Address<0xe0042010,0xfff8d7ff,0,unsigned>;
        ///TIM1 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgTim1Stop{}; 
        namespace Dbgtim1stopValC{
        }
        ///TIM8 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dbgTim8Stop{}; 
        namespace Dbgtim8stopValC{
        }
        ///TIM15 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgTim15Stop{}; 
        namespace Dbgtim15stopValC{
        }
        ///TIM16 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTim16Stop{}; 
        namespace Dbgtim16stopValC{
        }
        ///TIM17 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTim17Stop{}; 
        namespace Dbgtim17stopValC{
        }
    }
}
