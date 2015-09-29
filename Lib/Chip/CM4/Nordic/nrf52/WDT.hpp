#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer
    namespace NonetasksStart{    ///<Start the watchdog
        using Addr = Register::Address<0x40010000,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTimeout{    ///<Watchdog timeout
        using Addr = Register::Address<0x40010100,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40010304,0xfffffffe,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_TIMEOUT event
        enum class timeoutVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace timeoutValC{
            constexpr MPL::Value<timeoutVal,timeoutVal::disabled> disabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::enabled> enabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,timeoutVal> timeout{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40010308,0xfffffffe,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_TIMEOUT event
        enum class timeoutVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace timeoutValC{
            constexpr MPL::Value<timeoutVal,timeoutVal::disabled> disabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::enabled> enabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,timeoutVal> timeout{}; 
    }
    namespace Nonerunstatus{    ///<Run status
        using Addr = Register::Address<0x40010400,0xfffffffe,0,unsigned>;
        ///Indicates whether or not the watchdog is running
        enum class runstatusVal {
            notrunning=0x00000000,     ///<Watchdog not running
            running=0x00000001,     ///<Watchdog is running
        };
        namespace runstatusValC{
            constexpr MPL::Value<runstatusVal,runstatusVal::notrunning> notrunning{};
            constexpr MPL::Value<runstatusVal,runstatusVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runstatusVal> runstatus{}; 
    }
    namespace Nonereqstatus{    ///<Request status
        using Addr = Register::Address<0x40010404,0xffffff00,0,unsigned>;
        ///Request status for RR[0] register
        enum class rr0Val {
            disabledorrequested=0x00000000,     ///<RR[0] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[0] register is enabled, and are not yet requesting reload
        };
        namespace rr0ValC{
            constexpr MPL::Value<rr0Val,rr0Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr0Val,rr0Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rr0Val> rr0{}; 
        ///Request status for RR[1] register
        enum class rr1Val {
            disabledorrequested=0x00000000,     ///<RR[1] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[1] register is enabled, and are not yet requesting reload
        };
        namespace rr1ValC{
            constexpr MPL::Value<rr1Val,rr1Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr1Val,rr1Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rr1Val> rr1{}; 
        ///Request status for RR[2] register
        enum class rr2Val {
            disabledorrequested=0x00000000,     ///<RR[2] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[2] register is enabled, and are not yet requesting reload
        };
        namespace rr2ValC{
            constexpr MPL::Value<rr2Val,rr2Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr2Val,rr2Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rr2Val> rr2{}; 
        ///Request status for RR[3] register
        enum class rr3Val {
            disabledorrequested=0x00000000,     ///<RR[3] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[3] register is enabled, and are not yet requesting reload
        };
        namespace rr3ValC{
            constexpr MPL::Value<rr3Val,rr3Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr3Val,rr3Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rr3Val> rr3{}; 
        ///Request status for RR[4] register
        enum class rr4Val {
            disabledorrequested=0x00000000,     ///<RR[4] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[4] register is enabled, and are not yet requesting reload
        };
        namespace rr4ValC{
            constexpr MPL::Value<rr4Val,rr4Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr4Val,rr4Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rr4Val> rr4{}; 
        ///Request status for RR[5] register
        enum class rr5Val {
            disabledorrequested=0x00000000,     ///<RR[5] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[5] register is enabled, and are not yet requesting reload
        };
        namespace rr5ValC{
            constexpr MPL::Value<rr5Val,rr5Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr5Val,rr5Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rr5Val> rr5{}; 
        ///Request status for RR[6] register
        enum class rr6Val {
            disabledorrequested=0x00000000,     ///<RR[6] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[6] register is enabled, and are not yet requesting reload
        };
        namespace rr6ValC{
            constexpr MPL::Value<rr6Val,rr6Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr6Val,rr6Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rr6Val> rr6{}; 
        ///Request status for RR[7] register
        enum class rr7Val {
            disabledorrequested=0x00000000,     ///<RR[7] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[7] register is enabled, and are not yet requesting reload
        };
        namespace rr7ValC{
            constexpr MPL::Value<rr7Val,rr7Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr7Val,rr7Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rr7Val> rr7{}; 
    }
    namespace Nonecrv{    ///<Counter reload value
        using Addr = Register::Address<0x40010504,0x00000000,0,unsigned>;
        ///Counter reload value in number of cycles of the 32.768 kHz clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crv{}; 
    }
    namespace Nonerren{    ///<Enable register for reload request registers
        using Addr = Register::Address<0x40010508,0xffffff00,0,unsigned>;
        ///Enable or disable RR[0] register
        enum class rr0Val {
            disabled=0x00000000,     ///<Disable RR[0] register
            enabled=0x00000001,     ///<Enable RR[0] register
        };
        namespace rr0ValC{
            constexpr MPL::Value<rr0Val,rr0Val::disabled> disabled{};
            constexpr MPL::Value<rr0Val,rr0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rr0Val> rr0{}; 
        ///Enable or disable RR[1] register
        enum class rr1Val {
            disabled=0x00000000,     ///<Disable RR[1] register
            enabled=0x00000001,     ///<Enable RR[1] register
        };
        namespace rr1ValC{
            constexpr MPL::Value<rr1Val,rr1Val::disabled> disabled{};
            constexpr MPL::Value<rr1Val,rr1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rr1Val> rr1{}; 
        ///Enable or disable RR[2] register
        enum class rr2Val {
            disabled=0x00000000,     ///<Disable RR[2] register
            enabled=0x00000001,     ///<Enable RR[2] register
        };
        namespace rr2ValC{
            constexpr MPL::Value<rr2Val,rr2Val::disabled> disabled{};
            constexpr MPL::Value<rr2Val,rr2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rr2Val> rr2{}; 
        ///Enable or disable RR[3] register
        enum class rr3Val {
            disabled=0x00000000,     ///<Disable RR[3] register
            enabled=0x00000001,     ///<Enable RR[3] register
        };
        namespace rr3ValC{
            constexpr MPL::Value<rr3Val,rr3Val::disabled> disabled{};
            constexpr MPL::Value<rr3Val,rr3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rr3Val> rr3{}; 
        ///Enable or disable RR[4] register
        enum class rr4Val {
            disabled=0x00000000,     ///<Disable RR[4] register
            enabled=0x00000001,     ///<Enable RR[4] register
        };
        namespace rr4ValC{
            constexpr MPL::Value<rr4Val,rr4Val::disabled> disabled{};
            constexpr MPL::Value<rr4Val,rr4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rr4Val> rr4{}; 
        ///Enable or disable RR[5] register
        enum class rr5Val {
            disabled=0x00000000,     ///<Disable RR[5] register
            enabled=0x00000001,     ///<Enable RR[5] register
        };
        namespace rr5ValC{
            constexpr MPL::Value<rr5Val,rr5Val::disabled> disabled{};
            constexpr MPL::Value<rr5Val,rr5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rr5Val> rr5{}; 
        ///Enable or disable RR[6] register
        enum class rr6Val {
            disabled=0x00000000,     ///<Disable RR[6] register
            enabled=0x00000001,     ///<Enable RR[6] register
        };
        namespace rr6ValC{
            constexpr MPL::Value<rr6Val,rr6Val::disabled> disabled{};
            constexpr MPL::Value<rr6Val,rr6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rr6Val> rr6{}; 
        ///Enable or disable RR[7] register
        enum class rr7Val {
            disabled=0x00000000,     ///<Disable RR[7] register
            enabled=0x00000001,     ///<Enable RR[7] register
        };
        namespace rr7ValC{
            constexpr MPL::Value<rr7Val,rr7Val::disabled> disabled{};
            constexpr MPL::Value<rr7Val,rr7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rr7Val> rr7{}; 
    }
    namespace Noneconfig{    ///<Configuration register
        using Addr = Register::Address<0x4001050c,0xfffffff6,0,unsigned>;
        ///Configure the watchdog to either be paused, or kept running, while the CPU is sleeping
        enum class sleepVal {
            pause=0x00000000,     ///<Pause watchdog while the CPU is sleeping
            run=0x00000001,     ///<Keep the watchdog running while the CPU is sleeping
        };
        namespace sleepValC{
            constexpr MPL::Value<sleepVal,sleepVal::pause> pause{};
            constexpr MPL::Value<sleepVal,sleepVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sleepVal> sleep{}; 
        ///Configure the watchdog to either be paused, or kept running, while the CPU is halted by the debugger
        enum class haltVal {
            pause=0x00000000,     ///<Pause watchdog while the CPU is halted by the debugger
            run=0x00000001,     ///<Keep the watchdog running while the CPU is halted by the debugger
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::pause> pause{};
            constexpr MPL::Value<haltVal,haltVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,haltVal> halt{}; 
    }
    namespace Nonerr0{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010600,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr1{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010604,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr2{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010608,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr3{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x4001060c,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr4{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010610,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr5{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010614,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr6{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010618,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr7{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x4001061c,0x00000000,0,unsigned>;
        ///Reload request register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
}
