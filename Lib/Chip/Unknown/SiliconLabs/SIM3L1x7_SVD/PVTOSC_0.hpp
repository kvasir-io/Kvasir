#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4003d000,0xffffff8c,0,unsigned>;
        ///Digital LDO Oscillator Enable. 
        enum class digoscenVal {
            disabled=0x00000000,     ///<Disable the digital LDO PVT oscillator.
            enabled=0x00000001,     ///<Enable the digital LDO PVT oscillator.
        };
        namespace digoscenValC{
            constexpr MPL::Value<digoscenVal,digoscenVal::disabled> disabled{};
            constexpr MPL::Value<digoscenVal,digoscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,digoscenVal> digoscen{}; 
        ///Memory LDO Oscillator Enable. 
        enum class memoscenVal {
            disabled=0x00000000,     ///<Disable the memory LDO PVT oscillator.
            enabled=0x00000001,     ///<Enable the memory LDO PVT oscillator.
        };
        namespace memoscenValC{
            constexpr MPL::Value<memoscenVal,memoscenVal::disabled> disabled{};
            constexpr MPL::Value<memoscenVal,memoscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,memoscenVal> memoscen{}; 
        ///Digital LDO Oscillator Mode. 
        enum class digoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the digital LDO PVT oscillator.
            slow=0x00000001,     ///<Select slow mode for the digital LDO PVT oscillator.
        };
        namespace digoscmdValC{
            constexpr MPL::Value<digoscmdVal,digoscmdVal::fast> fast{};
            constexpr MPL::Value<digoscmdVal,digoscmdVal::slow> slow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,digoscmdVal> digoscmd{}; 
        ///High Voltage Oscillator Mode. 
        enum class memoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the memory LDO PVT oscillator.
            slow=0x00000001,     ///<Select slow mode for the memory LDO PVT oscillator.
        };
        namespace memoscmdValC{
            constexpr MPL::Value<memoscmdVal,memoscmdVal::fast> fast{};
            constexpr MPL::Value<memoscmdVal,memoscmdVal::slow> slow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,memoscmdVal> memoscmd{}; 
        ///Clock Select. 
        enum class clkselVal {
            oscillators=0x00000000,     ///<Select the digital and memory oscillators as the inputs to the clock dividers.
            ahb=0x00000001,     ///<Select the APB clock as the input to the clock dividers.
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::oscillators> oscillators{};
            constexpr MPL::Value<clkselVal,clkselVal::ahb> ahb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,clkselVal> clksel{}; 
    }
}
