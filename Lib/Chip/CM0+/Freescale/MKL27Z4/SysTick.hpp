#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System timer
    namespace SystickCsr{    ///<SysTick Control and Status Register
        using Addr = Register::Address<0xe000e010,0xfffefff8,0x00000000,unsigned>;
        ///no description available
        enum class EnableVal {
            v0=0x00000000,     ///<counter disabled
            v1=0x00000001,     ///<counter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(SystickCsr::enable)::Type,EnableVal::v0> v0{};
            constexpr Register::FieldValue<decltype(SystickCsr::enable)::Type,EnableVal::v1> v1{};
        }
        ///no description available
        enum class TickintVal {
            v0=0x00000000,     ///<counting down to 0 does not assert the SysTick exception request
            v1=0x00000001,     ///<counting down to 0 asserts the SysTick exception request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TickintVal> tickint{}; 
        namespace TickintValC{
            constexpr Register::FieldValue<decltype(SystickCsr::tickint)::Type,TickintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(SystickCsr::tickint)::Type,TickintVal::v1> v1{};
        }
        ///no description available
        enum class ClksourceVal {
            v0=0x00000000,     ///<external clock
            v1=0x00000001,     ///<processor clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClksourceVal> clksource{}; 
        namespace ClksourceValC{
            constexpr Register::FieldValue<decltype(SystickCsr::clksource)::Type,ClksourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(SystickCsr::clksource)::Type,ClksourceVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
    }
    namespace SystickRvr{    ///<SysTick Reload Value Register
        using Addr = Register::Address<0xe000e014,0xff000000,0x00000000,unsigned>;
        ///Value to load into the SysTick Current Value Register when the counter reaches 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace SystickCvr{    ///<SysTick Current Value Register
        using Addr = Register::Address<0xe000e018,0xff000000,0x00000000,unsigned>;
        ///Current value at the time the register is accessed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
    }
    namespace SystickCalib{    ///<SysTick Calibration Value Register
        using Addr = Register::Address<0xe000e01c,0x3f000000,0x00000000,unsigned>;
        ///Reload value to use for 10ms timing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tenms{}; 
        ///no description available
        enum class SkewVal {
            v0=0x00000000,     ///<10ms calibration value is exact
            v1=0x00000001,     ///<10ms calibration value is inexact, because of the clock frequency
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SkewVal> skew{}; 
        namespace SkewValC{
            constexpr Register::FieldValue<decltype(SystickCalib::skew)::Type,SkewVal::v0> v0{};
            constexpr Register::FieldValue<decltype(SystickCalib::skew)::Type,SkewVal::v1> v1{};
        }
        ///no description available
        enum class NorefVal {
            v0=0x00000000,     ///<The reference clock is provided
            v1=0x00000001,     ///<The reference clock is not provided
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NorefVal> noref{}; 
        namespace NorefValC{
            constexpr Register::FieldValue<decltype(SystickCalib::noref)::Type,NorefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(SystickCalib::noref)::Type,NorefVal::v1> v1{};
        }
    }
}
