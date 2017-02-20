#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real time counter 0
    namespace Rtc0TasksStart{    ///<Start RTC COUNTER
        using Addr = Register::Address<0x4000b000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0TasksStop{    ///<Stop RTC COUNTER
        using Addr = Register::Address<0x4000b004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0TasksClear{    ///<Clear RTC COUNTER
        using Addr = Register::Address<0x4000b008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0TasksTrigovrflw{    ///<Set COUNTER to 0xFFFFF0
        using Addr = Register::Address<0x4000b00c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0EventsTick{    ///<Event on COUNTER increment
        using Addr = Register::Address<0x4000b100,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0EventsOvrflw{    ///<Event on COUNTER overflow
        using Addr = Register::Address<0x4000b104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000b304,0xfff0fffc,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_TICK event
        enum class TickVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_OVRFLW event
        enum class OvrflwVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::set> set{};
        }
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
    }
    namespace Rtc0Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000b308,0xfff0fffc,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_TICK event
        enum class TickVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_OVRFLW event
        enum class OvrflwVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::clear> clear{};
        }
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
    }
    namespace Rtc0Evten{    ///<Enable or disable event routing
        using Addr = Register::Address<0x4000b340,0xfff0fffc,0x00000000,unsigned>;
        ///Enable or disable event routing on EVENTS_TICK event
        enum class TickVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
        }
        ///Enable or disable event routing on EVENTS_OVRFLW event
        enum class OvrflwVal : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
        }
        ///Enable or disable event routing on EVENTS_COMPARE[0] event
        enum class Compare0Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Compare0Val> compare0{}; 
        namespace Compare0ValC{
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare0)::Type,Compare0Val::enabled> enabled{};
        }
        ///Enable or disable event routing on EVENTS_COMPARE[1] event
        enum class Compare1Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Compare1Val> compare1{}; 
        namespace Compare1ValC{
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare1)::Type,Compare1Val::enabled> enabled{};
        }
        ///Enable or disable event routing on EVENTS_COMPARE[2] event
        enum class Compare2Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Compare2Val> compare2{}; 
        namespace Compare2ValC{
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare2)::Type,Compare2Val::enabled> enabled{};
        }
        ///Enable or disable event routing on EVENTS_COMPARE[3] event
        enum class Compare3Val : unsigned {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Compare3Val> compare3{}; 
        namespace Compare3ValC{
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(compare3)::Type,Compare3Val::enabled> enabled{};
        }
    }
    namespace Rtc0Evtenset{    ///<Enable event routing
        using Addr = Register::Address<0x4000b344,0xfff0fffc,0x00000000,unsigned>;
        ///Write '1' to Enable event routing on EVENTS_TICK event
        enum class TickVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::set> set{};
        }
        ///Write '1' to Enable event routing on EVENTS_OVRFLW event
        enum class OvrflwVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::set> set{};
        }
        ///Write '1' to Enable event routing on EVENTS_COMPARE[0] event
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
        ///Write '1' to Enable event routing on EVENTS_COMPARE[1] event
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
        ///Write '1' to Enable event routing on EVENTS_COMPARE[2] event
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
        ///Write '1' to Enable event routing on EVENTS_COMPARE[3] event
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
    }
    namespace Rtc0Evtenclr{    ///<Disable event routing
        using Addr = Register::Address<0x4000b348,0xfff0fffc,0x00000000,unsigned>;
        ///Write '1' to Clear event routing on EVENTS_TICK event
        enum class TickVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TickVal> tick{}; 
        namespace TickValC{
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(tick)::Type,TickVal::clear> clear{};
        }
        ///Write '1' to Clear event routing on EVENTS_OVRFLW event
        enum class OvrflwVal : unsigned {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvrflwVal> ovrflw{}; 
        namespace OvrflwValC{
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ovrflw)::Type,OvrflwVal::clear> clear{};
        }
        ///Write '1' to Clear event routing on EVENTS_COMPARE[0] event
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
        ///Write '1' to Clear event routing on EVENTS_COMPARE[1] event
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
        ///Write '1' to Clear event routing on EVENTS_COMPARE[2] event
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
        ///Write '1' to Clear event routing on EVENTS_COMPARE[3] event
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
    }
    namespace Rtc0Counter{    ///<Current COUNTER value
        using Addr = Register::Address<0x4000b504,0xff000000,0x00000000,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Rtc0Prescaler{    ///<12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must be written when RTC is stopped
        using Addr = Register::Address<0x4000b508,0xfffff000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Rtc0EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b14c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc0Cc0{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b540,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc0Cc1{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b544,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc0Cc2{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b548,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc0Cc3{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b54c,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
}
