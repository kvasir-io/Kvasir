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
        enum class pofwarnVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace pofwarnValC{
            constexpr MPL::Value<pofwarnVal,pofwarnVal::disabled> disabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::enabled> enabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pofwarnVal> pofwarn{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40000308,0xfffffffb,0,unsigned>;
        ///Disable interrupt on POFWARN event.
        enum class pofwarnVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace pofwarnValC{
            constexpr MPL::Value<pofwarnVal,pofwarnVal::disabled> disabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::enabled> enabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pofwarnVal> pofwarn{}; 
    }
    namespace Noneresetreas{    ///<Reset reason.
        using Addr = Register::Address<0x40000400,0xfff8fff0,0,unsigned>;
        ///Reset from pin-reset detected.
        enum class resetpinVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace resetpinValC{
            constexpr MPL::Value<resetpinVal,resetpinVal::notdetected> notdetected{};
            constexpr MPL::Value<resetpinVal,resetpinVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,resetpinVal> resetpin{}; 
        ///Reset from watchdog detected.
        enum class dogVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace dogValC{
            constexpr MPL::Value<dogVal,dogVal::notdetected> notdetected{};
            constexpr MPL::Value<dogVal,dogVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dogVal> dog{}; 
        ///Reset from AIRCR.SYSRESETREQ detected.
        enum class sreqVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace sreqValC{
            constexpr MPL::Value<sreqVal,sreqVal::notdetected> notdetected{};
            constexpr MPL::Value<sreqVal,sreqVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreqVal> sreq{}; 
        ///Reset from CPU lock-up detected.
        enum class lockupVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace lockupValC{
            constexpr MPL::Value<lockupVal,lockupVal::notdetected> notdetected{};
            constexpr MPL::Value<lockupVal,lockupVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lockupVal> lockup{}; 
        ///Reset from wake-up from OFF mode detected by the use of DETECT signal from GPIO.
        enum class offVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace offValC{
            constexpr MPL::Value<offVal,offVal::notdetected> notdetected{};
            constexpr MPL::Value<offVal,offVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,offVal> off{}; 
        ///Reset from wake-up from OFF mode detected by the use of ANADETECT signal from LPCOMP.
        enum class lpcompVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace lpcompValC{
            constexpr MPL::Value<lpcompVal,lpcompVal::notdetected> notdetected{};
            constexpr MPL::Value<lpcompVal,lpcompVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,lpcompVal> lpcomp{}; 
        ///Reset from wake-up from OFF mode detected by entering into debug interface mode.
        enum class difVal {
            notdetected=0x00000000,     ///<Reset not detected.
            detected=0x00000001,     ///<Reset detected.
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::notdetected> notdetected{};
            constexpr MPL::Value<difVal,difVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,difVal> dif{}; 
    }
    namespace Noneramstatus{    ///<Ram status register.
        using Addr = Register::Address<0x40000428,0xfffffff0,0,unsigned>;
        ///RAM block 0 status.
        enum class ramblock0Val {
            off=0x00000000,     ///<RAM block 0 is off or powering up.
            on=0x00000001,     ///<RAM block 0 is on.
        };
        namespace ramblock0ValC{
            constexpr MPL::Value<ramblock0Val,ramblock0Val::off> off{};
            constexpr MPL::Value<ramblock0Val,ramblock0Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ramblock0Val> ramblock0{}; 
        ///RAM block 1 status.
        enum class ramblock1Val {
            off=0x00000000,     ///<RAM block 1 is off or powering up.
            on=0x00000001,     ///<RAM block 1 is on.
        };
        namespace ramblock1ValC{
            constexpr MPL::Value<ramblock1Val,ramblock1Val::off> off{};
            constexpr MPL::Value<ramblock1Val,ramblock1Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ramblock1Val> ramblock1{}; 
        ///RAM block 2 status.
        enum class ramblock2Val {
            off=0x00000000,     ///<RAM block 2 is off or powering up.
            on=0x00000001,     ///<RAM block 2 is on.
        };
        namespace ramblock2ValC{
            constexpr MPL::Value<ramblock2Val,ramblock2Val::off> off{};
            constexpr MPL::Value<ramblock2Val,ramblock2Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ramblock2Val> ramblock2{}; 
        ///RAM block 3 status.
        enum class ramblock3Val {
            off=0x00000000,     ///<RAM block 3 is off or powering up.
            on=0x00000001,     ///<RAM block 3 is on.
        };
        namespace ramblock3ValC{
            constexpr MPL::Value<ramblock3Val,ramblock3Val::off> off{};
            constexpr MPL::Value<ramblock3Val,ramblock3Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ramblock3Val> ramblock3{}; 
    }
    namespace Nonesystemoff{    ///<System off register.
        using Addr = Register::Address<0x40000500,0xfffffffe,0,unsigned>;
        ///Enter system off mode.
        enum class systemoffVal {
            enter=0x00000001,     ///<Enter system off mode.
        };
        namespace systemoffValC{
            constexpr MPL::Value<systemoffVal,systemoffVal::enter> enter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,systemoffVal> systemoff{}; 
    }
    namespace Nonepofcon{    ///<Power failure configuration.
        using Addr = Register::Address<0x40000510,0xfffffff8,0,unsigned>;
        ///Power failure comparator enable.
        enum class pofVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace pofValC{
            constexpr MPL::Value<pofVal,pofVal::disabled> disabled{};
            constexpr MPL::Value<pofVal,pofVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pofVal> pof{}; 
        ///Set threshold level.
        enum class thresholdVal {
            v21=0x00000000,     ///<Set threshold to 2.1Volts.
            v23=0x00000001,     ///<Set threshold to 2.3Volts.
            v25=0x00000002,     ///<Set threshold to 2.5Volts.
            v27=0x00000003,     ///<Set threshold to 2.7Volts.
        };
        namespace thresholdValC{
            constexpr MPL::Value<thresholdVal,thresholdVal::v21> v21{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v23> v23{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v25> v25{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v27> v27{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,thresholdVal> threshold{}; 
    }
    namespace Nonegpregret{    ///<General purpose retention register. This register is a retained register.
        using Addr = Register::Address<0x4000051c,0xffffff00,0,unsigned>;
        ///General purpose retention register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpregret{}; 
    }
    namespace Noneramon{    ///<Ram on/off.
        using Addr = Register::Address<0x40000524,0xfffcfffc,0,unsigned>;
        ///RAM block 0 behaviour in ON mode.
        enum class onram0Val {
            ram0off=0x00000000,     ///<RAM block 0 OFF in ON mode.
            ram0on=0x00000001,     ///<RAM block 0 ON in ON mode.
        };
        namespace onram0ValC{
            constexpr MPL::Value<onram0Val,onram0Val::ram0off> ram0off{};
            constexpr MPL::Value<onram0Val,onram0Val::ram0on> ram0on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,onram0Val> onram0{}; 
        ///RAM block 1 behaviour in ON mode.
        enum class onram1Val {
            ram1off=0x00000000,     ///<RAM block 1 OFF in ON mode.
            ram1on=0x00000001,     ///<RAM block 1 ON in ON mode.
        };
        namespace onram1ValC{
            constexpr MPL::Value<onram1Val,onram1Val::ram1off> ram1off{};
            constexpr MPL::Value<onram1Val,onram1Val::ram1on> ram1on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,onram1Val> onram1{}; 
        ///RAM block 0 behaviour in OFF mode.
        enum class offram0Val {
            ram0off=0x00000000,     ///<RAM block 0 OFF in OFF mode.
            ram0on=0x00000001,     ///<RAM block 0 ON in OFF mode.
        };
        namespace offram0ValC{
            constexpr MPL::Value<offram0Val,offram0Val::ram0off> ram0off{};
            constexpr MPL::Value<offram0Val,offram0Val::ram0on> ram0on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,offram0Val> offram0{}; 
        ///RAM block 1 behaviour in OFF mode.
        enum class offram1Val {
            ram1off=0x00000000,     ///<RAM block 1 OFF in OFF mode.
            ram1on=0x00000001,     ///<RAM block 1 ON in OFF mode.
        };
        namespace offram1ValC{
            constexpr MPL::Value<offram1Val,offram1Val::ram1off> ram1off{};
            constexpr MPL::Value<offram1Val,offram1Val::ram1on> ram1on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,offram1Val> offram1{}; 
    }
    namespace Nonereset{    ///<Pin reset functionality configuration register. This register is a retained register.
        using Addr = Register::Address<0x40000544,0xfffffffe,0,unsigned>;
        ///Enable or disable pin reset in debug interface mode.
        enum class resetVal {
            disabled=0x00000000,     ///<Pin reset in debug interface mode disabled.
            enabled=0x00000001,     ///<Pin reset in debug interface mode enabled.
        };
        namespace resetValC{
            constexpr MPL::Value<resetVal,resetVal::disabled> disabled{};
            constexpr MPL::Value<resetVal,resetVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,resetVal> reset{}; 
    }
    namespace Noneramonb{    ///<Ram on/off.
        using Addr = Register::Address<0x40000554,0xfffcfffc,0,unsigned>;
        ///RAM block 2 behaviour in ON mode.
        enum class onram2Val {
            ram2off=0x00000000,     ///<RAM block 2 OFF in ON mode.
            ram2on=0x00000001,     ///<RAM block 2 ON in ON mode.
        };
        namespace onram2ValC{
            constexpr MPL::Value<onram2Val,onram2Val::ram2off> ram2off{};
            constexpr MPL::Value<onram2Val,onram2Val::ram2on> ram2on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,onram2Val> onram2{}; 
        ///RAM block 3 behaviour in ON mode.
        enum class onram3Val {
            ram3off=0x00000000,     ///<RAM block 33 OFF in ON mode.
            ram3on=0x00000001,     ///<RAM block 3 ON in ON mode.
        };
        namespace onram3ValC{
            constexpr MPL::Value<onram3Val,onram3Val::ram3off> ram3off{};
            constexpr MPL::Value<onram3Val,onram3Val::ram3on> ram3on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,onram3Val> onram3{}; 
        ///RAM block 2 behaviour in OFF mode.
        enum class offram2Val {
            ram2off=0x00000000,     ///<RAM block 2 OFF in OFF mode.
            ram2on=0x00000001,     ///<RAM block 2 ON in OFF mode.
        };
        namespace offram2ValC{
            constexpr MPL::Value<offram2Val,offram2Val::ram2off> ram2off{};
            constexpr MPL::Value<offram2Val,offram2Val::ram2on> ram2on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,offram2Val> offram2{}; 
        ///RAM block 3 behaviour in OFF mode.
        enum class offram3Val {
            ram3off=0x00000000,     ///<RAM block 3 OFF in OFF mode.
            ram3on=0x00000001,     ///<RAM block 3 ON in OFF mode.
        };
        namespace offram3ValC{
            constexpr MPL::Value<offram3Val,offram3Val::ram3off> ram3off{};
            constexpr MPL::Value<offram3Val,offram3Val::ram3on> ram3on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,offram3Val> offram3{}; 
    }
    namespace Nonedcdcen{    ///<DCDC converter enable configuration register.
        using Addr = Register::Address<0x40000578,0xfffffffe,0,unsigned>;
        ///Enable DCDC converter.
        enum class dcdcenVal {
            disabled=0x00000000,     ///<DCDC converter disabled.
            enabled=0x00000001,     ///<DCDC converter enabled.
        };
        namespace dcdcenValC{
            constexpr MPL::Value<dcdcenVal,dcdcenVal::disabled> disabled{};
            constexpr MPL::Value<dcdcenVal,dcdcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dcdcenVal> dcdcen{}; 
    }
    namespace Nonedcdcforce{    ///<DCDC power-up force register.
        using Addr = Register::Address<0x40000a08,0xfffffffc,0,unsigned>;
        ///DCDC power-up force off.
        enum class forceoffVal {
            noforce=0x00000000,     ///<No force.
            force=0x00000001,     ///<Force.
        };
        namespace forceoffValC{
            constexpr MPL::Value<forceoffVal,forceoffVal::noforce> noforce{};
            constexpr MPL::Value<forceoffVal,forceoffVal::force> force{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,forceoffVal> forceoff{}; 
        ///DCDC power-up force on.
        enum class forceonVal {
            noforce=0x00000000,     ///<No force.
            force=0x00000001,     ///<Force.
        };
        namespace forceonValC{
            constexpr MPL::Value<forceonVal,forceonVal::noforce> noforce{};
            constexpr MPL::Value<forceonVal,forceonVal::force> force{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,forceonVal> forceon{}; 
    }
}
