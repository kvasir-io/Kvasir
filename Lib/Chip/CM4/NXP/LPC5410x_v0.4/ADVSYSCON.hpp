#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced System configuration 
    namespace Nonebodctrl{    ///<Brown-Out Detect control
        using Addr = Register::Address<0x4002c044,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class bodrstlevVal {
            level01=0x00000000,     ///<Level 0: 1.5 V
            level11=0x00000001,     ///<Level 1: 1.85 V
            level22=0x00000002,     ///<Level 2: 2.0 V
            level32=0x00000003,     ///<Level 3: 2.3 V
        };
        namespace bodrstlevValC{
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level01> level01{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level11> level11{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level22> level22{};
            constexpr MPL::Value<bodrstlevVal,bodrstlevVal::level32> level32{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bodrstlevVal> bodrstlev{}; 
        ///BOD interrupt level
        enum class bodintvalVal {
            level02=0x00000000,     ///<Level 0: 2.05 V
            level12=0x00000001,     ///<Level 1: 2.45 V
            level22=0x00000002,     ///<Level 2: 2.75 V
            level33=0x00000003,     ///<Level 3: 3.05 V
        };
        namespace bodintvalValC{
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level02> level02{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level12> level12{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level22> level22{};
            constexpr MPL::Value<bodintvalVal,bodintvalVal::level33> level33{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,bodintvalVal> bodintval{}; 
        ///BOD reset enable
        enum class bodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        namespace bodrstenaValC{
            constexpr MPL::Value<bodrstenaVal,bodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr MPL::Value<bodrstenaVal,bodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bodrstenaVal> bodrstena{}; 
    }
}
