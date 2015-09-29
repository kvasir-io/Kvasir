#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interrupt Timer
    namespace PitMcr{    ///<PIT Module Control Register
        using Addr = Register::Address<0x40023000,0xfffffffc,0,unsigned>;
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
        ///Module Disable
        enum class mdisVal {
            v0=0x00000000,     ///<Clock for PIT timers is enabled.
            v1=0x00000001,     ///<Clock for PIT timers is disabled.
        };
        namespace mdisValC{
            constexpr MPL::Value<mdisVal,mdisVal::v0> v0{};
            constexpr MPL::Value<mdisVal,mdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mdisVal> mdis{}; 
    }
    namespace PitLtmr64h{    ///<PIT Upper Lifetime Timer Register
        using Addr = Register::Address<0x400230e0,0x00000000,0,unsigned>;
        ///Life Timer value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lth{}; 
    }
    namespace PitLtmr64l{    ///<PIT Lower Lifetime Timer Register
        using Addr = Register::Address<0x400230e4,0x00000000,0,unsigned>;
        ///Life Timer value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ltl{}; 
    }
    namespace PitLdval0{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40023100,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval1{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40023110,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval2{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40023120,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval3{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40023130,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitCval0{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40023104,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval1{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40023114,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval2{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40023124,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval3{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40023134,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitTctrl0{    ///<Timer Control Register
        using Addr = Register::Address<0x40023108,0xfffffff8,0,unsigned>;
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
    namespace PitTctrl1{    ///<Timer Control Register
        using Addr = Register::Address<0x40023118,0xfffffff8,0,unsigned>;
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
    namespace PitTctrl2{    ///<Timer Control Register
        using Addr = Register::Address<0x40023128,0xfffffff8,0,unsigned>;
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
    namespace PitTctrl3{    ///<Timer Control Register
        using Addr = Register::Address<0x40023138,0xfffffff8,0,unsigned>;
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
    namespace PitTflg0{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002310c,0xfffffffe,0,unsigned>;
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
    namespace PitTflg1{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002311c,0xfffffffe,0,unsigned>;
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
    namespace PitTflg2{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002312c,0xfffffffe,0,unsigned>;
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
    namespace PitTflg3{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002313c,0xfffffffe,0,unsigned>;
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
