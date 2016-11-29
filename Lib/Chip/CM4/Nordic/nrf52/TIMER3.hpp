#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Timer/Counter 3
    namespace Timer3TasksStart{    ///<Start Timer
        using Addr = Register::Address<0x4001a000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksStop{    ///<Stop Timer
        using Addr = Register::Address<0x4001a004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCount{    ///<Increment Timer (Counter mode only)
        using Addr = Register::Address<0x4001a008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksClear{    ///<Clear time
        using Addr = Register::Address<0x4001a00c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksShutdown{    ///<Shut down timer
        using Addr = Register::Address<0x4001a010,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x4001a200,0xffffc0c0,0x00000000,unsigned>;
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_CLEAR task
        enum class Compare0clearVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Compare0clearVal> compare0Clear{}; 
        namespace Compare0clearValC{
            constexpr Register::FieldValue<decltype(compare0Clear)::Type,Compare0clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Clear)::Type,Compare0clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_CLEAR task
        enum class Compare1clearVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Compare1clearVal> compare1Clear{}; 
        namespace Compare1clearValC{
            constexpr Register::FieldValue<decltype(compare1Clear)::Type,Compare1clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Clear)::Type,Compare1clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_CLEAR task
        enum class Compare2clearVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Compare2clearVal> compare2Clear{}; 
        namespace Compare2clearValC{
            constexpr Register::FieldValue<decltype(compare2Clear)::Type,Compare2clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Clear)::Type,Compare2clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_CLEAR task
        enum class Compare3clearVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Compare3clearVal> compare3Clear{}; 
        namespace Compare3clearValC{
            constexpr Register::FieldValue<decltype(compare3Clear)::Type,Compare3clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Clear)::Type,Compare3clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_CLEAR task
        enum class Compare4clearVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Compare4clearVal> compare4Clear{}; 
        namespace Compare4clearValC{
            constexpr Register::FieldValue<decltype(compare4Clear)::Type,Compare4clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4Clear)::Type,Compare4clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_CLEAR task
        enum class Compare5clearVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Compare5clearVal> compare5Clear{}; 
        namespace Compare5clearValC{
            constexpr Register::FieldValue<decltype(compare5Clear)::Type,Compare5clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5Clear)::Type,Compare5clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_STOP task
        enum class Compare0stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Compare0stopVal> compare0Stop{}; 
        namespace Compare0stopValC{
            constexpr Register::FieldValue<decltype(compare0Stop)::Type,Compare0stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Stop)::Type,Compare0stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_STOP task
        enum class Compare1stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Compare1stopVal> compare1Stop{}; 
        namespace Compare1stopValC{
            constexpr Register::FieldValue<decltype(compare1Stop)::Type,Compare1stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Stop)::Type,Compare1stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_STOP task
        enum class Compare2stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Compare2stopVal> compare2Stop{}; 
        namespace Compare2stopValC{
            constexpr Register::FieldValue<decltype(compare2Stop)::Type,Compare2stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Stop)::Type,Compare2stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_STOP task
        enum class Compare3stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Compare3stopVal> compare3Stop{}; 
        namespace Compare3stopValC{
            constexpr Register::FieldValue<decltype(compare3Stop)::Type,Compare3stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Stop)::Type,Compare3stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_STOP task
        enum class Compare4stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Compare4stopVal> compare4Stop{}; 
        namespace Compare4stopValC{
            constexpr Register::FieldValue<decltype(compare4Stop)::Type,Compare4stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4Stop)::Type,Compare4stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_STOP task
        enum class Compare5stopVal : unsigned {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Compare5stopVal> compare5Stop{}; 
        namespace Compare5stopValC{
            constexpr Register::FieldValue<decltype(compare5Stop)::Type,Compare5stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5Stop)::Type,Compare5stopVal::enabled> enabled{};
        }
    }
    namespace Timer3Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4001a304,0xffc0ffff,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[0] event
        enum class Compare0Val : unsigned {
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
        enum class Compare1Val : unsigned {
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
        enum class Compare2Val : unsigned {
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
        enum class Compare3Val : unsigned {
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
        enum class Compare4Val : unsigned {
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
        enum class Compare5Val : unsigned {
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
    namespace Timer3Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4001a308,0xffc0ffff,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[0] event
        enum class Compare0Val : unsigned {
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
        enum class Compare1Val : unsigned {
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
        enum class Compare2Val : unsigned {
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
        enum class Compare3Val : unsigned {
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
        enum class Compare4Val : unsigned {
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
        enum class Compare5Val : unsigned {
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
    namespace Timer3Mode{    ///<Timer mode selection
        using Addr = Register::Address<0x4001a504,0xfffffffc,0x00000000,unsigned>;
        ///Timer mode
        enum class ModeVal : unsigned {
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
    namespace Timer3Bitmode{    ///<Configure the number of bits used by the TIMER
        using Addr = Register::Address<0x4001a508,0xfffffffc,0x00000000,unsigned>;
        ///Timer bit width
        enum class BitmodeVal : unsigned {
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
    namespace Timer3Prescaler{    ///<Timer prescaler register
        using Addr = Register::Address<0x4001a510,0xfffffff0,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Timer3TasksCapture0{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a040,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture1{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a044,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture2{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a048,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture3{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a04c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture4{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a050,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture5{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a054,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a14c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare4{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a150,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare5{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a154,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3Cc0{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4001a540,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer3Cc1{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4001a544,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer3Cc2{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4001a548,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer3Cc3{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4001a54c,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer3Cc4{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4001a550,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer3Cc5{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4001a554,0x00000000,0x00000000,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Timer3TasksCapture0{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a040,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture1{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a044,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture2{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a048,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture3{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a04c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture4{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a050,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3TasksCapture5{    ///<Description collection[0]:  Capture Timer value to CC[0] register
        using Addr = Register::Address<0x4001a054,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a14c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare4{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a150,0xffffffff,0x00000000,unsigned>;
    }
    namespace Timer3EventsCompare5{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001a154,0xffffffff,0x00000000,unsigned>;
    }
}
