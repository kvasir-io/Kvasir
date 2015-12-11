#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonereseten{    ///<System Reset Source Enable
        using Addr = Register::Address<0x4002d060,0xfffff20b,0,unsigned>;
        ///Voltage Supply Monitor VDD Reset Enable. 
        enum class VmonrenVal {
            disabled=0x00000000,     ///<Disable the Voltage Supply Monitor VDD event as a reset source.
            enabled=0x00000001,     ///<Enable the Voltage Supply Monitor VDD event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VmonrenVal> vmonren{}; 
        namespace VmonrenValC{
            constexpr Register::FieldValue<decltype(vmonren)::Type,VmonrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vmonren)::Type,VmonrenVal::enabled> enabled{};
        }
        }
        ///Missing Clock Detector Reset Enable. 
        enum class McdrenVal {
            disabled=0x00000000,     ///<Disable the Missing Clock Detector event as a reset source.
            enabled=0x00000001,     ///<Enable the Missing Clock Detector event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,McdrenVal> mcdren{}; 
        namespace McdrenValC{
            constexpr Register::FieldValue<decltype(mcdren)::Type,McdrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mcdren)::Type,McdrenVal::enabled> enabled{};
        }
        }
        ///Watchdog Timer Reset Enable. 
        enum class WdtrenVal {
            disabled=0x00000000,     ///<Disable the Watchdog Timer event as a reset source.
            enabled=0x00000001,     ///<Enable the Watchdog Timer event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WdtrenVal> wdtren{}; 
        namespace WdtrenValC{
            constexpr Register::FieldValue<decltype(wdtren)::Type,WdtrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wdtren)::Type,WdtrenVal::enabled> enabled{};
        }
        }
        ///Software Reset. 
        enum class SwrenVal {
            disabled=0x00000000,     ///<Do not generate a Software Reset.
            enabled=0x00000001,     ///<Generate a Software Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SwrenVal> swren{}; 
        namespace SwrenValC{
            constexpr Register::FieldValue<decltype(swren)::Type,SwrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(swren)::Type,SwrenVal::enabled> enabled{};
        }
        }
        ///Comparator 0 Reset Enable. 
        enum class Cmp0renVal {
            disabled=0x00000000,     ///<Disable the Comparator 0 event as a reset source.
            enabled=0x00000001,     ///<Enable the Comparator 0 event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Cmp0renVal> cmp0ren{}; 
        namespace Cmp0renValC{
            constexpr Register::FieldValue<decltype(cmp0ren)::Type,Cmp0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0ren)::Type,Cmp0renVal::enabled> enabled{};
        }
        }
        ///Comparator 1 Reset Enable. 
        enum class Cmp1renVal {
            disabled=0x00000000,     ///<Disable the Comparator 1 event as a reset source.
            enabled=0x00000001,     ///<Enable the Comparator 1 event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Cmp1renVal> cmp1ren{}; 
        namespace Cmp1renValC{
            constexpr Register::FieldValue<decltype(cmp1ren)::Type,Cmp1renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1ren)::Type,Cmp1renVal::enabled> enabled{};
        }
        }
        ///RTC0 Reset Enable. 
        enum class Rtc0renVal {
            disabled=0x00000000,     ///<Disable the RTC0 event as a reset source.
            enabled=0x00000001,     ///<Enable the RTC0 event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Rtc0renVal> rtc0ren{}; 
        namespace Rtc0renValC{
            constexpr Register::FieldValue<decltype(rtc0ren)::Type,Rtc0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0ren)::Type,Rtc0renVal::enabled> enabled{};
        }
        }
        ///PMU Wakeup Reset Enable. 
        enum class WakerenVal {
            enabled=0x00000001,     ///<Enable the PMU Wakeup event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WakerenVal> wakeren{}; 
        namespace WakerenValC{
            constexpr Register::FieldValue<decltype(wakeren)::Type,WakerenVal::enabled> enabled{};
        }
        }
    }
    namespace Noneresetflag{    ///<System Reset Flags
        using Addr = Register::Address<0x4002d070,0xfffff200,0,unsigned>;
        ///Pin Reset Flag. 
        enum class PinrfVal {
            notSet=0x00000000,     ///<A /RESET pin event did not cause the last system reset.
            set=0x00000001,     ///<A /RESET pin event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PinrfVal> pinrf{}; 
        namespace PinrfValC{
            constexpr Register::FieldValue<decltype(pinrf)::Type,PinrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pinrf)::Type,PinrfVal::set> set{};
        }
        }
        ///Power-On Reset Flag. 
        enum class PorrfVal {
            notSet=0x00000000,     ///<A Power-On Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Power-On Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PorrfVal> porrf{}; 
        namespace PorrfValC{
            constexpr Register::FieldValue<decltype(porrf)::Type,PorrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(porrf)::Type,PorrfVal::set> set{};
        }
        }
        ///Voltage Supply Monitor VDD Reset Flag. 
        enum class VmonrfVal {
            notSet=0x00000000,     ///<A Voltage Supply Monitor VDD Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Voltage Supply Monitor VDD Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VmonrfVal> vmonrf{}; 
        namespace VmonrfValC{
            constexpr Register::FieldValue<decltype(vmonrf)::Type,VmonrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vmonrf)::Type,VmonrfVal::set> set{};
        }
        }
        ///Core Reset Flag. 
        enum class CorerfVal {
            notSet=0x00000000,     ///<A Core Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Core Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CorerfVal> corerf{}; 
        namespace CorerfValC{
            constexpr Register::FieldValue<decltype(corerf)::Type,CorerfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(corerf)::Type,CorerfVal::set> set{};
        }
        }
        ///Missing Clock Detector Reset Flag. 
        enum class McdrfVal {
            notSet=0x00000000,     ///<A Missing Clock Detector event did not cause the last system reset.
            set=0x00000001,     ///<A Missing Clock Detector event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,McdrfVal> mcdrf{}; 
        namespace McdrfValC{
            constexpr Register::FieldValue<decltype(mcdrf)::Type,McdrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(mcdrf)::Type,McdrfVal::set> set{};
        }
        }
        ///Watchdog Timer Reset Flag. 
        enum class WdtrfVal {
            notSet=0x00000000,     ///<A Watchdog Timer event did not cause the last system reset.
            set=0x00000001,     ///<A Watchdog Timer event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WdtrfVal> wdtrf{}; 
        namespace WdtrfValC{
            constexpr Register::FieldValue<decltype(wdtrf)::Type,WdtrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wdtrf)::Type,WdtrfVal::set> set{};
        }
        }
        ///Software Reset Flag. 
        enum class SwrfVal {
            notSet=0x00000000,     ///<A Software Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Software Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SwrfVal> swrf{}; 
        namespace SwrfValC{
            constexpr Register::FieldValue<decltype(swrf)::Type,SwrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swrf)::Type,SwrfVal::set> set{};
        }
        }
        ///Comparator 0 Reset Flag. 
        enum class Cmp0rfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 0 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Cmp0rfVal> cmp0rf{}; 
        namespace Cmp0rfValC{
            constexpr Register::FieldValue<decltype(cmp0rf)::Type,Cmp0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0rf)::Type,Cmp0rfVal::set> set{};
        }
        }
        ///Comparator 1 Reset Flag. 
        enum class Cmp1rfVal {
            notSet=0x00000000,     ///<A Comparator 1 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 1 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Cmp1rfVal> cmp1rf{}; 
        namespace Cmp1rfValC{
            constexpr Register::FieldValue<decltype(cmp1rf)::Type,Cmp1rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp1rf)::Type,Cmp1rfVal::set> set{};
        }
        }
        ///RTC0 Reset Flag. 
        enum class Rtc0rfVal {
            notSet=0x00000000,     ///<An RTC0 event did not cause the last system reset.
            set=0x00000001,     ///<An RTC0 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Rtc0rfVal> rtc0rf{}; 
        namespace Rtc0rfValC{
            constexpr Register::FieldValue<decltype(rtc0rf)::Type,Rtc0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0rf)::Type,Rtc0rfVal::set> set{};
        }
        }
        ///PMU Wakeup Reset Flag. 
        enum class WakerfVal {
            notSet=0x00000000,     ///<A PMU Wakeup event did not cause the last system reset.
            set=0x00000001,     ///<A PMU Wakeup event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WakerfVal> wakerf{}; 
        namespace WakerfValC{
            constexpr Register::FieldValue<decltype(wakerf)::Type,WakerfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wakerf)::Type,WakerfVal::set> set{};
        }
        }
    }
    namespace Noneconfig{    ///<Configuration Options
        using Addr = Register::Address<0x4002d080,0xfffffffe,0,unsigned>;
        ///Power Mode Select. 
        enum class PmselVal {
            pm9Dis=0x00000000,     ///<Power Mode < PM9.
            pm9En=0x00000001,     ///<Power Mode = PM9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PmselVal> pmsel{}; 
        namespace PmselValC{
            constexpr Register::FieldValue<decltype(pmsel)::Type,PmselVal::pm9Dis> pm9Dis{};
            constexpr Register::FieldValue<decltype(pmsel)::Type,PmselVal::pm9En> pm9En{};
        }
        }
    }
}
