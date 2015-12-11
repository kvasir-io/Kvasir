#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interrupt Timer
    namespace PitMcr{    ///<PIT Module Control Register
        using Addr = Register::Address<0x40037000,0xfffffffc,0,unsigned>;
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
    }
    namespace PitLtmr64h{    ///<PIT Upper Lifetime Timer Register
        using Addr = Register::Address<0x400370e0,0x00000000,0,unsigned>;
        ///Life Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lth{}; 
    }
    namespace PitLtmr64l{    ///<PIT Lower Lifetime Timer Register
        using Addr = Register::Address<0x400370e4,0x00000000,0,unsigned>;
        ///Life Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ltl{}; 
    }
    namespace PitLdval0{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037100,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval1{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037110,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval2{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037120,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval3{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037130,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitCval0{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037104,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval1{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037114,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval2{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037124,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval3{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037134,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitTctrl0{    ///<Timer Control Register
        using Addr = Register::Address<0x40037108,0xfffffff8,0,unsigned>;
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
    }
    namespace PitTctrl1{    ///<Timer Control Register
        using Addr = Register::Address<0x40037118,0xfffffff8,0,unsigned>;
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
    }
    namespace PitTctrl2{    ///<Timer Control Register
        using Addr = Register::Address<0x40037128,0xfffffff8,0,unsigned>;
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
    }
    namespace PitTctrl3{    ///<Timer Control Register
        using Addr = Register::Address<0x40037138,0xfffffff8,0,unsigned>;
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
    }
    namespace PitTflg0{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003710c,0xfffffffe,0,unsigned>;
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
    namespace PitTflg1{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003711c,0xfffffffe,0,unsigned>;
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
    namespace PitTflg2{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003712c,0xfffffffe,0,unsigned>;
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
    namespace PitTflg3{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003713c,0xfffffffe,0,unsigned>;
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
}
