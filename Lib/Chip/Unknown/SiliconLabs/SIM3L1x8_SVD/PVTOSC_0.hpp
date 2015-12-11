#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4003d000,0xffffff8c,0,unsigned>;
        ///Low Voltage Oscillator Enable. 
        enum class LvoscenVal {
            disabled=0x00000000,     ///<Disable the low voltage PVT oscillator.
            enabled=0x00000001,     ///<Enable the low voltage PVT oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LvoscenVal> lvoscen{}; 
        namespace LvoscenValC{
            constexpr Register::FieldValue<decltype(lvoscen)::Type,LvoscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lvoscen)::Type,LvoscenVal::enabled> enabled{};
        }
        }
        ///High Voltage Oscillator Enable. 
        enum class HvoscenVal {
            disabled=0x00000000,     ///<Disable the high voltage PVT oscillator.
            enabled=0x00000001,     ///<Enable the high voltage PVT oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HvoscenVal> hvoscen{}; 
        namespace HvoscenValC{
            constexpr Register::FieldValue<decltype(hvoscen)::Type,HvoscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hvoscen)::Type,HvoscenVal::enabled> enabled{};
        }
        }
        ///Low Voltage Oscillator Mode. 
        enum class LvoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the low voltage PVT oscillator (~6.4 MHz).
            slow=0x00000001,     ///<Select slow mode for the low voltage PVT oscillator (~50 kHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LvoscmdVal> lvoscmd{}; 
        namespace LvoscmdValC{
            constexpr Register::FieldValue<decltype(lvoscmd)::Type,LvoscmdVal::fast> fast{};
            constexpr Register::FieldValue<decltype(lvoscmd)::Type,LvoscmdVal::slow> slow{};
        }
        }
        ///High Voltage Oscillator Mode. 
        enum class HvoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the high voltage PVT oscillator (~6.4 MHz).
            slow=0x00000001,     ///<Select slow mode for the high voltage PVT oscillator (~50 kHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HvoscmdVal> hvoscmd{}; 
        namespace HvoscmdValC{
            constexpr Register::FieldValue<decltype(hvoscmd)::Type,HvoscmdVal::fast> fast{};
            constexpr Register::FieldValue<decltype(hvoscmd)::Type,HvoscmdVal::slow> slow{};
        }
        }
        ///Clock Select. 
        enum class ClkselVal {
            oscillators=0x00000000,     ///<Select the low voltage and high voltage oscillators as the inputs to the clock dividers.
            ahb=0x00000001,     ///<Select the APB clock as the input to the clock dividers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::oscillators> oscillators{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::ahb> ahb{};
        }
        }
    }
}
