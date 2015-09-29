#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PMU (PowerManagement Unit)  
    namespace Nonepcon{    ///<Power control register
        using Addr = Register::Address<0x40038000,0xfffffeff,0,unsigned>;
        ///Sleep mode flag
        enum class sleepflagVal {
            nopowerdown=0x00000000,     ///<Read: No power-down mode entered. LPC1102 is in Active mode. Write: No effect.
            powerdownentered=0x00000001,     ///<Read: Sleep/Deep-sleepmode entered. Write: Writing a 1 clears the SLEEPFLAG bit to 0.
        };
        namespace sleepflagValC{
            constexpr MPL::Value<sleepflagVal,sleepflagVal::nopowerdown> nopowerdown{};
            constexpr MPL::Value<sleepflagVal,sleepflagVal::powerdownentered> powerdownentered{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sleepflagVal> sleepflag{}; 
    }
}
