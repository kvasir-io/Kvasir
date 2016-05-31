#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Pmu0Control{    ///<Module Control
        using Addr = Register::Address<0x40048000,0xff00ff86,0x00000000,unsigned>;
        ///Wakeup Source Clear. 
        enum class WakeclrVal {
            clear=0x00000000,     ///<Clear all wakeup sources.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WakeclrVal> wakeclr{}; 
        namespace WakeclrValC{
            constexpr Register::FieldValue<decltype(wakeclr)::Type,WakeclrVal::clear> clear{};
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
        ///Low Power Charge Pump Voltage Monitor Enable. 
        enum class CpmonenVal {
            disabled=0x00000000,     ///<Disable the low power charge pump voltage monitor.
            enabled=0x00000001,     ///<Enable the low power charge pump voltage monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpmonenVal> cpmonen{}; 
        namespace CpmonenValC{
            constexpr Register::FieldValue<decltype(cpmonen)::Type,CpmonenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpmonen)::Type,CpmonenVal::enabled> enabled{};
        }
        ///Low Power Charge Pump Voltage Monitor Interrupt Enable. 
        enum class CpmonienVal {
            disabled=0x00000000,     ///<Disable the low power charge pump voltage monitor interrupt.
            enabled=0x00000001,     ///<Enable the low power charge pump voltage monitor interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CpmonienVal> cpmonien{}; 
        namespace CpmonienValC{
            constexpr Register::FieldValue<decltype(cpmonien)::Type,CpmonienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpmonien)::Type,CpmonienVal::enabled> enabled{};
        }
        ///RAM 0 Retention Enable. 
        enum class Ram0renVal {
            disabled=0x00000000,     ///<Disable power to RAM 0 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 0 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ram0renVal> ram0ren{}; 
        namespace Ram0renValC{
            constexpr Register::FieldValue<decltype(ram0ren)::Type,Ram0renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram0ren)::Type,Ram0renVal::enabled> enabled{};
        }
        ///RAM 1 Retention Enable. 
        enum class Ram1renVal {
            disabled=0x00000000,     ///<Disable power to RAM 1 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 1 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ram1renVal> ram1ren{}; 
        namespace Ram1renValC{
            constexpr Register::FieldValue<decltype(ram1ren)::Type,Ram1renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram1ren)::Type,Ram1renVal::enabled> enabled{};
        }
        ///RAM 2 Retention Enable. 
        enum class Ram2renVal {
            disabled=0x00000000,     ///<Disable power to RAM 2 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 2 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ram2renVal> ram2ren{}; 
        namespace Ram2renValC{
            constexpr Register::FieldValue<decltype(ram2ren)::Type,Ram2renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram2ren)::Type,Ram2renVal::enabled> enabled{};
        }
        ///RAM 3 Retention Enable. 
        enum class Ram3renVal {
            disabled=0x00000000,     ///<Disable power to RAM 3 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 3 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ram3renVal> ram3ren{}; 
        namespace Ram3renValC{
            constexpr Register::FieldValue<decltype(ram3ren)::Type,Ram3renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram3ren)::Type,Ram3renVal::enabled> enabled{};
        }
        ///RAM 4 Retention Enable. 
        enum class Ram4renVal {
            disabled=0x00000000,     ///<Disable power to RAM 4 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 4 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ram4renVal> ram4ren{}; 
        namespace Ram4renValC{
            constexpr Register::FieldValue<decltype(ram4ren)::Type,Ram4renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram4ren)::Type,Ram4renVal::enabled> enabled{};
        }
        ///RAM 5 Retention Enable. 
        enum class Ram5renVal {
            disabled=0x00000000,     ///<Disable power to RAM 5 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 5 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ram5renVal> ram5ren{}; 
        namespace Ram5renValC{
            constexpr Register::FieldValue<decltype(ram5ren)::Type,Ram5renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram5ren)::Type,Ram5renVal::enabled> enabled{};
        }
        ///RAM 6 Retention Enable. 
        enum class Ram6renVal {
            disabled=0x00000000,     ///<Disable power to RAM 6 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 6 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ram6renVal> ram6ren{}; 
        namespace Ram6renValC{
            constexpr Register::FieldValue<decltype(ram6ren)::Type,Ram6renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram6ren)::Type,Ram6renVal::enabled> enabled{};
        }
        ///RAM 7 Retention Enable. 
        enum class Ram7renVal {
            disabled=0x00000000,     ///<Disable power to RAM 7 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
            enabled=0x00000001,     ///<Enable power to RAM 7 during sleep (4 kB addresses from 0x20000000 to 0x20000FFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ram7renVal> ram7ren{}; 
        namespace Ram7renValC{
            constexpr Register::FieldValue<decltype(ram7ren)::Type,Ram7renVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ram7ren)::Type,Ram7renVal::enabled> enabled{};
        }
    }
    namespace Pmu0Config{    ///<Module Configuration
        using Addr = Register::Address<0x40048010,0xfffff28f,0x00000000,unsigned>;
        ///VBAT Monitor Disable. 
        enum class VbatmonenVal {
            enabled=0x00000000,     ///<Enable the 0.8 V VBAT monitor.
            disabled=0x00000001,     ///<Disable the 0.8V VBAT monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VbatmonenVal> vbatmonen{}; 
        namespace VbatmonenValC{
            constexpr Register::FieldValue<decltype(vbatmonen)::Type,VbatmonenVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(vbatmonen)::Type,VbatmonenVal::disabled> disabled{};
        }
        ///VDRV Switch Mode. 
        enum class VdrvsmdVal {
            highz=0x00000000,     ///<High-Z.
            vbat=0x00000002,     ///<VBAT connected to VDRV.
            vdc=0x00000003,     ///<DC-DC output connected to VDRV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,VdrvsmdVal> vdrvsmd{}; 
        namespace VdrvsmdValC{
            constexpr Register::FieldValue<decltype(vdrvsmd)::Type,VdrvsmdVal::highz> highz{};
            constexpr Register::FieldValue<decltype(vdrvsmd)::Type,VdrvsmdVal::vbat> vbat{};
            constexpr Register::FieldValue<decltype(vdrvsmd)::Type,VdrvsmdVal::vdc> vdc{};
        }
        ///Low Power Charge Pump Enable. 
        enum class CpenVal {
            disabled=0x00000000,     ///<
            enabled=0x00000001,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CpenVal> cpen{}; 
        namespace CpenValC{
            constexpr Register::FieldValue<decltype(cpen)::Type,CpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpen)::Type,CpenVal::enabled> enabled{};
        }
        ///Charge Pump Load Setting. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cpload{}; 
    }
    namespace Pmu0Status{    ///<Module Status
        using Addr = Register::Address<0x40048020,0xfffffff0,0x00000000,unsigned>;
        ///Power Mode 8 Exited Flag. 
        enum class Pm8efVal {
            notSet=0x00000000,     ///<The device has not exited Power Mode 8.
            set=0x00000001,     ///<The device has exited Power Mode 8. This bit must be cleared by firmware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pm8efVal> pm8ef{}; 
        namespace Pm8efValC{
            constexpr Register::FieldValue<decltype(pm8ef)::Type,Pm8efVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pm8ef)::Type,Pm8efVal::set> set{};
        }
        ///Pin Wake Status Flag. 
        enum class PwakefVal {
            notSet=0x00000000,     ///<A Pin Wake event has not occurred.
            set=0x00000001,     ///<A Pin Wake event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PwakefVal> pwakef{}; 
        namespace PwakefValC{
            constexpr Register::FieldValue<decltype(pwakef)::Type,PwakefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pwakef)::Type,PwakefVal::set> set{};
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
        ///Low Power Charge Pump Voltage Monitor Status. 
        enum class CpstsVal {
            notSet=0x00000000,     ///<The low power charge pump supply voltage is below the threshold.
            set=0x00000001,     ///<The low power charge pump supply voltage is greater than the threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CpstsVal> cpsts{}; 
        namespace CpstsValC{
            constexpr Register::FieldValue<decltype(cpsts)::Type,CpstsVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cpsts)::Type,CpstsVal::set> set{};
        }
    }
    namespace Pmu0Wakeen{    ///<Wakeup Enable
        using Addr = Register::Address<0x40048030,0xfffffe00,0x00000000,unsigned>;
        ///RTC0 Fail Wake Enable. 
        enum class Rtc0fwenVal {
            disabled=0x00000000,     ///<An RTC0 Fail event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 Fail event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Rtc0fwenVal> rtc0fwen{}; 
        namespace Rtc0fwenValC{
            constexpr Register::FieldValue<decltype(rtc0fwen)::Type,Rtc0fwenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0fwen)::Type,Rtc0fwenVal::enabled> enabled{};
        }
        ///RTC0 Alarm Wake Enable. 
        enum class Rtc0a0wenVal {
            disabled=0x00000000,     ///<An RTC0 Alarm event does not wake the device.
            enabled=0x00000001,     ///<An RTC0 Alarm event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Rtc0a0wenVal> rtc0a0wen{}; 
        namespace Rtc0a0wenValC{
            constexpr Register::FieldValue<decltype(rtc0a0wen)::Type,Rtc0a0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtc0a0wen)::Type,Rtc0a0wenVal::enabled> enabled{};
        }
        ///Comparator 0 Wake Enable. 
        enum class Cmp0wenVal {
            disabled=0x00000000,     ///<A Comparator 0 event does not wake the device.
            enabled=0x00000001,     ///<A Comparator 0 event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cmp0wenVal> cmp0wen{}; 
        namespace Cmp0wenValC{
            constexpr Register::FieldValue<decltype(cmp0wen)::Type,Cmp0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0wen)::Type,Cmp0wenVal::enabled> enabled{};
        }
        ///Advanced Capture Counter 0 Wake Enable. 
        enum class Acc0wenVal {
            disabled=0x00000000,     ///<An Advanced Capture Counter (ACCTR0) event does not wake the device.
            enabled=0x00000001,     ///<An Advanced Capture Counter (ACCTR0) event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Acc0wenVal> acc0wen{}; 
        namespace Acc0wenValC{
            constexpr Register::FieldValue<decltype(acc0wen)::Type,Acc0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acc0wen)::Type,Acc0wenVal::enabled> enabled{};
        }
        ///LCD VBAT Voltage Monitor Wake Enable. 
        enum class LcdmonwenVal {
            disabled=0x00000000,     ///<An LCD VBAT voltage monitor event does not wake the device.
            enabled=0x00000001,     ///<An LCD VBAT voltage monitor event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LcdmonwenVal> lcdmonwen{}; 
        namespace LcdmonwenValC{
            constexpr Register::FieldValue<decltype(lcdmonwen)::Type,LcdmonwenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lcdmonwen)::Type,LcdmonwenVal::enabled> enabled{};
        }
        ///Pin Wake Wake Enable. 
        enum class PwakewenVal {
            disabled=0x00000000,     ///<A Pin Wake event does not wake the device.
            enabled=0x00000001,     ///<A Pin Wake event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PwakewenVal> pwakewen{}; 
        namespace PwakewenValC{
            constexpr Register::FieldValue<decltype(pwakewen)::Type,PwakewenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwakewen)::Type,PwakewenVal::enabled> enabled{};
        }
        ///Low Power Timer Wake Enable. 
        enum class Lpt0wenVal {
            disabled=0x00000000,     ///<An LPTIMER0 event does not wake the device.
            enabled=0x00000001,     ///<An LPTIMER0 event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Lpt0wenVal> lpt0wen{}; 
        namespace Lpt0wenValC{
            constexpr Register::FieldValue<decltype(lpt0wen)::Type,Lpt0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpt0wen)::Type,Lpt0wenVal::enabled> enabled{};
        }
        ///UART0 Wake Enable. 
        enum class Uart0wenVal {
            disabled=0x00000000,     ///<A UART0 event does not wake the device.
            enabled=0x00000001,     ///<A UART0 event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Uart0wenVal> uart0wen{}; 
        namespace Uart0wenValC{
            constexpr Register::FieldValue<decltype(uart0wen)::Type,Uart0wenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0wen)::Type,Uart0wenVal::enabled> enabled{};
        }
        ///Low Power Charge Pump Supply Fail Wake Enable. 
        enum class CpfwenVal {
            disabled=0x00000000,     ///<A low power charge pump supply fail event does not wake the device.
            enabled=0x00000001,     ///<A low power charge pump supply fail event awakens the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CpfwenVal> cpfwen{}; 
        namespace CpfwenValC{
            constexpr Register::FieldValue<decltype(cpfwen)::Type,CpfwenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpfwen)::Type,CpfwenVal::enabled> enabled{};
        }
    }
    namespace Pmu0Wakestatus{    ///<Wakeup Status
        using Addr = Register::Address<0x40048040,0xfffffc00,0x00000000,unsigned>;
        ///RTC0 Fail Wake Flag. 
        enum class Rtc0fwfVal {
            notSet=0x00000000,     ///<An RTC0 Fail event did not wake the device.
            set=0x00000001,     ///<An RTC0 Fail event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Rtc0fwfVal> rtc0fwf{}; 
        namespace Rtc0fwfValC{
            constexpr Register::FieldValue<decltype(rtc0fwf)::Type,Rtc0fwfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0fwf)::Type,Rtc0fwfVal::set> set{};
        }
        ///RTC0 Alarm Wake Flag. 
        enum class Rtc0a0wfVal {
            notSet=0x00000000,     ///<An RTC0 Alarm event did not wake the device.
            set=0x00000001,     ///<An RTC0 Alarm event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Rtc0a0wfVal> rtc0a0wf{}; 
        namespace Rtc0a0wfValC{
            constexpr Register::FieldValue<decltype(rtc0a0wf)::Type,Rtc0a0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rtc0a0wf)::Type,Rtc0a0wfVal::set> set{};
        }
        ///Comparator 0 Wake Flag. 
        enum class Cmp0wfVal {
            notSet=0x00000000,     ///<A Comparator 0 event did not wake the device.
            set=0x00000001,     ///<A Comparator 0 event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Cmp0wfVal> cmp0wf{}; 
        namespace Cmp0wfValC{
            constexpr Register::FieldValue<decltype(cmp0wf)::Type,Cmp0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0wf)::Type,Cmp0wfVal::set> set{};
        }
        ///Advanced Capture Counter 0 Wake Flag. 
        enum class Acc0wfVal {
            notSet=0x00000000,     ///<An Advanced Capture Counter (ACCTR0) event did not wake the device.
            set=0x00000001,     ///<An Advanced Capture Counter (ACCTR0) event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Acc0wfVal> acc0wf{}; 
        namespace Acc0wfValC{
            constexpr Register::FieldValue<decltype(acc0wf)::Type,Acc0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(acc0wf)::Type,Acc0wfVal::set> set{};
        }
        ///LCD VBAT Voltage Monitor Wake Flag. 
        enum class LcdmonwfVal {
            notSet=0x00000000,     ///<A LCD VBAT voltage monitor event did not wake the device.
            set=0x00000001,     ///<A LCD VBAT voltage monitor event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LcdmonwfVal> lcdmonwf{}; 
        namespace LcdmonwfValC{
            constexpr Register::FieldValue<decltype(lcdmonwf)::Type,LcdmonwfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lcdmonwf)::Type,LcdmonwfVal::set> set{};
        }
        ///Pin Wake Wake Flag. 
        enum class PwakewfVal {
            notSet=0x00000000,     ///<A Pin Wake event did not wake the device.
            set=0x00000001,     ///<A Pin Wake event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PwakewfVal> pwakewf{}; 
        namespace PwakewfValC{
            constexpr Register::FieldValue<decltype(pwakewf)::Type,PwakewfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pwakewf)::Type,PwakewfVal::set> set{};
        }
        ///Low Power Timer Wake Flag. 
        enum class Lpt0wfVal {
            notSet=0x00000000,     ///<An LPTIMER0 event did not wake the device.
            set=0x00000001,     ///<An LPTIMER0 event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lpt0wfVal> lpt0wf{}; 
        namespace Lpt0wfValC{
            constexpr Register::FieldValue<decltype(lpt0wf)::Type,Lpt0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lpt0wf)::Type,Lpt0wfVal::set> set{};
        }
        ///UART0 Wake Flag. 
        enum class Uart0wfVal {
            notSet=0x00000000,     ///<A UART0 event did not wake the device.
            set=0x00000001,     ///<A UART0 event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Uart0wfVal> uart0wf{}; 
        namespace Uart0wfValC{
            constexpr Register::FieldValue<decltype(uart0wf)::Type,Uart0wfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(uart0wf)::Type,Uart0wfVal::set> set{};
        }
        ///Low Power Charge Pump Supply Fail Wake Flag. 
        enum class CpfwfVal {
            notSet=0x00000000,     ///<A low power charge pump supply fail event did not wake the device.
            set=0x00000001,     ///<A low power charge pump supply fail event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CpfwfVal> cpfwf{}; 
        namespace CpfwfValC{
            constexpr Register::FieldValue<decltype(cpfwf)::Type,CpfwfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cpfwf)::Type,CpfwfVal::set> set{};
        }
        ///Reset Pin Wake Flag. 
        enum class RstwfVal {
            notSet=0x00000000,     ///<A /RESET Pin event did not wake the device.
            set=0x00000001,     ///<A /RESET Pin event woke the device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RstwfVal> rstwf{}; 
        namespace RstwfValC{
            constexpr Register::FieldValue<decltype(rstwf)::Type,RstwfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rstwf)::Type,RstwfVal::set> set{};
        }
    }
    namespace Pmu0Pwen{    ///<Pin Wake Pin Enable
        using Addr = Register::Address<0x40048050,0xffff0000,0x00000000,unsigned>;
        ///WAKE.0 Enable. 
        enum class Pw0enVal {
            disabled=0x00000000,     ///<WAKE.0 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.0 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pw0enVal> pw0en{}; 
        namespace Pw0enValC{
            constexpr Register::FieldValue<decltype(pw0en)::Type,Pw0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw0en)::Type,Pw0enVal::enabled> enabled{};
        }
        ///WAKE.1 Enable. 
        enum class Pw1enVal {
            disabled=0x00000000,     ///<WAKE.1 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.1 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pw1enVal> pw1en{}; 
        namespace Pw1enValC{
            constexpr Register::FieldValue<decltype(pw1en)::Type,Pw1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw1en)::Type,Pw1enVal::enabled> enabled{};
        }
        ///WAKE.2 Enable. 
        enum class Pw2enVal {
            disabled=0x00000000,     ///<WAKE.2 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.2 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pw2enVal> pw2en{}; 
        namespace Pw2enValC{
            constexpr Register::FieldValue<decltype(pw2en)::Type,Pw2enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw2en)::Type,Pw2enVal::enabled> enabled{};
        }
        ///WAKE.3 Enable. 
        enum class Pw3enVal {
            disabled=0x00000000,     ///<WAKE.3 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.3 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pw3enVal> pw3en{}; 
        namespace Pw3enValC{
            constexpr Register::FieldValue<decltype(pw3en)::Type,Pw3enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw3en)::Type,Pw3enVal::enabled> enabled{};
        }
        ///WAKE.4 Enable. 
        enum class Pw4enVal {
            disabled=0x00000000,     ///<WAKE.4 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.4 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pw4enVal> pw4en{}; 
        namespace Pw4enValC{
            constexpr Register::FieldValue<decltype(pw4en)::Type,Pw4enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw4en)::Type,Pw4enVal::enabled> enabled{};
        }
        ///WAKE.5 Enable. 
        enum class Pw5enVal {
            disabled=0x00000000,     ///<WAKE.5 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.5 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pw5enVal> pw5en{}; 
        namespace Pw5enValC{
            constexpr Register::FieldValue<decltype(pw5en)::Type,Pw5enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw5en)::Type,Pw5enVal::enabled> enabled{};
        }
        ///WAKE.6 Enable. 
        enum class Pw6enVal {
            disabled=0x00000000,     ///<WAKE.6 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.6 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pw6enVal> pw6en{}; 
        namespace Pw6enValC{
            constexpr Register::FieldValue<decltype(pw6en)::Type,Pw6enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw6en)::Type,Pw6enVal::enabled> enabled{};
        }
        ///WAKE.7 Enable. 
        enum class Pw7enVal {
            disabled=0x00000000,     ///<WAKE.7 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.7 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pw7enVal> pw7en{}; 
        namespace Pw7enValC{
            constexpr Register::FieldValue<decltype(pw7en)::Type,Pw7enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw7en)::Type,Pw7enVal::enabled> enabled{};
        }
        ///WAKE.8 Enable. 
        enum class Pw8enVal {
            disabled=0x00000000,     ///<WAKE.8 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.8 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pw8enVal> pw8en{}; 
        namespace Pw8enValC{
            constexpr Register::FieldValue<decltype(pw8en)::Type,Pw8enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw8en)::Type,Pw8enVal::enabled> enabled{};
        }
        ///WAKE.9 Enable. 
        enum class Pw9enVal {
            disabled=0x00000000,     ///<WAKE.9 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.9 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pw9enVal> pw9en{}; 
        namespace Pw9enValC{
            constexpr Register::FieldValue<decltype(pw9en)::Type,Pw9enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw9en)::Type,Pw9enVal::enabled> enabled{};
        }
        ///WAKE.10 Enable. 
        enum class Pw10enVal {
            disabled=0x00000000,     ///<WAKE.10 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.10 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pw10enVal> pw10en{}; 
        namespace Pw10enValC{
            constexpr Register::FieldValue<decltype(pw10en)::Type,Pw10enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw10en)::Type,Pw10enVal::enabled> enabled{};
        }
        ///WAKE.11 Enable. 
        enum class Pw11enVal {
            disabled=0x00000000,     ///<WAKE.11 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.11 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pw11enVal> pw11en{}; 
        namespace Pw11enValC{
            constexpr Register::FieldValue<decltype(pw11en)::Type,Pw11enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw11en)::Type,Pw11enVal::enabled> enabled{};
        }
        ///WAKE.12 Enable. 
        enum class Pw12enVal {
            disabled=0x00000000,     ///<WAKE.12 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.12 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pw12enVal> pw12en{}; 
        namespace Pw12enValC{
            constexpr Register::FieldValue<decltype(pw12en)::Type,Pw12enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw12en)::Type,Pw12enVal::enabled> enabled{};
        }
        ///WAKE.13 Enable. 
        enum class Pw13enVal {
            disabled=0x00000000,     ///<WAKE.13 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.13 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pw13enVal> pw13en{}; 
        namespace Pw13enValC{
            constexpr Register::FieldValue<decltype(pw13en)::Type,Pw13enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw13en)::Type,Pw13enVal::enabled> enabled{};
        }
        ///WAKE.14 Enable. 
        enum class Pw14enVal {
            disabled=0x00000000,     ///<WAKE.14 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.14 as a Pin Wake source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pw14enVal> pw14en{}; 
        namespace Pw14enValC{
            constexpr Register::FieldValue<decltype(pw14en)::Type,Pw14enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pw14en)::Type,Pw14enVal::enabled> enabled{};
        }
        ///WAKE.15 Enable. 
        enum class Pw15enVal {
            disabled=0x00000000,     ///<WAKE.15 does not cause a Pin Wake event.
            enabled=0x00000001,     ///<Enable WAKE.15 as a Pin Wake source.
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
            low=0x00000000,     ///<A logic low on WAKE.0 causes a Pin Wake event if PW0EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.0 causes a Pin Wake event if PW0EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pw0polVal> pw0pol{}; 
        namespace Pw0polValC{
            constexpr Register::FieldValue<decltype(pw0pol)::Type,Pw0polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw0pol)::Type,Pw0polVal::high> high{};
        }
        ///WAKE.1 Polarity Select. 
        enum class Pw1polVal {
            low=0x00000000,     ///<A logic low on WAKE.1 causes a Pin Wake event if PW1EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.1 causes a Pin Wake event if PW1EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pw1polVal> pw1pol{}; 
        namespace Pw1polValC{
            constexpr Register::FieldValue<decltype(pw1pol)::Type,Pw1polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw1pol)::Type,Pw1polVal::high> high{};
        }
        ///WAKE.2 Polarity Select. 
        enum class Pw2polVal {
            low=0x00000000,     ///<A logic low on WAKE.2 causes a Pin Wake event if PW2EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.2 causes a Pin Wake event if PW2EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pw2polVal> pw2pol{}; 
        namespace Pw2polValC{
            constexpr Register::FieldValue<decltype(pw2pol)::Type,Pw2polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw2pol)::Type,Pw2polVal::high> high{};
        }
        ///WAKE.3 Polarity Select. 
        enum class Pw3polVal {
            low=0x00000000,     ///<A logic low on WAKE.3 causes a Pin Wake event if PW3EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.3 causes a Pin Wake event if PW3EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pw3polVal> pw3pol{}; 
        namespace Pw3polValC{
            constexpr Register::FieldValue<decltype(pw3pol)::Type,Pw3polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw3pol)::Type,Pw3polVal::high> high{};
        }
        ///WAKE.4 Polarity Select. 
        enum class Pw4polVal {
            low=0x00000000,     ///<A logic low on WAKE.4 causes a Pin Wake event if PW4EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.4 causes a Pin Wake event if PW4EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pw4polVal> pw4pol{}; 
        namespace Pw4polValC{
            constexpr Register::FieldValue<decltype(pw4pol)::Type,Pw4polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw4pol)::Type,Pw4polVal::high> high{};
        }
        ///WAKE.5 Polarity Select. 
        enum class Pw5polVal {
            low=0x00000000,     ///<A logic low on WAKE.5 causes a Pin Wake event if PW5EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.5 causes a Pin Wake event if PW5EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pw5polVal> pw5pol{}; 
        namespace Pw5polValC{
            constexpr Register::FieldValue<decltype(pw5pol)::Type,Pw5polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw5pol)::Type,Pw5polVal::high> high{};
        }
        ///WAKE.6 Polarity Select. 
        enum class Pw6polVal {
            low=0x00000000,     ///<A logic low on WAKE.6 causes a Pin Wake event if PW6EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.6 causes a Pin Wake event if PW6EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pw6polVal> pw6pol{}; 
        namespace Pw6polValC{
            constexpr Register::FieldValue<decltype(pw6pol)::Type,Pw6polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw6pol)::Type,Pw6polVal::high> high{};
        }
        ///WAKE.7 Polarity Select. 
        enum class Pw7polVal {
            low=0x00000000,     ///<A logic low on WAKE.7 causes a Pin Wake event if PW7EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.7 causes a Pin Wake event if PW7EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pw7polVal> pw7pol{}; 
        namespace Pw7polValC{
            constexpr Register::FieldValue<decltype(pw7pol)::Type,Pw7polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw7pol)::Type,Pw7polVal::high> high{};
        }
        ///WAKE.8 Polarity Select. 
        enum class Pw8polVal {
            low=0x00000000,     ///<A logic low on WAKE.8 causes a Pin Wake event if PW8EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.8 causes a Pin Wake event if PW8EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pw8polVal> pw8pol{}; 
        namespace Pw8polValC{
            constexpr Register::FieldValue<decltype(pw8pol)::Type,Pw8polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw8pol)::Type,Pw8polVal::high> high{};
        }
        ///WAKE.9 Polarity Select. 
        enum class Pw9polVal {
            low=0x00000000,     ///<A logic low on WAKE.9 causes a Pin Wake event if PW9EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.9 causes a Pin Wake event if PW9EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pw9polVal> pw9pol{}; 
        namespace Pw9polValC{
            constexpr Register::FieldValue<decltype(pw9pol)::Type,Pw9polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw9pol)::Type,Pw9polVal::high> high{};
        }
        ///WAKE.10 Polarity Select. 
        enum class Pw10polVal {
            low=0x00000000,     ///<A logic low on WAKE.10 causes a Pin Wake event if PW10EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.10 causes a Pin Wake event if PW10EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pw10polVal> pw10pol{}; 
        namespace Pw10polValC{
            constexpr Register::FieldValue<decltype(pw10pol)::Type,Pw10polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw10pol)::Type,Pw10polVal::high> high{};
        }
        ///WAKE.11 Polarity Select. 
        enum class Pw11polVal {
            low=0x00000000,     ///<A logic low on WAKE.11 causes a Pin Wake event if PW11EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.11 causes a Pin Wake event if PW11EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pw11polVal> pw11pol{}; 
        namespace Pw11polValC{
            constexpr Register::FieldValue<decltype(pw11pol)::Type,Pw11polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw11pol)::Type,Pw11polVal::high> high{};
        }
        ///WAKE.12 Polarity Select. 
        enum class Pw12polVal {
            low=0x00000000,     ///<A logic low on WAKE.12 causes a Pin Wake event if PW12EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.12 causes a Pin Wake event if PW12EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pw12polVal> pw12pol{}; 
        namespace Pw12polValC{
            constexpr Register::FieldValue<decltype(pw12pol)::Type,Pw12polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw12pol)::Type,Pw12polVal::high> high{};
        }
        ///WAKE.13 Polarity Select. 
        enum class Pw13polVal {
            low=0x00000000,     ///<A logic low on WAKE.13 causes a Pin Wake event if PW13EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.13 causes a Pin Wake event if PW13EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pw13polVal> pw13pol{}; 
        namespace Pw13polValC{
            constexpr Register::FieldValue<decltype(pw13pol)::Type,Pw13polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw13pol)::Type,Pw13polVal::high> high{};
        }
        ///WAKE.14 Polarity Select. 
        enum class Pw14polVal {
            low=0x00000000,     ///<A logic low on WAKE.14 causes a Pin Wake event if PW14EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.14 causes a Pin Wake event if PW14EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pw14polVal> pw14pol{}; 
        namespace Pw14polValC{
            constexpr Register::FieldValue<decltype(pw14pol)::Type,Pw14polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw14pol)::Type,Pw14polVal::high> high{};
        }
        ///WAKE.15 Polarity Select. 
        enum class Pw15polVal {
            low=0x00000000,     ///<A logic low on WAKE.15 causes a Pin Wake event if PW15EN is set to 1.
            high=0x00000001,     ///<A logic high on WAKE.15 causes a Pin Wake event if PW15EN is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pw15polVal> pw15pol{}; 
        namespace Pw15polValC{
            constexpr Register::FieldValue<decltype(pw15pol)::Type,Pw15polVal::low> low{};
            constexpr Register::FieldValue<decltype(pw15pol)::Type,Pw15polVal::high> high{};
        }
    }
}
