#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Rotary decoder.
    namespace NonetasksStart{    ///<Start the quadrature decoder.
        using Addr = Register::Address<0x40012000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop the quadrature decoder.
        using Addr = Register::Address<0x40012004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksReadclracc{    ///<Transfers the content from ACC registers to ACCREAD registers, and clears the ACC registers.
        using Addr = Register::Address<0x40012008,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSamplerdy{    ///<A new sample is written to the sample register.
        using Addr = Register::Address<0x40012100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReportrdy{    ///<REPORTPER number of samples accumulated in ACC register, and ACC register different than zero.
        using Addr = Register::Address<0x40012104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAccof{    ///<ACC or ACCDBL register overflow.
        using Addr = Register::Address<0x40012108,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for the QDEC.
        using Addr = Register::Address<0x40012200,0xfffffffc,0,unsigned>;
        ///Shortcut between REPORTRDY event and READCLRACC task.
        enum class reportrdyReadclraccVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace reportrdyReadclraccValC{
            constexpr MPL::Value<reportrdyReadclraccVal,reportrdyReadclraccVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyReadclraccVal,reportrdyReadclraccVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,reportrdyReadclraccVal> reportrdyReadclracc{}; 
        ///Shortcut between SAMPLERDY event and STOP task.
        enum class samplerdyStopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace samplerdyStopValC{
            constexpr MPL::Value<samplerdyStopVal,samplerdyStopVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyStopVal,samplerdyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,samplerdyStopVal> samplerdyStop{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40012304,0xfffffff8,0,unsigned>;
        ///Enable interrupt on SAMPLERDY event.
        enum class samplerdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace samplerdyValC{
            constexpr MPL::Value<samplerdyVal,samplerdyVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::enabled> enabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,samplerdyVal> samplerdy{}; 
        ///Enable interrupt on REPORTRDY event.
        enum class reportrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace reportrdyValC{
            constexpr MPL::Value<reportrdyVal,reportrdyVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::enabled> enabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reportrdyVal> reportrdy{}; 
        ///Enable interrupt on ACCOF event.
        enum class accofVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace accofValC{
            constexpr MPL::Value<accofVal,accofVal::disabled> disabled{};
            constexpr MPL::Value<accofVal,accofVal::enabled> enabled{};
            constexpr MPL::Value<accofVal,accofVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,accofVal> accof{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40012308,0xfffffff8,0,unsigned>;
        ///Disable interrupt on SAMPLERDY event.
        enum class samplerdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace samplerdyValC{
            constexpr MPL::Value<samplerdyVal,samplerdyVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::enabled> enabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,samplerdyVal> samplerdy{}; 
        ///Disable interrupt on REPORTRDY event.
        enum class reportrdyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace reportrdyValC{
            constexpr MPL::Value<reportrdyVal,reportrdyVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::enabled> enabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reportrdyVal> reportrdy{}; 
        ///Disable interrupt on ACCOF event.
        enum class accofVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace accofValC{
            constexpr MPL::Value<accofVal,accofVal::disabled> disabled{};
            constexpr MPL::Value<accofVal,accofVal::enabled> enabled{};
            constexpr MPL::Value<accofVal,accofVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,accofVal> accof{}; 
    }
    namespace Noneenable{    ///<Enable the QDEC.
        using Addr = Register::Address<0x40012500,0xfffffffe,0,unsigned>;
        ///Enable or disable QDEC.
        enum class enableVal {
            disabled=0x00000000,     ///<Disabled QDEC.
            enabled=0x00000001,     ///<Enable QDEC.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Noneledpol{    ///<LED output pin polarity.
        using Addr = Register::Address<0x40012504,0xfffffffe,0,unsigned>;
        ///LED output pin polarity.
        enum class ledpolVal {
            activelow=0x00000000,     ///<LED output is active low.
            activehigh=0x00000001,     ///<LED output is active high.
        };
        namespace ledpolValC{
            constexpr MPL::Value<ledpolVal,ledpolVal::activelow> activelow{};
            constexpr MPL::Value<ledpolVal,ledpolVal::activehigh> activehigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ledpolVal> ledpol{}; 
    }
    namespace Nonesampleper{    ///<Sample period.
        using Addr = Register::Address<0x40012508,0xfffffff8,0,unsigned>;
        ///Sample period.
        enum class sampleperVal {
            v128us=0x00000000,     ///<128us sample period.
            v256us=0x00000001,     ///<256us sample period.
            v512us=0x00000002,     ///<512us sample period.
            v1024us=0x00000003,     ///<1024us sample period.
            v2048us=0x00000004,     ///<2048us sample period.
            v4096us=0x00000005,     ///<4096us sample period.
            v8192us=0x00000006,     ///<8192us sample period.
            v16384us=0x00000007,     ///<16384us sample period.
        };
        namespace sampleperValC{
            constexpr MPL::Value<sampleperVal,sampleperVal::v128us> v128us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v256us> v256us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v512us> v512us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v1024us> v1024us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v2048us> v2048us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v4096us> v4096us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v8192us> v8192us{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v16384us> v16384us{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,sampleperVal> sampleper{}; 
    }
    namespace Nonesample{    ///<Motion sample value.
        using Addr = Register::Address<0x4001250c,0x00000000,0,unsigned>;
        ///Last sample taken in compliment to 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sample{}; 
    }
    namespace Nonereportper{    ///<Number of samples to generate an EVENT_REPORTRDY.
        using Addr = Register::Address<0x40012510,0xfffffff8,0,unsigned>;
        ///Number of samples to generate an EVENT_REPORTRDY.
        enum class reportperVal {
            v10smpl=0x00000000,     ///<10 samples per report.
            v40smpl=0x00000001,     ///<40 samples per report.
            v80smpl=0x00000002,     ///<80 samples per report.
            v120smpl=0x00000003,     ///<120 samples per report.
            v160smpl=0x00000004,     ///<160 samples per report.
            v200smpl=0x00000005,     ///<200 samples per report.
            v240smpl=0x00000006,     ///<240 samples per report.
            v280smpl=0x00000007,     ///<280 samples per report.
        };
        namespace reportperValC{
            constexpr MPL::Value<reportperVal,reportperVal::v10smpl> v10smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v40smpl> v40smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v80smpl> v80smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v120smpl> v120smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v160smpl> v160smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v200smpl> v200smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v240smpl> v240smpl{};
            constexpr MPL::Value<reportperVal,reportperVal::v280smpl> v280smpl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,reportperVal> reportper{}; 
    }
    namespace Noneacc{    ///<Accumulated valid transitions register.
        using Addr = Register::Address<0x40012514,0xffffffff,0,unsigned>;
    }
    namespace Noneaccread{    ///<Snapshot of ACC register. Value generated by the TASKS_READCLEACC task.
        using Addr = Register::Address<0x40012518,0xffffffff,0,unsigned>;
    }
    namespace Nonepselled{    ///<Pin select for LED output.
        using Addr = Register::Address<0x4001251c,0xffffffff,0,unsigned>;
    }
    namespace Nonepsela{    ///<Pin select for phase A input.
        using Addr = Register::Address<0x40012520,0xffffffff,0,unsigned>;
    }
    namespace Nonepselb{    ///<Pin select for phase B input.
        using Addr = Register::Address<0x40012524,0xffffffff,0,unsigned>;
    }
    namespace Nonedbfen{    ///<Enable debouncer input filters.
        using Addr = Register::Address<0x40012528,0xfffffffe,0,unsigned>;
        ///Enable debounce input filters.
        enum class dbfenVal {
            disabled=0x00000000,     ///<Debounce input filters disabled.
            enabled=0x00000001,     ///<Debounce input filters enabled.
        };
        namespace dbfenValC{
            constexpr MPL::Value<dbfenVal,dbfenVal::disabled> disabled{};
            constexpr MPL::Value<dbfenVal,dbfenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dbfenVal> dbfen{}; 
    }
    namespace Noneledpre{    ///<Time LED is switched ON before the sample.
        using Addr = Register::Address<0x40012540,0xfffffe00,0,unsigned>;
        ///Period in us the LED in switched on prior to sampling.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ledpre{}; 
    }
    namespace Noneaccdbl{    ///<Accumulated double (error) transitions register.
        using Addr = Register::Address<0x40012544,0xfffffff0,0,unsigned>;
        ///Accumulated double (error) transitions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> accdbl{}; 
    }
    namespace Noneaccdblread{    ///<Snapshot of ACCDBL register. Value generated by the TASKS_READCLEACC task.
        using Addr = Register::Address<0x40012548,0xfffffff0,0,unsigned>;
        ///Snapshot of accumulated double (error) transitions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> accdblread{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40012ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
