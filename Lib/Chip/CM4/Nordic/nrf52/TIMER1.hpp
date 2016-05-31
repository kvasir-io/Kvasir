#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Timer/Counter 1
    namespace Timer1TasksStart{    ///<Start Timer
        using Addr = Register::Address<0x40009000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksStop{    ///<Stop Timer
        using Addr = Register::Address<0x40009004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCount{    ///<Increment Timer (Counter mode only)
        using Addr = Register::Address<0x40009008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksClear{    ///<Clear time
        using Addr = Register::Address<0x4000900c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksShutdown{    ///<Shut down timer
        using Addr = Register::Address<0x40009010,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x40009200,0xffffc0c0,0x00000000,unsigned>;
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_CLEAR task
        enum class Compare0clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Compare0clearVal> compare0Clear{}; 
        namespace Compare0clearValC{
            constexpr Register::FieldValue<decltype(compare0Clear)::Type,Compare0clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Clear)::Type,Compare0clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_CLEAR task
        enum class Compare1clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Compare1clearVal> compare1Clear{}; 
        namespace Compare1clearValC{
            constexpr Register::FieldValue<decltype(compare1Clear)::Type,Compare1clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Clear)::Type,Compare1clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_CLEAR task
        enum class Compare2clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Compare2clearVal> compare2Clear{}; 
        namespace Compare2clearValC{
            constexpr Register::FieldValue<decltype(compare2Clear)::Type,Compare2clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Clear)::Type,Compare2clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_CLEAR task
        enum class Compare3clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Compare3clearVal> compare3Clear{}; 
        namespace Compare3clearValC{
            constexpr Register::FieldValue<decltype(compare3Clear)::Type,Compare3clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Clear)::Type,Compare3clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_CLEAR task
        enum class Compare4clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Compare4clearVal> compare4Clear{}; 
        namespace Compare4clearValC{
            constexpr Register::FieldValue<decltype(compare4Clear)::Type,Compare4clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4Clear)::Type,Compare4clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_CLEAR task
        enum class Compare5clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Compare5clearVal> compare5Clear{}; 
        namespace Compare5clearValC{
            constexpr Register::FieldValue<decltype(compare5Clear)::Type,Compare5clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5Clear)::Type,Compare5clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_STOP task
        enum class Compare0stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Compare0stopVal> compare0Stop{}; 
        namespace Compare0stopValC{
            constexpr Register::FieldValue<decltype(compare0Stop)::Type,Compare0stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Stop)::Type,Compare0stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_STOP task
        enum class Compare1stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Compare1stopVal> compare1Stop{}; 
        namespace Compare1stopValC{
            constexpr Register::FieldValue<decltype(compare1Stop)::Type,Compare1stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Stop)::Type,Compare1stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_STOP task
        enum class Compare2stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Compare2stopVal> compare2Stop{}; 
        namespace Compare2stopValC{
            constexpr Register::FieldValue<decltype(compare2Stop)::Type,Compare2stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Stop)::Type,Compare2stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_STOP task
        enum class Compare3stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Compare3stopVal> compare3Stop{}; 
        namespace Compare3stopValC{
            constexpr Register::FieldValue<decltype(compare3Stop)::Type,Compare3stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Stop)::Type,Compare3stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_STOP task
        enum class Compare4stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Compare4stopVal> compare4Stop{}; 
        namespace Compare4stopValC{
            constexpr Register::FieldValue<decltype(compare4Stop)::Type,Compare4stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4Stop)::Type,Compare4stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_STOP task
        enum class Compare5stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Compare5stopVal> compare5Stop{}; 
        namespace Compare5stopValC{
            constexpr Register::FieldValue<decltype(compare5Stop)::Type,Compare5stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5Stop)::Type,Compare5stopVal::enabled> enabled{};
        }
    }
    namespace Timer1Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40009304,0xffc0ffff,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[0] event
        enum class Compare0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[1] event
        enum class Compare1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[2] event
        enum class Compare2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[3] event
        enum class Compare3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[4] event
        enum class Compare4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Compare4Val> compare4{}; 
        namespace Compare4ValC{
            constexpr Register::FieldValue<decltype(compare4)::Type,Compare4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4)::Type,Compare4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare4)::Type,Compare4Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[5] event
        enum class Compare5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Compare5Val> compare5{}; 
        namespace Compare5ValC{
            constexpr Register::FieldValue<decltype(compare5)::Type,Compare5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5)::Type,Compare5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare5)::Type,Compare5Val::set> set{};
        }
    }
    namespace Timer1Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40009308,0xffc0ffff,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[0] event
        enum class Compare0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[1] event
        enum class Compare1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[2] event
        enum class Compare2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[3] event
        enum class Compare3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[4] event
        enum class Compare4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Compare4Val> compare4{}; 
        namespace Compare4ValC{
            constexpr Register::FieldValue<decltype(compare4)::Type,Compare4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4)::Type,Compare4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare4)::Type,Compare4Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[5] event
        enum class Compare5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Compare5Val> compare5{}; 
        namespace Compare5ValC{
            constexpr Register::FieldValue<decltype(compare5)::Type,Compare5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5)::Type,Compare5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare5)::Type,Compare5Val::clear> clear{};
        }
    }
    namespace Timer1Mode{    ///<Timer mode selection
        using Addr = Register::Address<0x40009504,0xfffffffc,0x00000000,unsigned>;
        ///Timer mode
        enum class ModeVal {
            timer=0x00000000,     ///<Select Timer mode
            counter=0x00000001,     ///<Select Counter mode
            lowpowercounter=0x00000002,     ///<Select Low Power Counter mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::timer> timer{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::counter> counter{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::lowpowercounter> lowpowercounter{};
        }
    }
    namespace Timer1Bitmode{    ///<Configure the number of bits used by the TIMER
        using Addr = Register::Address<0x40009508,0xfffffffc,0x00000000,unsigned>;
        ///Timer bit width
        enum class BitmodeVal {
            v16bit=0x00000000,     ///<16 bit timer bit width
            v08bit=0x00000001,     ///<8 bit timer bit width
            v24bit=0x00000002,     ///<24 bit timer bit width
            v32bit=0x00000003,     ///<32 bit timer bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BitmodeVal> bitmode{}; 
        namespace BitmodeValC{
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v16bit> v16bit{};
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v08bit> v08bit{};
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v24bit> v24bit{};
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v32bit> v32bit{};
        }
    }
    namespace Timer1Prescaler{    ///<Timer prescaler register
        using Addr = Register::Address<0x40009510,0xfffffff0,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Timer1TasksCapture0{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009040,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture1{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009044,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture2{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009048,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture3{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4000904c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture4{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009050,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture5{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009054,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000914c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare4{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009150,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare5{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009154,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1Cc0{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009540,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc1{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009544,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc2{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009548,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc3{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4000954c,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc4{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009550,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc5{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009554,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1TasksCapture0{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009040,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture1{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009044,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture2{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009048,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture3{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4000904c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture4{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009050,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1TasksCapture5{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x40009054,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000914c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare4{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009150,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1EventsCompare5{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40009154,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer1Cc0{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009540,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc1{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009544,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc2{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009548,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc3{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4000954c,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc4{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009550,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer1Cc5{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40009554,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
}
