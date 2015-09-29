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
        enum class pofwarnVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace pofwarnValC{
            constexpr MPL::Value<pofwarnVal,pofwarnVal::disabled> disabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::enabled> enabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pofwarnVal> pofwarn{}; 
        ///Write '1' to Enable interrupt on EVENTS_SLEEPENTER event
        enum class sleepenterVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace sleepenterValC{
            constexpr MPL::Value<sleepenterVal,sleepenterVal::disabled> disabled{};
            constexpr MPL::Value<sleepenterVal,sleepenterVal::enabled> enabled{};
            constexpr MPL::Value<sleepenterVal,sleepenterVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sleepenterVal> sleepenter{}; 
        ///Write '1' to Enable interrupt on EVENTS_SLEEPEXIT event
        enum class sleepexitVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace sleepexitValC{
            constexpr MPL::Value<sleepexitVal,sleepexitVal::disabled> disabled{};
            constexpr MPL::Value<sleepexitVal,sleepexitVal::enabled> enabled{};
            constexpr MPL::Value<sleepexitVal,sleepexitVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sleepexitVal> sleepexit{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40000308,0xffffff9b,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_POFWARN event
        enum class pofwarnVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace pofwarnValC{
            constexpr MPL::Value<pofwarnVal,pofwarnVal::disabled> disabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::enabled> enabled{};
            constexpr MPL::Value<pofwarnVal,pofwarnVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pofwarnVal> pofwarn{}; 
        ///Write '1' to Clear interrupt on EVENTS_SLEEPENTER event
        enum class sleepenterVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace sleepenterValC{
            constexpr MPL::Value<sleepenterVal,sleepenterVal::disabled> disabled{};
            constexpr MPL::Value<sleepenterVal,sleepenterVal::enabled> enabled{};
            constexpr MPL::Value<sleepenterVal,sleepenterVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sleepenterVal> sleepenter{}; 
        ///Write '1' to Clear interrupt on EVENTS_SLEEPEXIT event
        enum class sleepexitVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace sleepexitValC{
            constexpr MPL::Value<sleepexitVal,sleepexitVal::disabled> disabled{};
            constexpr MPL::Value<sleepexitVal,sleepexitVal::enabled> enabled{};
            constexpr MPL::Value<sleepexitVal,sleepexitVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sleepexitVal> sleepexit{}; 
    }
    namespace Noneresetreas{    ///<Reset reason
        using Addr = Register::Address<0x40000400,0xfff0fff0,0,unsigned>;
        ///Reset from pin-reset detected
        enum class resetpinVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace resetpinValC{
            constexpr MPL::Value<resetpinVal,resetpinVal::notdetected> notdetected{};
            constexpr MPL::Value<resetpinVal,resetpinVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,resetpinVal> resetpin{}; 
        ///Reset from watchdog detected
        enum class dogVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace dogValC{
            constexpr MPL::Value<dogVal,dogVal::notdetected> notdetected{};
            constexpr MPL::Value<dogVal,dogVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dogVal> dog{}; 
        ///Reset from AIRCR.SYSRESETREQ detected
        enum class sreqVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace sreqValC{
            constexpr MPL::Value<sreqVal,sreqVal::notdetected> notdetected{};
            constexpr MPL::Value<sreqVal,sreqVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreqVal> sreq{}; 
        ///Reset from CPU lock-up detected
        enum class lockupVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace lockupValC{
            constexpr MPL::Value<lockupVal,lockupVal::notdetected> notdetected{};
            constexpr MPL::Value<lockupVal,lockupVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lockupVal> lockup{}; 
        ///Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO
        enum class offVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace offValC{
            constexpr MPL::Value<offVal,offVal::notdetected> notdetected{};
            constexpr MPL::Value<offVal,offVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,offVal> off{}; 
        ///Reset due to wake up from System OFF mode when wakeup is triggered from ANADETECT signal from LPCOMP
        enum class lpcompVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace lpcompValC{
            constexpr MPL::Value<lpcompVal,lpcompVal::notdetected> notdetected{};
            constexpr MPL::Value<lpcompVal,lpcompVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,lpcompVal> lpcomp{}; 
        ///Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode
        enum class difVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::notdetected> notdetected{};
            constexpr MPL::Value<difVal,difVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,difVal> dif{}; 
        ///Reset due to wake up from System OFF mode by NFC field detect
        enum class nfcVal {
            notdetected=0x00000000,     ///<Not detected
            detected=0x00000001,     ///<Detected
        };
        namespace nfcValC{
            constexpr MPL::Value<nfcVal,nfcVal::notdetected> notdetected{};
            constexpr MPL::Value<nfcVal,nfcVal::detected> detected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,nfcVal> nfc{}; 
    }
    namespace Noneramstatus{    ///<Deprecated register -  RAM status register
        using Addr = Register::Address<0x40000428,0xfffffff0,0,unsigned>;
        ///RAM block 0 is on or off/powering up
        enum class ramblock0Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        namespace ramblock0ValC{
            constexpr MPL::Value<ramblock0Val,ramblock0Val::off> off{};
            constexpr MPL::Value<ramblock0Val,ramblock0Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ramblock0Val> ramblock0{}; 
        ///RAM block 1 is on or off/powering up
        enum class ramblock1Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        namespace ramblock1ValC{
            constexpr MPL::Value<ramblock1Val,ramblock1Val::off> off{};
            constexpr MPL::Value<ramblock1Val,ramblock1Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ramblock1Val> ramblock1{}; 
        ///RAM block 2 is on or off/powering up
        enum class ramblock2Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        namespace ramblock2ValC{
            constexpr MPL::Value<ramblock2Val,ramblock2Val::off> off{};
            constexpr MPL::Value<ramblock2Val,ramblock2Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ramblock2Val> ramblock2{}; 
        ///RAM block 3 is on or off/powering up
        enum class ramblock3Val {
            off=0x00000000,     ///<Off
            on=0x00000001,     ///<On
        };
        namespace ramblock3ValC{
            constexpr MPL::Value<ramblock3Val,ramblock3Val::off> off{};
            constexpr MPL::Value<ramblock3Val,ramblock3Val::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ramblock3Val> ramblock3{}; 
    }
    namespace Nonesystemoff{    ///<System OFF register
        using Addr = Register::Address<0x40000500,0xfffffffe,0,unsigned>;
        ///Enable System OFF mode
        enum class systemoffVal {
            enter=0x00000001,     ///<Enable System OFF mode
        };
        namespace systemoffValC{
            constexpr MPL::Value<systemoffVal,systemoffVal::enter> enter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,systemoffVal> systemoff{}; 
    }
    namespace Nonepofcon{    ///<Power failure comparator configuration
        using Addr = Register::Address<0x40000510,0xffffffe0,0,unsigned>;
        ///Enable or disable power failure comparator
        enum class pofVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace pofValC{
            constexpr MPL::Value<pofVal,pofVal::disabled> disabled{};
            constexpr MPL::Value<pofVal,pofVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pofVal> pof{}; 
        ///Power failure comparator threshold setting
        enum class thresholdVal {
            v19=0x00000006,     ///<Set threshold to 1.9 V
            v20=0x00000007,     ///<Set threshold to 2.0 V
            v21=0x00000008,     ///<Set threshold to 2.1 V
            v22=0x00000009,     ///<Set threshold to 2.2 V
            v23=0x0000000a,     ///<Set threshold to 2.3 V
            v24=0x0000000b,     ///<Set threshold to 2.4 V
            v27=0x0000000e,     ///<Set threshold to 2.7 V
            v28=0x0000000f,     ///<Set threshold to 2.8 V
        };
        namespace thresholdValC{
            constexpr MPL::Value<thresholdVal,thresholdVal::v19> v19{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v20> v20{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v21> v21{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v22> v22{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v23> v23{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v24> v24{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v27> v27{};
            constexpr MPL::Value<thresholdVal,thresholdVal::v28> v28{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,thresholdVal> threshold{}; 
    }
    namespace Nonegpregret{    ///<General purpose retention register
        using Addr = Register::Address<0x4000051c,0xffffff00,0,unsigned>;
        ///General purpose retention register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpregret{}; 
    }
    namespace Nonegpregret2{    ///<General purpose retention register
        using Addr = Register::Address<0x40000520,0xffffff00,0,unsigned>;
        ///General purpose retention register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpregret{}; 
    }
    namespace Noneramon{    ///<Deprecated register -  RAM on/off register (this register is retained)
        using Addr = Register::Address<0x40000524,0xfffcfffc,0,unsigned>;
        ///Keep RAM block 0 on or off in system ON Mode
        enum class onram0Val {
            ram0off=0x00000000,     ///<Off
            ram0on=0x00000001,     ///<On
        };
        namespace onram0ValC{
            constexpr MPL::Value<onram0Val,onram0Val::ram0off> ram0off{};
            constexpr MPL::Value<onram0Val,onram0Val::ram0on> ram0on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,onram0Val> onram0{}; 
        ///Keep RAM block 1 on or off in system ON Mode
        enum class onram1Val {
            ram1off=0x00000000,     ///<Off
            ram1on=0x00000001,     ///<On
        };
        namespace onram1ValC{
            constexpr MPL::Value<onram1Val,onram1Val::ram1off> ram1off{};
            constexpr MPL::Value<onram1Val,onram1Val::ram1on> ram1on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,onram1Val> onram1{}; 
        ///Keep retention on RAM block 0 when RAM block is switched off
        enum class offram0Val {
            ram0off=0x00000000,     ///<Off
            ram0on=0x00000001,     ///<On
        };
        namespace offram0ValC{
            constexpr MPL::Value<offram0Val,offram0Val::ram0off> ram0off{};
            constexpr MPL::Value<offram0Val,offram0Val::ram0on> ram0on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,offram0Val> offram0{}; 
        ///Keep retention on RAM block 1 when RAM block is switched off
        enum class offram1Val {
            ram1off=0x00000000,     ///<Off
            ram1on=0x00000001,     ///<On
        };
        namespace offram1ValC{
            constexpr MPL::Value<offram1Val,offram1Val::ram1off> ram1off{};
            constexpr MPL::Value<offram1Val,offram1Val::ram1on> ram1on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,offram1Val> offram1{}; 
    }
    namespace Noneramonb{    ///<Deprecated register -  RAM on/off register (this register is retained)
        using Addr = Register::Address<0x40000554,0xfffcfffc,0,unsigned>;
        ///Keep RAM block 2 on or off in system ON Mode
        enum class onram2Val {
            ram2off=0x00000000,     ///<Off
            ram2on=0x00000001,     ///<On
        };
        namespace onram2ValC{
            constexpr MPL::Value<onram2Val,onram2Val::ram2off> ram2off{};
            constexpr MPL::Value<onram2Val,onram2Val::ram2on> ram2on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,onram2Val> onram2{}; 
        ///Keep RAM block 3 on or off in system ON Mode
        enum class onram3Val {
            ram3off=0x00000000,     ///<Off
            ram3on=0x00000001,     ///<On
        };
        namespace onram3ValC{
            constexpr MPL::Value<onram3Val,onram3Val::ram3off> ram3off{};
            constexpr MPL::Value<onram3Val,onram3Val::ram3on> ram3on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,onram3Val> onram3{}; 
        ///Keep retention on RAM block 2 when RAM block is switched off
        enum class offram2Val {
            ram2off=0x00000000,     ///<Off
            ram2on=0x00000001,     ///<On
        };
        namespace offram2ValC{
            constexpr MPL::Value<offram2Val,offram2Val::ram2off> ram2off{};
            constexpr MPL::Value<offram2Val,offram2Val::ram2on> ram2on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,offram2Val> offram2{}; 
        ///Keep retention on RAM block 3 when RAM block is switched off
        enum class offram3Val {
            ram3off=0x00000000,     ///<Off
            ram3on=0x00000001,     ///<On
        };
        namespace offram3ValC{
            constexpr MPL::Value<offram3Val,offram3Val::ram3off> ram3off{};
            constexpr MPL::Value<offram3Val,offram3Val::ram3on> ram3on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,offram3Val> offram3{}; 
    }
    namespace Nonedcdcen{    ///<DC/DC enable register
        using Addr = Register::Address<0x40000578,0xfffffffe,0,unsigned>;
        ///Enable or disable DC/DC converter
        enum class dcdcenVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace dcdcenValC{
            constexpr MPL::Value<dcdcenVal,dcdcenVal::disabled> disabled{};
            constexpr MPL::Value<dcdcenVal,dcdcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dcdcenVal> dcdcen{}; 
    }
}
