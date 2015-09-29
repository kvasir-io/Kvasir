#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40048000,0xff00ff86,0,unsigned>;
        ///Wakeup Source Clear. 
        enum class wakeclrVal {
            clear=0x00000000,     ///<Clear all wakeup sources.
        };
        namespace wakeclrValC{
            constexpr MPL::Value<wakeclrVal,wakeclrVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeclrVal> wakeclr{}; 
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
        ///Low Power Charge Pump Voltage Monitor Enable. 
        enum class cpmonenVal {
            disabled=0x00000000,     ///<Disable the low power charge pump voltage monitor.
            enabled=0x00000001,     ///<Enable the low power charge pump voltage monitor.
        };
        namespace cpmonenValC{
            constexpr MPL::Value<cpmonenVal,cpmonenVal::disabled> disabled{};
            constexpr MPL::Value<cpmonenVal,cpmonenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cpmonenVal> cpmonen{}; 
        ///Low Power Charge Pump Voltage Monitor Interrupt Enable. 
        enum class cpmonienVal {
            disabled=0x00000000,     ///<Disable the low power charge pump voltage monitor interrupt.
            enabled=0x00000001,     ///<Enable the low power charge pump voltage monitor interrupt.
        };
        namespace cpmonienValC{
            constexpr MPL::Value<cpmonienVal,cpmonienVal::disabled> disabled{};
            constexpr MPL::Value<cpmonienVal,cpmonienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cpmonienVal> cpmonien{}; 
        ///RAM 0 Retention Enable. 
        enum class ram0renVal {
            disabled=0x00000000,     ///<Disable power to RAM 0 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 0 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram0renValC{
            constexpr MPL::Value<ram0renVal,ram0renVal::disabled> disabled{};
            constexpr MPL::Value<ram0renVal,ram0renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ram0renVal> ram0ren{}; 
        ///RAM 1 Retention Enable. 
        enum class ram1renVal {
            disabled=0x00000000,     ///<Disable power to RAM 1 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 1 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram1renValC{
            constexpr MPL::Value<ram1renVal,ram1renVal::disabled> disabled{};
            constexpr MPL::Value<ram1renVal,ram1renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ram1renVal> ram1ren{}; 
        ///RAM 2 Retention Enable. 
        enum class ram2renVal {
            disabled=0x00000000,     ///<Disable power to RAM 2 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 2 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram2renValC{
            constexpr MPL::Value<ram2renVal,ram2renVal::disabled> disabled{};
            constexpr MPL::Value<ram2renVal,ram2renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ram2renVal> ram2ren{}; 
        ///RAM 3 Retention Enable. 
        enum class ram3renVal {
            disabled=0x00000000,     ///<Disable power to RAM 3 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 3 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram3renValC{
            constexpr MPL::Value<ram3renVal,ram3renVal::disabled> disabled{};
            constexpr MPL::Value<ram3renVal,ram3renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ram3renVal> ram3ren{}; 
        ///RAM 4 Retention Enable. 
        enum class ram4renVal {
            disabled=0x00000000,     ///<Disable power to RAM 4 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 4 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram4renValC{
            constexpr MPL::Value<ram4renVal,ram4renVal::disabled> disabled{};
            constexpr MPL::Value<ram4renVal,ram4renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ram4renVal> ram4ren{}; 
        ///RAM 5 Retention Enable. 
        enum class ram5renVal {
            disabled=0x00000000,     ///<Disable power to RAM 5 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 5 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram5renValC{
            constexpr MPL::Value<ram5renVal,ram5renVal::disabled> disabled{};
            constexpr MPL::Value<ram5renVal,ram5renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ram5renVal> ram5ren{}; 
        ///RAM 6 Retention Enable. 
        enum class ram6renVal {
            disabled=0x00000000,     ///<Disable power to RAM 6 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 6 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram6renValC{
            constexpr MPL::Value<ram6renVal,ram6renVal::disabled> disabled{};
            constexpr MPL::Value<ram6renVal,ram6renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ram6renVal> ram6ren{}; 
        ///RAM 7 Retention Enable. 
        enum class ram7renVal {
            disabled=0x00000000,     ///<Disable power to RAM 7 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 7 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        namespace ram7renValC{
            constexpr MPL::Value<ram7renVal,ram7renVal::disabled> disabled{};
            constexpr MPL::Value<ram7renVal,ram7renVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ram7renVal> ram7ren{}; 
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40048010,0xfffff28f,0,unsigned>;
        ///VBAT Monitor Disable. 
        enum class vbatmonenVal {
            enabled=0x00000000,     ///<Enable the 0.8 V VBAT monitor.
            disabled=0x00000001,     ///<Disable the 0.8V VBAT monitor.
        };
        namespace vbatmonenValC{
            constexpr MPL::Value<vbatmonenVal,vbatmonenVal::enabled> enabled{};
            constexpr MPL::Value<vbatmonenVal,vbatmonenVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vbatmonenVal> vbatmonen{}; 
        ///VDRV Switch Mode. 
        enum class vdrvsmdVal {
            highz=0x00000000,     ///<High-Z.
            vbat=0x00000002,     ///<VBAT connected to VDRV.
            vdc=0x00000003,     ///<DC-DC output connected to VDRV.
        };
        namespace vdrvsmdValC{
            constexpr MPL::Value<vdrvsmdVal,vdrvsmdVal::highz> highz{};
            constexpr MPL::Value<vdrvsmdVal,vdrvsmdVal::vbat> vbat{};
            constexpr MPL::Value<vdrvsmdVal,vdrvsmdVal::vdc> vdc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,vdrvsmdVal> vdrvsmd{}; 
        ///Low Power Charge Pump Enable. 
        enum class cpenVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace cpenValC{
            constexpr MPL::Value<cpenVal,cpenVal::disabled> disabled{};
            constexpr MPL::Value<cpenVal,cpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cpenVal> cpen{}; 
        ///Charge Pump Load Setting. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cpload{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40048020,0xfffffff0,0,unsigned>;
        ///Power Mode 8 Exited Flag. 
        enum class pm8efVal {
            notSet=0x00000000,     ///<The device has not exited Power Mode 8.
            set=0x00000001,     ///<The device has exited Power Mode 8. This bit must be cleared by firmware.
        };
        namespace pm8efValC{
            constexpr MPL::Value<pm8efVal,pm8efVal::notSet> notSet{};
            constexpr MPL::Value<pm8efVal,pm8efVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pm8efVal> pm8ef{}; 
        ///Pin Wake Status Flag. 
        enum class pwakefVal {
            notSet=0x00000000,     ///<A Pin Wake event has not occurred.
            set=0x00000001,     ///<A Pin Wake event has occurred.
        };
        namespace pwakefValC{
            constexpr MPL::Value<pwakefVal,pwakefVal::notSet> notSet{};
            constexpr MPL::Value<pwakefVal,pwakefVal::set> set{};
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
        ///Low Power Charge Pump Voltage Monitor Status. 
        enum class cpstsVal {
            notSet=0x00000000,     ///<The low power charge pump supply voltage is below the threshold.
            set=0x00000001,     ///<The low power charge pump supply voltage is greater than the threshold.
        };
        namespace cpstsValC{
            constexpr MPL::Value<cpstsVal,cpstsVal::notSet> notSet{};
            constexpr MPL::Value<cpstsVal,cpstsVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cpstsVal> cpsts{}; 
    }
    namespace Nonewakeen{    ///<Wakeup Enable
        using Addr = Register::Address<0x40048030,0xfffffe00,0,unsigned>;
        ///RTC0 Fail Wake Enable. 
        enum class rtc0fwenVal {
            disabled=0x00000000,     ///<An RTC0 Fail event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 Fail event awakens the device.
        };
        namespace rtc0fwenValC{
            constexpr MPL::Value<rtc0fwenVal,rtc0fwenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0fwenVal,rtc0fwenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtc0fwenVal> rtc0fwen{}; 
        ///RTC0 Alarm Wake Enable. 
        enum class rtc0a0wenVal {
            disabled=0x00000000,     ///<An RTC0 Alarm event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 Alarm event awakens the device.
        };
        namespace rtc0a0wenValC{
            constexpr MPL::Value<rtc0a0wenVal,rtc0a0wenVal::disabled> disabled{};
            constexpr MPL::Value<rtc0a0wenVal,rtc0a0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rtc0a0wenVal> rtc0a0wen{}; 
        ///Comparator 0 Wake Enable. 
        enum class cmp0wenVal {
            disabled=0x00000000,     ///<A Comparator 0 event does not wake the device.
            enabled=0x00000001,     ///<A Comparator 0 event awakens the device.
        };
        namespace cmp0wenValC{
            constexpr MPL::Value<cmp0wenVal,cmp0wenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0wenVal,cmp0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp0wenVal> cmp0wen{}; 
        ///Advanced Capture Counter 0 Wake Enable. 
        enum class acc0wenVal {
            disabled=0x00000000,     ///<An Advanced Capture Counter (ACCTR0) event does not wake the device.
            enabled=0x00000001,     ///<An Advanced Capture Counter (ACCTR0) event awakens the device.
        };
        namespace acc0wenValC{
            constexpr MPL::Value<acc0wenVal,acc0wenVal::disabled> disabled{};
            constexpr MPL::Value<acc0wenVal,acc0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,acc0wenVal> acc0wen{}; 
        ///LCD VBAT Voltage Monitor Wake Enable. 
        enum class lcdmonwenVal {
            disabled=0x00000000,     ///<An LCD VBAT voltage monitor event does not wake the device.
            enabled=0x00000001,     ///<An LCD VBAT voltage monitor event awakens the device.
        };
        namespace lcdmonwenValC{
            constexpr MPL::Value<lcdmonwenVal,lcdmonwenVal::disabled> disabled{};
            constexpr MPL::Value<lcdmonwenVal,lcdmonwenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lcdmonwenVal> lcdmonwen{}; 
        ///Pin Wake Wake Enable. 
        enum class pwakewenVal {
            disabled=0x00000000,     ///<A Pin Wake event does not wake the device.
            enabled=0x00000001,     ///<A Pin Wake event awakens the device.
        };
        namespace pwakewenValC{
            constexpr MPL::Value<pwakewenVal,pwakewenVal::disabled> disabled{};
            constexpr MPL::Value<pwakewenVal,pwakewenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pwakewenVal> pwakewen{}; 
        ///Low Power Timer Wake Enable. 
        enum class lpt0wenVal {
            disabled=0x00000000,     ///<An LPTIMER0 event does not wake the device.
            enabled=0x00000001,     ///<An LPTIMER0 event awakens the device.
        };
        namespace lpt0wenValC{
            constexpr MPL::Value<lpt0wenVal,lpt0wenVal::disabled> disabled{};
            constexpr MPL::Value<lpt0wenVal,lpt0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lpt0wenVal> lpt0wen{}; 
        ///UART0 Wake Enable. 
        enum class uart0wenVal {
            disabled=0x00000000,     ///<A UART0 event does not wake the device.
            enabled=0x00000001,     ///<A UART0 event awakens the device.
        };
        namespace uart0wenValC{
            constexpr MPL::Value<uart0wenVal,uart0wenVal::disabled> disabled{};
            constexpr MPL::Value<uart0wenVal,uart0wenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,uart0wenVal> uart0wen{}; 
        ///Low Power Charge Pump Supply Fail Wake Enable. 
        enum class cpfwenVal {
            disabled=0x00000000,     ///<A low power charge pump supply fail event does not wake the device.
            enabled=0x00000001,     ///<A low power charge pump supply fail event awakens the device.
        };
        namespace cpfwenValC{
            constexpr MPL::Value<cpfwenVal,cpfwenVal::disabled> disabled{};
            constexpr MPL::Value<cpfwenVal,cpfwenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cpfwenVal> cpfwen{}; 
    }
    namespace Nonewakestatus{    ///<Wakeup Status
        using Addr = Register::Address<0x40048040,0xfffffc00,0,unsigned>;
        ///RTC0 Fail Wake Flag. 
        enum class rtc0fwfVal {
            notSet=0x00000000,     ///<An RTC0 Fail event did not wake the device.
            set=0x00000001,     ///<An RTC0 Fail event woke the device.
        };
        namespace rtc0fwfValC{
            constexpr MPL::Value<rtc0fwfVal,rtc0fwfVal::notSet> notSet{};
            constexpr MPL::Value<rtc0fwfVal,rtc0fwfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rtc0fwfVal> rtc0fwf{}; 
        ///RTC0 Alarm Wake Flag. 
        enum class rtc0a0wfVal {
            notSet=0x00000000,     ///<An RTC0 Alarm event did not wake the device.
            set=0x00000001,     ///<An RTC0 Alarm event woke the device.
        };
        namespace rtc0a0wfValC{
            constexpr MPL::Value<rtc0a0wfVal,rtc0a0wfVal::notSet> notSet{};
            constexpr MPL::Value<rtc0a0wfVal,rtc0a0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rtc0a0wfVal> rtc0a0wf{}; 
        ///Comparator 0 Wake Flag. 
        enum class cmp0wfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not wake the device.
            set=0x00000001,     ///<A Comparator 0 event woke the device.
        };
        namespace cmp0wfValC{
            constexpr MPL::Value<cmp0wfVal,cmp0wfVal::notSet> notSet{};
            constexpr MPL::Value<cmp0wfVal,cmp0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp0wfVal> cmp0wf{}; 
        ///Advanced Capture Counter 0 Wake Flag. 
        enum class acc0wfVal {
            notSet=0x00000000,     ///<An Advanced Capture Counter (ACCTR0) event did not wake the device.
            set=0x00000001,     ///<An Advanced Capture Counter (ACCTR0) event woke the device.
        };
        namespace acc0wfValC{
            constexpr MPL::Value<acc0wfVal,acc0wfVal::notSet> notSet{};
            constexpr MPL::Value<acc0wfVal,acc0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,acc0wfVal> acc0wf{}; 
        ///LCD VBAT Voltage Monitor Wake Flag. 
        enum class lcdmonwfVal {
            notSet=0x00000000,     ///<A LCD VBAT voltage monitor event did not wake the device.
            set=0x00000001,     ///<A LCD VBAT voltage monitor event woke the device.
        };
        namespace lcdmonwfValC{
            constexpr MPL::Value<lcdmonwfVal,lcdmonwfVal::notSet> notSet{};
            constexpr MPL::Value<lcdmonwfVal,lcdmonwfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lcdmonwfVal> lcdmonwf{}; 
        ///Pin Wake Wake Flag. 
        enum class pwakewfVal {
            notSet=0x00000000,     ///<A Pin Wake event did not wake the device.
            set=0x00000001,     ///<A Pin Wake event woke the device.
        };
        namespace pwakewfValC{
            constexpr MPL::Value<pwakewfVal,pwakewfVal::notSet> notSet{};
            constexpr MPL::Value<pwakewfVal,pwakewfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pwakewfVal> pwakewf{}; 
        ///Low Power Timer Wake Flag. 
        enum class lpt0wfVal {
            notSet=0x00000000,     ///<An LPTIMER0 event did not wake the device.
            set=0x00000001,     ///<An LPTIMER0 event woke the device.
        };
        namespace lpt0wfValC{
            constexpr MPL::Value<lpt0wfVal,lpt0wfVal::notSet> notSet{};
            constexpr MPL::Value<lpt0wfVal,lpt0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lpt0wfVal> lpt0wf{}; 
        ///UART0 Wake Flag. 
        enum class uart0wfVal {
            notSet=0x00000000,     ///<A UART0 event did not wake the device.
            set=0x00000001,     ///<A UART0 event woke the device.
        };
        namespace uart0wfValC{
            constexpr MPL::Value<uart0wfVal,uart0wfVal::notSet> notSet{};
            constexpr MPL::Value<uart0wfVal,uart0wfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,uart0wfVal> uart0wf{}; 
        ///Low Power Charge Pump Supply Fail Wake Flag. 
        enum class cpfwfVal {
            notSet=0x00000000,     ///<A low power charge pump supply fail event did not wake the device.
            set=0x00000001,     ///<A low power charge pump supply fail event woke the device.
        };
        namespace cpfwfValC{
            constexpr MPL::Value<cpfwfVal,cpfwfVal::notSet> notSet{};
            constexpr MPL::Value<cpfwfVal,cpfwfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cpfwfVal> cpfwf{}; 
        ///Reset Pin Wake Flag. 
        enum class rstwfVal {
            notSet=0x00000000,     ///<A /RESET Pin event did not wake the device.
            set=0x00000001,     ///<A /RESET Pin event woke the device.
        };
        namespace rstwfValC{
            constexpr MPL::Value<rstwfVal,rstwfVal::notSet> notSet{};
            constexpr MPL::Value<rstwfVal,rstwfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rstwfVal> rstwf{}; 
    }
    namespace Nonepwen{    ///<Pin Wake Pin Enable
        using Addr = Register::Address<0x40048050,0xffff0000,0,unsigned>;
        ///WAKE.0 Enable. 
        enum class pw0enVal {
            disabled=0x00000000,     ///<WAKE.0 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.0 as a Pin Wake source.
        };
        namespace pw0enValC{
            constexpr MPL::Value<pw0enVal,pw0enVal::disabled> disabled{};
            constexpr MPL::Value<pw0enVal,pw0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pw0enVal> pw0en{}; 
        ///WAKE.1 Enable. 
        enum class pw1enVal {
            disabled=0x00000000,     ///<WAKE.1 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.1 as a Pin Wake source.
        };
        namespace pw1enValC{
            constexpr MPL::Value<pw1enVal,pw1enVal::disabled> disabled{};
            constexpr MPL::Value<pw1enVal,pw1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pw1enVal> pw1en{}; 
        ///WAKE.2 Enable. 
        enum class pw2enVal {
            disabled=0x00000000,     ///<WAKE.2 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.2 as a Pin Wake source.
        };
        namespace pw2enValC{
            constexpr MPL::Value<pw2enVal,pw2enVal::disabled> disabled{};
            constexpr MPL::Value<pw2enVal,pw2enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pw2enVal> pw2en{}; 
        ///WAKE.3 Enable. 
        enum class pw3enVal {
            disabled=0x00000000,     ///<WAKE.3 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.3 as a Pin Wake source.
        };
        namespace pw3enValC{
            constexpr MPL::Value<pw3enVal,pw3enVal::disabled> disabled{};
            constexpr MPL::Value<pw3enVal,pw3enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pw3enVal> pw3en{}; 
        ///WAKE.4 Enable. 
        enum class pw4enVal {
            disabled=0x00000000,     ///<WAKE.4 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.4 as a Pin Wake source.
        };
        namespace pw4enValC{
            constexpr MPL::Value<pw4enVal,pw4enVal::disabled> disabled{};
            constexpr MPL::Value<pw4enVal,pw4enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pw4enVal> pw4en{}; 
        ///WAKE.5 Enable. 
        enum class pw5enVal {
            disabled=0x00000000,     ///<WAKE.5 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.5 as a Pin Wake source.
        };
        namespace pw5enValC{
            constexpr MPL::Value<pw5enVal,pw5enVal::disabled> disabled{};
            constexpr MPL::Value<pw5enVal,pw5enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pw5enVal> pw5en{}; 
        ///WAKE.6 Enable. 
        enum class pw6enVal {
            disabled=0x00000000,     ///<WAKE.6 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.6 as a Pin Wake source.
        };
        namespace pw6enValC{
            constexpr MPL::Value<pw6enVal,pw6enVal::disabled> disabled{};
            constexpr MPL::Value<pw6enVal,pw6enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pw6enVal> pw6en{}; 
        ///WAKE.7 Enable. 
        enum class pw7enVal {
            disabled=0x00000000,     ///<WAKE.7 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.7 as a Pin Wake source.
        };
        namespace pw7enValC{
            constexpr MPL::Value<pw7enVal,pw7enVal::disabled> disabled{};
            constexpr MPL::Value<pw7enVal,pw7enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pw7enVal> pw7en{}; 
        ///WAKE.8 Enable. 
        enum class pw8enVal {
            disabled=0x00000000,     ///<WAKE.8 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.8 as a Pin Wake source.
        };
        namespace pw8enValC{
            constexpr MPL::Value<pw8enVal,pw8enVal::disabled> disabled{};
            constexpr MPL::Value<pw8enVal,pw8enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pw8enVal> pw8en{}; 
        ///WAKE.9 Enable. 
        enum class pw9enVal {
            disabled=0x00000000,     ///<WAKE.9 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.9 as a Pin Wake source.
        };
        namespace pw9enValC{
            constexpr MPL::Value<pw9enVal,pw9enVal::disabled> disabled{};
            constexpr MPL::Value<pw9enVal,pw9enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pw9enVal> pw9en{}; 
        ///WAKE.10 Enable. 
        enum class pw10enVal {
            disabled=0x00000000,     ///<WAKE.10 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.10 as a Pin Wake source.
        };
        namespace pw10enValC{
            constexpr MPL::Value<pw10enVal,pw10enVal::disabled> disabled{};
            constexpr MPL::Value<pw10enVal,pw10enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pw10enVal> pw10en{}; 
        ///WAKE.11 Enable. 
        enum class pw11enVal {
            disabled=0x00000000,     ///<WAKE.11 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.11 as a Pin Wake source.
        };
        namespace pw11enValC{
            constexpr MPL::Value<pw11enVal,pw11enVal::disabled> disabled{};
            constexpr MPL::Value<pw11enVal,pw11enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pw11enVal> pw11en{}; 
        ///WAKE.12 Enable. 
        enum class pw12enVal {
            disabled=0x00000000,     ///<WAKE.12 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.12 as a Pin Wake source.
        };
        namespace pw12enValC{
            constexpr MPL::Value<pw12enVal,pw12enVal::disabled> disabled{};
            constexpr MPL::Value<pw12enVal,pw12enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pw12enVal> pw12en{}; 
        ///WAKE.13 Enable. 
        enum class pw13enVal {
            disabled=0x00000000,     ///<WAKE.13 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.13 as a Pin Wake source.
        };
        namespace pw13enValC{
            constexpr MPL::Value<pw13enVal,pw13enVal::disabled> disabled{};
            constexpr MPL::Value<pw13enVal,pw13enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pw13enVal> pw13en{}; 
        ///WAKE.14 Enable. 
        enum class pw14enVal {
            disabled=0x00000000,     ///<WAKE.14 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.14 as a Pin Wake source.
        };
        namespace pw14enValC{
            constexpr MPL::Value<pw14enVal,pw14enVal::disabled> disabled{};
            constexpr MPL::Value<pw14enVal,pw14enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pw14enVal> pw14en{}; 
        ///WAKE.15 Enable. 
        enum class pw15enVal {
            disabled=0x00000000,     ///<WAKE.15 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.15 as a Pin Wake source.
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
            low=0x00000000,     ///<A logic low on WAKE.0 causes a Pin Wake event if PW0EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.0 causes a Pin Wake event if PW0EN is set to 1.
        };
        namespace pw0polValC{
            constexpr MPL::Value<pw0polVal,pw0polVal::low> low{};
            constexpr MPL::Value<pw0polVal,pw0polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pw0polVal> pw0pol{}; 
        ///WAKE.1 Polarity Select. 
        enum class pw1polVal {
            low=0x00000000,     ///<A logic low on WAKE.1 causes a Pin Wake event if PW1EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.1 causes a Pin Wake event if PW1EN is set to 1.
        };
        namespace pw1polValC{
            constexpr MPL::Value<pw1polVal,pw1polVal::low> low{};
            constexpr MPL::Value<pw1polVal,pw1polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pw1polVal> pw1pol{}; 
        ///WAKE.2 Polarity Select. 
        enum class pw2polVal {
            low=0x00000000,     ///<A logic low on WAKE.2 causes a Pin Wake event if PW2EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.2 causes a Pin Wake event if PW2EN is set to 1.
        };
        namespace pw2polValC{
            constexpr MPL::Value<pw2polVal,pw2polVal::low> low{};
            constexpr MPL::Value<pw2polVal,pw2polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pw2polVal> pw2pol{}; 
        ///WAKE.3 Polarity Select. 
        enum class pw3polVal {
            low=0x00000000,     ///<A logic low on WAKE.3 causes a Pin Wake event if PW3EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.3 causes a Pin Wake event if PW3EN is set to 1.
        };
        namespace pw3polValC{
            constexpr MPL::Value<pw3polVal,pw3polVal::low> low{};
            constexpr MPL::Value<pw3polVal,pw3polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pw3polVal> pw3pol{}; 
        ///WAKE.4 Polarity Select. 
        enum class pw4polVal {
            low=0x00000000,     ///<A logic low on WAKE.4 causes a Pin Wake event if PW4EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.4 causes a Pin Wake event if PW4EN is set to 1.
        };
        namespace pw4polValC{
            constexpr MPL::Value<pw4polVal,pw4polVal::low> low{};
            constexpr MPL::Value<pw4polVal,pw4polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pw4polVal> pw4pol{}; 
        ///WAKE.5 Polarity Select. 
        enum class pw5polVal {
            low=0x00000000,     ///<A logic low on WAKE.5 causes a Pin Wake event if PW5EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.5 causes a Pin Wake event if PW5EN is set to 1.
        };
        namespace pw5polValC{
            constexpr MPL::Value<pw5polVal,pw5polVal::low> low{};
            constexpr MPL::Value<pw5polVal,pw5polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pw5polVal> pw5pol{}; 
        ///WAKE.6 Polarity Select. 
        enum class pw6polVal {
            low=0x00000000,     ///<A logic low on WAKE.6 causes a Pin Wake event if PW6EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.6 causes a Pin Wake event if PW6EN is set to 1.
        };
        namespace pw6polValC{
            constexpr MPL::Value<pw6polVal,pw6polVal::low> low{};
            constexpr MPL::Value<pw6polVal,pw6polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pw6polVal> pw6pol{}; 
        ///WAKE.7 Polarity Select. 
        enum class pw7polVal {
            low=0x00000000,     ///<A logic low on WAKE.7 causes a Pin Wake event if PW7EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.7 causes a Pin Wake event if PW7EN is set to 1.
        };
        namespace pw7polValC{
            constexpr MPL::Value<pw7polVal,pw7polVal::low> low{};
            constexpr MPL::Value<pw7polVal,pw7polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pw7polVal> pw7pol{}; 
        ///WAKE.8 Polarity Select. 
        enum class pw8polVal {
            low=0x00000000,     ///<A logic low on WAKE.8 causes a Pin Wake event if PW8EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.8 causes a Pin Wake event if PW8EN is set to 1.
        };
        namespace pw8polValC{
            constexpr MPL::Value<pw8polVal,pw8polVal::low> low{};
            constexpr MPL::Value<pw8polVal,pw8polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pw8polVal> pw8pol{}; 
        ///WAKE.9 Polarity Select. 
        enum class pw9polVal {
            low=0x00000000,     ///<A logic low on WAKE.9 causes a Pin Wake event if PW9EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.9 causes a Pin Wake event if PW9EN is set to 1.
        };
        namespace pw9polValC{
            constexpr MPL::Value<pw9polVal,pw9polVal::low> low{};
            constexpr MPL::Value<pw9polVal,pw9polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pw9polVal> pw9pol{}; 
        ///WAKE.10 Polarity Select. 
        enum class pw10polVal {
            low=0x00000000,     ///<A logic low on WAKE.10 causes a Pin Wake event if PW10EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.10 causes a Pin Wake event if PW10EN is set to 1.
        };
        namespace pw10polValC{
            constexpr MPL::Value<pw10polVal,pw10polVal::low> low{};
            constexpr MPL::Value<pw10polVal,pw10polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pw10polVal> pw10pol{}; 
        ///WAKE.11 Polarity Select. 
        enum class pw11polVal {
            low=0x00000000,     ///<A logic low on WAKE.11 causes a Pin Wake event if PW11EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.11 causes a Pin Wake event if PW11EN is set to 1.
        };
        namespace pw11polValC{
            constexpr MPL::Value<pw11polVal,pw11polVal::low> low{};
            constexpr MPL::Value<pw11polVal,pw11polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pw11polVal> pw11pol{}; 
        ///WAKE.12 Polarity Select. 
        enum class pw12polVal {
            low=0x00000000,     ///<A logic low on WAKE.12 causes a Pin Wake event if PW12EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.12 causes a Pin Wake event if PW12EN is set to 1.
        };
        namespace pw12polValC{
            constexpr MPL::Value<pw12polVal,pw12polVal::low> low{};
            constexpr MPL::Value<pw12polVal,pw12polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pw12polVal> pw12pol{}; 
        ///WAKE.13 Polarity Select. 
        enum class pw13polVal {
            low=0x00000000,     ///<A logic low on WAKE.13 causes a Pin Wake event if PW13EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.13 causes a Pin Wake event if PW13EN is set to 1.
        };
        namespace pw13polValC{
            constexpr MPL::Value<pw13polVal,pw13polVal::low> low{};
            constexpr MPL::Value<pw13polVal,pw13polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pw13polVal> pw13pol{}; 
        ///WAKE.14 Polarity Select. 
        enum class pw14polVal {
            low=0x00000000,     ///<A logic low on WAKE.14 causes a Pin Wake event if PW14EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.14 causes a Pin Wake event if PW14EN is set to 1.
        };
        namespace pw14polValC{
            constexpr MPL::Value<pw14polVal,pw14polVal::low> low{};
            constexpr MPL::Value<pw14polVal,pw14polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pw14polVal> pw14pol{}; 
        ///WAKE.15 Polarity Select. 
        enum class pw15polVal {
            low=0x00000000,     ///<A logic low on WAKE.15 causes a Pin Wake event if PW15EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.15 causes a Pin Wake event if PW15EN is set to 1.
        };
        namespace pw15polValC{
            constexpr MPL::Value<pw15polVal,pw15polVal::low> low{};
            constexpr MPL::Value<pw15polVal,pw15polVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pw15polVal> pw15pol{}; 
    }
}
