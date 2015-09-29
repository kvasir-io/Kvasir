#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonereseten{    ///<System Reset Source Enable
        using Addr = Register::Address<0x4002c000,0x07fff80b,0,unsigned>;
        ///Voltage Supply Monitor VBAT Reset Enable. 
        enum class vmonrenVal {
            disabled=0x00000000,     ///<Disable the Voltage Supply Monitor VBAT event as a reset source.
            enabled=0x00000001,     ///<Enable the Voltage Supply Monitor VBAT event as a reset source.
        };
        namespace vmonrenValC{
            constexpr MPL::Value<vmonrenVal,vmonrenVal::disabled> disabled{};
            constexpr MPL::Value<vmonrenVal,vmonrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vmonrenVal> vmonren{}; 
        ///Missing Clock Detector Reset Enable. 
        enum class mcdrenVal {
            disabled=0x00000000,     ///<Disable the Missing Clock Detector event as a reset source.
            enabled=0x00000001,     ///<Enable the Missing Clock Detector event as a reset source.
        };
        namespace mcdrenValC{
            constexpr MPL::Value<mcdrenVal,mcdrenVal::disabled> disabled{};
            constexpr MPL::Value<mcdrenVal,mcdrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mcdrenVal> mcdren{}; 
        ///Watchdog Timer Reset Enable. 
        enum class wdtrenVal {
            disabled=0x00000000,     ///<Disable the Watchdog Timer event as a reset source.
            enabled=0x00000001,     ///<Enable the Watchdog Timer event as a reset source.
        };
        namespace wdtrenValC{
            constexpr MPL::Value<wdtrenVal,wdtrenVal::disabled> disabled{};
            constexpr MPL::Value<wdtrenVal,wdtrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wdtrenVal> wdtren{}; 
        ///Software Reset. 
        enum class swrenVal {
            disabled=0x00000000,     ///<Do not generate a Software Reset.
            enabled=0x00000001,     ///<Generate a Software Reset.
        };
        namespace swrenValC{
            constexpr MPL::Value<swrenVal,swrenVal::disabled> disabled{};
            constexpr MPL::Value<swrenVal,swrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,swrenVal> swren{}; 
        ///Comparator 0 Reset Enable. 
        enum class cmp0renVal {
            disabled=0x00000000,     ///<Disable the Comparator 0 event as a reset source.
            enabled=0x00000001,     ///<Enable the Comparator 0 event as a reset source.
        };
        namespace cmp0renValC{
            constexpr MPL::Value<cmp0renVal,cmp0renVal::disabled> disabled{};
            constexpr MPL::Value<cmp0renVal,cmp0renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cmp0renVal> cmp0ren{}; 
        ///Comparator 1 Reset Enable. 
        enum class cmp1renVal {
            disabled=0x00000000,     ///<Disable the Comparator 1 event as a reset source.
            enabled=0x00000001,     ///<Enable the Comparator 1 event as a reset source.
        };
        namespace cmp1renValC{
            constexpr MPL::Value<cmp1renVal,cmp1renVal::disabled> disabled{};
            constexpr MPL::Value<cmp1renVal,cmp1renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cmp1renVal> cmp1ren{}; 
        ///Low Power Mode Charge Pump Supply Fail Reset Enable. 
        enum class cpfrenVal {
            disabled=0x00000000,     ///<Disable the low power mode charge pump supply fail event as a reset source.
            enabled=0x00000001,     ///<Enable the low power mode charge pump supply fail event as a reset source.
        };
        namespace cpfrenValC{
            constexpr MPL::Value<cpfrenVal,cpfrenVal::disabled> disabled{};
            constexpr MPL::Value<cpfrenVal,cpfrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cpfrenVal> cpfren{}; 
        ///RTC0 Reset Enable. 
        enum class rtc0renVal {
            disabled=0x00000000,     ///<Disable the RTC0 event as a reset source.
            enabled=0x00000001,     ///<Enable the RTC0 event as a reset source.
        };
        namespace rtc0renValC{
            constexpr MPL::Value<rtc0renVal,rtc0renVal::disabled> disabled{};
            constexpr MPL::Value<rtc0renVal,rtc0renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rtc0renVal> rtc0ren{}; 
        ///Low Power Mode Charge Pump Module Reset Enable. 
        enum class cpmrenVal {
            disabled=0x00000000,     ///<Disable low power mode charge pump module resets.
            enabled=0x00000001,     ///<Enable low power mode charge pump module resets.
        };
        namespace cpmrenValC{
            constexpr MPL::Value<cpmrenVal,cpmrenVal::disabled> disabled{};
            constexpr MPL::Value<cpmrenVal,cpmrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,cpmrenVal> cpmren{}; 
        ///UART0 Module Reset Enable. 
        enum class uart0mrenVal {
            disabled=0x00000000,     ///<Disable UART0 module resets.
            enabled=0x00000001,     ///<Enable UART0 module resets.
        };
        namespace uart0mrenValC{
            constexpr MPL::Value<uart0mrenVal,uart0mrenVal::disabled> disabled{};
            constexpr MPL::Value<uart0mrenVal,uart0mrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,uart0mrenVal> uart0mren{}; 
        ///LCD0 Module Reset Enable. 
        enum class lcd0mrenVal {
            disabled=0x00000000,     ///<Disable LCD0 module resets.
            enabled=0x00000001,     ///<Enable LCD0 module resets.
        };
        namespace lcd0mrenValC{
            constexpr MPL::Value<lcd0mrenVal,lcd0mrenVal::disabled> disabled{};
            constexpr MPL::Value<lcd0mrenVal,lcd0mrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,lcd0mrenVal> lcd0mren{}; 
        ///ACCTR0 Module Reset Enable. 
        enum class acc0mrenVal {
            disabled=0x00000000,     ///<Disable ACCTR0 module resets.
            enabled=0x00000001,     ///<Enable ACCTR0 module resets.
        };
        namespace acc0mrenValC{
            constexpr MPL::Value<acc0mrenVal,acc0mrenVal::disabled> disabled{};
            constexpr MPL::Value<acc0mrenVal,acc0mrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,acc0mrenVal> acc0mren{}; 
        ///RTC0 Module Reset Enable. 
        enum class rtc0mrenVal {
            disabled=0x00000000,     ///<Disable RTC0 module resets.
            enabled=0x00000001,     ///<Enable RTC0 module resets.
        };
        namespace rtc0mrenValC{
            constexpr MPL::Value<rtc0mrenVal,rtc0mrenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0mrenVal,rtc0mrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,rtc0mrenVal> rtc0mren{}; 
    }
    namespace Noneresetflag{    ///<System Reset Flags
        using Addr = Register::Address<0x4002c010,0xfffff000,0,unsigned>;
        ///Pin Reset Flag. 
        enum class pinrfVal {
            notSet=0x00000000,     ///<A /RESET pin event did not cause the last system reset.
            set=0x00000001,     ///<A /RESET pin event caused the last system reset.
        };
        namespace pinrfValC{
            constexpr MPL::Value<pinrfVal,pinrfVal::notSet> notSet{};
            constexpr MPL::Value<pinrfVal,pinrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pinrfVal> pinrf{}; 
        ///Power-On Reset Flag. 
        enum class porrfVal {
            notSet=0x00000000,     ///<A Power-On Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Power-On Reset event caused the last system reset.
        };
        namespace porrfValC{
            constexpr MPL::Value<porrfVal,porrfVal::notSet> notSet{};
            constexpr MPL::Value<porrfVal,porrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,porrfVal> porrf{}; 
        ///Voltage Supply Monitor VBAT Reset Flag. 
        enum class vmonrfVal {
            notSet=0x00000000,     ///<A Voltage Supply Monitor VBAT Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Voltage Supply Monitor VBAT Reset event caused the last system reset.
        };
        namespace vmonrfValC{
            constexpr MPL::Value<vmonrfVal,vmonrfVal::notSet> notSet{};
            constexpr MPL::Value<vmonrfVal,vmonrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,vmonrfVal> vmonrf{}; 
        ///Core Reset Flag. 
        enum class corerfVal {
            notSet=0x00000000,     ///<A Core Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Core Reset event caused the last system reset.
        };
        namespace corerfValC{
            constexpr MPL::Value<corerfVal,corerfVal::notSet> notSet{};
            constexpr MPL::Value<corerfVal,corerfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,corerfVal> corerf{}; 
        ///Missing Clock Detector Reset Flag. 
        enum class mcdrfVal {
            notSet=0x00000000,     ///<A Missing Clock Detector event did not cause the last system reset.
            set=0x00000001,     ///<A Missing Clock Detector event caused the last system reset.
        };
        namespace mcdrfValC{
            constexpr MPL::Value<mcdrfVal,mcdrfVal::notSet> notSet{};
            constexpr MPL::Value<mcdrfVal,mcdrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mcdrfVal> mcdrf{}; 
        ///Watchdog Timer Reset Flag. 
        enum class wdtrfVal {
            notSet=0x00000000,     ///<A Watchdog Timer event did not cause the last system reset.
            set=0x00000001,     ///<A Watchdog Timer event caused the last system reset.
        };
        namespace wdtrfValC{
            constexpr MPL::Value<wdtrfVal,wdtrfVal::notSet> notSet{};
            constexpr MPL::Value<wdtrfVal,wdtrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wdtrfVal> wdtrf{}; 
        ///Software Reset Flag. 
        enum class swrfVal {
            notSet=0x00000000,     ///<A Software Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Software Reset event caused the last system reset.
        };
        namespace swrfValC{
            constexpr MPL::Value<swrfVal,swrfVal::notSet> notSet{};
            constexpr MPL::Value<swrfVal,swrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,swrfVal> swrf{}; 
        ///Comparator 0 Reset Flag. 
        enum class cmp0rfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 0 event caused the last system reset.
        };
        namespace cmp0rfValC{
            constexpr MPL::Value<cmp0rfVal,cmp0rfVal::notSet> notSet{};
            constexpr MPL::Value<cmp0rfVal,cmp0rfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cmp0rfVal> cmp0rf{}; 
        ///Comparator 1 Reset Flag. 
        enum class cmp1rfVal {
            notSet=0x00000000,     ///<A Comparator 1 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 1 event caused the last system reset.
        };
        namespace cmp1rfValC{
            constexpr MPL::Value<cmp1rfVal,cmp1rfVal::notSet> notSet{};
            constexpr MPL::Value<cmp1rfVal,cmp1rfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cmp1rfVal> cmp1rf{}; 
        ///Low Power Mode Charge Pump Supply Fail Reset Flag. 
        enum class cpfrfVal {
            notSet=0x00000000,     ///<A low power mode charge pump supply fail event did not cause the last system reset.
            set=0x00000001,     ///<A low power mode charge pump supply fail event caused the last system reset.
        };
        namespace cpfrfValC{
            constexpr MPL::Value<cpfrfVal,cpfrfVal::notSet> notSet{};
            constexpr MPL::Value<cpfrfVal,cpfrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cpfrfVal> cpfrf{}; 
        ///RTC0 Reset Flag. 
        enum class rtc0rfVal {
            notSet=0x00000000,     ///<An RTC0 event did not cause the last system reset.
            set=0x00000001,     ///<An RTC0 event caused the last system reset.
        };
        namespace rtc0rfValC{
            constexpr MPL::Value<rtc0rfVal,rtc0rfVal::notSet> notSet{};
            constexpr MPL::Value<rtc0rfVal,rtc0rfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rtc0rfVal> rtc0rf{}; 
        ///PMU Wakeup Reset Flag. 
        enum class wakerfVal {
            notSet=0x00000000,     ///<A PMU Wakeup event did not cause the last system reset.
            set=0x00000001,     ///<A PMU Wakeup event caused the last system reset.
        };
        namespace wakerfValC{
            constexpr MPL::Value<wakerfVal,wakerfVal::notSet> notSet{};
            constexpr MPL::Value<wakerfVal,wakerfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,wakerfVal> wakerf{}; 
    }
}
