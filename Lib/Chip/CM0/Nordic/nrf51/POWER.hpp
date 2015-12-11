#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Control.
    namespace NonetasksConstlat{    ///<Enable constant latency mode.
        using Addr = Register::Address<0x40000078,0xffffffff,0,unsigned>;
    }
    namespace NonetasksLowpwr{    ///<Enable low power mode (variable latency).
        using Addr = Register::Address<0x4000007c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPofwarn{    ///<Power failure warning.
        using Addr = Register::Address<0x40000108,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40000304,0xfffffffb,0,unsigned>;
        ///Enable interrupt on POFWARN event.
        enum class PofwarnVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PofwarnVal> pofwarn{}; 
        namespace PofwarnValC{
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40000308,0xfffffffb,0,unsigned>;
        ///Disable interrupt on POFWARN event.
        enum class PofwarnVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PofwarnVal> pofwarn{}; 
        namespace PofwarnValC{
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pofwarn)::Type,PofwarnVal::clear> clear{};
        }
        }
    }
    namespace Noneresetreas{    ///<Reset reason.
        using Addr = Register::Address<0x40000400,0xfff8fff0,0,unsigned>;
        ///Reset from pin-reset detected.
        enum class ResetpinVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ResetpinVal> resetpin{}; 
        namespace ResetpinValC{
            constexpr Register::FieldValue<decltype(resetpin)::Type,ResetpinVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(resetpin)::Type,ResetpinVal::detected> detected{};
        }
        }
        ///Reset from watchdog detected.
        enum class DogVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DogVal> dog{}; 
        namespace DogValC{
            constexpr Register::FieldValue<decltype(dog)::Type,DogVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(dog)::Type,DogVal::detected> detected{};
        }
        }
        ///Reset from AIRCR.SYSRESETREQ detected.
        enum class SreqVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreqVal> sreq{}; 
        namespace SreqValC{
            constexpr Register::FieldValue<decltype(sreq)::Type,SreqVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(sreq)::Type,SreqVal::detected> detected{};
        }
        }
        ///Reset from CPU lock-up detected.
        enum class LockupVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::detected> detected{};
        }
        }
        ///Reset from wake-up from OFF mode detected by the use of DETECT signal from GPIO.
        enum class OffVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,OffVal> off{}; 
        namespace OffValC{
            constexpr Register::FieldValue<decltype(off)::Type,OffVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(off)::Type,OffVal::detected> detected{};
        }
        }
        ///Reset from wake-up from OFF mode detected by the use of ANADETECT signal from LPCOMP.
        enum class LpcompVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,LpcompVal> lpcomp{}; 
        namespace LpcompValC{
            constexpr Register::FieldValue<decltype(lpcomp)::Type,LpcompVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(lpcomp)::Type,LpcompVal::detected> detected{};
        }
        }
        ///Reset from wake-up from OFF mode detected by entering into debug interface mode.
        enum class DifVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::notdetected> notdetected{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::detected> detected{};
        }
        }
    }
    namespace Noneramstatus{    ///<Ram status register.
        using Addr = Register::Address<0x40000428,0xfffffff0,0,unsigned>;
        ///RAM block 0 status.
        enum class Ramblock0Val {
            off=0x00000000,     ///<RAM block 0 is off or powering up.
            on=0x00000001,     ///<RAM block 0 is on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ramblock0Val> ramblock0{}; 
        namespace Ramblock0ValC{
            constexpr Register::FieldValue<decltype(ramblock0)::Type,Ramblock0Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock0)::Type,Ramblock0Val::on> on{};
        }
        }
        ///RAM block 1 status.
        enum class Ramblock1Val {
            off=0x00000000,     ///<RAM block 1 is off or powering up.
            on=0x00000001,     ///<RAM block 1 is on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ramblock1Val> ramblock1{}; 
        namespace Ramblock1ValC{
            constexpr Register::FieldValue<decltype(ramblock1)::Type,Ramblock1Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock1)::Type,Ramblock1Val::on> on{};
        }
        }
        ///RAM block 2 status.
        enum class Ramblock2Val {
            off=0x00000000,     ///<RAM block 2 is off or powering up.
            on=0x00000001,     ///<RAM block 2 is on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ramblock2Val> ramblock2{}; 
        namespace Ramblock2ValC{
            constexpr Register::FieldValue<decltype(ramblock2)::Type,Ramblock2Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock2)::Type,Ramblock2Val::on> on{};
        }
        }
        ///RAM block 3 status.
        enum class Ramblock3Val {
            off=0x00000000,     ///<RAM block 3 is off or powering up.
            on=0x00000001,     ///<RAM block 3 is on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ramblock3Val> ramblock3{}; 
        namespace Ramblock3ValC{
            constexpr Register::FieldValue<decltype(ramblock3)::Type,Ramblock3Val::off> off{};
            constexpr Register::FieldValue<decltype(ramblock3)::Type,Ramblock3Val::on> on{};
        }
        }
    }
    namespace Nonesystemoff{    ///<System off register.
        using Addr = Register::Address<0x40000500,0xfffffffe,0,unsigned>;
        ///Enter system off mode.
        enum class SystemoffVal {
            enter=0x00000001,     ///<Enter system off mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SystemoffVal> systemoff{}; 
        namespace SystemoffValC{
            constexpr Register::FieldValue<decltype(systemoff)::Type,SystemoffVal::enter> enter{};
        }
        }
    }
    namespace Nonepofcon{    ///<Power failure configuration.
        using Addr = Register::Address<0x40000510,0xfffffff8,0,unsigned>;
        ///Power failure comparator enable.
        enum class PofVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PofVal> pof{}; 
        namespace PofValC{
            constexpr Register::FieldValue<decltype(pof)::Type,PofVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pof)::Type,PofVal::enabled> enabled{};
        }
        }
        ///Set threshold level.
        enum class ThresholdVal {
            v21=0x00000000,     ///<Set threshold to 2.1Volts.
            v23=0x00000001,     ///<Set threshold to 2.3Volts.
            v25=0x00000002,     ///<Set threshold to 2.5Volts.
            v27=0x00000003,     ///<Set threshold to 2.7Volts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v21> v21{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v23> v23{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v25> v25{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v27> v27{};
        }
        }
    }
    namespace Nonegpregret{    ///<General purpose retention register. This register is a retained register.
        using Addr = Register::Address<0x4000051c,0xffffff00,0,unsigned>;
        ///General purpose retention register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpregret{}; 
    }
    namespace Noneramon{    ///<Ram on/off.
        using Addr = Register::Address<0x40000524,0xfffcfffc,0,unsigned>;
        ///RAM block 0 behaviour in ON mode.
        enum class Onram0Val {
            ram0off=0x00000000,     ///<RAM block 0 OFF in ON mode.
            ram0on=0x00000001,     ///<RAM block 0 ON in ON mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Onram0Val> onram0{}; 
        namespace Onram0ValC{
            constexpr Register::FieldValue<decltype(onram0)::Type,Onram0Val::ram0off> ram0off{};
            constexpr Register::FieldValue<decltype(onram0)::Type,Onram0Val::ram0on> ram0on{};
        }
        }
        ///RAM block 1 behaviour in ON mode.
        enum class Onram1Val {
            ram1off=0x00000000,     ///<RAM block 1 OFF in ON mode.
            ram1on=0x00000001,     ///<RAM block 1 ON in ON mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Onram1Val> onram1{}; 
        namespace Onram1ValC{
            constexpr Register::FieldValue<decltype(onram1)::Type,Onram1Val::ram1off> ram1off{};
            constexpr Register::FieldValue<decltype(onram1)::Type,Onram1Val::ram1on> ram1on{};
        }
        }
        ///RAM block 0 behaviour in OFF mode.
        enum class Offram0Val {
            ram0off=0x00000000,     ///<RAM block 0 OFF in OFF mode.
            ram0on=0x00000001,     ///<RAM block 0 ON in OFF mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Offram0Val> offram0{}; 
        namespace Offram0ValC{
            constexpr Register::FieldValue<decltype(offram0)::Type,Offram0Val::ram0off> ram0off{};
            constexpr Register::FieldValue<decltype(offram0)::Type,Offram0Val::ram0on> ram0on{};
        }
        }
        ///RAM block 1 behaviour in OFF mode.
        enum class Offram1Val {
            ram1off=0x00000000,     ///<RAM block 1 OFF in OFF mode.
            ram1on=0x00000001,     ///<RAM block 1 ON in OFF mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Offram1Val> offram1{}; 
        namespace Offram1ValC{
            constexpr Register::FieldValue<decltype(offram1)::Type,Offram1Val::ram1off> ram1off{};
            constexpr Register::FieldValue<decltype(offram1)::Type,Offram1Val::ram1on> ram1on{};
        }
        }
    }
    namespace Nonereset{    ///<Pin reset functionality configuration register. This register is a retained register.
        using Addr = Register::Address<0x40000544,0xfffffffe,0,unsigned>;
        ///Enable or disable pin reset in debug interface mode.
        enum class ResetVal {
            disabled=0x00000000,     ///<Pin reset in debug interface mode disabled.
            enabled=0x00000001,     ///<Pin reset in debug interface mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ResetVal> reset{}; 
        namespace ResetValC{
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::enabled> enabled{};
        }
        }
    }
    namespace Noneramonb{    ///<Ram on/off.
        using Addr = Register::Address<0x40000554,0xfffcfffc,0,unsigned>;
        ///RAM block 2 behaviour in ON mode.
        enum class Onram2Val {
            ram2off=0x00000000,     ///<RAM block 2 OFF in ON mode.
            ram2on=0x00000001,     ///<RAM block 2 ON in ON mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Onram2Val> onram2{}; 
        namespace Onram2ValC{
            constexpr Register::FieldValue<decltype(onram2)::Type,Onram2Val::ram2off> ram2off{};
            constexpr Register::FieldValue<decltype(onram2)::Type,Onram2Val::ram2on> ram2on{};
        }
        }
        ///RAM block 3 behaviour in ON mode.
        enum class Onram3Val {
            ram3off=0x00000000,     ///<RAM block 33 OFF in ON mode.
            ram3on=0x00000001,     ///<RAM block 3 ON in ON mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Onram3Val> onram3{}; 
        namespace Onram3ValC{
            constexpr Register::FieldValue<decltype(onram3)::Type,Onram3Val::ram3off> ram3off{};
            constexpr Register::FieldValue<decltype(onram3)::Type,Onram3Val::ram3on> ram3on{};
        }
        }
        ///RAM block 2 behaviour in OFF mode.
        enum class Offram2Val {
            ram2off=0x00000000,     ///<RAM block 2 OFF in OFF mode.
            ram2on=0x00000001,     ///<RAM block 2 ON in OFF mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Offram2Val> offram2{}; 
        namespace Offram2ValC{
            constexpr Register::FieldValue<decltype(offram2)::Type,Offram2Val::ram2off> ram2off{};
            constexpr Register::FieldValue<decltype(offram2)::Type,Offram2Val::ram2on> ram2on{};
        }
        }
        ///RAM block 3 behaviour in OFF mode.
        enum class Offram3Val {
            ram3off=0x00000000,     ///<RAM block 3 OFF in OFF mode.
            ram3on=0x00000001,     ///<RAM block 3 ON in OFF mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Offram3Val> offram3{}; 
        namespace Offram3ValC{
            constexpr Register::FieldValue<decltype(offram3)::Type,Offram3Val::ram3off> ram3off{};
            constexpr Register::FieldValue<decltype(offram3)::Type,Offram3Val::ram3on> ram3on{};
        }
        }
    }
    namespace Nonedcdcen{    ///<DCDC converter enable configuration register.
        using Addr = Register::Address<0x40000578,0xfffffffe,0,unsigned>;
        ///Enable DCDC converter.
        enum class DcdcenVal {
            disabled=0x00000000,     ///<DCDC converter disabled.
            enabled=0x00000001,     ///<DCDC converter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DcdcenVal> dcdcen{}; 
        namespace DcdcenValC{
            constexpr Register::FieldValue<decltype(dcdcen)::Type,DcdcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcen)::Type,DcdcenVal::enabled> enabled{};
        }
        }
    }
    namespace Nonedcdcforce{    ///<DCDC power-up force register.
        using Addr = Register::Address<0x40000a08,0xfffffffc,0,unsigned>;
        ///DCDC power-up force off.
        enum class ForceoffVal {
            noforce=0x00000000,     ///<No force.
            force=0x00000001,     ///<Force.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ForceoffVal> forceoff{}; 
        namespace ForceoffValC{
            constexpr Register::FieldValue<decltype(forceoff)::Type,ForceoffVal::noforce> noforce{};
            constexpr Register::FieldValue<decltype(forceoff)::Type,ForceoffVal::force> force{};
        }
        }
        ///DCDC power-up force on.
        enum class ForceonVal {
            noforce=0x00000000,     ///<No force.
            force=0x00000001,     ///<Force.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ForceonVal> forceon{}; 
        namespace ForceonValC{
            constexpr Register::FieldValue<decltype(forceon)::Type,ForceonVal::noforce> noforce{};
            constexpr Register::FieldValue<decltype(forceon)::Type,ForceonVal::force> force{};
        }
        }
    }
}
