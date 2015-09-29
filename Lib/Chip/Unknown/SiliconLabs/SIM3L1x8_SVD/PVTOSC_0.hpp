#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4003d000,0xffffff8c,0,unsigned>;
        ///Low Voltage Oscillator Enable. 
        enum class lvoscenVal {
            disabled=0x00000000,     ///<Disable the low voltage PVT oscillator.
            enabled=0x00000001,     ///<Enable the low voltage PVT oscillator.
        };
        namespace lvoscenValC{
            constexpr MPL::Value<lvoscenVal,lvoscenVal::disabled> disabled{};
            constexpr MPL::Value<lvoscenVal,lvoscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lvoscenVal> lvoscen{}; 
        ///High Voltage Oscillator Enable. 
        enum class hvoscenVal {
            disabled=0x00000000,     ///<Disable the high voltage PVT oscillator.
            enabled=0x00000001,     ///<Enable the high voltage PVT oscillator.
        };
        namespace hvoscenValC{
            constexpr MPL::Value<hvoscenVal,hvoscenVal::disabled> disabled{};
            constexpr MPL::Value<hvoscenVal,hvoscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hvoscenVal> hvoscen{}; 
        ///Low Voltage Oscillator Mode. 
        enum class lvoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the low voltage PVT oscillator (~6.4 MHz).
            slow=0x00000001,     ///<Select slow mode for the low voltage PVT oscillator (~50 kHz).
        };
        namespace lvoscmdValC{
            constexpr MPL::Value<lvoscmdVal,lvoscmdVal::fast> fast{};
            constexpr MPL::Value<lvoscmdVal,lvoscmdVal::slow> slow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lvoscmdVal> lvoscmd{}; 
        ///High Voltage Oscillator Mode. 
        enum class hvoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the high voltage PVT oscillator (~6.4 MHz).
            slow=0x00000001,     ///<Select slow mode for the high voltage PVT oscillator (~50 kHz).
        };
        namespace hvoscmdValC{
            constexpr MPL::Value<hvoscmdVal,hvoscmdVal::fast> fast{};
            constexpr MPL::Value<hvoscmdVal,hvoscmdVal::slow> slow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hvoscmdVal> hvoscmd{}; 
        ///Clock Select. 
        enum class clkselVal {
            oscillators=0x00000000,     ///<Select the low voltage and high voltage oscillators as the inputs to the clock dividers.
            ahb=0x00000001,     ///<Select the APB clock as the input to the clock dividers.
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::oscillators> oscillators{};
            constexpr MPL::Value<clkselVal,clkselVal::ahb> ahb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,clkselVal> clksel{}; 
    }
}
