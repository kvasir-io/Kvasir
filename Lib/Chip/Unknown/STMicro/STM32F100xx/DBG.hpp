#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Debug support
    namespace Noneidcode{    ///<DBGMCU_IDCODE
        using Addr = Register::Address<0xe0042000,0x0000f000,0,unsigned>;
        ///DEV_ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        ///REV_ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
    }
    namespace Nonecr{    ///<DBGMCU_CR
        using Addr = Register::Address<0xe0042004,0xf0224018,0,unsigned>;
        ///DBG_SLEEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        ///DBG_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        ///DBG_STANDBY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        ///TRACE_IOEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> traceIoen{}; 
        ///TRACE_MODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> traceMode{}; 
        ///DBG_IWDG_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        ///DBG_WWDG_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        ///DBG_TIM1_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgTim1Stop{}; 
        ///DBG_TIM2_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        ///DBG_TIM3_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgTim3Stop{}; 
        ///DBG_TIM4_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dbgTim4Stop{}; 
        ///DBG_I2C1_SMBUS_TIMEOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgI2c1SmbusTimeout{}; 
        ///DBG_I2C2_SMBUS_TIMEOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgI2c2SmbusTimeout{}; 
        ///DBG_TIM5_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbgTim5Stop{}; 
        ///DBG_TIM6_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dbgTim6Stop{}; 
        ///DBG_TIM7_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
        ///DBG_TIM15_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgTim15Stop{}; 
        ///DBG_TIM16_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dbgTim16Stop{}; 
        ///DBG_TIM17_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dbgTim17Stop{}; 
        ///DBG_TIM12_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dbgTim12Stop{}; 
        ///DBG_TIM13_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dbgTim13Stop{}; 
        ///DBG_TIM14_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dbgTim14Stop{}; 
    }
}
