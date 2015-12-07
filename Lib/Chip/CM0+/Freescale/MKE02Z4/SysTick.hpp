#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System timer
    namespace SystCsr{    ///<SysTick Control and Status Register
        using Addr = Register::Address<0xe000e010,0xfffefff8,0,unsigned>;
        ///no description available
        enum class EnableVal {
            v0=0x00000000,     ///<counter disabled
            v1=0x00000001,     ///<counter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::v1> v1{};
        }
        ///no description available
        enum class TickintVal {
            v0=0x00000000,     ///<counting down to 0 does not assert the SysTick exception request
            v1=0x00000001,     ///<counting down to 0 asserts the SysTick exception request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TickintVal> tickint{}; 
        namespace TickintValC{
            constexpr Register::FieldValue<decltype(tickint),TickintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tickint),TickintVal::v1> v1{};
        }
        ///no description available
        enum class ClksourceVal {
            v0=0x00000000,     ///<external clock
            v1=0x00000001,     ///<processor clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClksourceVal> clksource{}; 
        namespace ClksourceValC{
            constexpr Register::FieldValue<decltype(clksource),ClksourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clksource),ClksourceVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
        namespace CountflagValC{
        }
    }
    namespace SystRvr{    ///<SysTick Reload Value Register
        using Addr = Register::Address<0xe000e014,0xff000000,0,unsigned>;
        ///Value to load into the SysTick Current Value Register when the counter reaches 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
        namespace ReloadValC{
        }
    }
    namespace SystCvr{    ///<SysTick Current Value Register
        using Addr = Register::Address<0xe000e018,0xff000000,0,unsigned>;
        ///Current value at the time the register is accessed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
        namespace CurrentValC{
        }
    }
    namespace SystCalib{    ///<SysTick Calibration Value Register
        using Addr = Register::Address<0xe000e01c,0x3f000000,0,unsigned>;
        ///Reload value to use for 10ms timing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tenms{}; 
        namespace TenmsValC{
        }
        ///no description available
        enum class SkewVal {
            v0=0x00000000,     ///<10ms calibration value is exact
            v1=0x00000001,     ///<10ms calibration value is inexact, because of the clock frequency
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,SkewVal> skew{}; 
        namespace SkewValC{
            constexpr Register::FieldValue<decltype(skew),SkewVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skew),SkewVal::v1> v1{};
        }
        ///no description available
        enum class NorefVal {
            v0=0x00000000,     ///<The reference clock is provided
            v1=0x00000001,     ///<The reference clock is not provided
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,NorefVal> noref{}; 
        namespace NorefValC{
            constexpr Register::FieldValue<decltype(noref),NorefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(noref),NorefVal::v1> v1{};
        }
    }
}
