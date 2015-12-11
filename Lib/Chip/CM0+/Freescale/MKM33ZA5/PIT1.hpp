#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interrupt Timer
    namespace Pit1Mcr{    ///<PIT Module Control Register
        using Addr = Register::Address<0x4002e000,0xfffffffc,0,unsigned>;
        ///Freeze
        enum class FrzVal {
            v0=0x00000000,     ///<Timers continue to run in Debug mode.
            v1=0x00000001,     ///<Timers are stopped in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FrzVal> frz{}; 
        namespace FrzValC{
            constexpr Register::FieldValue<decltype(frz)::Type,FrzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frz)::Type,FrzVal::v1> v1{};
        }
        ///Module Disable - (PIT section)
        enum class MdisVal {
            v0=0x00000000,     ///<Clock for standard PIT timers is enabled.
            v1=0x00000001,     ///<Clock for standard PIT timers is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,MdisVal> mdis{}; 
        namespace MdisValC{
            constexpr Register::FieldValue<decltype(mdis)::Type,MdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdis)::Type,MdisVal::v1> v1{};
        }
    }
    namespace Pit1Ldval0{    ///<Timer Load Value Register
        using Addr = Register::Address<0x4002e100,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace Pit1Ldval1{    ///<Timer Load Value Register
        using Addr = Register::Address<0x4002e110,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace Pit1Cval0{    ///<Current Timer Value Register
        using Addr = Register::Address<0x4002e104,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace Pit1Cval1{    ///<Current Timer Value Register
        using Addr = Register::Address<0x4002e114,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace Pit1Tctrl0{    ///<Timer Control Register
        using Addr = Register::Address<0x4002e108,0xfffffff8,0,unsigned>;
        ///Timer Enable
        enum class TenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v1> v1{};
        }
        ///Timer Interrupt Enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
        ///Chain Mode
        enum class ChnVal {
            v0=0x00000000,     ///<Timer is not chained.
            v1=0x00000001,     ///<Timer is chained to previous timer. For example, for Channel 2, if this field is set, Timer 2 is chained to Timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ChnVal> chn{}; 
        namespace ChnValC{
            constexpr Register::FieldValue<decltype(chn)::Type,ChnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chn)::Type,ChnVal::v1> v1{};
        }
    }
    namespace Pit1Tctrl1{    ///<Timer Control Register
        using Addr = Register::Address<0x4002e118,0xfffffff8,0,unsigned>;
        ///Timer Enable
        enum class TenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten)::Type,TenVal::v1> v1{};
        }
        ///Timer Interrupt Enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie)::Type,TieVal::v1> v1{};
        }
        ///Chain Mode
        enum class ChnVal {
            v0=0x00000000,     ///<Timer is not chained.
            v1=0x00000001,     ///<Timer is chained to previous timer. For example, for Channel 2, if this field is set, Timer 2 is chained to Timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ChnVal> chn{}; 
        namespace ChnValC{
            constexpr Register::FieldValue<decltype(chn)::Type,ChnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chn)::Type,ChnVal::v1> v1{};
        }
    }
    namespace Pit1Tflg0{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002e10c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
        enum class TifVal {
            v0=0x00000000,     ///<Timeout has not yet occurred.
            v1=0x00000001,     ///<Timeout has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v1> v1{};
        }
    }
    namespace Pit1Tflg1{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002e11c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
        enum class TifVal {
            v0=0x00000000,     ///<Timeout has not yet occurred.
            v1=0x00000001,     ///<Timeout has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v1> v1{};
        }
    }
}
