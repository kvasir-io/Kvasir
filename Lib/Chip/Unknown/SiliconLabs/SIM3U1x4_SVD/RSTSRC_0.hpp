#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonereseten{    ///<System Reset Source Enable
        using Addr = Register::Address<0x4002d060,0xfffff00b,0,unsigned>;
        ///Voltage Supply Monitor VDD Reset Enable. 
        enum class VmonrenVal {
            disabled=0x00000000,     ///<Disable the Voltage Supply Monitor VDD event as a reset source.
            enabled=0x00000001,     ///<Enable the Voltage Supply Monitor VDD event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VmonrenVal> vmonren{}; 
        namespace VmonrenValC{
            constexpr Register::FieldValue<decltype(vmonren),VmonrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vmonren),VmonrenVal::enabled> enabled{};
        }
        ///Missing Clock Detector Reset Enable. 
        enum class McdrenVal {
            disabled=0x00000000,     ///<Disable the Missing Clock Detector event as a reset source.
            enabled=0x00000001,     ///<Enable the Missing Clock Detector event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,McdrenVal> mcdren{}; 
        namespace McdrenValC{
            constexpr Register::FieldValue<decltype(mcdren),McdrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mcdren),McdrenVal::enabled> enabled{};
        }
        ///Watchdog Timer Reset Enable. 
        enum class WdtrenVal {
            disabled=0x00000000,     ///<Disable the Watchdog Timer event as a reset source.
            enabled=0x00000001,     ///<Enable the Watchdog Timer event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WdtrenVal> wdtren{}; 
        namespace WdtrenValC{
            constexpr Register::FieldValue<decltype(wdtren),WdtrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wdtren),WdtrenVal::enabled> enabled{};
        }
        ///Software Reset. 
        enum class SwrenVal {
            disabled=0x00000000,     ///<Do not generate a Software Reset.
            enabled=0x00000001,     ///<Generate a Software Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SwrenVal> swren{}; 
        namespace SwrenValC{
            constexpr Register::FieldValue<decltype(swren),SwrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(swren),SwrenVal::enabled> enabled{};
        }
        ///Comparator 0 Reset Enable. 
        enum class Cmp0renVal {
            disabled=0x00000000,     ///<Disable the Comparator 0 event as a reset source.
            enabled=0x00000001,     ///<Enable the Comparator 0 event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Cmp0renVal> cmp0ren{}; 
        namespace Cmp0renValC{
            constexpr Register::FieldValue<decltype(cmp0ren),Cmp0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0ren),Cmp0renVal::enabled> enabled{};
        }
        ///Comparator 1 Reset Enable. 
        enum class Cmp1renVal {
            disabled=0x00000000,     ///<Disable the Comparator 1 event as a reset source.
            enabled=0x00000001,     ///<Enable the Comparator 1 event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Cmp1renVal> cmp1ren{}; 
        namespace Cmp1renValC{
            constexpr Register::FieldValue<decltype(cmp1ren),Cmp1renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1ren),Cmp1renVal::enabled> enabled{};
        }
        ///USB0 Reset Enable. 
        enum class Usb0renVal {
            disabled=0x00000000,     ///<Disable the USB0 reset event as a reset source.
            enabled=0x00000001,     ///<Enable the USB0 reset event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usb0renVal> usb0ren{}; 
        namespace Usb0renValC{
            constexpr Register::FieldValue<decltype(usb0ren),Usb0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usb0ren),Usb0renVal::enabled> enabled{};
        }
        ///RTC0 Reset Enable. 
        enum class Rtc0renVal {
            disabled=0x00000000,     ///<Disable the RTC0 event as a reset source.
            enabled=0x00000001,     ///<Enable the RTC0 event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Rtc0renVal> rtc0ren{}; 
        namespace Rtc0renValC{
            constexpr Register::FieldValue<decltype(rtc0ren),Rtc0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0ren),Rtc0renVal::enabled> enabled{};
        }
        ///PMU Wakeup Reset Enable. 
        enum class WakerenVal {
            enabled=0x00000001,     ///<Enable the PMU Wakeup event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WakerenVal> wakeren{}; 
        namespace WakerenValC{
            constexpr Register::FieldValue<decltype(wakeren),WakerenVal::enabled> enabled{};
        }
    }
    namespace Noneresetflag{    ///<System Reset Flags
        using Addr = Register::Address<0x4002d070,0xfffff000,0,unsigned>;
        ///Pin Reset Flag. 
        enum class PinrfVal {
            notSet=0x00000000,     ///<A /RESET pin event did not cause the last system reset.
            set=0x00000001,     ///<A /RESET pin event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PinrfVal> pinrf{}; 
        namespace PinrfValC{
            constexpr Register::FieldValue<decltype(pinrf),PinrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pinrf),PinrfVal::set> set{};
        }
        ///Power-On Reset Flag. 
        enum class PorrfVal {
            notSet=0x00000000,     ///<A Power-On Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Power-On Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PorrfVal> porrf{}; 
        namespace PorrfValC{
            constexpr Register::FieldValue<decltype(porrf),PorrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(porrf),PorrfVal::set> set{};
        }
        ///Voltage Supply Monitor VDD Reset Flag. 
        enum class VmonrfVal {
            notSet=0x00000000,     ///<A Voltage Supply Monitor VDD Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Voltage Supply Monitor VDD Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VmonrfVal> vmonrf{}; 
        namespace VmonrfValC{
            constexpr Register::FieldValue<decltype(vmonrf),VmonrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vmonrf),VmonrfVal::set> set{};
        }
        ///Core Reset Flag. 
        enum class CorerfVal {
            notSet=0x00000000,     ///<A Core Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Core Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CorerfVal> corerf{}; 
        namespace CorerfValC{
            constexpr Register::FieldValue<decltype(corerf),CorerfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(corerf),CorerfVal::set> set{};
        }
        ///Missing Clock Detector Reset Flag. 
        enum class McdrfVal {
            notSet=0x00000000,     ///<A Missing Clock Detector event did not cause the last system reset.
            set=0x00000001,     ///<A Missing Clock Detector event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,McdrfVal> mcdrf{}; 
        namespace McdrfValC{
            constexpr Register::FieldValue<decltype(mcdrf),McdrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(mcdrf),McdrfVal::set> set{};
        }
        ///Watchdog Timer Reset Flag. 
        enum class WdtrfVal {
            notSet=0x00000000,     ///<A Watchdog Timer event did not cause the last system reset.
            set=0x00000001,     ///<A Watchdog Timer event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WdtrfVal> wdtrf{}; 
        namespace WdtrfValC{
            constexpr Register::FieldValue<decltype(wdtrf),WdtrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wdtrf),WdtrfVal::set> set{};
        }
        ///Software Reset Flag. 
        enum class SwrfVal {
            notSet=0x00000000,     ///<A Software Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Software Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SwrfVal> swrf{}; 
        namespace SwrfValC{
            constexpr Register::FieldValue<decltype(swrf),SwrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swrf),SwrfVal::set> set{};
        }
        ///Comparator 0 Reset Flag. 
        enum class Cmp0rfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 0 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Cmp0rfVal> cmp0rf{}; 
        namespace Cmp0rfValC{
            constexpr Register::FieldValue<decltype(cmp0rf),Cmp0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0rf),Cmp0rfVal::set> set{};
        }
        ///Comparator 1 Reset Flag. 
        enum class Cmp1rfVal {
            notSet=0x00000000,     ///<A Comparator 1 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 1 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Cmp1rfVal> cmp1rf{}; 
        namespace Cmp1rfValC{
            constexpr Register::FieldValue<decltype(cmp1rf),Cmp1rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp1rf),Cmp1rfVal::set> set{};
        }
        ///USB0 Reset Flag. 
        enum class Usb0rfVal {
            notSet=0x00000000,     ///<A USB0 Reset event did not cause the last system reset.
            set=0x00000001,     ///<A USB0 Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usb0rfVal> usb0rf{}; 
        namespace Usb0rfValC{
            constexpr Register::FieldValue<decltype(usb0rf),Usb0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(usb0rf),Usb0rfVal::set> set{};
        }
        ///RTC0 Reset Flag. 
        enum class Rtc0rfVal {
            notSet=0x00000000,     ///<An RTC0 event did not cause the last system reset.
            set=0x00000001,     ///<An RTC0 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Rtc0rfVal> rtc0rf{}; 
        namespace Rtc0rfValC{
            constexpr Register::FieldValue<decltype(rtc0rf),Rtc0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0rf),Rtc0rfVal::set> set{};
        }
        ///PMU Wakeup Reset Flag. 
        enum class WakerfVal {
            notSet=0x00000000,     ///<A PMU Wakeup event did not cause the last system reset.
            set=0x00000001,     ///<A PMU Wakeup event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WakerfVal> wakerf{}; 
        namespace WakerfValC{
            constexpr Register::FieldValue<decltype(wakerf),WakerfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wakerf),WakerfVal::set> set{};
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
            constexpr Register::FieldValue<decltype(pmsel),PmselVal::pm9Dis> pm9Dis{};
            constexpr Register::FieldValue<decltype(pmsel),PmselVal::pm9En> pm9En{};
        }
    }
}
