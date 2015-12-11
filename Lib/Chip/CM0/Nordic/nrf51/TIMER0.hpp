#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer 0.
    namespace NonetasksStart{    ///<Start Timer.
        using Addr = Register::Address<0x40008000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop Timer.
        using Addr = Register::Address<0x40008004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCount{    ///<Increment Timer (In counter mode).
        using Addr = Register::Address<0x40008008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClear{    ///<Clear timer.
        using Addr = Register::Address<0x4000800c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksShutdown{    ///<Shutdown timer.
        using Addr = Register::Address<0x40008010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture0{    ///<Capture Timer value to CC[n] registers.
        using Addr = Register::Address<0x40008040,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture1{    ///<Capture Timer value to CC[n] registers.
        using Addr = Register::Address<0x40008044,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture2{    ///<Capture Timer value to CC[n] registers.
        using Addr = Register::Address<0x40008048,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCapture3{    ///<Capture Timer value to CC[n] registers.
        using Addr = Register::Address<0x4000804c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare0{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x40008140,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare1{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x40008144,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare2{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x40008148,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare3{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x4000814c,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for Timer.
        using Addr = Register::Address<0x40008200,0xfffff0f0,0,unsigned>;
        ///Shortcut between CC[0] event and the CLEAR task.
        enum class Compare0clearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Compare0clearVal> compare0Clear{}; 
        namespace Compare0clearValC{
            constexpr Register::FieldValue<decltype(compare0Clear)::Type,Compare0clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Clear)::Type,Compare0clearVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[1] event and the CLEAR task.
        enum class Compare1clearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Compare1clearVal> compare1Clear{}; 
        namespace Compare1clearValC{
            constexpr Register::FieldValue<decltype(compare1Clear)::Type,Compare1clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Clear)::Type,Compare1clearVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[2] event and the CLEAR task.
        enum class Compare2clearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Compare2clearVal> compare2Clear{}; 
        namespace Compare2clearValC{
            constexpr Register::FieldValue<decltype(compare2Clear)::Type,Compare2clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Clear)::Type,Compare2clearVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[3] event and the CLEAR task.
        enum class Compare3clearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Compare3clearVal> compare3Clear{}; 
        namespace Compare3clearValC{
            constexpr Register::FieldValue<decltype(compare3Clear)::Type,Compare3clearVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Clear)::Type,Compare3clearVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[0] event and the STOP task.
        enum class Compare0stopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Compare0stopVal> compare0Stop{}; 
        namespace Compare0stopValC{
            constexpr Register::FieldValue<decltype(compare0Stop)::Type,Compare0stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0Stop)::Type,Compare0stopVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[1] event and the STOP task.
        enum class Compare1stopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Compare1stopVal> compare1Stop{}; 
        namespace Compare1stopValC{
            constexpr Register::FieldValue<decltype(compare1Stop)::Type,Compare1stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1Stop)::Type,Compare1stopVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[2] event and the STOP task.
        enum class Compare2stopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Compare2stopVal> compare2Stop{}; 
        namespace Compare2stopValC{
            constexpr Register::FieldValue<decltype(compare2Stop)::Type,Compare2stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2Stop)::Type,Compare2stopVal::enabled> enabled{};
        }
        }
        ///Shortcut between CC[3] event and the STOP task.
        enum class Compare3stopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Compare3stopVal> compare3Stop{}; 
        namespace Compare3stopValC{
            constexpr Register::FieldValue<decltype(compare3Stop)::Type,Compare3stopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3Stop)::Type,Compare3stopVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40008304,0xfff0ffff,0,unsigned>;
        ///Enable interrupt on COMPARE[0]
        enum class Compare0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::set> set{};
        }
        }
        ///Enable interrupt on COMPARE[1]
        enum class Compare1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::set> set{};
        }
        }
        ///Enable interrupt on COMPARE[2]
        enum class Compare2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::set> set{};
        }
        }
        ///Enable interrupt on COMPARE[3]
        enum class Compare3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40008308,0xfff0ffff,0,unsigned>;
        ///Disable interrupt on COMPARE[0]
        enum class Compare0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::clear> clear{};
        }
        }
        ///Disable interrupt on COMPARE[1]
        enum class Compare1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::clear> clear{};
        }
        }
        ///Disable interrupt on COMPARE[2]
        enum class Compare2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::clear> clear{};
        }
        }
        ///Disable interrupt on COMPARE[3]
        enum class Compare3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::clear> clear{};
        }
        }
    }
    namespace Nonemode{    ///<Timer Mode selection.
        using Addr = Register::Address<0x40008504,0xfffffffe,0,unsigned>;
        ///Select Normal or Counter mode.
        enum class ModeVal {
            counter=0x00000001,     ///<Timer in Counter mode.
            timer=0x00000000,     ///<Timer in Normal mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::counter> counter{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::timer> timer{};
        }
        }
    }
    namespace Nonebitmode{    ///<Sets timer behaviour.
        using Addr = Register::Address<0x40008508,0xfffffffc,0,unsigned>;
        ///Sets timer behaviour ro be like the implementation of a timer with width as indicated.
        enum class BitmodeVal {
            v16bit=0x00000000,     ///<16-bit timer behaviour.
            v08bit=0x00000001,     ///<8-bit timer behaviour.
            v24bit=0x00000002,     ///<24-bit timer behaviour.
            v32bit=0x00000003,     ///<32-bit timer behaviour.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BitmodeVal> bitmode{}; 
        namespace BitmodeValC{
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v16bit> v16bit{};
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v08bit> v08bit{};
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v24bit> v24bit{};
            constexpr Register::FieldValue<decltype(bitmode)::Type,BitmodeVal::v32bit> v32bit{};
        }
        }
    }
    namespace Noneprescaler{    ///<4-bit prescaler to source clock frequency (max value 9). Source clock frequency is divided by 2^SCALE.
        using Addr = Register::Address<0x40008510,0xfffffff0,0,unsigned>;
        ///Timer PRESCALER value. Max value is 9.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Nonecc0{    ///<Capture/compare registers.
        using Addr = Register::Address<0x40008540,0xffffffff,0,unsigned>;
    }
    namespace Nonecc1{    ///<Capture/compare registers.
        using Addr = Register::Address<0x40008544,0xffffffff,0,unsigned>;
    }
    namespace Nonecc2{    ///<Capture/compare registers.
        using Addr = Register::Address<0x40008548,0xffffffff,0,unsigned>;
    }
    namespace Nonecc3{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000854c,0xffffffff,0,unsigned>;
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40008ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
        }
    }
}
