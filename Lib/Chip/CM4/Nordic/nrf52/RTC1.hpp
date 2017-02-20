#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real time counter 1
    namespace Rtc1TasksStart{    ///<Start RTC COUNTER
        using Addr = Register::Address<0x40011000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1TasksStop{    ///<Stop RTC COUNTER
        using Addr = Register::Address<0x40011004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1TasksClear{    ///<Clear RTC COUNTER
        using Addr = Register::Address<0x40011008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1TasksTrigovrflw{    ///<Set COUNTER to 0xFFFFF0
        using Addr = Register::Address<0x4001100c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsTick{    ///<Event on COUNTER increment
        using Addr = Register::Address<0x40011100,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsOvrflw{    ///<Event on COUNTER overflow
        using Addr = Register::Address<0x40011104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40011304,0xfff0fffc,0x00000000,unsigned>;
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
    namespace Rtc1Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40011308,0xfff0fffc,0x00000000,unsigned>;
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
    namespace Rtc1Evten{    ///<Enable or disable event routing
        using Addr = Register::Address<0x40011340,0xfff0fffc,0x00000000,unsigned>;
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
    namespace Rtc1Evtenset{    ///<Enable event routing
        using Addr = Register::Address<0x40011344,0xfff0fffc,0x00000000,unsigned>;
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
    namespace Rtc1Evtenclr{    ///<Disable event routing
        using Addr = Register::Address<0x40011348,0xfff0fffc,0x00000000,unsigned>;
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
    namespace Rtc1Counter{    ///<Current COUNTER value
        using Addr = Register::Address<0x40011504,0xff000000,0x00000000,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Rtc1Prescaler{    ///<12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must be written when RTC is stopped
        using Addr = Register::Address<0x40011508,0xfffff000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Rtc1EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40011140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40011144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40011148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001114c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1Cc0{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x40011540,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1Cc1{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x40011544,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1Cc2{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x40011548,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1Cc3{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4001154c,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1EventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40011140,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40011144,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x40011148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1EventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4001114c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Rtc1Cc0{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x40011540,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1Cc1{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x40011544,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1Cc2{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x40011548,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Rtc1Cc3{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4001154c,0xff000000,0x00000000,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
}
