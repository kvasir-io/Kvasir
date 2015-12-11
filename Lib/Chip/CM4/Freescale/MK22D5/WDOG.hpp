#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Generation 2008 Watchdog Timer
    namespace WdogStctrlh{    ///<Watchdog Status and Control Register High
        using Addr = Register::Address<0x40052000,0xffff8300,0,unsigned>;
        ///no description available
        enum class WdogenVal {
            v0=0x00000000,     ///<WDOG is disabled.
            v1=0x00000001,     ///<WDOG is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WdogenVal> wdogen{}; 
        namespace WdogenValC{
            constexpr Register::FieldValue<decltype(wdogen)::Type,WdogenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdogen)::Type,WdogenVal::v1> v1{};
        }
        }
        ///no description available
        enum class ClksrcVal {
            v0=0x00000000,     ///<WDOG clock sourced from LPO .
            v1=0x00000001,     ///<WDOG clock sourced from alternate clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClksrcVal> clksrc{}; 
        namespace ClksrcValC{
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clksrc)::Type,ClksrcVal::v1> v1{};
        }
        }
        ///no description available
        enum class IrqrstenVal {
            v0=0x00000000,     ///<WDOG time-out generates reset only.
            v1=0x00000001,     ///<WDOG time-out initially generates an interrupt. After WCT, it generates a reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IrqrstenVal> irqrsten{}; 
        namespace IrqrstenValC{
            constexpr Register::FieldValue<decltype(irqrsten)::Type,IrqrstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqrsten)::Type,IrqrstenVal::v1> v1{};
        }
        }
        ///no description available
        enum class WinenVal {
            v0=0x00000000,     ///<Windowing mode is disabled.
            v1=0x00000001,     ///<Windowing mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,WinenVal> winen{}; 
        namespace WinenValC{
            constexpr Register::FieldValue<decltype(winen)::Type,WinenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(winen)::Type,WinenVal::v1> v1{};
        }
        }
        ///no description available
        enum class AllowupdateVal {
            v0=0x00000000,     ///<No further updates allowed to WDOG write-once registers.
            v1=0x00000001,     ///<WDOG write-once registers can be unlocked for updating.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AllowupdateVal> allowupdate{}; 
        namespace AllowupdateValC{
            constexpr Register::FieldValue<decltype(allowupdate)::Type,AllowupdateVal::v0> v0{};
            constexpr Register::FieldValue<decltype(allowupdate)::Type,AllowupdateVal::v1> v1{};
        }
        }
        ///no description available
        enum class DbgenVal {
            v0=0x00000000,     ///<WDOG is disabled in CPU Debug mode.
            v1=0x00000001,     ///<WDOG is enabled in CPU Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DbgenVal> dbgen{}; 
        namespace DbgenValC{
            constexpr Register::FieldValue<decltype(dbgen)::Type,DbgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbgen)::Type,DbgenVal::v1> v1{};
        }
        }
        ///no description available
        enum class StopenVal {
            v0=0x00000000,     ///<WDOG is disabled in CPU Stop mode.
            v1=0x00000001,     ///<WDOG is enabled in CPU Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,StopenVal> stopen{}; 
        namespace StopenValC{
            constexpr Register::FieldValue<decltype(stopen)::Type,StopenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopen)::Type,StopenVal::v1> v1{};
        }
        }
        ///no description available
        enum class WaitenVal {
            v0=0x00000000,     ///<WDOG is disabled in CPU Wait mode.
            v1=0x00000001,     ///<WDOG is enabled in CPU Wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WaitenVal> waiten{}; 
        namespace WaitenValC{
            constexpr Register::FieldValue<decltype(waiten)::Type,WaitenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(waiten)::Type,WaitenVal::v1> v1{};
        }
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> testwdog{}; 
        ///no description available
        enum class TestselVal {
            v0=0x00000000,     ///<Quick test. The timer runs in normal operation. You can load a small time-out value to do a quick test.
            v1=0x00000001,     ///<Byte test. Puts the timer in the byte test mode where individual bytes of the timer are enabled for operation and are compared for time-out against the corresponding byte of the programmed time-out value. Select the byte through BYTESEL[1:0] for testing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TestselVal> testsel{}; 
        namespace TestselValC{
            constexpr Register::FieldValue<decltype(testsel)::Type,TestselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(testsel)::Type,TestselVal::v1> v1{};
        }
        }
        ///no description available
        enum class ByteselVal {
            v00=0x00000000,     ///<Byte 0 selected
            v01=0x00000001,     ///<Byte 1 selected
            v10=0x00000002,     ///<Byte 2 selected
            v11=0x00000003,     ///<Byte 3 selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ByteselVal> bytesel{}; 
        namespace ByteselValC{
            constexpr Register::FieldValue<decltype(bytesel)::Type,ByteselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bytesel)::Type,ByteselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bytesel)::Type,ByteselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bytesel)::Type,ByteselVal::v11> v11{};
        }
        }
        ///no description available
        enum class DistestwdogVal {
            v0=0x00000000,     ///<WDOG functional test mode is not disabled.
            v1=0x00000001,     ///<WDOG functional test mode is disabled permanently until reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DistestwdogVal> distestwdog{}; 
        namespace DistestwdogValC{
            constexpr Register::FieldValue<decltype(distestwdog)::Type,DistestwdogVal::v0> v0{};
            constexpr Register::FieldValue<decltype(distestwdog)::Type,DistestwdogVal::v1> v1{};
        }
        }
    }
    namespace WdogStctrll{    ///<Watchdog Status and Control Register Low
        using Addr = Register::Address<0x40052002,0xffff7fff,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intflg{}; 
    }
    namespace WdogTovalh{    ///<Watchdog Time-out Value Register High
        using Addr = Register::Address<0x40052004,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tovalhigh{}; 
    }
    namespace WdogTovall{    ///<Watchdog Time-out Value Register Low
        using Addr = Register::Address<0x40052006,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tovallow{}; 
    }
    namespace WdogWinh{    ///<Watchdog Window Register High
        using Addr = Register::Address<0x40052008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winhigh{}; 
    }
    namespace WdogWinl{    ///<Watchdog Window Register Low
        using Addr = Register::Address<0x4005200a,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winlow{}; 
    }
    namespace WdogRefresh{    ///<Watchdog Refresh register
        using Addr = Register::Address<0x4005200c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdogrefresh{}; 
    }
    namespace WdogUnlock{    ///<Watchdog Unlock register
        using Addr = Register::Address<0x4005200e,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdogunlock{}; 
    }
    namespace WdogTmrouth{    ///<Watchdog Timer Output Register High
        using Addr = Register::Address<0x40052010,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timerouthigh{}; 
    }
    namespace WdogTmroutl{    ///<Watchdog Timer Output Register Low
        using Addr = Register::Address<0x40052012,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeroutlow{}; 
    }
    namespace WdogRstcnt{    ///<Watchdog Reset Count register
        using Addr = Register::Address<0x40052014,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rstcnt{}; 
    }
    namespace WdogPresc{    ///<Watchdog Prescaler register
        using Addr = Register::Address<0x40052016,0xfffff8ff,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prescval{}; 
    }
}
