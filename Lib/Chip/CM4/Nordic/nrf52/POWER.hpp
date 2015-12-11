#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace NonetasksConstlat{    ///<Enable constant latency mode
        using Addr = Register::Address<0x40000078,0xffffffff,0,unsigned>;
    }
    namespace NonetasksLowpwr{    ///<Enable low power mode (variable latency)
        using Addr = Register::Address<0x4000007c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPofwarn{    ///<Power failure warning
        using Addr = Register::Address<0x40000108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSleepenter{    ///<CPU entered WFI/WFE sleep
        using Addr = Register::Address<0x40000114,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSleepexit{    ///<CPU exited WFI/WFE sleep
        using Addr = Register::Address<0x40000118,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40000304,0xffffff9b,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_POFWARN event
        enum class PofwarnVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PofwarnVal> pofwarn{}; 
        namespace PofwarnValC{
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_SLEEPENTER event
        enum class SleepenterVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SleepenterVal> sleepenter{}; 
        namespace SleepenterValC{
            constexpr Register::FieldValue<decltype(sleepenter)::Type,SleepenterVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sleepenter)::Type,SleepenterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(sleepenter)::Type,SleepenterVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_SLEEPEXIT event
        enum class SleepexitVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SleepexitVal> sleepexit{}; 
        namespace SleepexitValC{
            constexpr Register::FieldValue<decltype(sleepexit)::Type,SleepexitVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sleepexit)::Type,SleepexitVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(sleepexit)::Type,SleepexitVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40000308,0xffffff9b,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_POFWARN event
        enum class PofwarnVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PofwarnVal> pofwarn{}; 
        namespace PofwarnValC{
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_SLEEPENTER event
        enum class SleepenterVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SleepenterVal> sleepenter{}; 
        namespace SleepenterValC{
            constexpr Register::FieldValue<decltype(sleepenter)::Type,SleepenterVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sleepenter)::Type,SleepenterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(sleepenter)::Type,SleepenterVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_SLEEPEXIT event
        enum class SleepexitVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SleepexitVal> sleepexit{}; 
        namespace SleepexitValC{
            constexpr Register::FieldValue<decltype(sleepexit)::Type,SleepexitVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sleepexit)::Type,SleepexitVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(sleepexit)::Type,SleepexitVal::clear> clear{};
        }
        }
    }
    namespace Noneresetreas{    ///<Reset reason
        using Addr = Register::Address<0x40000400,0xfff0fff0,0,unsigned>;
        ///Reset from pin-reset detected
        enum class ResetpinVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ResetpinVal> resetpin{}; 
        namespace ResetpinValC{
            constexpr Register::FieldValue<decltype(resetpin)::Type,ResetpinVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(resetpin)::Type,ResetpinVal::detected> detected{};
        }
        }
        ///Reset from watchdog detected
        enum class DogVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DogVal> dog{}; 
        namespace DogValC{
            constexpr Register::FieldValue<decltype(dog)::Type,DogVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(dog)::Type,DogVal::detected> detected{};
        }
        }
        ///Reset from AIRCR.SYSRESETREQ detected
        enum class SreqVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreqVal> sreq{}; 
        namespace SreqValC{
            constexpr Register::FieldValue<decltype(sreq)::Type,SreqVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(sreq)::Type,SreqVal::detected> detected{};
        }
        }
        ///Reset from CPU lock-up detected
        enum class LockupVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::detected> detected{};
        }
        }
        ///Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO
        enum class OffVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OffVal> off{}; 
        namespace OffValC{
            constexpr Register::FieldValue<decltype(off)::Type,OffVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(off)::Type,OffVal::detected> detected{};
        }
        }
        ///Reset due to wake up from System OFF mode when wakeup is triggered from ANADETECT signal from LPCOMP
        enum class LpcompVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,LpcompVal> lpcomp{}; 
        namespace LpcompValC{
            constexpr Register::FieldValue<decltype(lpcomp)::Type,LpcompVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(lpcomp)::Type,LpcompVal::detected> detected{};
        }
        }
        ///Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode
        enum class DifVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::detected> detected{};
        }
        }
        ///Reset due to wake up from System OFF mode by NFC field detect
        enum class NfcVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,NfcVal> nfc{}; 
        namespace NfcValC{
            constexpr Register::FieldValue<decltype(nfc)::Type,NfcVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(nfc)::Type,NfcVal::detected> detected{};
        }
        }
    }
    namespace Noneramstatus{    ///<Deprecated register -  RAM status register
        using Addr = Register::Address<0x40000428,0xfffffff0,0,unsigned>;
        ///RAM block 0 is on or off/powering up
        enum class Ramblock0Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ramblock0Val> ramblock0{}; 
        namespace Ramblock0ValC{
            constexpr Register::FieldValue<decltype(ramblock0)::Type,Ramblock0Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock0)::Type,Ramblock0Val::on> on{};
        }
        }
        ///RAM block 1 is on or off/powering up
        enum class Ramblock1Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ramblock1Val> ramblock1{}; 
        namespace Ramblock1ValC{
            constexpr Register::FieldValue<decltype(ramblock1)::Type,Ramblock1Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock1)::Type,Ramblock1Val::on> on{};
        }
        }
        ///RAM block 2 is on or off/powering up
        enum class Ramblock2Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ramblock2Val> ramblock2{}; 
        namespace Ramblock2ValC{
            constexpr Register::FieldValue<decltype(ramblock2)::Type,Ramblock2Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock2)::Type,Ramblock2Val::on> on{};
        }
        }
        ///RAM block 3 is on or off/powering up
        enum class Ramblock3Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ramblock3Val> ramblock3{}; 
        namespace Ramblock3ValC{
            constexpr Register::FieldValue<decltype(ramblock3)::Type,Ramblock3Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock3)::Type,Ramblock3Val::on> on{};
        }
        }
    }
    namespace Nonesystemoff{    ///<System OFF register
        using Addr = Register::Address<0x40000500,0xfffffffe,0,unsigned>;
        ///Enable System OFF mode
        enum class SystemoffVal {
            enter=0x00000001,     ///<Enable System OFF mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SystemoffVal> systemoff{}; 
        namespace SystemoffValC{
            constexpr Register::FieldValue<decltype(systemoff)::Type,SystemoffVal::enter> enter{};
        }
        }
    }
    namespace Nonepofcon{    ///<Power failure comparator configuration
        using Addr = Register::Address<0x40000510,0xffffffe0,0,unsigned>;
        ///Enable or disable power failure comparator
        enum class PofVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PofVal> pof{}; 
        namespace PofValC{
            constexpr Register::FieldValue<decltype(pof)::Type,PofVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pof)::Type,PofVal::enabled> enabled{};
        }
        }
        ///Power failure comparator threshold setting
        enum class ThresholdVal {
            v19=0x00000006,     ///<Set threshold to 1.9 V
            v20=0x00000007,     ///<Set threshold to 2.0 V
            v21=0x00000008,     ///<Set threshold to 2.1 V
            v22=0x00000009,     ///<Set threshold to 2.2 V
            v23=0x0000000a,     ///<Set threshold to 2.3 V
            v24=0x0000000b,     ///<Set threshold to 2.4 V
            v27=0x0000000e,     ///<Set threshold to 2.7 V
            v28=0x0000000f,     ///<Set threshold to 2.8 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v19> v19{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v20> v20{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v21> v21{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v22> v22{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v23> v23{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v24> v24{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v27> v27{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v28> v28{};
        }
        }
    }
    namespace Nonegpregret{    ///<General purpose retention register
        using Addr = Register::Address<0x4000051c,0xffffff00,0,unsigned>;
        ///General purpose retention register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpregret{}; 
    }
    namespace Nonegpregret2{    ///<General purpose retention register
        using Addr = Register::Address<0x40000520,0xffffff00,0,unsigned>;
        ///General purpose retention register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpregret{}; 
    }
    namespace Noneramon{    ///<Deprecated register -  RAM on/off register (this register is retained)
        using Addr = Register::Address<0x40000524,0xfffcfffc,0,unsigned>;
        ///Keep RAM block 0 on or off in system ON Mode
        enum class Onram0Val {
            ram0off=0x00000000,     ///<Off
            ram0on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Onram0Val> onram0{}; 
        namespace Onram0ValC{
            constexpr Register::FieldValue<decltype(onram0)::Type,Onram0Val::ram0off> ram0off{};
            constexpr Register::FieldValue<decltype(onram0)::Type,Onram0Val::ram0on> ram0on{};
        }
        }
        ///Keep RAM block 1 on or off in system ON Mode
        enum class Onram1Val {
            ram1off=0x00000000,     ///<Off
            ram1on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Onram1Val> onram1{}; 
        namespace Onram1ValC{
            constexpr Register::FieldValue<decltype(onram1)::Type,Onram1Val::ram1off> ram1off{};
            constexpr Register::FieldValue<decltype(onram1)::Type,Onram1Val::ram1on> ram1on{};
        }
        }
        ///Keep retention on RAM block 0 when RAM block is switched off
        enum class Offram0Val {
            ram0off=0x00000000,     ///<Off
            ram0on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Offram0Val> offram0{}; 
        namespace Offram0ValC{
            constexpr Register::FieldValue<decltype(offram0)::Type,Offram0Val::ram0off> ram0off{};
            constexpr Register::FieldValue<decltype(offram0)::Type,Offram0Val::ram0on> ram0on{};
        }
        }
        ///Keep retention on RAM block 1 when RAM block is switched off
        enum class Offram1Val {
            ram1off=0x00000000,     ///<Off
            ram1on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Offram1Val> offram1{}; 
        namespace Offram1ValC{
            constexpr Register::FieldValue<decltype(offram1)::Type,Offram1Val::ram1off> ram1off{};
            constexpr Register::FieldValue<decltype(offram1)::Type,Offram1Val::ram1on> ram1on{};
        }
        }
    }
    namespace Noneramonb{    ///<Deprecated register -  RAM on/off register (this register is retained)
        using Addr = Register::Address<0x40000554,0xfffcfffc,0,unsigned>;
        ///Keep RAM block 2 on or off in system ON Mode
        enum class Onram2Val {
            ram2off=0x00000000,     ///<Off
            ram2on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Onram2Val> onram2{}; 
        namespace Onram2ValC{
            constexpr Register::FieldValue<decltype(onram2)::Type,Onram2Val::ram2off> ram2off{};
            constexpr Register::FieldValue<decltype(onram2)::Type,Onram2Val::ram2on> ram2on{};
        }
        }
        ///Keep RAM block 3 on or off in system ON Mode
        enum class Onram3Val {
            ram3off=0x00000000,     ///<Off
            ram3on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Onram3Val> onram3{}; 
        namespace Onram3ValC{
            constexpr Register::FieldValue<decltype(onram3)::Type,Onram3Val::ram3off> ram3off{};
            constexpr Register::FieldValue<decltype(onram3)::Type,Onram3Val::ram3on> ram3on{};
        }
        }
        ///Keep retention on RAM block 2 when RAM block is switched off
        enum class Offram2Val {
            ram2off=0x00000000,     ///<Off
            ram2on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Offram2Val> offram2{}; 
        namespace Offram2ValC{
            constexpr Register::FieldValue<decltype(offram2)::Type,Offram2Val::ram2off> ram2off{};
            constexpr Register::FieldValue<decltype(offram2)::Type,Offram2Val::ram2on> ram2on{};
        }
        }
        ///Keep retention on RAM block 3 when RAM block is switched off
        enum class Offram3Val {
            ram3off=0x00000000,     ///<Off
            ram3on=0x00000001,     ///<On
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Offram3Val> offram3{}; 
        namespace Offram3ValC{
            constexpr Register::FieldValue<decltype(offram3)::Type,Offram3Val::ram3off> ram3off{};
            constexpr Register::FieldValue<decltype(offram3)::Type,Offram3Val::ram3on> ram3on{};
        }
        }
    }
    namespace Nonedcdcen{    ///<DC/DC enable register
        using Addr = Register::Address<0x40000578,0xfffffffe,0,unsigned>;
        ///Enable or disable DC/DC converter
        enum class DcdcenVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DcdcenVal> dcdcen{}; 
        namespace DcdcenValC{
            constexpr Register::FieldValue<decltype(dcdcen)::Type,DcdcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcen)::Type,DcdcenVal::enabled> enabled{};
        }
        }
    }
}
