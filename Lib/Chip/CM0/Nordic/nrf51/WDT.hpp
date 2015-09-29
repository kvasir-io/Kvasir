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
        enum class timeoutVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace timeoutValC{
            constexpr MPL::Value<timeoutVal,timeoutVal::disabled> disabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::enabled> enabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,timeoutVal> timeout{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40010308,0xfffffffe,0,unsigned>;
        ///Disable interrupt on TIMEOUT event.
        enum class timeoutVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace timeoutValC{
            constexpr MPL::Value<timeoutVal,timeoutVal::disabled> disabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::enabled> enabled{};
            constexpr MPL::Value<timeoutVal,timeoutVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,timeoutVal> timeout{}; 
    }
    namespace Nonerunstatus{    ///<Watchdog running status.
        using Addr = Register::Address<0x40010400,0xfffffffe,0,unsigned>;
        ///Watchdog running status.
        enum class runstatusVal {
            notrunning=0x00000000,     ///<Watchdog timer is not running.
            running=0x00000001,     ///<Watchdog timer is running.
        };
        namespace runstatusValC{
            constexpr MPL::Value<runstatusVal,runstatusVal::notrunning> notrunning{};
            constexpr MPL::Value<runstatusVal,runstatusVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runstatusVal> runstatus{}; 
    }
    namespace Nonereqstatus{    ///<Request status.
        using Addr = Register::Address<0x40010404,0xffffff00,0,unsigned>;
        ///Request status for RR[0].
        enum class rr0Val {
            disabledorrequested=0x00000000,     ///<RR[0] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[0] register is enabled and has not jet requested.
        };
        namespace rr0ValC{
            constexpr MPL::Value<rr0Val,rr0Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr0Val,rr0Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rr0Val> rr0{}; 
        ///Request status for RR[1].
        enum class rr1Val {
            disabledorrequested=0x00000000,     ///<RR[1] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[1] register is enabled and has not jet requested.
        };
        namespace rr1ValC{
            constexpr MPL::Value<rr1Val,rr1Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr1Val,rr1Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rr1Val> rr1{}; 
        ///Request status for RR[2].
        enum class rr2Val {
            disabledorrequested=0x00000000,     ///<RR[2] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[2] register is enabled and has not jet requested.
        };
        namespace rr2ValC{
            constexpr MPL::Value<rr2Val,rr2Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr2Val,rr2Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rr2Val> rr2{}; 
        ///Request status for RR[3].
        enum class rr3Val {
            disabledorrequested=0x00000000,     ///<RR[3] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[3] register is enabled and has not jet requested.
        };
        namespace rr3ValC{
            constexpr MPL::Value<rr3Val,rr3Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr3Val,rr3Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rr3Val> rr3{}; 
        ///Request status for RR[4].
        enum class rr4Val {
            disabledorrequested=0x00000000,     ///<RR[4] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[4] register is enabled and has not jet requested.
        };
        namespace rr4ValC{
            constexpr MPL::Value<rr4Val,rr4Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr4Val,rr4Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rr4Val> rr4{}; 
        ///Request status for RR[5].
        enum class rr5Val {
            disabledorrequested=0x00000000,     ///<RR[5] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[5] register is enabled and has not jet requested.
        };
        namespace rr5ValC{
            constexpr MPL::Value<rr5Val,rr5Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr5Val,rr5Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rr5Val> rr5{}; 
        ///Request status for RR[6].
        enum class rr6Val {
            disabledorrequested=0x00000000,     ///<RR[6] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[6] register is enabled and has not jet requested.
        };
        namespace rr6ValC{
            constexpr MPL::Value<rr6Val,rr6Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr6Val,rr6Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rr6Val> rr6{}; 
        ///Request status for RR[7].
        enum class rr7Val {
            disabledorrequested=0x00000000,     ///<RR[7] register is not enabled or has already requested reload.
            enabledandunrequested=0x00000001,     ///<RR[7] register is enabled and has not jet requested.
        };
        namespace rr7ValC{
            constexpr MPL::Value<rr7Val,rr7Val::disabledorrequested> disabledorrequested{};
            constexpr MPL::Value<rr7Val,rr7Val::enabledandunrequested> enabledandunrequested{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rr7Val> rr7{}; 
    }
    namespace Nonecrv{    ///<Counter reload value in number of 32kiHz clock cycles.
        using Addr = Register::Address<0x40010504,0xffffffff,0,unsigned>;
    }
    namespace Nonerren{    ///<Reload request enable.
        using Addr = Register::Address<0x40010508,0xffffff00,0,unsigned>;
        ///Enable or disable RR[0] register.
        enum class rr0Val {
            disabled=0x00000000,     ///<RR[0] register is disabled.
            enabled=0x00000001,     ///<RR[0] register is enabled.
        };
        namespace rr0ValC{
            constexpr MPL::Value<rr0Val,rr0Val::disabled> disabled{};
            constexpr MPL::Value<rr0Val,rr0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rr0Val> rr0{}; 
        ///Enable or disable RR[1] register.
        enum class rr1Val {
            disabled=0x00000000,     ///<RR[1] register is disabled.
            enabled=0x00000001,     ///<RR[1] register is enabled.
        };
        namespace rr1ValC{
            constexpr MPL::Value<rr1Val,rr1Val::disabled> disabled{};
            constexpr MPL::Value<rr1Val,rr1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rr1Val> rr1{}; 
        ///Enable or disable RR[2] register.
        enum class rr2Val {
            disabled=0x00000000,     ///<RR[2] register is disabled.
            enabled=0x00000001,     ///<RR[2] register is enabled.
        };
        namespace rr2ValC{
            constexpr MPL::Value<rr2Val,rr2Val::disabled> disabled{};
            constexpr MPL::Value<rr2Val,rr2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rr2Val> rr2{}; 
        ///Enable or disable RR[3] register.
        enum class rr3Val {
            disabled=0x00000000,     ///<RR[3] register is disabled.
            enabled=0x00000001,     ///<RR[3] register is enabled.
        };
        namespace rr3ValC{
            constexpr MPL::Value<rr3Val,rr3Val::disabled> disabled{};
            constexpr MPL::Value<rr3Val,rr3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rr3Val> rr3{}; 
        ///Enable or disable RR[4] register.
        enum class rr4Val {
            disabled=0x00000000,     ///<RR[4] register is disabled.
            enabled=0x00000001,     ///<RR[4] register is enabled.
        };
        namespace rr4ValC{
            constexpr MPL::Value<rr4Val,rr4Val::disabled> disabled{};
            constexpr MPL::Value<rr4Val,rr4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rr4Val> rr4{}; 
        ///Enable or disable RR[5] register.
        enum class rr5Val {
            disabled=0x00000000,     ///<RR[5] register is disabled.
            enabled=0x00000001,     ///<RR[5] register is enabled.
        };
        namespace rr5ValC{
            constexpr MPL::Value<rr5Val,rr5Val::disabled> disabled{};
            constexpr MPL::Value<rr5Val,rr5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rr5Val> rr5{}; 
        ///Enable or disable RR[6] register.
        enum class rr6Val {
            disabled=0x00000000,     ///<RR[6] register is disabled.
            enabled=0x00000001,     ///<RR[6] register is enabled.
        };
        namespace rr6ValC{
            constexpr MPL::Value<rr6Val,rr6Val::disabled> disabled{};
            constexpr MPL::Value<rr6Val,rr6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rr6Val> rr6{}; 
        ///Enable or disable RR[7] register.
        enum class rr7Val {
            disabled=0x00000000,     ///<RR[7] register is disabled.
            enabled=0x00000001,     ///<RR[7] register is enabled.
        };
        namespace rr7ValC{
            constexpr MPL::Value<rr7Val,rr7Val::disabled> disabled{};
            constexpr MPL::Value<rr7Val,rr7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rr7Val> rr7{}; 
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x4001050c,0xfffffff6,0,unsigned>;
        ///Configure the watchdog to pause or not while the CPU is sleeping.
        enum class sleepVal {
            pause=0x00000000,     ///<Pause watchdog while the CPU is asleep.
            run=0x00000001,     ///<Do not pause watchdog while the CPU is asleep.
        };
        namespace sleepValC{
            constexpr MPL::Value<sleepVal,sleepVal::pause> pause{};
            constexpr MPL::Value<sleepVal,sleepVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sleepVal> sleep{}; 
        ///Configure the watchdog to pause or not while the CPU is halted by the debugger.
        enum class haltVal {
            pause=0x00000000,     ///<Pause watchdog while the CPU is halted by the debugger.
            run=0x00000001,     ///<Do not pause watchdog while the CPU is halted by the debugger.
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::pause> pause{};
            constexpr MPL::Value<haltVal,haltVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,haltVal> halt{}; 
    }
    namespace Nonerr0{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010600,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr1{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010604,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr2{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010608,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr3{    ///<Reload requests registers.
        using Addr = Register::Address<0x4001060c,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr4{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010610,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr5{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010614,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr6{    ///<Reload requests registers.
        using Addr = Register::Address<0x40010618,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonerr7{    ///<Reload requests registers.
        using Addr = Register::Address<0x4001061c,0x00000000,0,unsigned>;
        ///Reload register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40010ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
