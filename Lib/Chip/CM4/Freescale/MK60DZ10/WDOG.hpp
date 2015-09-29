#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Generation 2008 Watchdog Timer
    namespace WdogStctrlh{    ///<Watchdog Status and Control Register High
        using Addr = Register::Address<0x40052000,0xffff8200,0,unsigned>;
        ///no description available
        enum class wdogenVal {
            v0=0x00000000,     ///<WDOG is disabled.
            v1=0x00000001,     ///<WDOG is enabled.
        };
        namespace wdogenValC{
            constexpr MPL::Value<wdogenVal,wdogenVal::v0> v0{};
            constexpr MPL::Value<wdogenVal,wdogenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wdogenVal> wdogen{}; 
        ///no description available
        enum class clksrcVal {
            v0=0x00000000,     ///<Dedicated clock source selected as WDOG clock (LPO Oscillator).
            v1=0x00000001,     ///<WDOG clock sourced from alternate clock source.
        };
        namespace clksrcValC{
            constexpr MPL::Value<clksrcVal,clksrcVal::v0> v0{};
            constexpr MPL::Value<clksrcVal,clksrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,clksrcVal> clksrc{}; 
        ///no description available
        enum class irqrstenVal {
            v0=0x00000000,     ///<WDOG time-out generates reset only.
            v1=0x00000001,     ///<WDOG time-out initially generates an interrupt. After WCT time, it generates a reset.
        };
        namespace irqrstenValC{
            constexpr MPL::Value<irqrstenVal,irqrstenVal::v0> v0{};
            constexpr MPL::Value<irqrstenVal,irqrstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,irqrstenVal> irqrsten{}; 
        ///no description available
        enum class winenVal {
            v0=0x00000000,     ///<Windowing mode is disabled.
            v1=0x00000001,     ///<Windowing mode is enabled.
        };
        namespace winenValC{
            constexpr MPL::Value<winenVal,winenVal::v0> v0{};
            constexpr MPL::Value<winenVal,winenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,winenVal> winen{}; 
        ///no description available
        enum class allowupdateVal {
            v0=0x00000000,     ///<No further updates allowed to WDOG write once registers.
            v1=0x00000001,     ///<WDOG write once registers can be unlocked for updating.
        };
        namespace allowupdateValC{
            constexpr MPL::Value<allowupdateVal,allowupdateVal::v0> v0{};
            constexpr MPL::Value<allowupdateVal,allowupdateVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,allowupdateVal> allowupdate{}; 
        ///no description available
        enum class dbgenVal {
            v0=0x00000000,     ///<WDOG is disabled in CPU Debug mode.
            v1=0x00000001,     ///<WDOG is enabled in CPU Debug mode.
        };
        namespace dbgenValC{
            constexpr MPL::Value<dbgenVal,dbgenVal::v0> v0{};
            constexpr MPL::Value<dbgenVal,dbgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dbgenVal> dbgen{}; 
        ///no description available
        enum class stopenVal {
            v0=0x00000000,     ///<WDOG is disabled in CPU stop mode.
            v1=0x00000001,     ///<WDOG is enabled in CPU stop mode.
        };
        namespace stopenValC{
            constexpr MPL::Value<stopenVal,stopenVal::v0> v0{};
            constexpr MPL::Value<stopenVal,stopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,stopenVal> stopen{}; 
        ///no description available
        enum class waitenVal {
            v0=0x00000000,     ///<WDOG is disabled in CPU wait mode.
            v1=0x00000001,     ///<WDOG is enabled in CPU wait mode.
        };
        namespace waitenValC{
            constexpr MPL::Value<waitenVal,waitenVal::v0> v0{};
            constexpr MPL::Value<waitenVal,waitenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,waitenVal> waiten{}; 
        ///no description available
        enum class stndbyenVal {
            v0=0x00000000,     ///<WDOG is disabled in system Standby mode.
            v1=0x00000001,     ///<WDOG is enabled in system Standby mode.
        };
        namespace stndbyenValC{
            constexpr MPL::Value<stndbyenVal,stndbyenVal::v0> v0{};
            constexpr MPL::Value<stndbyenVal,stndbyenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,stndbyenVal> stndbyen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> testwdog{}; 
        ///no description available
        enum class testselVal {
            v0=0x00000000,     ///<Quick test. The timer runs in normal operation. You can load a small time-out value to do a quick test.
            v1=0x00000001,     ///<Byte test. Puts the timer in the byte test mode where individual bytes of the timer are enabled for operation and are compared for time-out against the corresponding byte of the programmed time-out value. Select the byte through BYTESEL[1:0] for testing.
        };
        namespace testselValC{
            constexpr MPL::Value<testselVal,testselVal::v0> v0{};
            constexpr MPL::Value<testselVal,testselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,testselVal> testsel{}; 
        ///no description available
        enum class byteselVal {
            v00=0x00000000,     ///<Byte 0 selected
            v01=0x00000001,     ///<Byte 1 selected
            v10=0x00000002,     ///<Byte 2 selected
            v11=0x00000003,     ///<Byte 3 selected
        };
        namespace byteselValC{
            constexpr MPL::Value<byteselVal,byteselVal::v00> v00{};
            constexpr MPL::Value<byteselVal,byteselVal::v01> v01{};
            constexpr MPL::Value<byteselVal,byteselVal::v10> v10{};
            constexpr MPL::Value<byteselVal,byteselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,byteselVal> bytesel{}; 
        ///no description available
        enum class distestwdogVal {
            v0=0x00000000,     ///<WDOG functional test mode is not disabled.
            v1=0x00000001,     ///<WDOG functional test mode is disabled permanently until reset.
        };
        namespace distestwdogValC{
            constexpr MPL::Value<distestwdogVal,distestwdogVal::v0> v0{};
            constexpr MPL::Value<distestwdogVal,distestwdogVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,distestwdogVal> distestwdog{}; 
    }
    namespace WdogStctrll{    ///<Watchdog Status and Control Register Low
        using Addr = Register::Address<0x40052002,0xffff7fff,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intflg{}; 
    }
    namespace WdogTovalh{    ///<Watchdog Time-out Value Register High
        using Addr = Register::Address<0x40052004,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tovalhigh{}; 
    }
    namespace WdogTovall{    ///<Watchdog Time-out Value Register Low
        using Addr = Register::Address<0x40052006,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tovallow{}; 
    }
    namespace WdogWinh{    ///<Watchdog Window Register High
        using Addr = Register::Address<0x40052008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winhigh{}; 
    }
    namespace WdogWinl{    ///<Watchdog Window Register Low
        using Addr = Register::Address<0x4005200a,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winlow{}; 
    }
    namespace WdogRefresh{    ///<Watchdog Refresh Register
        using Addr = Register::Address<0x4005200c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdogrefresh{}; 
    }
    namespace WdogUnlock{    ///<Watchdog Unlock Register
        using Addr = Register::Address<0x4005200e,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdogunlock{}; 
    }
    namespace WdogTmrouth{    ///<Watchdog Timer Output Register High
        using Addr = Register::Address<0x40052010,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timerouthigh{}; 
    }
    namespace WdogTmroutl{    ///<Watchdog Timer Output Register Low
        using Addr = Register::Address<0x40052012,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeroutlow{}; 
    }
    namespace WdogRstcnt{    ///<Watchdog Reset Count Register
        using Addr = Register::Address<0x40052014,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rstcnt{}; 
    }
    namespace WdogPresc{    ///<Watchdog Prescaler Register
        using Addr = Register::Address<0x40052016,0xfffff8ff,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prescval{}; 
    }
}
