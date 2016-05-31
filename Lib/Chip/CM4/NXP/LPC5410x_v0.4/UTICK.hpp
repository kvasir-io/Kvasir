#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Micro-tick timer
    namespace UtickCtrl{    ///<Control register.
        using Addr = Register::Address<0x40020000,0x00000000,0x00000000,unsigned>;
        ///Tick interval value. The delay will be equal to DELAYVAL +								1 periods of the timer clock. The minimum usable value is 1, for a								delay of 2 timer clocks. A value of 0 stops the timer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> delayval{}; 
        ///Repeat delay. 0 = One-time delay. 1 = Delay repeats								continuously.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> repeat{}; 
    }
    namespace UtickStat{    ///<Status register.
        using Addr = Register::Address<0x40020004,0x00000000,0x00000000,unsigned>;
        ///Interrupt flag. 0 = No interrupt is pending. 1 = An								interrupt is pending. A write of any value to this register clears								this flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intr{}; 
        ///Active flag. 0 = The Micro-Tick Timer is stopped. 1 = The								Micro-Tick Timer is currently active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
