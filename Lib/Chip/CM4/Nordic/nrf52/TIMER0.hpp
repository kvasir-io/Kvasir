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
        enum class Compare0clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Compare0clearVal> compare0Clear{}; 
        namespace Compare0clearValC{
            constexpr Register::FieldValue<decltype(compare0Clear),Compare0clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Clear),Compare0clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_CLEAR task
        enum class Compare1clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Compare1clearVal> compare1Clear{}; 
        namespace Compare1clearValC{
            constexpr Register::FieldValue<decltype(compare1Clear),Compare1clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Clear),Compare1clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_CLEAR task
        enum class Compare2clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Compare2clearVal> compare2Clear{}; 
        namespace Compare2clearValC{
            constexpr Register::FieldValue<decltype(compare2Clear),Compare2clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Clear),Compare2clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_CLEAR task
        enum class Compare3clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Compare3clearVal> compare3Clear{}; 
        namespace Compare3clearValC{
            constexpr Register::FieldValue<decltype(compare3Clear),Compare3clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Clear),Compare3clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_CLEAR task
        enum class Compare4clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Compare4clearVal> compare4Clear{}; 
        namespace Compare4clearValC{
            constexpr Register::FieldValue<decltype(compare4Clear),Compare4clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4Clear),Compare4clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_CLEAR task
        enum class Compare5clearVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Compare5clearVal> compare5Clear{}; 
        namespace Compare5clearValC{
            constexpr Register::FieldValue<decltype(compare5Clear),Compare5clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5Clear),Compare5clearVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[0] event and TASKS_STOP task
        enum class Compare0stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Compare0stopVal> compare0Stop{}; 
        namespace Compare0stopValC{
            constexpr Register::FieldValue<decltype(compare0Stop),Compare0stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Stop),Compare0stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[1] event and TASKS_STOP task
        enum class Compare1stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Compare1stopVal> compare1Stop{}; 
        namespace Compare1stopValC{
            constexpr Register::FieldValue<decltype(compare1Stop),Compare1stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Stop),Compare1stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[2] event and TASKS_STOP task
        enum class Compare2stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Compare2stopVal> compare2Stop{}; 
        namespace Compare2stopValC{
            constexpr Register::FieldValue<decltype(compare2Stop),Compare2stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Stop),Compare2stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[3] event and TASKS_STOP task
        enum class Compare3stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Compare3stopVal> compare3Stop{}; 
        namespace Compare3stopValC{
            constexpr Register::FieldValue<decltype(compare3Stop),Compare3stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Stop),Compare3stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[4] event and TASKS_STOP task
        enum class Compare4stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Compare4stopVal> compare4Stop{}; 
        namespace Compare4stopValC{
            constexpr Register::FieldValue<decltype(compare4Stop),Compare4stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4Stop),Compare4stopVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_COMPARE[5] event and TASKS_STOP task
        enum class Compare5stopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Compare5stopVal> compare5Stop{}; 
        namespace Compare5stopValC{
            constexpr Register::FieldValue<decltype(compare5Stop),Compare5stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5Stop),Compare5stopVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40008304,0xffc0ffff,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[0] event
        enum class Compare0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0),Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0),Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0),Compare0Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[1] event
        enum class Compare1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1),Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1),Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1),Compare1Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[2] event
        enum class Compare2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2),Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2),Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2),Compare2Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[3] event
        enum class Compare3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3),Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3),Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3),Compare3Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[4] event
        enum class Compare4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Compare4Val> compare4{}; 
        namespace Compare4ValC{
            constexpr Register::FieldValue<decltype(compare4),Compare4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4),Compare4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare4),Compare4Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COMPARE[5] event
        enum class Compare5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Compare5Val> compare5{}; 
        namespace Compare5ValC{
            constexpr Register::FieldValue<decltype(compare5),Compare5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5),Compare5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare5),Compare5Val::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40008308,0xffc0ffff,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[0] event
        enum class Compare0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0),Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0),Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0),Compare0Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[1] event
        enum class Compare1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1),Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1),Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1),Compare1Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[2] event
        enum class Compare2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2),Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2),Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2),Compare2Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[3] event
        enum class Compare3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3),Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3),Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3),Compare3Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[4] event
        enum class Compare4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Compare4Val> compare4{}; 
        namespace Compare4ValC{
            constexpr Register::FieldValue<decltype(compare4),Compare4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare4),Compare4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare4),Compare4Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COMPARE[5] event
        enum class Compare5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Compare5Val> compare5{}; 
        namespace Compare5ValC{
            constexpr Register::FieldValue<decltype(compare5),Compare5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare5),Compare5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare5),Compare5Val::clear> clear{};
        }
    }
    namespace Nonemode{    ///<Timer mode selection
        using Addr = Register::Address<0x40008504,0xfffffffc,0,unsigned>;
        ///Timer mode
        enum class ModeVal {
            timer=0x00000000,     ///<Select Timer mode
            counter=0x00000001,     ///<Select Counter mode
            lowpowercounter=0x00000002,     ///<Select Low Power Counter mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::timer> timer{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::counter> counter{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::lowpowercounter> lowpowercounter{};
        }
    }
    namespace Nonebitmode{    ///<Configure the number of bits used by the TIMER
        using Addr = Register::Address<0x40008508,0xfffffffc,0,unsigned>;
        ///Timer bit width
        enum class BitmodeVal {
            v16bit=0x00000000,     ///<16 bit timer bit width
            v08bit=0x00000001,     ///<8 bit timer bit width
            v24bit=0x00000002,     ///<24 bit timer bit width
            v32bit=0x00000003,     ///<32 bit timer bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BitmodeVal> bitmode{}; 
        namespace BitmodeValC{
            constexpr Register::FieldValue<decltype(bitmode),BitmodeVal::v16bit> v16bit{};
            constexpr Register::FieldValue<decltype(bitmode),BitmodeVal::v08bit> v08bit{};
            constexpr Register::FieldValue<decltype(bitmode),BitmodeVal::v24bit> v24bit{};
            constexpr Register::FieldValue<decltype(bitmode),BitmodeVal::v32bit> v32bit{};
        }
    }
    namespace Noneprescaler{    ///<Timer prescaler register
        using Addr = Register::Address<0x40008510,0xfffffff0,0,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
        namespace PrescalerValC{
        }
    }
    namespace Nonecc0{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008540,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace Nonecc1{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008544,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace Nonecc2{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008548,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace Nonecc3{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x4000854c,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace Nonecc4{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008550,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace Nonecc5{    ///<Description collection[0]:  Capture/Compare register 0
        using Addr = Register::Address<0x40008554,0x00000000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
}
