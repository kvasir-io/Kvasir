#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real time counter 0
    namespace NonetasksStart{    ///<Start RTC COUNTER
        using Addr = Register::Address<0x4000b000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop RTC COUNTER
        using Addr = Register::Address<0x4000b004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClear{    ///<Clear RTC COUNTER
        using Addr = Register::Address<0x4000b008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksTrigovrflw{    ///<Set COUNTER to 0xFFFFF0
        using Addr = Register::Address<0x4000b00c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTick{    ///<Event on COUNTER increment
        using Addr = Register::Address<0x4000b100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsOvrflw{    ///<Event on COUNTER overflow
        using Addr = Register::Address<0x4000b104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare0{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b140,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare1{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b144,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare2{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b148,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCompare3{    ///<Description collection[0]:  Compare event on CC[0] match
        using Addr = Register::Address<0x4000b14c,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4000b304,0xfff0fffc,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_TICK event
        enum class tickVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Write '1' to Enable interrupt on EVENTS_OVRFLW event
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
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
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4000b308,0xfff0fffc,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_TICK event
        enum class tickVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Write '1' to Clear interrupt on EVENTS_OVRFLW event
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
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
    }
    namespace Noneevten{    ///<Enable or disable event routing
        using Addr = Register::Address<0x4000b340,0xfff0fffc,0,unsigned>;
        ///Enable or disable event routing on EVENTS_TICK event
        enum class tickVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Enable or disable event routing on EVENTS_OVRFLW event
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Enable or disable event routing on EVENTS_COMPARE[0] event
        enum class compare0Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Enable or disable event routing on EVENTS_COMPARE[1] event
        enum class compare1Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Enable or disable event routing on EVENTS_COMPARE[2] event
        enum class compare2Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Enable or disable event routing on EVENTS_COMPARE[3] event
        enum class compare3Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
    }
    namespace Noneevtenset{    ///<Enable event routing
        using Addr = Register::Address<0x4000b344,0xfff0fffc,0,unsigned>;
        ///Write '1' to Enable event routing on EVENTS_TICK event
        enum class tickVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Write '1' to Enable event routing on EVENTS_OVRFLW event
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Write '1' to Enable event routing on EVENTS_COMPARE[0] event
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
        ///Write '1' to Enable event routing on EVENTS_COMPARE[1] event
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
        ///Write '1' to Enable event routing on EVENTS_COMPARE[2] event
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
        ///Write '1' to Enable event routing on EVENTS_COMPARE[3] event
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
    }
    namespace Noneevtenclr{    ///<Disable event routing
        using Addr = Register::Address<0x4000b348,0xfff0fffc,0,unsigned>;
        ///Write '1' to Clear event routing on EVENTS_TICK event
        enum class tickVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Write '1' to Clear event routing on EVENTS_OVRFLW event
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Write '1' to Clear event routing on EVENTS_COMPARE[0] event
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
        ///Write '1' to Clear event routing on EVENTS_COMPARE[1] event
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
        ///Write '1' to Clear event routing on EVENTS_COMPARE[2] event
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
        ///Write '1' to Clear event routing on EVENTS_COMPARE[3] event
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
    }
    namespace Nonecounter{    ///<Current COUNTER value
        using Addr = Register::Address<0x4000b504,0xff000000,0,unsigned>;
        ///Counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Noneprescaler{    ///<12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must be written when RTC is stopped
        using Addr = Register::Address<0x4000b508,0xfffff000,0,unsigned>;
        ///Prescaler value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Nonecc0{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b540,0xff000000,0,unsigned>;
        ///Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc1{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b544,0xff000000,0,unsigned>;
        ///Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc2{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b548,0xff000000,0,unsigned>;
        ///Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc3{    ///<Description collection[0]:  Compare register 0
        using Addr = Register::Address<0x4000b54c,0xff000000,0,unsigned>;
        ///Compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
}
