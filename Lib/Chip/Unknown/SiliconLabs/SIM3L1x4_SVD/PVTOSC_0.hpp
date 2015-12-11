#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4003d000,0xffffff8c,0,unsigned>;
        ///Digital LDO Oscillator Enable. 
        enum class DigoscenVal {
            disabled=0x00000000,     ///<Disable the digital LDO PVT oscillator.
            enabled=0x00000001,     ///<Enable the digital LDO PVT oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DigoscenVal> digoscen{}; 
        namespace DigoscenValC{
            constexpr Register::FieldValue<decltype(digoscen)::Type,DigoscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(digoscen)::Type,DigoscenVal::enabled> enabled{};
        }
        ///Memory LDO Oscillator Enable. 
        enum class MemoscenVal {
            disabled=0x00000000,     ///<Disable the memory LDO PVT oscillator.
            enabled=0x00000001,     ///<Enable the memory LDO PVT oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,MemoscenVal> memoscen{}; 
        namespace MemoscenValC{
            constexpr Register::FieldValue<decltype(memoscen)::Type,MemoscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(memoscen)::Type,MemoscenVal::enabled> enabled{};
        }
        ///Digital LDO Oscillator Mode. 
        enum class DigoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the digital LDO PVT oscillator.
            slow=0x00000001,     ///<Select slow mode for the digital LDO PVT oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DigoscmdVal> digoscmd{}; 
        namespace DigoscmdValC{
            constexpr Register::FieldValue<decltype(digoscmd)::Type,DigoscmdVal::fast> fast{};
            constexpr Register::FieldValue<decltype(digoscmd)::Type,DigoscmdVal::slow> slow{};
        }
        ///High Voltage Oscillator Mode. 
        enum class MemoscmdVal {
            fast=0x00000000,     ///<Select fast mode for the memory LDO PVT oscillator.
            slow=0x00000001,     ///<Select slow mode for the memory LDO PVT oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MemoscmdVal> memoscmd{}; 
        namespace MemoscmdValC{
            constexpr Register::FieldValue<decltype(memoscmd)::Type,MemoscmdVal::fast> fast{};
            constexpr Register::FieldValue<decltype(memoscmd)::Type,MemoscmdVal::slow> slow{};
        }
        ///Clock Select. 
        enum class ClkselVal {
            oscillators=0x00000000,     ///<Select the digital and memory oscillators as the inputs to the clock dividers.
            ahb=0x00000001,     ///<Select the APB clock as the input to the clock dividers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::oscillators> oscillators{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::ahb> ahb{};
        }
    }
}
