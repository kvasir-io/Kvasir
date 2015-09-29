#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System timer
    namespace SystCsr{    ///<SysTick Control and Status Register
        using Addr = Register::Address<0xe000e010,0xfffefff8,0,unsigned>;
        ///no description available
        enum class enableVal {
            v0=0x00000000,     ///<counter disabled
            v1=0x00000001,     ///<counter enabled
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::v0> v0{};
            constexpr MPL::Value<enableVal,enableVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
        ///no description available
        enum class tickintVal {
            v0=0x00000000,     ///<counting down to 0 does not assert the SysTick exception request
            v1=0x00000001,     ///<counting down to 0 asserts the SysTick exception request
        };
        namespace tickintValC{
            constexpr MPL::Value<tickintVal,tickintVal::v0> v0{};
            constexpr MPL::Value<tickintVal,tickintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tickintVal> tickint{}; 
        ///no description available
        enum class clksourceVal {
            v0=0x00000000,     ///<external clock
            v1=0x00000001,     ///<processor clock
        };
        namespace clksourceValC{
            constexpr MPL::Value<clksourceVal,clksourceVal::v0> v0{};
            constexpr MPL::Value<clksourceVal,clksourceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,clksourceVal> clksource{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
    }
    namespace SystRvr{    ///<SysTick Reload Value Register
        using Addr = Register::Address<0xe000e014,0xff000000,0,unsigned>;
        ///Value to load into the SysTick Current Value Register when the counter reaches 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace SystCvr{    ///<SysTick Current Value Register
        using Addr = Register::Address<0xe000e018,0xff000000,0,unsigned>;
        ///Current value at the time the register is accessed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
    }
    namespace SystCalib{    ///<SysTick Calibration Value Register
        using Addr = Register::Address<0xe000e01c,0x3f000000,0,unsigned>;
        ///Reload value to use for 10ms timing
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tenms{}; 
        ///no description available
        enum class skewVal {
            v0=0x00000000,     ///<10ms calibration value is exact
            v1=0x00000001,     ///<10ms calibration value is inexact, because of the clock frequency
        };
        namespace skewValC{
            constexpr MPL::Value<skewVal,skewVal::v0> v0{};
            constexpr MPL::Value<skewVal,skewVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,skewVal> skew{}; 
        ///no description available
        enum class norefVal {
            v0=0x00000000,     ///<The reference clock is provided
            v1=0x00000001,     ///<The reference clock is not provided
        };
        namespace norefValC{
            constexpr MPL::Value<norefVal,norefVal::v0> v0{};
            constexpr MPL::Value<norefVal,norefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,norefVal> noref{}; 
    }
}
