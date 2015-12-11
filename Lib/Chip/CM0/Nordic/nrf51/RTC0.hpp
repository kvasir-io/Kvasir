#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real time counter 0.
    namespace NonetasksStart{    ///<Start RTC Counter.
        using Addr = Register::Address<0x4000b000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop RTC Counter.
        using Addr = Register::Address<0x4000b004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClear{    ///<Clear RTC Counter.
        using Addr = Register::Address<0x4000b008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksTrigovrflw{    ///<Set COUNTER to 0xFFFFFFF0.
        using Addr = Register::Address<0x4000b00c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTick{    ///<Event on COUNTER increment.
        using Addr = Register::Address<0x4000b100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsOvrflw{    ///<Event on COUNTER overflow.
        using Addr = Register::Address<0x4000b104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare0{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x4000b140,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare1{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x4000b144,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare2{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x4000b148,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare3{    ///<Compare event on CC[n] match.
        using Addr = Register::Address<0x4000b14c,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x4000b304,0xfff0fffc,0,unsigned>;
        ///Enable interrupt on TICK event.
        enum class TickVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::set> set{};
        }
        ///Enable interrupt on OVRFLW event.
        enum class OvrflwVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::set> set{};
        }
        ///Enable interrupt on COMPARE[0] event.
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
        ///Enable interrupt on COMPARE[1] event.
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
        ///Enable interrupt on COMPARE[2] event.
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
        ///Enable interrupt on COMPARE[3] event.
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
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x4000b308,0xfff0fffc,0,unsigned>;
        ///Disable interrupt on TICK event.
        enum class TickVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::clear> clear{};
        }
        ///Disable interrupt on OVRFLW event.
        enum class OvrflwVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::clear> clear{};
        }
        ///Disable interrupt on COMPARE[0] event.
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
        ///Disable interrupt on COMPARE[1] event.
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
        ///Disable interrupt on COMPARE[2] event.
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
        ///Disable interrupt on COMPARE[3] event.
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
    namespace Noneevten{    ///<Configures event enable routing to PPI for each RTC event.
        using Addr = Register::Address<0x4000b340,0xfff0fffc,0,unsigned>;
        ///TICK event enable.
        enum class TickVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
        }
        ///OVRFLW event enable.
        enum class OvrflwVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
        }
        ///COMPARE[0] event enable.
        enum class Compare0Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
        }
        ///COMPARE[1] event enable.
        enum class Compare1Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
        }
        ///COMPARE[2] event enable.
        enum class Compare2Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
        }
        ///COMPARE[3] event enable.
        enum class Compare3Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
        }
    }
    namespace Noneevtenset{    ///<Enable events routing to PPI. The reading of this register gives the value of EVTEN.
        using Addr = Register::Address<0x4000b344,0xfff0fffc,0,unsigned>;
        ///Enable routing to PPI of TICK event.
        enum class TickVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::set> set{};
        }
        ///Enable routing to PPI of OVRFLW event.
        enum class OvrflwVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::set> set{};
        }
        ///Enable routing to PPI of COMPARE[0] event.
        enum class Compare0Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::set> set{};
        }
        ///Enable routing to PPI of COMPARE[1] event.
        enum class Compare1Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::set> set{};
        }
        ///Enable routing to PPI of COMPARE[2] event.
        enum class Compare2Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::set> set{};
        }
        ///Enable routing to PPI of COMPARE[3] event.
        enum class Compare3Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::set> set{};
        }
    }
    namespace Noneevtenclr{    ///<Disable events routing to PPI. The reading of this register gives the value of EVTEN.
        using Addr = Register::Address<0x4000b348,0xfff0fffc,0,unsigned>;
        ///Disable routing to PPI of TICK event.
        enum class TickVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::clear> clear{};
        }
        ///Disable routing to PPI of OVRFLW event.
        enum class OvrflwVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::clear> clear{};
        }
        ///Disable routing to PPI of COMPARE[0] event.
        enum class Compare0Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::clear> clear{};
        }
        ///Disable routing to PPI of COMPARE[1] event.
        enum class Compare1Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::clear> clear{};
        }
        ///Disable routing to PPI of COMPARE[2] event.
        enum class Compare2Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::clear> clear{};
        }
        ///Disable routing to PPI of COMPARE[3] event.
        enum class Compare3Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::clear> clear{};
        }
    }
    namespace Nonecounter{    ///<Current COUNTER value.
        using Addr = Register::Address<0x4000b504,0xff000000,0,unsigned>;
        ///Counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Noneprescaler{    ///<12-bit prescaler for COUNTER frequency (32768/(PRESCALER+1)). Must be written when RTC is STOPed.
        using Addr = Register::Address<0x4000b508,0xfffff000,0,unsigned>;
        ///RTC PRESCALER value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Nonecc0{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b540,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc1{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b544,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc2{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b548,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc3{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b54c,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000bffc,0xfffffffe,0,unsigned>;
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
