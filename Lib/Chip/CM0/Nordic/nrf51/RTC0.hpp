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
        enum class tickVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Enable interrupt on OVRFLW event.
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Enable interrupt on COMPARE[0] event.
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
        ///Enable interrupt on COMPARE[1] event.
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
        ///Enable interrupt on COMPARE[2] event.
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
        ///Enable interrupt on COMPARE[3] event.
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
        using Addr = Register::Address<0x4000b308,0xfff0fffc,0,unsigned>;
        ///Disable interrupt on TICK event.
        enum class tickVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Disable interrupt on OVRFLW event.
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Disable interrupt on COMPARE[0] event.
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
        ///Disable interrupt on COMPARE[1] event.
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
        ///Disable interrupt on COMPARE[2] event.
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
        ///Disable interrupt on COMPARE[3] event.
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
    namespace Noneevten{    ///<Configures event enable routing to PPI for each RTC event.
        using Addr = Register::Address<0x4000b340,0xfff0fffc,0,unsigned>;
        ///TICK event enable.
        enum class tickVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///OVRFLW event enable.
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///COMPARE[0] event enable.
        enum class compare0Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///COMPARE[1] event enable.
        enum class compare1Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///COMPARE[2] event enable.
        enum class compare2Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///COMPARE[3] event enable.
        enum class compare3Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
    }
    namespace Noneevtenset{    ///<Enable events routing to PPI. The reading of this register gives the value of EVTEN.
        using Addr = Register::Address<0x4000b344,0xfff0fffc,0,unsigned>;
        ///Enable routing to PPI of TICK event.
        enum class tickVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Enable routing to PPI of OVRFLW event.
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Enable routing to PPI of COMPARE[0] event.
        enum class compare0Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
            constexpr MPL::Value<compare0Val,compare0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Enable routing to PPI of COMPARE[1] event.
        enum class compare1Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
            constexpr MPL::Value<compare1Val,compare1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Enable routing to PPI of COMPARE[2] event.
        enum class compare2Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
            constexpr MPL::Value<compare2Val,compare2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Enable routing to PPI of COMPARE[3] event.
        enum class compare3Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            set=0x00000001,     ///<Enable event on write.
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
            constexpr MPL::Value<compare3Val,compare3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
    }
    namespace Noneevtenclr{    ///<Disable events routing to PPI. The reading of this register gives the value of EVTEN.
        using Addr = Register::Address<0x4000b348,0xfff0fffc,0,unsigned>;
        ///Disable routing to PPI of TICK event.
        enum class tickVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        namespace tickValC{
            constexpr MPL::Value<tickVal,tickVal::disabled> disabled{};
            constexpr MPL::Value<tickVal,tickVal::enabled> enabled{};
            constexpr MPL::Value<tickVal,tickVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tickVal> tick{}; 
        ///Disable routing to PPI of OVRFLW event.
        enum class ovrflwVal {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        namespace ovrflwValC{
            constexpr MPL::Value<ovrflwVal,ovrflwVal::disabled> disabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::enabled> enabled{};
            constexpr MPL::Value<ovrflwVal,ovrflwVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovrflwVal> ovrflw{}; 
        ///Disable routing to PPI of COMPARE[0] event.
        enum class compare0Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        namespace compare0ValC{
            constexpr MPL::Value<compare0Val,compare0Val::disabled> disabled{};
            constexpr MPL::Value<compare0Val,compare0Val::enabled> enabled{};
            constexpr MPL::Value<compare0Val,compare0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,compare0Val> compare0{}; 
        ///Disable routing to PPI of COMPARE[1] event.
        enum class compare1Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        namespace compare1ValC{
            constexpr MPL::Value<compare1Val,compare1Val::disabled> disabled{};
            constexpr MPL::Value<compare1Val,compare1Val::enabled> enabled{};
            constexpr MPL::Value<compare1Val,compare1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,compare1Val> compare1{}; 
        ///Disable routing to PPI of COMPARE[2] event.
        enum class compare2Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        namespace compare2ValC{
            constexpr MPL::Value<compare2Val,compare2Val::disabled> disabled{};
            constexpr MPL::Value<compare2Val,compare2Val::enabled> enabled{};
            constexpr MPL::Value<compare2Val,compare2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,compare2Val> compare2{}; 
        ///Disable routing to PPI of COMPARE[3] event.
        enum class compare3Val {
            disabled=0x00000000,     ///<Event disabled.
            enabled=0x00000001,     ///<Event enabled.
            clear=0x00000001,     ///<Disable event on write.
        };
        namespace compare3ValC{
            constexpr MPL::Value<compare3Val,compare3Val::disabled> disabled{};
            constexpr MPL::Value<compare3Val,compare3Val::enabled> enabled{};
            constexpr MPL::Value<compare3Val,compare3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,compare3Val> compare3{}; 
    }
    namespace Nonecounter{    ///<Current COUNTER value.
        using Addr = Register::Address<0x4000b504,0xff000000,0,unsigned>;
        ///Counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Noneprescaler{    ///<12-bit prescaler for COUNTER frequency (32768/(PRESCALER+1)). Must be written when RTC is STOPed.
        using Addr = Register::Address<0x4000b508,0xfffff000,0,unsigned>;
        ///RTC PRESCALER value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace Nonecc0{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b540,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc1{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b544,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc2{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b548,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonecc3{    ///<Capture/compare registers.
        using Addr = Register::Address<0x4000b54c,0xff000000,0,unsigned>;
        ///Compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> compare{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x4000bffc,0xfffffffe,0,unsigned>;
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
