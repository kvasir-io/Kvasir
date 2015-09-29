#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interrupt Timer
    namespace Pit1Mcr{    ///<PIT Module Control Register
        using Addr = Register::Address<0x4002e000,0xfffffffc,0,unsigned>;
        ///Freeze
        enum class frzVal {
            v0=0x00000000,     ///<Timers continue to run in Debug mode.
            v1=0x00000001,     ///<Timers are stopped in Debug mode.
        };
        namespace frzValC{
            constexpr MPL::Value<frzVal,frzVal::v0> v0{};
            constexpr MPL::Value<frzVal,frzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,frzVal> frz{}; 
        ///Module Disable - (PIT section)
        enum class mdisVal {
            v0=0x00000000,     ///<Clock for standard PIT timers is enabled.
            v1=0x00000001,     ///<Clock for standard PIT timers is disabled.
        };
        namespace mdisValC{
            constexpr MPL::Value<mdisVal,mdisVal::v0> v0{};
            constexpr MPL::Value<mdisVal,mdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mdisVal> mdis{}; 
    }
    namespace Pit1Ldval0{    ///<Timer Load Value Register
        using Addr = Register::Address<0x4002e100,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace Pit1Ldval1{    ///<Timer Load Value Register
        using Addr = Register::Address<0x4002e110,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace Pit1Cval0{    ///<Current Timer Value Register
        using Addr = Register::Address<0x4002e104,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace Pit1Cval1{    ///<Current Timer Value Register
        using Addr = Register::Address<0x4002e114,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace Pit1Tctrl0{    ///<Timer Control Register
        using Addr = Register::Address<0x4002e108,0xfffffff8,0,unsigned>;
        ///Timer Enable
        enum class tenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is enabled.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Chain Mode
        enum class chnVal {
            v0=0x00000000,     ///<Timer is not chained.
            v1=0x00000001,     ///<Timer is chained to previous timer. For example, for Channel 2, if this field is set, Timer 2 is chained to Timer 1.
        };
        namespace chnValC{
            constexpr MPL::Value<chnVal,chnVal::v0> v0{};
            constexpr MPL::Value<chnVal,chnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,chnVal> chn{}; 
    }
    namespace Pit1Tctrl1{    ///<Timer Control Register
        using Addr = Register::Address<0x4002e118,0xfffffff8,0,unsigned>;
        ///Timer Enable
        enum class tenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is enabled.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Chain Mode
        enum class chnVal {
            v0=0x00000000,     ///<Timer is not chained.
            v1=0x00000001,     ///<Timer is chained to previous timer. For example, for Channel 2, if this field is set, Timer 2 is chained to Timer 1.
        };
        namespace chnValC{
            constexpr MPL::Value<chnVal,chnVal::v0> v0{};
            constexpr MPL::Value<chnVal,chnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,chnVal> chn{}; 
    }
    namespace Pit1Tflg0{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002e10c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
        enum class tifVal {
            v0=0x00000000,     ///<Timeout has not yet occurred.
            v1=0x00000001,     ///<Timeout has occurred.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
    }
    namespace Pit1Tflg1{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002e11c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
        enum class tifVal {
            v0=0x00000000,     ///<Timeout has not yet occurred.
            v1=0x00000001,     ///<Timeout has occurred.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
    }
}
