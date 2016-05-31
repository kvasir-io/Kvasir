#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Pmu0Control{    ///<Module Control
        using Addr = Register::Address<0x40048000,0xffffffe0,0x00000000,unsigned>;
        ///Wakeup Source Clear. 
        enum class WakeclrVal {
            clear=0x00000000,     ///<Clear all wakeup sources.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WakeclrVal> wakeclr{}; 
        namespace WakeclrValC{
            constexpr Register::FieldValue<decltype(wakeclr)::Type,WakeclrVal::clear> clear{};
        }
        ///Peripheral Low Power Enable. 
        enum class PerilpenVal {
            disabled=0x00000000,     ///<Disable the peripheral low power state.
            enabled=0x00000001,     ///<Enable the peripheral low power state. The peripherals will not be accessible in this state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PerilpenVal> perilpen{}; 
        namespace PerilpenValC{
            constexpr Register::FieldValue<decltype(perilpen)::Type,PerilpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(perilpen)::Type,PerilpenVal::enabled> enabled{};
        }
        ///Pin Low Power Enable. 
        enum class PinlpenVal {
            disabled=0x00000000,     ///<Disable the pin low power state.
            enabled=0x00000001,     ///<Enable the pin low power state. The pins will not be accessible in this state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PinlpenVal> pinlpen{}; 
        namespace PinlpenValC{
            constexpr Register::FieldValue<decltype(pinlpen)::Type,PinlpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pinlpen)::Type,PinlpenVal::enabled> enabled{};
        }
        ///Pin Wake Match Enable. 
        enum class PwakeenVal {
            disabled=0x00000000,     ///<Disable Pin Wake.
            enabled=0x00000001,     ///<Enable Pin Wake.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PwakeenVal> pwakeen{}; 
        namespace PwakeenValC{
            constexpr Register::FieldValue<decltype(pwakeen)::Type,PwakeenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwakeen)::Type,PwakeenVal::enabled> enabled{};
        }
        ///PMU Asleep Pin Enable. 
        enum class PmuaslpenVal {
            disabled=0x00000000,     ///<Disable the PMU Asleep pin.
            enabled=0x00000001,     ///<Enable the PMU Asleep pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PmuaslpenVal> pmuaslpen{}; 
        namespace PmuaslpenValC{
            constexpr Register::FieldValue<decltype(pmuaslpen)::Type,PmuaslpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pmuaslpen)::Type,PmuaslpenVal::enabled> enabled{};
        }
    }
    namespace Pmu0Config{    ///<Module Configuration
        using Addr = Register::Address<0x40048010,0xffff1cff,0x00000000,unsigned>;
        ///RTC0 Fail RTC0/LPTIMER0 Reset Enable. 
        enum class Rtc0frenVal {
            disabled=0x00000000,     ///<An RTC0 fail event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<An RTC0 fail event causes the RTC0 and LPTIMER0 modules to reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Rtc0frenVal> rtc0fren{}; 
        namespace Rtc0frenValC{
            constexpr Register::FieldValue<decltype(rtc0fren)::Type,Rtc0frenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0fren)::Type,Rtc0frenVal::enabled> enabled{};
        }
        ///RTC0 Alarm RTC0/LPTIMER0 Reset Enable. 
        enum class Rtc0arenVal {
            disabled=0x00000000,     ///<An RTC0 alarm event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<An RTC0 alarm event causes the RTC0 and LPTIMER0 modules to reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Rtc0arenVal> rtc0aren{}; 
        namespace Rtc0arenValC{
            constexpr Register::FieldValue<decltype(rtc0aren)::Type,Rtc0arenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0aren)::Type,Rtc0arenVal::enabled> enabled{};
        }
        ///Comparator 0 RTC0/LPTIMER0 Reset Enable. 
        enum class Cmp0renVal {
            disabled=0x00000000,     ///<A Comparator 0 event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<A Comparator 0 event causes the RTC0 and LPTIMER0 modules to reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Cmp0renVal> cmp0ren{}; 
        namespace Cmp0renValC{
            constexpr Register::FieldValue<decltype(cmp0ren)::Type,Cmp0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0ren)::Type,Cmp0renVal::enabled> enabled{};
        }
        ///Pin Wake RTC0/LPTIMER0 Reset Enable. 
        enum class PwakerenVal {
            disabled=0x00000000,     ///<A Pin Wake event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<A Pin Wake event causes the RTC0 and LPTIMER0 modules to reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,PwakerenVal> pwakeren{}; 
        namespace PwakerenValC{
            constexpr Register::FieldValue<decltype(pwakeren)::Type,PwakerenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwakeren)::Type,PwakerenVal::enabled> enabled{};
        }
        ///Low Power Timer RTC0/LPTIMER0 Reset Enable. 
        enum class Lpt0renVal {
            disabled=0x00000000,     ///<An LPTIMER0 event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<An LPTIMER0 event causes the RTC0 and LPTIMER0 modules to reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Lpt0renVal> lpt0ren{}; 
        namespace Lpt0renValC{
            constexpr Register::FieldValue<decltype(lpt0ren)::Type,Lpt0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpt0ren)::Type,Lpt0renVal::enabled> enabled{};
        }
    }
    namespace Pmu0Status{    ///<Module Status
        using Addr = Register::Address<0x40048020,0xfffffff8,0x00000000,unsigned>;
        ///Power Mode 9 Exited Flag. 
        enum class Pm9efVal {
            notSet=0x00000000,     ///<The device has not exited Power Mode 9.
            set=0x00000001,     ///<The device has exited Power Mode 9. This bit must be cleared by firmware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pm9efVal> pm9ef{}; 
        namespace Pm9efValC{
            constexpr Register::FieldValue<decltype(pm9ef)::Type,Pm9efVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pm9ef)::Type,Pm9efVal::set> set{};
        }
        ///Pin Wake Status Flag. 
        enum class PwakefVal {
            set=0x00000000,     ///<A Pin Wake event has occurred.
            notSet=0x00000001,     ///<A Pin Wake event has not occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PwakefVal> pwakef{}; 
        namespace PwakefValC{
            constexpr Register::FieldValue<decltype(pwakef)::Type,PwakefVal::set> set{};
            constexpr Register::FieldValue<decltype(pwakef)::Type,PwakefVal::notSet> notSet{};
        }
        ///Power-On Reset Flag. 
        enum class PorfVal {
            notSet=0x00000000,     ///<A power-on reset did not occur since the last time PORF was cleared.
            set=0x00000001,     ///<A power-on reset occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PorfVal> porf{}; 
        namespace PorfValC{
            constexpr Register::FieldValue<decltype(porf)::Type,PorfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(porf)::Type,PorfVal::set> set{};
        }
    }
    namespace Pmu0Wakeen{    ///<Wake Source Enable
        using Addr = Register::Address<0x40048030,0xfffffe1c,0x00000000,unsigned>;
        ///RTC0 Fail Wake Enable. 
        enum class Rtc0fwenVal {
            disabled=0x00000000,     ///<An RTC0 fail event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 fail event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rtc0fwenVal> rtc0fwen{}; 
        namespace Rtc0fwenValC{
            constexpr Register::FieldValue<decltype(rtc0fwen)::Type,Rtc0fwenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0fwen)::Type,Rtc0fwenVal::enabled> enabled{};
        }
        ///RTC0 Alarm Wake Enable. 
        enum class Rtc0awenVal {
            disabled=0x00000000,     ///<An RTC0 alarm event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 alarm event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rtc0awenVal> rtc0awen{}; 
        namespace Rtc0awenValC{
            constexpr Register::FieldValue<decltype(rtc0awen)::Type,Rtc0awenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0awen)::Type,Rtc0awenVal::enabled> enabled{};
        }
        ///Comparator 0 Wake Enable. 
        enum class Cmp0wenVal {
            disabled=0x00000000,     ///<A Comparator 0 event does not wake the device.
            enabled=0x00000001,     ///<A Comparator 0 event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cmp0wenVal> cmp0wen{}; 
        namespace Cmp0wenValC{
            constexpr Register::FieldValue<decltype(cmp0wen)::Type,Cmp0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0wen)::Type,Cmp0wenVal::enabled> enabled{};
        }
        ///Pin Wake Wake Enable. 
        enum class PwakewenVal {
            disabled=0x00000000,     ///<A Pin Wake event does not wake the device.
            enabled=0x00000001,     ///<A Pin Wake event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PwakewenVal> pwakewen{}; 
        namespace PwakewenValC{
            constexpr Register::FieldValue<decltype(pwakewen)::Type,PwakewenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwakewen)::Type,PwakewenVal::enabled> enabled{};
        }
        ///Low Power Timer Wake Enable. 
        enum class Lpt0wenVal {
            disabled=0x00000000,     ///<An LPTIMER0 event does not wake the device.
            enabled=0x00000001,     ///<An LPTIMER0 event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Lpt0wenVal> lpt0wen{}; 
        namespace Lpt0wenValC{
            constexpr Register::FieldValue<decltype(lpt0wen)::Type,Lpt0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpt0wen)::Type,Lpt0wenVal::enabled> enabled{};
        }
        ///Reset Pin Wake Enable. 
        enum class RstwenVal {
            disabled=0x00000000,     ///<A /RESET Pin event does not wake the device.
            enabled=0x00000001,     ///<A /RESET Pin event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RstwenVal> rstwen{}; 
        namespace RstwenValC{
            constexpr Register::FieldValue<decltype(rstwen)::Type,RstwenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rstwen)::Type,RstwenVal::enabled> enabled{};
        }
    }
    namespace Pmu0Wakestatus{    ///<Wake Source Status
        using Addr = Register::Address<0x40048040,0xfffffe1c,0x00000000,unsigned>;
        ///RTC0 Fail Wake Flag. 
        enum class Rtc0fwfVal {
            notSet=0x00000000,     ///<An RTC0 fail event did not wake the device.
            set=0x00000001,     ///<An RTC0 fail event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Rtc0fwfVal> rtc0fwf{}; 
        namespace Rtc0fwfValC{
            constexpr Register::FieldValue<decltype(rtc0fwf)::Type,Rtc0fwfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0fwf)::Type,Rtc0fwfVal::set> set{};
        }
        ///RTC0 Alarm Wake Flag. 
        enum class Rtc0awfVal {
            notSet=0x00000000,     ///<An RTC0 alarm event did not wake the device.
            set=0x00000001,     ///<An RTC0 alarm event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Rtc0awfVal> rtc0awf{}; 
        namespace Rtc0awfValC{
            constexpr Register::FieldValue<decltype(rtc0awf)::Type,Rtc0awfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0awf)::Type,Rtc0awfVal::set> set{};
        }
        ///Comparator 0 Wake Flag. 
        enum class Cmp0wfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not wake the device.
            set=0x00000001,     ///<A Comparator 0 event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Cmp0wfVal> cmp0wf{}; 
        namespace Cmp0wfValC{
            constexpr Register::FieldValue<decltype(cmp0wf)::Type,Cmp0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0wf)::Type,Cmp0wfVal::set> set{};
        }
        ///Pin Wake Wake Flag. 
        enum class PwakewfVal {
            notSet=0x00000000,     ///<A Pin Wake event did not wake the device.
            set=0x00000001,     ///<A Pin Wake event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PwakewfVal> pwakewf{}; 
        namespace PwakewfValC{
            constexpr Register::FieldValue<decltype(pwakewf)::Type,PwakewfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pwakewf)::Type,PwakewfVal::set> set{};
        }
        ///Low Power Timer Wake Flag. 
        enum class Lpt0wfVal {
            notSet=0x00000000,     ///<An LPTIMER0 event did not wake the device.
            set=0x00000001,     ///<An LPTIMER0 event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lpt0wfVal> lpt0wf{}; 
        namespace Lpt0wfValC{
            constexpr Register::FieldValue<decltype(lpt0wf)::Type,Lpt0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lpt0wf)::Type,Lpt0wfVal::set> set{};
        }
        ///Reset Pin Wake Flag. 
        enum class RstwfVal {
            notSet=0x00000000,     ///<A /RESET Pin event did not wake the device.
            set=0x00000001,     ///<A /RESET Pin event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RstwfVal> rstwf{}; 
        namespace RstwfValC{
            constexpr Register::FieldValue<decltype(rstwf)::Type,RstwfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rstwf)::Type,RstwfVal::set> set{};
        }
    }
    namespace Pmu0Pwen{    ///<Pin Wake Pin Enable
        using Addr = Register::Address<0x40048050,0xffff0000,0x00000000,unsigned>;
        ///WAKE.0 Enable. 
        enum class Pw0enVal {
            disabled=0x00000000,     ///<WAKE.0 (PB1.13) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.0 (PB1.13) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pw0enVal> pw0en{}; 
        namespace Pw0enValC{
            constexpr Register::FieldValue<decltype(pw0en)::Type,Pw0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw0en)::Type,Pw0enVal::enabled> enabled{};
        }
        ///WAKE.1 Enable. 
        enum class Pw1enVal {
            disabled=0x00000000,     ///<WAKE.1 (PB1.14) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.1 (PB1.14) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pw1enVal> pw1en{}; 
        namespace Pw1enValC{
            constexpr Register::FieldValue<decltype(pw1en)::Type,Pw1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw1en)::Type,Pw1enVal::enabled> enabled{};
        }
        ///WAKE.2 Enable. 
        enum class Pw2enVal {
            disabled=0x00000000,     ///<WAKE.2 (PB1.15) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.2 (PB1.15) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pw2enVal> pw2en{}; 
        namespace Pw2enValC{
            constexpr Register::FieldValue<decltype(pw2en)::Type,Pw2enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw2en)::Type,Pw2enVal::enabled> enabled{};
        }
        ///WAKE.3 Enable. 
        enum class Pw3enVal {
            disabled=0x00000000,     ///<WAKE.3 (PB2.0) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.3 (PB2.0) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pw3enVal> pw3en{}; 
        namespace Pw3enValC{
            constexpr Register::FieldValue<decltype(pw3en)::Type,Pw3enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw3en)::Type,Pw3enVal::enabled> enabled{};
        }
        ///WAKE.4 Enable. 
        enum class Pw4enVal {
            disabled=0x00000000,     ///<WAKE.4 (PB2.1) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.4 (PB2.1) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pw4enVal> pw4en{}; 
        namespace Pw4enValC{
            constexpr Register::FieldValue<decltype(pw4en)::Type,Pw4enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw4en)::Type,Pw4enVal::enabled> enabled{};
        }
        ///WAKE.5 Enable. 
        enum class Pw5enVal {
            disabled=0x00000000,     ///<WAKE.5 (PB2.2) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.5 (PB2.2) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pw5enVal> pw5en{}; 
        namespace Pw5enValC{
            constexpr Register::FieldValue<decltype(pw5en)::Type,Pw5enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw5en)::Type,Pw5enVal::enabled> enabled{};
        }
        ///WAKE.6 Enable. 
        enum class Pw6enVal {
            disabled=0x00000000,     ///<WAKE.6 (PB2.3) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.6 (PB2.3) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pw6enVal> pw6en{}; 
        namespace Pw6enValC{
            constexpr Register::FieldValue<decltype(pw6en)::Type,Pw6enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw6en)::Type,Pw6enVal::enabled> enabled{};
        }
        ///WAKE.7 Enable. 
        enum class Pw7enVal {
            disabled=0x00000000,     ///<WAKE.7 (PB2.4) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.7 (PB2.4) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pw7enVal> pw7en{}; 
        namespace Pw7enValC{
            constexpr Register::FieldValue<decltype(pw7en)::Type,Pw7enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw7en)::Type,Pw7enVal::enabled> enabled{};
        }
        ///WAKE.8 Enable. 
        enum class Pw8enVal {
            disabled=0x00000000,     ///<WAKE.8 (PB3.4) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.8 (PB3.4) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pw8enVal> pw8en{}; 
        namespace Pw8enValC{
            constexpr Register::FieldValue<decltype(pw8en)::Type,Pw8enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw8en)::Type,Pw8enVal::enabled> enabled{};
        }
        ///WAKE.9 Enable. 
        enum class Pw9enVal {
            disabled=0x00000000,     ///<WAKE.9 (PB3.5) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.9 (PB3.5) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pw9enVal> pw9en{}; 
        namespace Pw9enValC{
            constexpr Register::FieldValue<decltype(pw9en)::Type,Pw9enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw9en)::Type,Pw9enVal::enabled> enabled{};
        }
        ///WAKE.10 Enable. 
        enum class Pw10enVal {
            disabled=0x00000000,     ///<WAKE.10 (PB3.6) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.10 (PB3.6) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pw10enVal> pw10en{}; 
        namespace Pw10enValC{
            constexpr Register::FieldValue<decltype(pw10en)::Type,Pw10enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw10en)::Type,Pw10enVal::enabled> enabled{};
        }
        ///WAKE.11 Enable. 
        enum class Pw11enVal {
            disabled=0x00000000,     ///<WAKE.11 (PB3.7) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.11 (PB3.7) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pw11enVal> pw11en{}; 
        namespace Pw11enValC{
            constexpr Register::FieldValue<decltype(pw11en)::Type,Pw11enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw11en)::Type,Pw11enVal::enabled> enabled{};
        }
        ///WAKE.12 Enable. 
        enum class Pw12enVal {
            disabled=0x00000000,     ///<WAKE.12 (PB3.8) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.12 (PB3.8) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pw12enVal> pw12en{}; 
        namespace Pw12enValC{
            constexpr Register::FieldValue<decltype(pw12en)::Type,Pw12enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw12en)::Type,Pw12enVal::enabled> enabled{};
        }
        ///WAKE.13 Enable. 
        enum class Pw13enVal {
            disabled=0x00000000,     ///<WAKE.13 (PB3.9) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.13 (PB3.9) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pw13enVal> pw13en{}; 
        namespace Pw13enValC{
            constexpr Register::FieldValue<decltype(pw13en)::Type,Pw13enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw13en)::Type,Pw13enVal::enabled> enabled{};
        }
        ///WAKE.14 Enable. 
        enum class Pw14enVal {
            disabled=0x00000000,     ///<WAKE.14 (PB3.10) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.14 (PB3.10) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pw14enVal> pw14en{}; 
        namespace Pw14enValC{
            constexpr Register::FieldValue<decltype(pw14en)::Type,Pw14enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw14en)::Type,Pw14enVal::enabled> enabled{};
        }
        ///WAKE.15 Enable. 
        enum class Pw15enVal {
            disabled=0x00000000,     ///<WAKE.15 (PB3.11) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.15 (PB3.11) is used in the Pin Wake comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pw15enVal> pw15en{}; 
        namespace Pw15enValC{
            constexpr Register::FieldValue<decltype(pw15en)::Type,Pw15enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw15en)::Type,Pw15enVal::enabled> enabled{};
        }
    }
    namespace Pmu0Pwpol{    ///<Pin Wake Pin Polarity Select
        using Addr = Register::Address<0x40048060,0xffff0000,0x00000000,unsigned>;
        ///WAKE.0 Polarity Select. 
        enum class Pw0polVal {
            low=0x00000000,     ///<The WAKE.0 (PB1.13) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.0 (PB1.13) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pw0polVal> pw0pol{}; 
        namespace Pw0polValC{
            constexpr Register::FieldValue<decltype(pw0pol)::Type,Pw0polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw0pol)::Type,Pw0polVal::high> high{};
        }
        ///WAKE.1 Polarity Select. 
        enum class Pw1polVal {
            low=0x00000000,     ///<The WAKE.1 (PB1.14) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.1 (PB1.14) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pw1polVal> pw1pol{}; 
        namespace Pw1polValC{
            constexpr Register::FieldValue<decltype(pw1pol)::Type,Pw1polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw1pol)::Type,Pw1polVal::high> high{};
        }
        ///WAKE.2 Polarity Select. 
        enum class Pw2polVal {
            low=0x00000000,     ///<The WAKE.2 (PB1.15) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.2 (PB1.15) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pw2polVal> pw2pol{}; 
        namespace Pw2polValC{
            constexpr Register::FieldValue<decltype(pw2pol)::Type,Pw2polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw2pol)::Type,Pw2polVal::high> high{};
        }
        ///WAKE.3 Polarity Select. 
        enum class Pw3polVal {
            low=0x00000000,     ///<The WAKE.3 (PB2.0) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.3 (PB2.0) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pw3polVal> pw3pol{}; 
        namespace Pw3polValC{
            constexpr Register::FieldValue<decltype(pw3pol)::Type,Pw3polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw3pol)::Type,Pw3polVal::high> high{};
        }
        ///WAKE.4 Polarity Select. 
        enum class Pw4polVal {
            low=0x00000000,     ///<The WAKE.4 (PB2.1) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.4 (PB2.1) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pw4polVal> pw4pol{}; 
        namespace Pw4polValC{
            constexpr Register::FieldValue<decltype(pw4pol)::Type,Pw4polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw4pol)::Type,Pw4polVal::high> high{};
        }
        ///WAKE.5 Polarity Select. 
        enum class Pw5polVal {
            low=0x00000000,     ///<The WAKE.5 (PB2.2) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.5 (PB2.2) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pw5polVal> pw5pol{}; 
        namespace Pw5polValC{
            constexpr Register::FieldValue<decltype(pw5pol)::Type,Pw5polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw5pol)::Type,Pw5polVal::high> high{};
        }
        ///WAKE.6 Polarity Select. 
        enum class Pw6polVal {
            low=0x00000000,     ///<The WAKE.6 (PB2.3) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.6 (PB2.3) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pw6polVal> pw6pol{}; 
        namespace Pw6polValC{
            constexpr Register::FieldValue<decltype(pw6pol)::Type,Pw6polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw6pol)::Type,Pw6polVal::high> high{};
        }
        ///WAKE.7 Polarity Select. 
        enum class Pw7polVal {
            low=0x00000000,     ///<The WAKE.7 (PB2.4) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.7 (PB2.4) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pw7polVal> pw7pol{}; 
        namespace Pw7polValC{
            constexpr Register::FieldValue<decltype(pw7pol)::Type,Pw7polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw7pol)::Type,Pw7polVal::high> high{};
        }
        ///WAKE.8 Polarity Select. 
        enum class Pw8polVal {
            low=0x00000000,     ///<The WAKE.8 (PB3.4) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.8 (PB3.4) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pw8polVal> pw8pol{}; 
        namespace Pw8polValC{
            constexpr Register::FieldValue<decltype(pw8pol)::Type,Pw8polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw8pol)::Type,Pw8polVal::high> high{};
        }
        ///WAKE.9 Polarity Select. 
        enum class Pw9polVal {
            low=0x00000000,     ///<The WAKE.9 (PB3.5) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.9 (PB3.5) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pw9polVal> pw9pol{}; 
        namespace Pw9polValC{
            constexpr Register::FieldValue<decltype(pw9pol)::Type,Pw9polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw9pol)::Type,Pw9polVal::high> high{};
        }
        ///WAKE.10 Polarity Select. 
        enum class Pw10polVal {
            low=0x00000000,     ///<The WAKE.10 (PB3.6) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.10 (PB3.6) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pw10polVal> pw10pol{}; 
        namespace Pw10polValC{
            constexpr Register::FieldValue<decltype(pw10pol)::Type,Pw10polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw10pol)::Type,Pw10polVal::high> high{};
        }
        ///WAKE.11 Polarity Select. 
        enum class Pw11polVal {
            low=0x00000000,     ///<The WAKE.11 (PB3.7) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.11 (PB3.7) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pw11polVal> pw11pol{}; 
        namespace Pw11polValC{
            constexpr Register::FieldValue<decltype(pw11pol)::Type,Pw11polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw11pol)::Type,Pw11polVal::high> high{};
        }
        ///WAKE.12 Polarity Select. 
        enum class Pw12polVal {
            low=0x00000000,     ///<The WAKE.12 (PB3.8) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.12 (PB3.8) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pw12polVal> pw12pol{}; 
        namespace Pw12polValC{
            constexpr Register::FieldValue<decltype(pw12pol)::Type,Pw12polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw12pol)::Type,Pw12polVal::high> high{};
        }
        ///WAKE.13 Polarity Select. 
        enum class Pw13polVal {
            low=0x00000000,     ///<The WAKE.13 (PB3.9) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.13 (PB3.9) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pw13polVal> pw13pol{}; 
        namespace Pw13polValC{
            constexpr Register::FieldValue<decltype(pw13pol)::Type,Pw13polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw13pol)::Type,Pw13polVal::high> high{};
        }
        ///WAKE.14 Polarity Select. 
        enum class Pw14polVal {
            low=0x00000000,     ///<The WAKE.14 (PB3.10) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.14 (PB3.10) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pw14polVal> pw14pol{}; 
        namespace Pw14polValC{
            constexpr Register::FieldValue<decltype(pw14pol)::Type,Pw14polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw14pol)::Type,Pw14polVal::high> high{};
        }
        ///WAKE.15 Polarity Select. 
        enum class Pw15polVal {
            low=0x00000000,     ///<The WAKE.15 (PB3.11) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.15 (PB3.11) comparison value is logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pw15polVal> pw15pol{}; 
        namespace Pw15polValC{
            constexpr Register::FieldValue<decltype(pw15pol)::Type,Pw15polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw15pol)::Type,Pw15polVal::high> high{};
        }
    }
}
