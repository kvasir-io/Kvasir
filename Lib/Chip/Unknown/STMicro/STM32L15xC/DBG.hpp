#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace NonedbgmcuIdcode{    ///<IDCODE
        using Addr = Register::Address<0xe0042000,0x0000f000,0,unsigned>;
        ///DEV_ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        ///REV_ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
    }
    namespace NonedbgmcuCr{    ///<Control Register
        using Addr = Register::Address<0xe0042004,0xffe0ff18,0,unsigned>;
        ///DBG_SLEEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        ///DBG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        ///DBG_STANDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        ///TRACE_IOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> traceIoen{}; 
        ///TRACE_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> traceMode{}; 
        ///DBG_I2C2_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgI2c2SmbusTimeout{}; 
        ///DBG_TIM8_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTim8Stop{}; 
        ///DBG_TIM5_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        ///DBG_TIM6_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dbgTim6Stop{}; 
        ///DBG_TIM7_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
    }
    namespace NonedbgmcuApb1Fz{    ///<Debug MCU APB1 Freeze registe
        using Addr = Register::Address<0xe0042008,0xf91fe600,0,unsigned>;
        ///DBG_TIM2_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        ///DBG_TIM3 _STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        ///DBG_TIM4_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgTim4Stop{}; 
        ///DBG_TIM5_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        ///DBG_TIM6_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTim6Stop{}; 
        ///DBG_TIM7_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
        ///DBG_TIM12_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dbgTim12Stop{}; 
        ///DBG_TIM13_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbgTim13Stop{}; 
        ///DBG_TIM14_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbgTim14Stop{}; 
        ///DBG_WWDG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        ///DBG_IWDEG_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdegStop{}; 
        ///DBG_J2C1_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dbgJ2c1SmbusTimeout{}; 
        ///DBG_J2C2_SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgJ2c2SmbusTimeout{}; 
        ///DBG_J2C3SMBUS_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dbgJ2c3smbusTimeout{}; 
        ///DBG_CAN1_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dbgCan1Stop{}; 
        ///DBG_CAN2_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dbgCan2Stop{}; 
    }
    namespace NonedbgmcuApb2Fz{    ///<Debug MCU APB2 Freeze registe
        using Addr = Register::Address<0xe004200c,0xfff8fffc,0,unsigned>;
        ///TIM1 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTim1Stop{}; 
        ///TIM8 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgTim8Stop{}; 
        ///TIM9 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgTim9Stop{}; 
        ///TIM10 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTim10Stop{}; 
        ///TIM11 counter stopped when core is
              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTim11Stop{}; 
    }
}
