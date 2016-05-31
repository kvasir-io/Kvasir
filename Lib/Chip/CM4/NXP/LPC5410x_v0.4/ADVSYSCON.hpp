#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Advanced System configuration 
    namespace AdvsysconBodctrl{    ///<Brown-Out Detect control
        using Addr = Register::Address<0x4002c044,0x00000000,0x00000000,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level01=0x00000000,     ///<Level 0: 1.5 V
            level11=0x00000001,     ///<Level 1: 1.85 V
            level22=0x00000002,     ///<Level 2: 2.0 V
            level32=0x00000003,     ///<Level 3: 2.3 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level01> level01{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level11> level11{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level22> level22{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level32> level32{};
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level02=0x00000000,     ///<Level 0: 2.05 V
            level12=0x00000001,     ///<Level 1: 2.45 V
            level22=0x00000002,     ///<Level 2: 2.75 V
            level33=0x00000003,     ///<Level 3: 3.05 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level02> level02{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level12> level12{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level22> level22{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level33> level33{};
        }
        ///BOD reset enable
        enum class BodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BodrstenaVal> bodrstena{}; 
        namespace BodrstenaValC{
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
