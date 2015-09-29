#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40048000,0xffffffe0,0,unsigned>;
        ///Wakeup Source Clear. 
        enum class wakeclrVal {
            clear=0x00000000,     ///<Clear all wakeup sources.
        };
        namespace wakeclrValC{
            constexpr MPL::Value<wakeclrVal,wakeclrVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeclrVal> wakeclr{}; 
        ///Peripheral Low Power Enable. 
        enum class perilpenVal {
            disabled=0x00000000,     ///<Disable the peripheral low power state.
            enabled=0x00000001,     ///<Enable the peripheral low power state. The peripherals will not be accessible in this state.
        };
        namespace perilpenValC{
            constexpr MPL::Value<perilpenVal,perilpenVal::disabled> disabled{};
            constexpr MPL::Value<perilpenVal,perilpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,perilpenVal> perilpen{}; 
        ///Pin Low Power Enable. 
        enum class pinlpenVal {
            disabled=0x00000000,     ///<Disable the pin low power state.
            enabled=0x00000001,     ///<Enable the pin low power state. The pins will not be accessible in this state.
        };
        namespace pinlpenValC{
            constexpr MPL::Value<pinlpenVal,pinlpenVal::disabled> disabled{};
            constexpr MPL::Value<pinlpenVal,pinlpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pinlpenVal> pinlpen{}; 
        ///Pin Wake Match Enable. 
        enum class pwakeenVal {
            disabled=0x00000000,     ///<Disable Pin Wake.
            enabled=0x00000001,     ///<Enable Pin Wake.
        };
        namespace pwakeenValC{
            constexpr MPL::Value<pwakeenVal,pwakeenVal::disabled> disabled{};
            constexpr MPL::Value<pwakeenVal,pwakeenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwakeenVal> pwakeen{}; 
        ///PMU Asleep Pin Enable. 
        enum class pmuaslpenVal {
            disabled=0x00000000,     ///<Disable the PMU Asleep pin.
            enabled=0x00000001,     ///<Enable the PMU Asleep pin.
        };
        namespace pmuaslpenValC{
            constexpr MPL::Value<pmuaslpenVal,pmuaslpenVal::disabled> disabled{};
            constexpr MPL::Value<pmuaslpenVal,pmuaslpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pmuaslpenVal> pmuaslpen{}; 
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40048010,0xffff1cff,0,unsigned>;
        ///RTC0 Fail RTC0/LPTIMER0 Reset Enable. 
        enum class rtc0frenVal {
            disabled=0x00000000,     ///<An RTC0 fail event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<An RTC0 fail event causes the RTC0 and LPTIMER0 modules to reset.
        };
        namespace rtc0frenValC{
            constexpr MPL::Value<rtc0frenVal,rtc0frenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0frenVal,rtc0frenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rtc0frenVal> rtc0fren{}; 
        ///RTC0 Alarm RTC0/LPTIMER0 Reset Enable. 
        enum class rtc0arenVal {
            disabled=0x00000000,     ///<An RTC0 alarm event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<An RTC0 alarm event causes the RTC0 and LPTIMER0 modules to reset.
        };
        namespace rtc0arenValC{
            constexpr MPL::Value<rtc0arenVal,rtc0arenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0arenVal,rtc0arenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rtc0arenVal> rtc0aren{}; 
        ///Comparator 0 RTC0/LPTIMER0 Reset Enable. 
        enum class cmp0renVal {
            disabled=0x00000000,     ///<A Comparator 0 event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<A Comparator 0 event causes the RTC0 and LPTIMER0 modules to reset.
        };
        namespace cmp0renValC{
            constexpr MPL::Value<cmp0renVal,cmp0renVal::disabled> disabled{};
            constexpr MPL::Value<cmp0renVal,cmp0renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,cmp0renVal> cmp0ren{}; 
        ///Pin Wake RTC0/LPTIMER0 Reset Enable. 
        enum class pwakerenVal {
            disabled=0x00000000,     ///<A Pin Wake event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<A Pin Wake event causes the RTC0 and LPTIMER0 modules to reset.
        };
        namespace pwakerenValC{
            constexpr MPL::Value<pwakerenVal,pwakerenVal::disabled> disabled{};
            constexpr MPL::Value<pwakerenVal,pwakerenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwakerenVal> pwakeren{}; 
        ///Low Power Timer RTC0/LPTIMER0 Reset Enable. 
        enum class lpt0renVal {
            disabled=0x00000000,     ///<An LPTIMER0 event does not cause the RTC0 and LPTIMER0 modules to reset.
            enabled=0x00000001,     ///<An LPTIMER0 event causes the RTC0 and LPTIMER0 modules to reset.
        };
        namespace lpt0renValC{
            constexpr MPL::Value<lpt0renVal,lpt0renVal::disabled> disabled{};
            constexpr MPL::Value<lpt0renVal,lpt0renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lpt0renVal> lpt0ren{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40048020,0xfffffff8,0,unsigned>;
        ///Power Mode 9 Exited Flag. 
        enum class pm9efVal {
            notSet=0x00000000,     ///<The device has not exited Power Mode 9.
            set=0x00000001,     ///<The device has exited Power Mode 9. This bit must be cleared by firmware.
        };
        namespace pm9efValC{
            constexpr MPL::Value<pm9efVal,pm9efVal::notSet> notSet{};
            constexpr MPL::Value<pm9efVal,pm9efVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pm9efVal> pm9ef{}; 
        ///Pin Wake Status Flag. 
        enum class pwakefVal {
            set=0x00000000,     ///<A Pin Wake event has occurred.
            notSet=0x00000001,     ///<A Pin Wake event has not occurred.
        };
        namespace pwakefValC{
            constexpr MPL::Value<pwakefVal,pwakefVal::set> set{};
            constexpr MPL::Value<pwakefVal,pwakefVal::notSet> notSet{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pwakefVal> pwakef{}; 
        ///Power-On Reset Flag. 
        enum class porfVal {
            notSet=0x00000000,     ///<A power-on reset did not occur since the last time PORF was cleared.
            set=0x00000001,     ///<A power-on reset occurred.
        };
        namespace porfValC{
            constexpr MPL::Value<porfVal,porfVal::notSet> notSet{};
            constexpr MPL::Value<porfVal,porfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,porfVal> porf{}; 
    }
    namespace Nonewakeen{    ///<Wake Source Enable
        using Addr = Register::Address<0x40048030,0xfffffe1c,0,unsigned>;
        ///RTC0 Fail Wake Enable. 
        enum class rtc0fwenVal {
            disabled=0x00000000,     ///<An RTC0 fail event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 fail event awakens the device.
        };
        namespace rtc0fwenValC{
            constexpr MPL::Value<rtc0fwenVal,rtc0fwenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0fwenVal,rtc0fwenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtc0fwenVal> rtc0fwen{}; 
        ///RTC0 Alarm Wake Enable. 
        enum class rtc0awenVal {
            disabled=0x00000000,     ///<An RTC0 alarm event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 alarm event awakens the device.
        };
        namespace rtc0awenValC{
            constexpr MPL::Value<rtc0awenVal,rtc0awenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0awenVal,rtc0awenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rtc0awenVal> rtc0awen{}; 
        ///Comparator 0 Wake Enable. 
        enum class cmp0wenVal {
            disabled=0x00000000,     ///<A Comparator 0 event does not wake the device.
            enabled=0x00000001,     ///<A Comparator 0 event awakens the device.
        };
        namespace cmp0wenValC{
            constexpr MPL::Value<cmp0wenVal,cmp0wenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0wenVal,cmp0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cmp0wenVal> cmp0wen{}; 
        ///Pin Wake Wake Enable. 
        enum class pwakewenVal {
            disabled=0x00000000,     ///<A Pin Wake event does not wake the device.
            enabled=0x00000001,     ///<A Pin Wake event awakens the device.
        };
        namespace pwakewenValC{
            constexpr MPL::Value<pwakewenVal,pwakewenVal::disabled> disabled{};
            constexpr MPL::Value<pwakewenVal,pwakewenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwakewenVal> pwakewen{}; 
        ///Low Power Timer Wake Enable. 
        enum class lpt0wenVal {
            disabled=0x00000000,     ///<An LPTIMER0 event does not wake the device.
            enabled=0x00000001,     ///<An LPTIMER0 event awakens the device.
        };
        namespace lpt0wenValC{
            constexpr MPL::Value<lpt0wenVal,lpt0wenVal::disabled> disabled{};
            constexpr MPL::Value<lpt0wenVal,lpt0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lpt0wenVal> lpt0wen{}; 
        ///Reset Pin Wake Enable. 
        enum class rstwenVal {
            disabled=0x00000000,     ///<A /RESET Pin event does not wake the device.
            enabled=0x00000001,     ///<A /RESET Pin event awakens the device.
        };
        namespace rstwenValC{
            constexpr MPL::Value<rstwenVal,rstwenVal::disabled> disabled{};
            constexpr MPL::Value<rstwenVal,rstwenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rstwenVal> rstwen{}; 
    }
    namespace Nonewakestatus{    ///<Wake Source Status
        using Addr = Register::Address<0x40048040,0xfffffe1c,0,unsigned>;
        ///RTC0 Fail Wake Flag. 
        enum class rtc0fwfVal {
            notSet=0x00000000,     ///<An RTC0 fail event did not wake the device.
            set=0x00000001,     ///<An RTC0 fail event woke the device.
        };
        namespace rtc0fwfValC{
            constexpr MPL::Value<rtc0fwfVal,rtc0fwfVal::notSet> notSet{};
            constexpr MPL::Value<rtc0fwfVal,rtc0fwfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtc0fwfVal> rtc0fwf{}; 
        ///RTC0 Alarm Wake Flag. 
        enum class rtc0awfVal {
            notSet=0x00000000,     ///<An RTC0 alarm event did not wake the device.
            set=0x00000001,     ///<An RTC0 alarm event woke the device.
        };
        namespace rtc0awfValC{
            constexpr MPL::Value<rtc0awfVal,rtc0awfVal::notSet> notSet{};
            constexpr MPL::Value<rtc0awfVal,rtc0awfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rtc0awfVal> rtc0awf{}; 
        ///Comparator 0 Wake Flag. 
        enum class cmp0wfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not wake the device.
            set=0x00000001,     ///<A Comparator 0 event woke the device.
        };
        namespace cmp0wfValC{
            constexpr MPL::Value<cmp0wfVal,cmp0wfVal::notSet> notSet{};
            constexpr MPL::Value<cmp0wfVal,cmp0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cmp0wfVal> cmp0wf{}; 
        ///Pin Wake Wake Flag. 
        enum class pwakewfVal {
            notSet=0x00000000,     ///<A Pin Wake event did not wake the device.
            set=0x00000001,     ///<A Pin Wake event woke the device.
        };
        namespace pwakewfValC{
            constexpr MPL::Value<pwakewfVal,pwakewfVal::notSet> notSet{};
            constexpr MPL::Value<pwakewfVal,pwakewfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwakewfVal> pwakewf{}; 
        ///Low Power Timer Wake Flag. 
        enum class lpt0wfVal {
            notSet=0x00000000,     ///<An LPTIMER0 event did not wake the device.
            set=0x00000001,     ///<An LPTIMER0 event woke the device.
        };
        namespace lpt0wfValC{
            constexpr MPL::Value<lpt0wfVal,lpt0wfVal::notSet> notSet{};
            constexpr MPL::Value<lpt0wfVal,lpt0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lpt0wfVal> lpt0wf{}; 
        ///Reset Pin Wake Flag. 
        enum class rstwfVal {
            notSet=0x00000000,     ///<A /RESET Pin event did not wake the device.
            set=0x00000001,     ///<A /RESET Pin event woke the device.
        };
        namespace rstwfValC{
            constexpr MPL::Value<rstwfVal,rstwfVal::notSet> notSet{};
            constexpr MPL::Value<rstwfVal,rstwfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rstwfVal> rstwf{}; 
    }
    namespace Nonepwen{    ///<Pin Wake Pin Enable
        using Addr = Register::Address<0x40048050,0xffff0000,0,unsigned>;
        ///WAKE.0 Enable. 
        enum class pw0enVal {
            disabled=0x00000000,     ///<WAKE.0 (PB0.12) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.0 (PB0.12) is used in the Pin Wake comparison.
        };
        namespace pw0enValC{
            constexpr MPL::Value<pw0enVal,pw0enVal::disabled> disabled{};
            constexpr MPL::Value<pw0enVal,pw0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pw0enVal> pw0en{}; 
        ///WAKE.1 Enable. 
        enum class pw1enVal {
            disabled=0x00000000,     ///<WAKE.1 (PB0.13) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.1 (PB0.13) is used in the Pin Wake comparison.
        };
        namespace pw1enValC{
            constexpr MPL::Value<pw1enVal,pw1enVal::disabled> disabled{};
            constexpr MPL::Value<pw1enVal,pw1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pw1enVal> pw1en{}; 
        ///WAKE.2 Enable. 
        enum class pw2enVal {
            disabled=0x00000000,     ///<WAKE.2 (PB0.14) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.2 (PB0.14) is used in the Pin Wake comparison.
        };
        namespace pw2enValC{
            constexpr MPL::Value<pw2enVal,pw2enVal::disabled> disabled{};
            constexpr MPL::Value<pw2enVal,pw2enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pw2enVal> pw2en{}; 
        ///WAKE.3 Enable. 
        enum class pw3enVal {
            disabled=0x00000000,     ///<WAKE.3 (PB0.15) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.3 (PB0.15) is used in the Pin Wake comparison.
        };
        namespace pw3enValC{
            constexpr MPL::Value<pw3enVal,pw3enVal::disabled> disabled{};
            constexpr MPL::Value<pw3enVal,pw3enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pw3enVal> pw3en{}; 
        ///WAKE.4 Enable. 
        enum class pw4enVal {
            disabled=0x00000000,     ///<WAKE.4 (PB1.0) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.4 (PB1.0) is used in the Pin Wake comparison.
        };
        namespace pw4enValC{
            constexpr MPL::Value<pw4enVal,pw4enVal::disabled> disabled{};
            constexpr MPL::Value<pw4enVal,pw4enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pw4enVal> pw4en{}; 
        ///WAKE.5 Enable. 
        enum class pw5enVal {
            disabled=0x00000000,     ///<WAKE.5 (PB1.1) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.5 (PB1.1) is used in the Pin Wake comparison.
        };
        namespace pw5enValC{
            constexpr MPL::Value<pw5enVal,pw5enVal::disabled> disabled{};
            constexpr MPL::Value<pw5enVal,pw5enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pw5enVal> pw5en{}; 
        ///WAKE.6 Enable. 
        enum class pw6enVal {
            disabled=0x00000000,     ///<WAKE.6 (RESERVED) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.6 (RESERVED) is used in the Pin Wake comparison.
        };
        namespace pw6enValC{
            constexpr MPL::Value<pw6enVal,pw6enVal::disabled> disabled{};
            constexpr MPL::Value<pw6enVal,pw6enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pw6enVal> pw6en{}; 
        ///WAKE.7 Enable. 
        enum class pw7enVal {
            disabled=0x00000000,     ///<WAKE.7 (RESERVED) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.7 (RESERVED) is used in the Pin Wake comparison.
        };
        namespace pw7enValC{
            constexpr MPL::Value<pw7enVal,pw7enVal::disabled> disabled{};
            constexpr MPL::Value<pw7enVal,pw7enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pw7enVal> pw7en{}; 
        ///WAKE.8 Enable. 
        enum class pw8enVal {
            disabled=0x00000000,     ///<WAKE.8 (RESERVED) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.8 (RESERVED) is used in the Pin Wake comparison.
        };
        namespace pw8enValC{
            constexpr MPL::Value<pw8enVal,pw8enVal::disabled> disabled{};
            constexpr MPL::Value<pw8enVal,pw8enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pw8enVal> pw8en{}; 
        ///WAKE.9 Enable. 
        enum class pw9enVal {
            disabled=0x00000000,     ///<WAKE.9 (RESERVED) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.9 (RESERVED) is used in the Pin Wake comparison.
        };
        namespace pw9enValC{
            constexpr MPL::Value<pw9enVal,pw9enVal::disabled> disabled{};
            constexpr MPL::Value<pw9enVal,pw9enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pw9enVal> pw9en{}; 
        ///WAKE.10 Enable. 
        enum class pw10enVal {
            disabled=0x00000000,     ///<WAKE.10 (RESERVED) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.10 (RESERVED) is used in the Pin Wake comparison.
        };
        namespace pw10enValC{
            constexpr MPL::Value<pw10enVal,pw10enVal::disabled> disabled{};
            constexpr MPL::Value<pw10enVal,pw10enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pw10enVal> pw10en{}; 
        ///WAKE.11 Enable. 
        enum class pw11enVal {
            disabled=0x00000000,     ///<WAKE.11 (RESERVED) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.11 (RESERVED) is used in the Pin Wake comparison.
        };
        namespace pw11enValC{
            constexpr MPL::Value<pw11enVal,pw11enVal::disabled> disabled{};
            constexpr MPL::Value<pw11enVal,pw11enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pw11enVal> pw11en{}; 
        ///WAKE.12 Enable. 
        enum class pw12enVal {
            disabled=0x00000000,     ///<WAKE.12 (PB3.0) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.12 (PB3.0) is used in the Pin Wake comparison.
        };
        namespace pw12enValC{
            constexpr MPL::Value<pw12enVal,pw12enVal::disabled> disabled{};
            constexpr MPL::Value<pw12enVal,pw12enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pw12enVal> pw12en{}; 
        ///WAKE.13 Enable. 
        enum class pw13enVal {
            disabled=0x00000000,     ///<WAKE.13 (PB3.1) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.13 (PB3.1) is used in the Pin Wake comparison.
        };
        namespace pw13enValC{
            constexpr MPL::Value<pw13enVal,pw13enVal::disabled> disabled{};
            constexpr MPL::Value<pw13enVal,pw13enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pw13enVal> pw13en{}; 
        ///WAKE.14 Enable. 
        enum class pw14enVal {
            disabled=0x00000000,     ///<WAKE.14 (PB3.2) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.14 (PB3.2) is used in the Pin Wake comparison.
        };
        namespace pw14enValC{
            constexpr MPL::Value<pw14enVal,pw14enVal::disabled> disabled{};
            constexpr MPL::Value<pw14enVal,pw14enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pw14enVal> pw14en{}; 
        ///WAKE.15 Enable. 
        enum class pw15enVal {
            disabled=0x00000000,     ///<WAKE.15 (PB3.3) is not used in the Pin Wake comparison.
            enabled=0x00000001,     ///<WAKE.15 (PB3.3) is used in the Pin Wake comparison.
        };
        namespace pw15enValC{
            constexpr MPL::Value<pw15enVal,pw15enVal::disabled> disabled{};
            constexpr MPL::Value<pw15enVal,pw15enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pw15enVal> pw15en{}; 
    }
    namespace Nonepwpol{    ///<Pin Wake Pin Polarity Select
        using Addr = Register::Address<0x40048060,0xffff0000,0,unsigned>;
        ///WAKE.0 Polarity Select. 
        enum class pw0polVal {
            low=0x00000000,     ///<The WAKE.0 (PB0.12) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.0 (PB0.12) comparison value is logic high.
        };
        namespace pw0polValC{
            constexpr MPL::Value<pw0polVal,pw0polVal::low> low{};
            constexpr MPL::Value<pw0polVal,pw0polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pw0polVal> pw0pol{}; 
        ///WAKE.1 Polarity Select. 
        enum class pw1polVal {
            low=0x00000000,     ///<The WAKE.1 (PB0.13) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.1 (PB0.13) comparison value is logic high.
        };
        namespace pw1polValC{
            constexpr MPL::Value<pw1polVal,pw1polVal::low> low{};
            constexpr MPL::Value<pw1polVal,pw1polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pw1polVal> pw1pol{}; 
        ///WAKE.2 Polarity Select. 
        enum class pw2polVal {
            low=0x00000000,     ///<The WAKE.2 (PB0.14) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.2 (PB0.14) comparison value is logic high.
        };
        namespace pw2polValC{
            constexpr MPL::Value<pw2polVal,pw2polVal::low> low{};
            constexpr MPL::Value<pw2polVal,pw2polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pw2polVal> pw2pol{}; 
        ///WAKE.3 Polarity Select. 
        enum class pw3polVal {
            low=0x00000000,     ///<The WAKE.3 (PB0.15) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.3 (PB0.15) comparison value is logic high.
        };
        namespace pw3polValC{
            constexpr MPL::Value<pw3polVal,pw3polVal::low> low{};
            constexpr MPL::Value<pw3polVal,pw3polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pw3polVal> pw3pol{}; 
        ///WAKE.4 Polarity Select. 
        enum class pw4polVal {
            low=0x00000000,     ///<The WAKE.4 (PB1.0) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.4 (PB1.0) comparison value is logic high.
        };
        namespace pw4polValC{
            constexpr MPL::Value<pw4polVal,pw4polVal::low> low{};
            constexpr MPL::Value<pw4polVal,pw4polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pw4polVal> pw4pol{}; 
        ///WAKE.5 Polarity Select. 
        enum class pw5polVal {
            low=0x00000000,     ///<The WAKE.5 (PB1.1) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.5 (PB1.1) comparison value is logic high.
        };
        namespace pw5polValC{
            constexpr MPL::Value<pw5polVal,pw5polVal::low> low{};
            constexpr MPL::Value<pw5polVal,pw5polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pw5polVal> pw5pol{}; 
        ///WAKE.6 Polarity Select. 
        enum class pw6polVal {
            low=0x00000000,     ///<The WAKE.6 (RESERVED) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.6 (RESERVED) comparison value is logic high.
        };
        namespace pw6polValC{
            constexpr MPL::Value<pw6polVal,pw6polVal::low> low{};
            constexpr MPL::Value<pw6polVal,pw6polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pw6polVal> pw6pol{}; 
        ///WAKE.7 Polarity Select. 
        enum class pw7polVal {
            low=0x00000000,     ///<The WAKE.7 (RESERVED) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.7 (RESERVED) comparison value is logic high.
        };
        namespace pw7polValC{
            constexpr MPL::Value<pw7polVal,pw7polVal::low> low{};
            constexpr MPL::Value<pw7polVal,pw7polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pw7polVal> pw7pol{}; 
        ///WAKE.8 Polarity Select. 
        enum class pw8polVal {
            low=0x00000000,     ///<The WAKE.8 (RESERVED) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.8 (RESERVED) comparison value is logic high.
        };
        namespace pw8polValC{
            constexpr MPL::Value<pw8polVal,pw8polVal::low> low{};
            constexpr MPL::Value<pw8polVal,pw8polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pw8polVal> pw8pol{}; 
        ///WAKE.9 Polarity Select. 
        enum class pw9polVal {
            low=0x00000000,     ///<The WAKE.9 (RESERVED) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.9 (RESERVED) comparison value is logic high.
        };
        namespace pw9polValC{
            constexpr MPL::Value<pw9polVal,pw9polVal::low> low{};
            constexpr MPL::Value<pw9polVal,pw9polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pw9polVal> pw9pol{}; 
        ///WAKE.10 Polarity Select. 
        enum class pw10polVal {
            low=0x00000000,     ///<The WAKE.10 (RESERVED) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.10 (RESERVED) comparison value is logic high.
        };
        namespace pw10polValC{
            constexpr MPL::Value<pw10polVal,pw10polVal::low> low{};
            constexpr MPL::Value<pw10polVal,pw10polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pw10polVal> pw10pol{}; 
        ///WAKE.11 Polarity Select. 
        enum class pw11polVal {
            low=0x00000000,     ///<The WAKE.11 (RESERVED) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.11 (RESERVED) comparison value is logic high.
        };
        namespace pw11polValC{
            constexpr MPL::Value<pw11polVal,pw11polVal::low> low{};
            constexpr MPL::Value<pw11polVal,pw11polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pw11polVal> pw11pol{}; 
        ///WAKE.12 Polarity Select. 
        enum class pw12polVal {
            low=0x00000000,     ///<The WAKE.12 (PB3.0) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.12 (PB3.0) comparison value is logic high.
        };
        namespace pw12polValC{
            constexpr MPL::Value<pw12polVal,pw12polVal::low> low{};
            constexpr MPL::Value<pw12polVal,pw12polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pw12polVal> pw12pol{}; 
        ///WAKE.13 Polarity Select. 
        enum class pw13polVal {
            low=0x00000000,     ///<The WAKE.13 (PB3.1) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.13 (PB3.1) comparison value is logic high.
        };
        namespace pw13polValC{
            constexpr MPL::Value<pw13polVal,pw13polVal::low> low{};
            constexpr MPL::Value<pw13polVal,pw13polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pw13polVal> pw13pol{}; 
        ///WAKE.14 Polarity Select. 
        enum class pw14polVal {
            low=0x00000000,     ///<The WAKE.14 (PB3.2) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.14 (PB3.2) comparison value is logic high.
        };
        namespace pw14polValC{
            constexpr MPL::Value<pw14polVal,pw14polVal::low> low{};
            constexpr MPL::Value<pw14polVal,pw14polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pw14polVal> pw14pol{}; 
        ///WAKE.15 Polarity Select. 
        enum class pw15polVal {
            low=0x00000000,     ///<The WAKE.15 (PB3.3) comparison value is logic low.
            high=0x00000001,     ///<The WAKE.15 (PB3.3) comparison value is logic high.
        };
        namespace pw15polValC{
            constexpr MPL::Value<pw15polVal,pw15polVal::low> low{};
            constexpr MPL::Value<pw15polVal,pw15polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pw15polVal> pw15pol{}; 
    }
}
