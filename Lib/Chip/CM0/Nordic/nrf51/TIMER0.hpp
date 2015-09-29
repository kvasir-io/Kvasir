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
        enum class compare0ClearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare0ClearValC{
            constexpr MPL::Value<compare0ClearVal,compare0ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare0ClearVal,compare0ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,compare0ClearVal> compare0Clear{}; 
        ///Shortcut between CC[1] event and the CLEAR task.
        enum class compare1ClearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare1ClearValC{
            constexpr MPL::Value<compare1ClearVal,compare1ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare1ClearVal,compare1ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,compare1ClearVal> compare1Clear{}; 
        ///Shortcut between CC[2] event and the CLEAR task.
        enum class compare2ClearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare2ClearValC{
            constexpr MPL::Value<compare2ClearVal,compare2ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare2ClearVal,compare2ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,compare2ClearVal> compare2Clear{}; 
        ///Shortcut between CC[3] event and the CLEAR task.
        enum class compare3ClearVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare3ClearValC{
            constexpr MPL::Value<compare3ClearVal,compare3ClearVal::disabled> disabled{};
            constexpr MPL::Value<compare3ClearVal,compare3ClearVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,compare3ClearVal> compare3Clear{}; 
        ///Shortcut between CC[0] event and the STOP task.
        enum class compare0StopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare0StopValC{
            constexpr MPL::Value<compare0StopVal,compare0StopVal::disabled> disabled{};
            constexpr MPL::Value<compare0StopVal,compare0StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,compare0StopVal> compare0Stop{}; 
        ///Shortcut between CC[1] event and the STOP task.
        enum class compare1StopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare1StopValC{
            constexpr MPL::Value<compare1StopVal,compare1StopVal::disabled> disabled{};
            constexpr MPL::Value<compare1StopVal,compare1StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,compare1StopVal> compare1Stop{}; 
        ///Shortcut between CC[2] event and the STOP task.
        enum class compare2StopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare2StopValC{
            constexpr MPL::Value<compare2StopVal,compare2StopVal::disabled> disabled{};
            constexpr MPL::Value<compare2StopVal,compare2StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,compare2StopVal> compare2Stop{}; 
        ///Shortcut between CC[3] event and the STOP task.
        enum class compare3StopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace compare3StopValC{
            constexpr MPL::Value<compare3StopVal,compare3StopVal::disabled> disabled{};
            constexpr MPL::Value<compare3StopVal,compare3StopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,compare3StopVal> compare3Stop{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40008304,0xfff0ffff,0,unsigned>;
        ///Enable interrupt on COMPARE[0]
        enum class compare0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
            constexpr MPL::Value<compare0Val,compare0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Enable interrupt on COMPARE[1]
        enum class compare1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
            constexpr MPL::Value<compare1Val,compare1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Enable interrupt on COMPARE[2]
        enum class compare2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
            constexpr MPL::Value<compare2Val,compare2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Enable interrupt on COMPARE[3]
        enum class compare3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
            constexpr MPL::Value<compare3Val,compare3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40008308,0xfff0ffff,0,unsigned>;
        ///Disable interrupt on COMPARE[0]
        enum class compare0Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
            constexpr MPL::Value<compare0Val,compare0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Disable interrupt on COMPARE[1]
        enum class compare1Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
            constexpr MPL::Value<compare1Val,compare1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Disable interrupt on COMPARE[2]
        enum class compare2Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
            constexpr MPL::Value<compare2Val,compare2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Disable interrupt on COMPARE[3]
        enum class compare3Val {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
            constexpr MPL::Value<compare3Val,compare3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
    }
    namespace Nonemode{    ///<Timer Mode selection.
        using Addr = Register::Address<0x40008504,0xfffffffe,0,unsigned>;
        ///Select Normal or Counter mode.
        enum class modeVal {
            counter=0x00000001,     ///<Timer in Counter mode.
            timer=0x00000000,     ///<Timer in Normal mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::counter> counter{};
            constexpr MPL::Value<modeVal,modeVal::timer> timer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonebitmode{    ///<Sets timer behaviour.
        using Addr = Register::Address<0x40008508,0xfffffffc,0,unsigned>;
        ///Sets timer behaviour ro be like the implementation of a timer with width as indicated.
        enum class bitmodeVal {
            v16bit=0x00000000,     ///<16-bit timer behaviour.
            v08bit=0x00000001,     ///<8-bit timer behaviour.
            v24bit=0x00000002,     ///<24-bit timer behaviour.
            v32bit=0x00000003,     ///<32-bit timer behaviour.
        };
        namespace bitmodeValC{
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v16bit> v16bit{};
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v08bit> v08bit{};
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v24bit> v24bit{};
            constexpr MPL::Value<bitmodeVal,bitmodeVal::v32bit> v32bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,bitmodeVal> bitmode{}; 
    }
    namespace Noneprescaler{    ///<4-bit prescaler to source clock frequency (max value 9). Source clock frequency is divided by 2^SCALE.
        using Addr = Register::Address<0x40008510,0xfffffff0,0,unsigned>;
        ///Timer PRESCALER value. Max value is 9.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
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
