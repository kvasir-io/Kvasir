#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Rstsrc0Reseten{    ///<System Reset Source Enable
        using Addr = Register::Address<0x4002c000,0x07fff80b,0x00000000,unsigned>;
        ///Voltage Supply Monitor VBAT Reset Enable. 
        enum class VmonrenVal {
            disabled=0x00000000,     ///<Disable the Voltage Supply Monitor VBAT event as a reset source.
            enabled=0x00000001,     ///<Enable the Voltage Supply Monitor VBAT event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VmonrenVal> vmonren{}; 
        namespace VmonrenValC{
            constexpr Register::FieldValue<decltype(vmonren)::Type,VmonrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vmonren)::Type,VmonrenVal::enabled> enabled{};
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
        ///Low Power Mode Charge Pump Supply Fail Reset Enable. 
        enum class CpfrenVal {
            disabled=0x00000000,     ///<Disable the low power mode charge pump supply fail event as a reset source.
            enabled=0x00000001,     ///<Enable the low power mode charge pump supply fail event as a reset source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CpfrenVal> cpfren{}; 
        namespace CpfrenValC{
            constexpr Register::FieldValue<decltype(cpfren)::Type,CpfrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpfren)::Type,CpfrenVal::enabled> enabled{};
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
        ///Low Power Mode Charge Pump Module Reset Enable. 
        enum class CpmrenVal {
            disabled=0x00000000,     ///<Disable low power mode charge pump module resets.
            enabled=0x00000001,     ///<Enable low power mode charge pump module resets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,CpmrenVal> cpmren{}; 
        namespace CpmrenValC{
            constexpr Register::FieldValue<decltype(cpmren)::Type,CpmrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpmren)::Type,CpmrenVal::enabled> enabled{};
        }
        ///UART0 Module Reset Enable. 
        enum class Uart0mrenVal {
            disabled=0x00000000,     ///<Disable UART0 module resets.
            enabled=0x00000001,     ///<Enable UART0 module resets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Uart0mrenVal> uart0mren{}; 
        namespace Uart0mrenValC{
            constexpr Register::FieldValue<decltype(uart0mren)::Type,Uart0mrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0mren)::Type,Uart0mrenVal::enabled> enabled{};
        }
        ///LCD0 Module Reset Enable. 
        enum class Lcd0mrenVal {
            disabled=0x00000000,     ///<Disable LCD0 module resets.
            enabled=0x00000001,     ///<Enable LCD0 module resets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Lcd0mrenVal> lcd0mren{}; 
        namespace Lcd0mrenValC{
            constexpr Register::FieldValue<decltype(lcd0mren)::Type,Lcd0mrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lcd0mren)::Type,Lcd0mrenVal::enabled> enabled{};
        }
        ///ACCTR0 Module Reset Enable. 
        enum class Acc0mrenVal {
            disabled=0x00000000,     ///<Disable ACCTR0 module resets.
            enabled=0x00000001,     ///<Enable ACCTR0 module resets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Acc0mrenVal> acc0mren{}; 
        namespace Acc0mrenValC{
            constexpr Register::FieldValue<decltype(acc0mren)::Type,Acc0mrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acc0mren)::Type,Acc0mrenVal::enabled> enabled{};
        }
        ///RTC0 Module Reset Enable. 
        enum class Rtc0mrenVal {
            disabled=0x00000000,     ///<Disable RTC0 module resets.
            enabled=0x00000001,     ///<Enable RTC0 module resets.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Rtc0mrenVal> rtc0mren{}; 
        namespace Rtc0mrenValC{
            constexpr Register::FieldValue<decltype(rtc0mren)::Type,Rtc0mrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0mren)::Type,Rtc0mrenVal::enabled> enabled{};
        }
    }
    namespace Rstsrc0Resetflag{    ///<System Reset Flags
        using Addr = Register::Address<0x4002c010,0xfffff000,0x00000000,unsigned>;
        ///Pin Reset Flag. 
        enum class PinrfVal {
            notSet=0x00000000,     ///<A /RESET pin event did not cause the last system reset.
            set=0x00000001,     ///<A /RESET pin event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PinrfVal> pinrf{}; 
        namespace PinrfValC{
            constexpr Register::FieldValue<decltype(pinrf)::Type,PinrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pinrf)::Type,PinrfVal::set> set{};
        }
        ///Power-On Reset Flag. 
        enum class PorrfVal {
            notSet=0x00000000,     ///<A Power-On Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Power-On Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PorrfVal> porrf{}; 
        namespace PorrfValC{
            constexpr Register::FieldValue<decltype(porrf)::Type,PorrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(porrf)::Type,PorrfVal::set> set{};
        }
        ///Voltage Supply Monitor VBAT Reset Flag. 
        enum class VmonrfVal {
            notSet=0x00000000,     ///<A Voltage Supply Monitor VBAT Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Voltage Supply Monitor VBAT Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VmonrfVal> vmonrf{}; 
        namespace VmonrfValC{
            constexpr Register::FieldValue<decltype(vmonrf)::Type,VmonrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vmonrf)::Type,VmonrfVal::set> set{};
        }
        ///Core Reset Flag. 
        enum class CorerfVal {
            notSet=0x00000000,     ///<A Core Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Core Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CorerfVal> corerf{}; 
        namespace CorerfValC{
            constexpr Register::FieldValue<decltype(corerf)::Type,CorerfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(corerf)::Type,CorerfVal::set> set{};
        }
        ///Missing Clock Detector Reset Flag. 
        enum class McdrfVal {
            notSet=0x00000000,     ///<A Missing Clock Detector event did not cause the last system reset.
            set=0x00000001,     ///<A Missing Clock Detector event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,McdrfVal> mcdrf{}; 
        namespace McdrfValC{
            constexpr Register::FieldValue<decltype(mcdrf)::Type,McdrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(mcdrf)::Type,McdrfVal::set> set{};
        }
        ///Watchdog Timer Reset Flag. 
        enum class WdtrfVal {
            notSet=0x00000000,     ///<A Watchdog Timer event did not cause the last system reset.
            set=0x00000001,     ///<A Watchdog Timer event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WdtrfVal> wdtrf{}; 
        namespace WdtrfValC{
            constexpr Register::FieldValue<decltype(wdtrf)::Type,WdtrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wdtrf)::Type,WdtrfVal::set> set{};
        }
        ///Software Reset Flag. 
        enum class SwrfVal {
            notSet=0x00000000,     ///<A Software Reset event did not cause the last system reset.
            set=0x00000001,     ///<A Software Reset event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SwrfVal> swrf{}; 
        namespace SwrfValC{
            constexpr Register::FieldValue<decltype(swrf)::Type,SwrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swrf)::Type,SwrfVal::set> set{};
        }
        ///Comparator 0 Reset Flag. 
        enum class Cmp0rfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 0 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Cmp0rfVal> cmp0rf{}; 
        namespace Cmp0rfValC{
            constexpr Register::FieldValue<decltype(cmp0rf)::Type,Cmp0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0rf)::Type,Cmp0rfVal::set> set{};
        }
        ///Comparator 1 Reset Flag. 
        enum class Cmp1rfVal {
            notSet=0x00000000,     ///<A Comparator 1 event did not cause the last system reset.
            set=0x00000001,     ///<A Comparator 1 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Cmp1rfVal> cmp1rf{}; 
        namespace Cmp1rfValC{
            constexpr Register::FieldValue<decltype(cmp1rf)::Type,Cmp1rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp1rf)::Type,Cmp1rfVal::set> set{};
        }
        ///Low Power Mode Charge Pump Supply Fail Reset Flag. 
        enum class CpfrfVal {
            notSet=0x00000000,     ///<A low power mode charge pump supply fail event did not cause the last system reset.
            set=0x00000001,     ///<A low power mode charge pump supply fail event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CpfrfVal> cpfrf{}; 
        namespace CpfrfValC{
            constexpr Register::FieldValue<decltype(cpfrf)::Type,CpfrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cpfrf)::Type,CpfrfVal::set> set{};
        }
        ///RTC0 Reset Flag. 
        enum class Rtc0rfVal {
            notSet=0x00000000,     ///<An RTC0 event did not cause the last system reset.
            set=0x00000001,     ///<An RTC0 event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Rtc0rfVal> rtc0rf{}; 
        namespace Rtc0rfValC{
            constexpr Register::FieldValue<decltype(rtc0rf)::Type,Rtc0rfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0rf)::Type,Rtc0rfVal::set> set{};
        }
        ///PMU Wakeup Reset Flag. 
        enum class WakerfVal {
            notSet=0x00000000,     ///<A PMU Wakeup event did not cause the last system reset.
            set=0x00000001,     ///<A PMU Wakeup event caused the last system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WakerfVal> wakerf{}; 
        namespace WakerfValC{
            constexpr Register::FieldValue<decltype(wakerf)::Type,WakerfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wakerf)::Type,WakerfVal::set> set{};
        }
    }
}
