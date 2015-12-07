#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer.
    namespace NonetasksStart{    ///<Start the watchdog.
        using Addr = Register::Address<0x40010000,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTimeout{    ///<Watchdog timeout.
        using Addr = Register::Address<0x40010100,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40010304,0xfffffffe,0,unsigned>;
        ///Enable interrupt on TIMEOUT event.
        enum class TimeoutVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TimeoutVal> timeout{}; 
        namespace TimeoutValC{
            constexpr Register::FieldValue<decltype(timeout),TimeoutVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timeout),TimeoutVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(timeout),TimeoutVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40010308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on TIMEOUT event.
        enum class TimeoutVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TimeoutVal> timeout{}; 
        namespace TimeoutValC{
            constexpr Register::FieldValue<decltype(timeout),TimeoutVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timeout),TimeoutVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(timeout),TimeoutVal::clear> clear{};
        }
    }
    namespace Nonerunstatus{    ///<Watchdog running status.
        using Addr = Register::Address<0x40010400,0xfffffffe,0,unsigned>;
        ///Watchdog running status.
        enum class RunstatusVal {
            notrunning=0x00000000,     ///<Watchdog timer is not running.
            running=0x00000001,     ///<Watchdog timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunstatusVal> runstatus{}; 
        namespace RunstatusValC{
            constexpr Register::FieldValue<decltype(runstatus),RunstatusVal::notrunning> notrunning{};
            constexpr Register::FieldValue<decltype(runstatus),RunstatusVal::running> running{};
        }
    }
    namespace Nonereqstatus{    ///<Request status.
        using Addr = Register::Address<0x40010404,0xffffff00,0,unsigned>;
        ///Request status for RR[0].
        enum class Rr0Val {
            disabledorrequested=0x00000000,     ///<RR[0] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[0] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rr0Val> rr0{}; 
        namespace Rr0ValC{
            constexpr Register::FieldValue<decltype(rr0),Rr0Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr0),Rr0Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[1].
        enum class Rr1Val {
            disabledorrequested=0x00000000,     ///<RR[1] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[1] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rr1Val> rr1{}; 
        namespace Rr1ValC{
            constexpr Register::FieldValue<decltype(rr1),Rr1Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr1),Rr1Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[2].
        enum class Rr2Val {
            disabledorrequested=0x00000000,     ///<RR[2] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[2] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rr2Val> rr2{}; 
        namespace Rr2ValC{
            constexpr Register::FieldValue<decltype(rr2),Rr2Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr2),Rr2Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[3].
        enum class Rr3Val {
            disabledorrequested=0x00000000,     ///<RR[3] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[3] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rr3Val> rr3{}; 
        namespace Rr3ValC{
            constexpr Register::FieldValue<decltype(rr3),Rr3Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr3),Rr3Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[4].
        enum class Rr4Val {
            disabledorrequested=0x00000000,     ///<RR[4] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[4] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rr4Val> rr4{}; 
        namespace Rr4ValC{
            constexpr Register::FieldValue<decltype(rr4),Rr4Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr4),Rr4Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[5].
        enum class Rr5Val {
            disabledorrequested=0x00000000,     ///<RR[5] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[5] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rr5Val> rr5{}; 
        namespace Rr5ValC{
            constexpr Register::FieldValue<decltype(rr5),Rr5Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr5),Rr5Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[6].
        enum class Rr6Val {
            disabledorrequested=0x00000000,     ///<RR[6] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[6] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rr6Val> rr6{}; 
        namespace Rr6ValC{
            constexpr Register::FieldValue<decltype(rr6),Rr6Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr6),Rr6Val::enabledandunrequested> enabledandunrequested{};
        }
        ///Request status for RR[7].
        enum class Rr7Val {
            disabledorrequested=0x00000000,     ///<RR[7] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[7] register is enabled and has not jet requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rr7Val> rr7{}; 
        namespace Rr7ValC{
            constexpr Register::FieldValue<decltype(rr7),Rr7Val::disabledorrequested> disabledorrequested{};
            constexpr Register::FieldValue<decltype(rr7),Rr7Val::enabledandunrequested> enabledandunrequested{};
        }
    }
    namespace Nonecrv{    ///<Counter reload value in number of 32kiHz clock cycles.
        using Addr = Register::Address<0x40010504,0xffffffff,0,unsigned>;
    }
    namespace Nonerren{    ///<Reload request enable.
        using Addr = Register::Address<0x40010508,0xffffff00,0,unsigned>;
        ///Enable or disable RR[0] register.
        enum class Rr0Val {
            disabled=0x00000000,     ///<RR[0] register is disabled.
            enabled=0x00000001,     ///<RR[0] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rr0Val> rr0{}; 
        namespace Rr0ValC{
            constexpr Register::FieldValue<decltype(rr0),Rr0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr0),Rr0Val::enabled> enabled{};
        }
        ///Enable or disable RR[1] register.
        enum class Rr1Val {
            disabled=0x00000000,     ///<RR[1] register is disabled.
            enabled=0x00000001,     ///<RR[1] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rr1Val> rr1{}; 
        namespace Rr1ValC{
            constexpr Register::FieldValue<decltype(rr1),Rr1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr1),Rr1Val::enabled> enabled{};
        }
        ///Enable or disable RR[2] register.
        enum class Rr2Val {
            disabled=0x00000000,     ///<RR[2] register is disabled.
            enabled=0x00000001,     ///<RR[2] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Rr2Val> rr2{}; 
        namespace Rr2ValC{
            constexpr Register::FieldValue<decltype(rr2),Rr2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr2),Rr2Val::enabled> enabled{};
        }
        ///Enable or disable RR[3] register.
        enum class Rr3Val {
            disabled=0x00000000,     ///<RR[3] register is disabled.
            enabled=0x00000001,     ///<RR[3] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Rr3Val> rr3{}; 
        namespace Rr3ValC{
            constexpr Register::FieldValue<decltype(rr3),Rr3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr3),Rr3Val::enabled> enabled{};
        }
        ///Enable or disable RR[4] register.
        enum class Rr4Val {
            disabled=0x00000000,     ///<RR[4] register is disabled.
            enabled=0x00000001,     ///<RR[4] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Rr4Val> rr4{}; 
        namespace Rr4ValC{
            constexpr Register::FieldValue<decltype(rr4),Rr4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr4),Rr4Val::enabled> enabled{};
        }
        ///Enable or disable RR[5] register.
        enum class Rr5Val {
            disabled=0x00000000,     ///<RR[5] register is disabled.
            enabled=0x00000001,     ///<RR[5] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Rr5Val> rr5{}; 
        namespace Rr5ValC{
            constexpr Register::FieldValue<decltype(rr5),Rr5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr5),Rr5Val::enabled> enabled{};
        }
        ///Enable or disable RR[6] register.
        enum class Rr6Val {
            disabled=0x00000000,     ///<RR[6] register is disabled.
            enabled=0x00000001,     ///<RR[6] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Rr6Val> rr6{}; 
        namespace Rr6ValC{
            constexpr Register::FieldValue<decltype(rr6),Rr6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr6),Rr6Val::enabled> enabled{};
        }
        ///Enable or disable RR[7] register.
        enum class Rr7Val {
            disabled=0x00000000,     ///<RR[7] register is disabled.
            enabled=0x00000001,     ///<RR[7] register is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Rr7Val> rr7{}; 
        namespace Rr7ValC{
            constexpr Register::FieldValue<decltype(rr7),Rr7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rr7),Rr7Val::enabled> enabled{};
        }
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x4001050c,0xfffffff6,0,unsigned>;
        ///Configure the watchdog to pause or not while the CPU is sleeping.
        enum class SleepVal {
            pause=0x00000000,     ///<Pause watchdog while the CPU is asleep.
            run=0x00000001,     ///<Do not pause watchdog while the CPU is asleep.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SleepVal> sleep{}; 
        namespace SleepValC{
            constexpr Register::FieldValue<decltype(sleep),SleepVal::pause> pause{};
            constexpr Register::FieldValue<decltype(sleep),SleepVal::run> run{};
        }
        ///Configure the watchdog to pause or not while the CPU is halted by the debugger.
        enum class HaltVal {
            pause=0x00000000,     ///<Pause watchdog while the CPU is halted by the debugger.
            run=0x00000001,     ///<Do not pause watchdog while the CPU is halted by the debugger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt),HaltVal::pause> pause{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::run> run{};
        }
    }
    namespace Nonerr0{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010600,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr1{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010604,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr2{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010608,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr3{    ///<Reload requests registers.
        using Addr = Register::Address<0x4001060c,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr4{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010610,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr5{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010614,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr6{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010618,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonerr7{    ///<Reload requests registers.
        using Addr = Register::Address<0x4001061c,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40010ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power),PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power),PowerVal::enabled> enabled{};
        }
    }
}
