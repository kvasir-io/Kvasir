#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer/Counter 0
    namespace NonetasksStart{    ///<Start Timer
        using Addr = Register::Address<0x40008000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop Timer
        using Addr = Register::Address<0x40008004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCount{    ///<Increment Timer (Counter mode only)
        using Addr = Register::Address<0x40008008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClear{    ///<Clear time
        using Addr = Register::Address<0x4000800c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksShutdown{    ///<Shut down timer
        using Addr = Register::Address<0x40008010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture0{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40008040,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture1{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40008044,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture2{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40008048,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture3{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4000804c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture4{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40008050,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture5{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40008054,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40008140,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40008144,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40008148,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000814c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare4{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40008150,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare5{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40008154,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40008200,0xffffc0c0,0,unsigned>;
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_CLEAR task
        enum class compare0ClearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare0ClearValC{
            constexpr MPL::Value<compare0ClearVal,compare0ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare0ClearVal,compare0ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,compare0ClearVal> compare0Clear{}; 
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_CLEAR task
        enum class compare1ClearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare1ClearValC{
            constexpr MPL::Value<compare1ClearVal,compare1ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare1ClearVal,compare1ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,compare1ClearVal> compare1Clear{}; 
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_CLEAR task
        enum class compare2ClearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare2ClearValC{
            constexpr MPL::Value<compare2ClearVal,compare2ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare2ClearVal,compare2ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,compare2ClearVal> compare2Clear{}; 
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_CLEAR task
        enum class compare3ClearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare3ClearValC{
            constexpr MPL::Value<compare3ClearVal,compare3ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare3ClearVal,compare3ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,compare3ClearVal> compare3Clear{}; 
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_CLEAR task
        enum class compare4ClearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare4ClearValC{
            constexpr MPL::Value<compare4ClearVal,compare4ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare4ClearVal,compare4ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,compare4ClearVal> compare4Clear{}; 
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_CLEAR task
        enum class compare5ClearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare5ClearValC{
            constexpr MPL::Value<compare5ClearVal,compare5ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare5ClearVal,compare5ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,compare5ClearVal> compare5Clear{}; 
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_STOP task
        enum class compare0StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare0StopValC{
            constexpr MPL::Value<compare0StopVal,compare0StopVal::disabled> disabled{};
            constexpr MPL::Value<compare0StopVal,compare0StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,compare0StopVal> compare0Stop{}; 
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_STOP task
        enum class compare1StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare1StopValC{
            constexpr MPL::Value<compare1StopVal,compare1StopVal::disabled> disabled{};
            constexpr MPL::Value<compare1StopVal,compare1StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,compare1StopVal> compare1Stop{}; 
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_STOP task
        enum class compare2StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare2StopValC{
            constexpr MPL::Value<compare2StopVal,compare2StopVal::disabled> disabled{};
            constexpr MPL::Value<compare2StopVal,compare2StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,compare2StopVal> compare2Stop{}; 
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_STOP task
        enum class compare3StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare3StopValC{
            constexpr MPL::Value<compare3StopVal,compare3StopVal::disabled> disabled{};
            constexpr MPL::Value<compare3StopVal,compare3StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,compare3StopVal> compare3Stop{}; 
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_STOP task
        enum class compare4StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare4StopValC{
            constexpr MPL::Value<compare4StopVal,compare4StopVal::disabled> disabled{};
            constexpr MPL::Value<compare4StopVal,compare4StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,compare4StopVal> compare4Stop{}; 
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_STOP task
        enum class compare5StopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace compare5StopValC{
            constexpr MPL::Value<compare5StopVal,compare5StopVal::disabled> disabled{};
            constexpr MPL::Value<compare5StopVal,compare5StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,compare5StopVal> compare5Stop{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40008304,0xffc0ffff,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[0] event
        enum class compare0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
            constexpr MPL::Value<compare0Val,compare0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[1] event
        enum class compare1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
            constexpr MPL::Value<compare1Val,compare1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[2] event
        enum class compare2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
            constexpr MPL::Value<compare2Val,compare2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[3] event
        enum class compare3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
            constexpr MPL::Value<compare3Val,compare3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[4] event
        enum class compare4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace compare4ValC{
            constexpr MPL::Value<compare4Val,compare4Val::disabled> disabled{};
            constexpr MPL::Value<compare4Val,compare4Val::enabled> enabled{};
            constexpr MPL::Value<compare4Val,compare4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,compare4Val> compare4{}; 
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[5] event
        enum class compare5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace compare5ValC{
            constexpr MPL::Value<compare5Val,compare5Val::disabled> disabled{};
            constexpr MPL::Value<compare5Val,compare5Val::enabled> enabled{};
            constexpr MPL::Value<compare5Val,compare5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,compare5Val> compare5{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40008308,0xffc0ffff,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[0] event
        enum class compare0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
            constexpr MPL::Value<compare0Val,compare0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[1] event
        enum class compare1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
            constexpr MPL::Value<compare1Val,compare1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[2] event
        enum class compare2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
            constexpr MPL::Value<compare2Val,compare2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[3] event
        enum class compare3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
            constexpr MPL::Value<compare3Val,compare3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[4] event
        enum class compare4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace compare4ValC{
            constexpr MPL::Value<compare4Val,compare4Val::disabled> disabled{};
            constexpr MPL::Value<compare4Val,compare4Val::enabled> enabled{};
            constexpr MPL::Value<compare4Val,compare4Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,compare4Val> compare4{}; 
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[5] event
        enum class compare5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace compare5ValC{
            constexpr MPL::Value<compare5Val,compare5Val::disabled> disabled{};
            constexpr MPL::Value<compare5Val,compare5Val::enabled> enabled{};
            constexpr MPL::Value<compare5Val,compare5Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,compare5Val> compare5{}; 
    }
    namespace Nonemode{    ///<Timer mode selection
        using Addr = Register::Address<0x40008504,0xfffffffc,0,unsigned>;
        ///Timer mode
        enum class modeVal {
            timer=0x00000000,     ///<Select Timer mode
            counter=0x00000001,     ///<Select Counter mode
            lowpowercounter=0x00000002,     ///<Select Low Power Counter mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::timer> timer{};
            constexpr MPL::Value<modeVal,modeVal::counter> counter{};
            constexpr MPL::Value<modeVal,modeVal::lowpowercounter> lowpowercounter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonebitmode{    ///<Configure the number of bits used by the TIMER
        using Addr = Register::Address<0x40008508,0xfffffffc,0,unsigned>;
        ///Timer bit width
        enum class bitmodeVal {
            v16bit=0x00000000,     ///<16 bit timer bit width
            v08bit=0x00000001,     ///<8 bit timer bit width
            v24bit=0x00000002,     ///<24 bit timer bit width
            v32bit=0x00000003,     ///<32 bit timer bit width
        };
        namespace bitmodeValC{
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v16bit> v16bit{};
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v08bit> v08bit{};
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v24bit> v24bit{};
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v32bit> v32bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bitmodeVal> bitmode{}; 
    }
    namespace Noneprescaler{    ///<Timer prescaler register
        using Addr = Register::Address<0x40008510,0xfffffff0,0,unsigned>;
        ///Prescaler value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Nonecc0{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008540,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Nonecc1{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008544,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Nonecc2{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008548,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Nonecc3{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4000854c,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Nonecc4{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008550,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Nonecc5{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008554,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
}
