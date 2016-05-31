#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//PMU (PowerManagement Unit)  
    namespace PmuPcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0x00000000,0x00000000,unsigned>;
        ///Reserved. This bit must always be written as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved.  This bit must always be written as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. These bits must always be written as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Sleep mode flag
        enum class SleepflagVal {
            nopowerdown=0x00000000,     ///<Read: No power-down mode entered. LPC1102 is in Active mode. Write: No effect.
            powerdownentered=0x00000001,     ///<Read: Sleep/Deep-sleepmode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleepflagVal> sleepflag{}; 
        namespace SleepflagValC{
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::nopowerdown> nopowerdown{};
            constexpr Register::FieldValue<decltype(sleepflag)::Type,SleepflagVal::powerdownentered> powerdownentered{};
        }
        ///Reserved.  These bits must always be written as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. This bit must always be written as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Do not write ones to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
