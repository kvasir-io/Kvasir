#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quadrature Decoder
    namespace NonetasksStart{    ///<Task starting the quadrature decoder
        using Addr = Register::Address<0x40012000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Task stopping the quadrature decoder
        using Addr = Register::Address<0x40012004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksReadclracc{    ///<Read and clear ACC and ACCDBL
        using Addr = Register::Address<0x40012008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRdclracc{    ///<Read and clear ACC
        using Addr = Register::Address<0x4001200c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRdclrdbl{    ///<Read and clear ACCDBL
        using Addr = Register::Address<0x40012010,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSamplerdy{    ///<Event being generated for every new sample value written to the SAMPLE register
        using Addr = Register::Address<0x40012100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReportrdy{    ///<Non-null report ready
        using Addr = Register::Address<0x40012104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAccof{    ///<ACC or ACCDBL register overflow
        using Addr = Register::Address<0x40012108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDblrdy{    ///<Double displacement(s) detected
        using Addr = Register::Address<0x4001210c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<QDEC has been stopped
        using Addr = Register::Address<0x40012110,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40012200,0xffffff80,0,unsigned>;
        ///Shortcut between EVENTS_REPORTRDY event and TASKS_READCLRACC task
        enum class reportrdyReadclraccVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace reportrdyReadclraccValC{
            constexpr MPL::Value<reportrdyReadclraccVal,reportrdyReadclraccVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyReadclraccVal,reportrdyReadclraccVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,reportrdyReadclraccVal> reportrdyReadclracc{}; 
        ///Shortcut between EVENTS_SAMPLERDY event and TASKS_STOP task
        enum class samplerdyStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace samplerdyStopValC{
            constexpr MPL::Value<samplerdyStopVal,samplerdyStopVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyStopVal,samplerdyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,samplerdyStopVal> samplerdyStop{}; 
        ///Shortcut between EVENTS_REPORTRDY event and TASKS_RDCLRACC task
        enum class reportrdyRdclraccVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace reportrdyRdclraccValC{
            constexpr MPL::Value<reportrdyRdclraccVal,reportrdyRdclraccVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyRdclraccVal,reportrdyRdclraccVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reportrdyRdclraccVal> reportrdyRdclracc{}; 
        ///Shortcut between EVENTS_REPORTRDY event and TASKS_STOP task
        enum class reportrdyStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace reportrdyStopValC{
            constexpr MPL::Value<reportrdyStopVal,reportrdyStopVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyStopVal,reportrdyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,reportrdyStopVal> reportrdyStop{}; 
        ///Shortcut between EVENTS_DBLRDY event and TASKS_RDCLRDBL task
        enum class dblrdyRdclrdblVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace dblrdyRdclrdblValC{
            constexpr MPL::Value<dblrdyRdclrdblVal,dblrdyRdclrdblVal::disabled> disabled{};
            constexpr MPL::Value<dblrdyRdclrdblVal,dblrdyRdclrdblVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dblrdyRdclrdblVal> dblrdyRdclrdbl{}; 
        ///Shortcut between EVENTS_DBLRDY event and TASKS_STOP task
        enum class dblrdyStopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace dblrdyStopValC{
            constexpr MPL::Value<dblrdyStopVal,dblrdyStopVal::disabled> disabled{};
            constexpr MPL::Value<dblrdyStopVal,dblrdyStopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dblrdyStopVal> dblrdyStop{}; 
        ///Shortcut between EVENTS_SAMPLERDY event and TASKS_READCLRACC task
        enum class samplerdyReadclraccVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace samplerdyReadclraccValC{
            constexpr MPL::Value<samplerdyReadclraccVal,samplerdyReadclraccVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyReadclraccVal,samplerdyReadclraccVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,samplerdyReadclraccVal> samplerdyReadclracc{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40012304,0xffffffe0,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_SAMPLERDY event
        enum class samplerdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace samplerdyValC{
            constexpr MPL::Value<samplerdyVal,samplerdyVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::enabled> enabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,samplerdyVal> samplerdy{}; 
        ///Write '1' to Enable interrupt on EVENTS_REPORTRDY event
        enum class reportrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace reportrdyValC{
            constexpr MPL::Value<reportrdyVal,reportrdyVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::enabled> enabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reportrdyVal> reportrdy{}; 
        ///Write '1' to Enable interrupt on EVENTS_ACCOF event
        enum class accofVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace accofValC{
            constexpr MPL::Value<accofVal,accofVal::disabled> disabled{};
            constexpr MPL::Value<accofVal,accofVal::enabled> enabled{};
            constexpr MPL::Value<accofVal,accofVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,accofVal> accof{}; 
        ///Write '1' to Enable interrupt on EVENTS_DBLRDY event
        enum class dblrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace dblrdyValC{
            constexpr MPL::Value<dblrdyVal,dblrdyVal::disabled> disabled{};
            constexpr MPL::Value<dblrdyVal,dblrdyVal::enabled> enabled{};
            constexpr MPL::Value<dblrdyVal,dblrdyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dblrdyVal> dblrdy{}; 
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,stoppedVal> stopped{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40012308,0xffffffe0,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_SAMPLERDY event
        enum class samplerdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace samplerdyValC{
            constexpr MPL::Value<samplerdyVal,samplerdyVal::disabled> disabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::enabled> enabled{};
            constexpr MPL::Value<samplerdyVal,samplerdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,samplerdyVal> samplerdy{}; 
        ///Write '1' to Clear interrupt on EVENTS_REPORTRDY event
        enum class reportrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace reportrdyValC{
            constexpr MPL::Value<reportrdyVal,reportrdyVal::disabled> disabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::enabled> enabled{};
            constexpr MPL::Value<reportrdyVal,reportrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,reportrdyVal> reportrdy{}; 
        ///Write '1' to Clear interrupt on EVENTS_ACCOF event
        enum class accofVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace accofValC{
            constexpr MPL::Value<accofVal,accofVal::disabled> disabled{};
            constexpr MPL::Value<accofVal,accofVal::enabled> enabled{};
            constexpr MPL::Value<accofVal,accofVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,accofVal> accof{}; 
        ///Write '1' to Clear interrupt on EVENTS_DBLRDY event
        enum class dblrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace dblrdyValC{
            constexpr MPL::Value<dblrdyVal,dblrdyVal::disabled> disabled{};
            constexpr MPL::Value<dblrdyVal,dblrdyVal::enabled> enabled{};
            constexpr MPL::Value<dblrdyVal,dblrdyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dblrdyVal> dblrdy{}; 
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,stoppedVal> stopped{}; 
    }
    namespace Noneenable{    ///<Enable the quadrature decoder
        using Addr = Register::Address<0x40012500,0xfffffffe,0,unsigned>;
        ///Enable or disable the quadrature decoder
        enum class enableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Noneledpol{    ///<LED output pin polarity
        using Addr = Register::Address<0x40012504,0xfffffffe,0,unsigned>;
        ///LED output pin polarity
        enum class ledpolVal {
            activelow=0x00000000,     ///<Led active on output pin low
            activehigh=0x00000001,     ///<Led active on output pin high
        };
        namespace ledpolValC{
            constexpr MPL::Value<ledpolVal,ledpolVal::activelow> activelow{};
            constexpr MPL::Value<ledpolVal,ledpolVal::activehigh> activehigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ledpolVal> ledpol{}; 
    }
    namespace Nonesampleper{    ///<Sample period
        using Addr = Register::Address<0x40012508,0xfffffff0,0,unsigned>;
        ///Sample period. The SAMPLE register will be updated for every new sample
        enum class sampleperVal {
            v128us=0x00000000,     ///<128 us
            v256us=0x00000001,     ///<256 us
            v512us=0x00000002,     ///<512 us
            v1024us=0x00000003,     ///<1024 us
            v2048us=0x00000004,     ///<2048 us
            v4096us=0x00000005,     ///<4096 us
            v8192us=0x00000006,     ///<8192 us
            v16384us=0x00000007,     ///<16384 us
            v32ms=0x00000008,     ///<32768 us
            v65ms=0x00000009,     ///<65536 us
            v131ms=0x0000000a,     ///<131072 us
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
            constexpr MPL::Value<sampleperVal,sampleperVal::v32ms> v32ms{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v65ms> v65ms{};
            constexpr MPL::Value<sampleperVal,sampleperVal::v131ms> v131ms{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sampleperVal> sampleper{}; 
    }
    namespace Nonesample{    ///<Motion sample value
        using Addr = Register::Address<0x4001250c,0x00000000,0,unsigned>;
        ///Last motion sample
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sample{}; 
    }
    namespace Nonereportper{    ///<Number of samples to be taken before REPORTRDY and DBLRDY events can be generated
        using Addr = Register::Address<0x40012510,0xfffffff0,0,unsigned>;
        ///Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY and DBLRDY events can be generated
        enum class reportperVal {
            v10smpl=0x00000000,     ///<10 samples / report
            v40smpl=0x00000001,     ///<40 samples / report
            v80smpl=0x00000002,     ///<80 samples / report
            v120smpl=0x00000003,     ///<120 samples / report
            v160smpl=0x00000004,     ///<160 samples / report
            v200smpl=0x00000005,     ///<200 samples / report
            v240smpl=0x00000006,     ///<240 samples / report
            v280smpl=0x00000007,     ///<280 samples / report
            v1smpl=0x00000008,     ///<1 sample / report
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
            constexpr MPL::Value<reportperVal,reportperVal::v1smpl> v1smpl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,reportperVal> reportper{}; 
    }
    namespace Noneacc{    ///<Register accumulating the valid transitions
        using Addr = Register::Address<0x40012514,0x00000000,0,unsigned>;
        ///Register accumulating all valid samples (not double transition) read from the SAMPLE register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace Noneaccread{    ///<Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC task
        using Addr = Register::Address<0x40012518,0x00000000,0,unsigned>;
        ///Snapshot of the ACC register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> accread{}; 
    }
    namespace Nonedbfen{    ///<Enable input debounce filters
        using Addr = Register::Address<0x40012528,0xfffffffe,0,unsigned>;
        ///Enable input debounce filters
        enum class dbfenVal {
            disabled=0x00000000,     ///<Debounce input filters disabled
            enabled=0x00000001,     ///<Debounce input filters enabled
        };
        namespace dbfenValC{
            constexpr MPL::Value<dbfenVal,dbfenVal::disabled> disabled{};
            constexpr MPL::Value<dbfenVal,dbfenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dbfenVal> dbfen{}; 
    }
    namespace Noneledpre{    ///<Time period the LED is switched ON prior to sampling
        using Addr = Register::Address<0x40012540,0xfffffe00,0,unsigned>;
        ///Period in us the LED is switched on prior to sampling
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ledpre{}; 
    }
    namespace Noneaccdbl{    ///<Register accumulating the number of detected double transitions
        using Addr = Register::Address<0x40012544,0xfffffff0,0,unsigned>;
        ///Register accumulating the number of detected double or illegal transitions. ( SAMPLE = 2 ).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> accdbl{}; 
    }
    namespace Noneaccdblread{    ///<Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL task
        using Addr = Register::Address<0x40012548,0xfffffff0,0,unsigned>;
        ///Snapshot of the ACCDBL register. This field is updated when the READCLRACC or RDCLRDBL task is triggered.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> accdblread{}; 
    }
}
