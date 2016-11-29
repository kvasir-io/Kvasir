#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watchdog Timer
    namespace WdtTasksStart{    ///<Start the watchdog
        using Addr = Register::Address<0x40010000,0xffffffff,0x00000000,unsigned>;
    }
    namespace WdtEventsTimeout{    ///<Watchdog timeout
        using Addr = Register::Address<0x40010100,0xffffffff,0x00000000,unsigned>;
    }
    namespace WdtIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40010304,0xfffffffe,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_TIMEOUT event
        enum class TimeoutVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TimeoutVal> timeout{}; 
        namespace TimeoutValC{
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::set> set{};
        }
    }
    namespace WdtIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40010308,0xfffffffe,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_TIMEOUT event
        enum class TimeoutVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TimeoutVal> timeout{}; 
        namespace TimeoutValC{
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::clear> clear{};
        }
    }
    namespace WdtRunstatus{    ///<Run status
        using Addr = Register::Address<0x40010400,0xfffffffe,0x00000000,unsigned>;
        ///Indicates whether or not the watchdog is running
        enum class RunstatusVal : unsigned {
            notrunning=0x00000000,     ///<Watchdog not running
            running=0x00000001,     ///<Watchdog is running
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunstatusVal> runstatus{}; 
        namespace RunstatusValC{
            constexpr Register::FieldValue<decltype(runstatus)::Type,RunstatusVal::notrunning> notrunning{};
            constexpr Register::FieldValue<decltype(runstatus)::Type,RunstatusVal::running> running{};
        }
    }
    namespace WdtReqstatus{    ///<Request status
        using Addr = Register::Address<0x40010404,0xffffff00,0x00000000,unsigned>;
        ///Request status for RR[0] register
        enum class Rr0Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[0] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[0] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rr0Val> rr0{}; 
        namespace Rr0ValC{
            constexpr Register::FieldValue<decltype(rr0)::Type,Rr0Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr0)::Type,Rr0Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[1] register
        enum class Rr1Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[1] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[1] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rr1Val> rr1{}; 
        namespace Rr1ValC{
            constexpr Register::FieldValue<decltype(rr1)::Type,Rr1Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr1)::Type,Rr1Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[2] register
        enum class Rr2Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[2] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[2] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rr2Val> rr2{}; 
        namespace Rr2ValC{
            constexpr Register::FieldValue<decltype(rr2)::Type,Rr2Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr2)::Type,Rr2Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[3] register
        enum class Rr3Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[3] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[3] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rr3Val> rr3{}; 
        namespace Rr3ValC{
            constexpr Register::FieldValue<decltype(rr3)::Type,Rr3Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr3)::Type,Rr3Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[4] register
        enum class Rr4Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[4] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[4] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rr4Val> rr4{}; 
        namespace Rr4ValC{
            constexpr Register::FieldValue<decltype(rr4)::Type,Rr4Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr4)::Type,Rr4Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[5] register
        enum class Rr5Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[5] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[5] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rr5Val> rr5{}; 
        namespace Rr5ValC{
            constexpr Register::FieldValue<decltype(rr5)::Type,Rr5Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr5)::Type,Rr5Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[6] register
        enum class Rr6Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[6] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[6] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rr6Val> rr6{}; 
        namespace Rr6ValC{
            constexpr Register::FieldValue<decltype(rr6)::Type,Rr6Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr6)::Type,Rr6Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[7] register
        enum class Rr7Val : unsigned {
            disabledorrequested=0x00000000,     ///<RR[7] register is not enabled, or are already requesting reload
            enabledandunrequested=0x00000001,     ///<RR[7] register is enabled, and are not yet requesting reload
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rr7Val> rr7{}; 
        namespace Rr7ValC{
            constexpr Register::FieldValue<decltype(rr7)::Type,Rr7Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr7)::Type,Rr7Val::enabledandunrequested> enabledandunrequested{};
        }
    }
    namespace WdtCrv{    ///<Counter reload value
        using Addr = Register::Address<0x40010504,0x00000000,0x00000000,unsigned>;
        ///Counter reload value in number of cycles of the 32.768 kHz clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crv{}; 
    }
    namespace WdtRren{    ///<Enable register for reload request registers
        using Addr = Register::Address<0x40010508,0xffffff00,0x00000000,unsigned>;
        ///Enable or disable RR[0] register
        enum class Rr0Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[0] register
            enabled=0x00000001,     ///<Enable RR[0] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rr0Val> rr0{}; 
        namespace Rr0ValC{
            constexpr Register::FieldValue<decltype(rr0)::Type,Rr0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr0)::Type,Rr0Val::enabled> enabled{};
        }
        ///Enable or disable RR[1] register
        enum class Rr1Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[1] register
            enabled=0x00000001,     ///<Enable RR[1] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rr1Val> rr1{}; 
        namespace Rr1ValC{
            constexpr Register::FieldValue<decltype(rr1)::Type,Rr1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr1)::Type,Rr1Val::enabled> enabled{};
        }
        ///Enable or disable RR[2] register
        enum class Rr2Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[2] register
            enabled=0x00000001,     ///<Enable RR[2] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rr2Val> rr2{}; 
        namespace Rr2ValC{
            constexpr Register::FieldValue<decltype(rr2)::Type,Rr2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr2)::Type,Rr2Val::enabled> enabled{};
        }
        ///Enable or disable RR[3] register
        enum class Rr3Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[3] register
            enabled=0x00000001,     ///<Enable RR[3] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rr3Val> rr3{}; 
        namespace Rr3ValC{
            constexpr Register::FieldValue<decltype(rr3)::Type,Rr3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr3)::Type,Rr3Val::enabled> enabled{};
        }
        ///Enable or disable RR[4] register
        enum class Rr4Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[4] register
            enabled=0x00000001,     ///<Enable RR[4] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rr4Val> rr4{}; 
        namespace Rr4ValC{
            constexpr Register::FieldValue<decltype(rr4)::Type,Rr4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr4)::Type,Rr4Val::enabled> enabled{};
        }
        ///Enable or disable RR[5] register
        enum class Rr5Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[5] register
            enabled=0x00000001,     ///<Enable RR[5] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rr5Val> rr5{}; 
        namespace Rr5ValC{
            constexpr Register::FieldValue<decltype(rr5)::Type,Rr5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr5)::Type,Rr5Val::enabled> enabled{};
        }
        ///Enable or disable RR[6] register
        enum class Rr6Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[6] register
            enabled=0x00000001,     ///<Enable RR[6] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rr6Val> rr6{}; 
        namespace Rr6ValC{
            constexpr Register::FieldValue<decltype(rr6)::Type,Rr6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr6)::Type,Rr6Val::enabled> enabled{};
        }
        ///Enable or disable RR[7] register
        enum class Rr7Val : unsigned {
            disabled=0x00000000,     ///<Disable RR[7] register
            enabled=0x00000001,     ///<Enable RR[7] register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rr7Val> rr7{}; 
        namespace Rr7ValC{
            constexpr Register::FieldValue<decltype(rr7)::Type,Rr7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr7)::Type,Rr7Val::enabled> enabled{};
        }
    }
    namespace WdtConfig{    ///<Configuration register
        using Addr = Register::Address<0x4001050c,0xfffffff6,0x00000000,unsigned>;
        ///Configure the watchdog to either be paused, or kept running, while the CPU is sleeping
        enum class SleepVal : unsigned {
            pause=0x00000000,     ///<Pause watchdog while the CPU is sleeping
            run=0x00000001,     ///<Keep the watchdog running while the CPU is sleeping
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SleepVal> sleep{}; 
        namespace SleepValC{
            constexpr Register::FieldValue<decltype(sleep)::Type,SleepVal::pause> pause{};
            constexpr Register::FieldValue<decltype(sleep)::Type,SleepVal::run> run{};
        }
        ///Configure the watchdog to either be paused, or kept running, while the CPU is halted by the debugger
        enum class HaltVal : unsigned {
            pause=0x00000000,     ///<Pause watchdog while the CPU is halted by the debugger
            run=0x00000001,     ///<Keep the watchdog running while the CPU is halted by the debugger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::pause> pause{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::run> run{};
        }
    }
    namespace WdtRr0{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010600,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr1{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010604,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr2{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010608,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr3{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x4001060c,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr4{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010610,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr5{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010614,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr6{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x40010618,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace WdtRr7{    ///<Description collection[0]:  Reload request 0
        using Addr = Register::Address<0x4001061c,0x00000000,0x00000000,unsigned>;
        ///Reload request register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
}
