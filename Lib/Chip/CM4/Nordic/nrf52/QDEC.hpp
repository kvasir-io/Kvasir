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
        enum class ReportrdyreadclraccVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReportrdyreadclraccVal> reportrdyReadclracc{}; 
        namespace ReportrdyreadclraccValC{
            constexpr Register::FieldValue<decltype(reportrdyReadclracc)::Type,ReportrdyreadclraccVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reportrdyReadclracc)::Type,ReportrdyreadclraccVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_SAMPLERDY event and TASKS_STOP task
        enum class SamplerdystopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SamplerdystopVal> samplerdyStop{}; 
        namespace SamplerdystopValC{
            constexpr Register::FieldValue<decltype(samplerdyStop)::Type,SamplerdystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(samplerdyStop)::Type,SamplerdystopVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_REPORTRDY event and TASKS_RDCLRACC task
        enum class ReportrdyrdclraccVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReportrdyrdclraccVal> reportrdyRdclracc{}; 
        namespace ReportrdyrdclraccValC{
            constexpr Register::FieldValue<decltype(reportrdyRdclracc)::Type,ReportrdyrdclraccVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reportrdyRdclracc)::Type,ReportrdyrdclraccVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_REPORTRDY event and TASKS_STOP task
        enum class ReportrdystopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ReportrdystopVal> reportrdyStop{}; 
        namespace ReportrdystopValC{
            constexpr Register::FieldValue<decltype(reportrdyStop)::Type,ReportrdystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reportrdyStop)::Type,ReportrdystopVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_DBLRDY event and TASKS_RDCLRDBL task
        enum class DblrdyrdclrdblVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DblrdyrdclrdblVal> dblrdyRdclrdbl{}; 
        namespace DblrdyrdclrdblValC{
            constexpr Register::FieldValue<decltype(dblrdyRdclrdbl)::Type,DblrdyrdclrdblVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dblrdyRdclrdbl)::Type,DblrdyrdclrdblVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_DBLRDY event and TASKS_STOP task
        enum class DblrdystopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DblrdystopVal> dblrdyStop{}; 
        namespace DblrdystopValC{
            constexpr Register::FieldValue<decltype(dblrdyStop)::Type,DblrdystopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dblrdyStop)::Type,DblrdystopVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_SAMPLERDY event and TASKS_READCLRACC task
        enum class SamplerdyreadclraccVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SamplerdyreadclraccVal> samplerdyReadclracc{}; 
        namespace SamplerdyreadclraccValC{
            constexpr Register::FieldValue<decltype(samplerdyReadclracc)::Type,SamplerdyreadclraccVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(samplerdyReadclracc)::Type,SamplerdyreadclraccVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40012304,0xffffffe0,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_SAMPLERDY event
        enum class SamplerdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SamplerdyVal> samplerdy{}; 
        namespace SamplerdyValC{
            constexpr Register::FieldValue<decltype(samplerdy)::Type,SamplerdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(samplerdy)::Type,SamplerdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(samplerdy)::Type,SamplerdyVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_REPORTRDY event
        enum class ReportrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReportrdyVal> reportrdy{}; 
        namespace ReportrdyValC{
            constexpr Register::FieldValue<decltype(reportrdy)::Type,ReportrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reportrdy)::Type,ReportrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(reportrdy)::Type,ReportrdyVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_ACCOF event
        enum class AccofVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AccofVal> accof{}; 
        namespace AccofValC{
            constexpr Register::FieldValue<decltype(accof)::Type,AccofVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(accof)::Type,AccofVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(accof)::Type,AccofVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_DBLRDY event
        enum class DblrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DblrdyVal> dblrdy{}; 
        namespace DblrdyValC{
            constexpr Register::FieldValue<decltype(dblrdy)::Type,DblrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dblrdy)::Type,DblrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(dblrdy)::Type,DblrdyVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40012308,0xffffffe0,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_SAMPLERDY event
        enum class SamplerdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SamplerdyVal> samplerdy{}; 
        namespace SamplerdyValC{
            constexpr Register::FieldValue<decltype(samplerdy)::Type,SamplerdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(samplerdy)::Type,SamplerdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(samplerdy)::Type,SamplerdyVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_REPORTRDY event
        enum class ReportrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReportrdyVal> reportrdy{}; 
        namespace ReportrdyValC{
            constexpr Register::FieldValue<decltype(reportrdy)::Type,ReportrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reportrdy)::Type,ReportrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(reportrdy)::Type,ReportrdyVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_ACCOF event
        enum class AccofVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AccofVal> accof{}; 
        namespace AccofValC{
            constexpr Register::FieldValue<decltype(accof)::Type,AccofVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(accof)::Type,AccofVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(accof)::Type,AccofVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_DBLRDY event
        enum class DblrdyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DblrdyVal> dblrdy{}; 
        namespace DblrdyValC{
            constexpr Register::FieldValue<decltype(dblrdy)::Type,DblrdyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dblrdy)::Type,DblrdyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(dblrdy)::Type,DblrdyVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        }
    }
    namespace Noneenable{    ///<Enable the quadrature decoder
        using Addr = Register::Address<0x40012500,0xfffffffe,0,unsigned>;
        ///Enable or disable the quadrature decoder
        enum class EnableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        }
    }
    namespace Noneledpol{    ///<LED output pin polarity
        using Addr = Register::Address<0x40012504,0xfffffffe,0,unsigned>;
        ///LED output pin polarity
        enum class LedpolVal {
            activelow=0x00000000,     ///<Led active on output pin low
            activehigh=0x00000001,     ///<Led active on output pin high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LedpolVal> ledpol{}; 
        namespace LedpolValC{
            constexpr Register::FieldValue<decltype(ledpol)::Type,LedpolVal::activelow> activelow{};
            constexpr Register::FieldValue<decltype(ledpol)::Type,LedpolVal::activehigh> activehigh{};
        }
        }
    }
    namespace Nonesampleper{    ///<Sample period
        using Addr = Register::Address<0x40012508,0xfffffff0,0,unsigned>;
        ///Sample period. The SAMPLE register will be updated for every new sample
        enum class SampleperVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SampleperVal> sampleper{}; 
        namespace SampleperValC{
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v128us> v128us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v256us> v256us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v512us> v512us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v1024us> v1024us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v2048us> v2048us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v4096us> v4096us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v8192us> v8192us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v16384us> v16384us{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v32ms> v32ms{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v65ms> v65ms{};
            constexpr Register::FieldValue<decltype(sampleper)::Type,SampleperVal::v131ms> v131ms{};
        }
        }
    }
    namespace Nonesample{    ///<Motion sample value
        using Addr = Register::Address<0x4001250c,0x00000000,0,unsigned>;
        ///Last motion sample
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sample{}; 
    }
    namespace Nonereportper{    ///<Number of samples to be taken before REPORTRDY and DBLRDY events can be generated
        using Addr = Register::Address<0x40012510,0xfffffff0,0,unsigned>;
        ///Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY and DBLRDY events can be generated
        enum class ReportperVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ReportperVal> reportper{}; 
        namespace ReportperValC{
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v10smpl> v10smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v40smpl> v40smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v80smpl> v80smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v120smpl> v120smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v160smpl> v160smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v200smpl> v200smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v240smpl> v240smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v280smpl> v280smpl{};
            constexpr Register::FieldValue<decltype(reportper)::Type,ReportperVal::v1smpl> v1smpl{};
        }
        }
    }
    namespace Noneacc{    ///<Register accumulating the valid transitions
        using Addr = Register::Address<0x40012514,0x00000000,0,unsigned>;
        ///Register accumulating all valid samples (not double transition) read from the SAMPLE register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace Noneaccread{    ///<Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC task
        using Addr = Register::Address<0x40012518,0x00000000,0,unsigned>;
        ///Snapshot of the ACC register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> accread{}; 
    }
    namespace Nonedbfen{    ///<Enable input debounce filters
        using Addr = Register::Address<0x40012528,0xfffffffe,0,unsigned>;
        ///Enable input debounce filters
        enum class DbfenVal {
            disabled=0x00000000,     ///<Debounce input filters disabled
            enabled=0x00000001,     ///<Debounce input filters enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DbfenVal> dbfen{}; 
        namespace DbfenValC{
            constexpr Register::FieldValue<decltype(dbfen)::Type,DbfenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dbfen)::Type,DbfenVal::enabled> enabled{};
        }
        }
    }
    namespace Noneledpre{    ///<Time period the LED is switched ON prior to sampling
        using Addr = Register::Address<0x40012540,0xfffffe00,0,unsigned>;
        ///Period in us the LED is switched on prior to sampling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> ledpre{}; 
    }
    namespace Noneaccdbl{    ///<Register accumulating the number of detected double transitions
        using Addr = Register::Address<0x40012544,0xfffffff0,0,unsigned>;
        ///Register accumulating the number of detected double or illegal transitions. ( SAMPLE = 2 ).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> accdbl{}; 
    }
    namespace Noneaccdblread{    ///<Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL task
        using Addr = Register::Address<0x40012548,0xfffffff0,0,unsigned>;
        ///Snapshot of the ACCDBL register. This field is updated when the READCLRACC or RDCLRDBL task is triggered.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> accdblread{}; 
    }
}
