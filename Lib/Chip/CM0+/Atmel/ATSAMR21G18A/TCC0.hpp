#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer Counter Control 0
    namespace TccCc0{    ///<Compare and Capture
        using Addr = Register::Address<0x42002044,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace TccCc1{    ///<Compare and Capture
        using Addr = Register::Address<0x42002048,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace TccCc2{    ///<Compare and Capture
        using Addr = Register::Address<0x4200204c,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace TccCc3{    ///<Compare and Capture
        using Addr = Register::Address<0x42002050,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
    }
    namespace TccCcb0{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002070,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
        namespace CcbValC{
        }
    }
    namespace TccCcb1{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002074,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
        namespace CcbValC{
        }
    }
    namespace TccCcb2{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002078,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
        namespace CcbValC{
        }
    }
    namespace TccCcb3{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4200207c,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
        namespace CcbValC{
        }
    }
    namespace TccCount{    ///<Count
        using Addr = Register::Address<0x42002034,0xff000000,0,unsigned>;
        ///Count Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace TccCtrla{    ///<Control A
        using Addr = Register::Address<0x42002000,0xf0ff009c,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Enhanced Resolution
        enum class ResolutionVal {
            none=0x00000000,     ///<None
            dith4=0x00000001,     ///<None
            dith5=0x00000002,     ///<None
            dith6=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,ResolutionVal> resolution{}; 
        namespace ResolutionValC{
            constexpr Register::FieldValue<decltype(resolution),ResolutionVal::none> none{};
            constexpr Register::FieldValue<decltype(resolution),ResolutionVal::dith4> dith4{};
            constexpr Register::FieldValue<decltype(resolution),ResolutionVal::dith5> dith5{};
            constexpr Register::FieldValue<decltype(resolution),ResolutionVal::dith6> dith6{};
        }
        ///Prescaler
        enum class PrescalerVal {
            div1=0x00000000,     ///<None
            div2=0x00000001,     ///<None
            div4=0x00000002,     ///<None
            div8=0x00000003,     ///<None
            div16=0x00000004,     ///<None
            div64=0x00000005,     ///<None
            div256=0x00000006,     ///<None
            div1024=0x00000007,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::div1024> div1024{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///Prescaler and Counter Synchronization Selection
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<None
            presc=0x00000001,     ///<None
            resync=0x00000002,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync),PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync),PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync),PrescsyncVal::resync> resync{};
        }
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> alock{}; 
        namespace AlockValC{
        }
        ///Master Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msync{}; 
        namespace MsyncValC{
        }
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpten0{}; 
        namespace Cpten0ValC{
        }
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cpten1{}; 
        namespace Cpten1ValC{
        }
        ///Capture Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cpten2{}; 
        namespace Cpten2ValC{
        }
        ///Capture Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cpten3{}; 
        namespace Cpten3ValC{
        }
    }
    namespace TccCtrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42002004,0xffffff00,0,unsigned char>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        namespace LupdValC{
        }
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        namespace OneshotValC{
        }
        ///Ramp Index Command
        enum class IdxcmdVal {
            disable=0x00000000,     ///<None
            set=0x00000001,     ///<None
            clear=0x00000002,     ///<None
            hold=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,IdxcmdVal> idxcmd{}; 
        namespace IdxcmdValC{
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::set> set{};
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::hold> hold{};
        }
        ///TCC Command
        enum class CmdVal {
            none=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            stop=0x00000002,     ///<None
            update=0x00000003,     ///<None
            readsync=0x00000004,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd),CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::readsync> readsync{};
        }
    }
    namespace TccCtrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42002005,0xffffff00,0,unsigned char>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Lock update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        namespace LupdValC{
        }
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        namespace OneshotValC{
        }
        ///Ramp Index Command
        enum class IdxcmdVal {
            disable=0x00000000,     ///<None
            set=0x00000001,     ///<None
            clear=0x00000002,     ///<None
            hold=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,IdxcmdVal> idxcmd{}; 
        namespace IdxcmdValC{
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::set> set{};
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(idxcmd),IdxcmdVal::hold> hold{};
        }
        ///TCC Command
        enum class CmdVal {
            none=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            stop=0x00000002,     ///<None
            update=0x00000003,     ///<None
            readsync=0x00000004,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd),CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::readsync> readsync{};
        }
    }
    namespace TccDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4200201e,0xfffffffa,0,unsigned char>;
        ///Debug Running Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
        namespace DbgrunValC{
        }
        ///Fault Detection on Debug Break Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fddbd{}; 
        namespace FddbdValC{
        }
    }
    namespace TccDrvctrl{    ///<Driver Configuration
        using Addr = Register::Address<0x42002018,0x00000000,0,unsigned>;
        ///Non-Recoverable State 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nre0{}; 
        namespace Nre0ValC{
        }
        ///Non-Recoverable State 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nre1{}; 
        namespace Nre1ValC{
        }
        ///Non-Recoverable State 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nre2{}; 
        namespace Nre2ValC{
        }
        ///Non-Recoverable State 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nre3{}; 
        namespace Nre3ValC{
        }
        ///Non-Recoverable State 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nre4{}; 
        namespace Nre4ValC{
        }
        ///Non-Recoverable State 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nre5{}; 
        namespace Nre5ValC{
        }
        ///Non-Recoverable State 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nre6{}; 
        namespace Nre6ValC{
        }
        ///Non-Recoverable State 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nre7{}; 
        namespace Nre7ValC{
        }
        ///Non-Recoverable State 0 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nrv0{}; 
        namespace Nrv0ValC{
        }
        ///Non-Recoverable State 1 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrv1{}; 
        namespace Nrv1ValC{
        }
        ///Non-Recoverable State 2 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrv2{}; 
        namespace Nrv2ValC{
        }
        ///Non-Recoverable State 3 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nrv3{}; 
        namespace Nrv3ValC{
        }
        ///Non-Recoverable State 4 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nrv4{}; 
        namespace Nrv4ValC{
        }
        ///Non-Recoverable State 5 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nrv5{}; 
        namespace Nrv5ValC{
        }
        ///Non-Recoverable State 6 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nrv6{}; 
        namespace Nrv6ValC{
        }
        ///Non-Recoverable State 7 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nrv7{}; 
        namespace Nrv7ValC{
        }
        ///Output Waveform 0 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> inven0{}; 
        namespace Inven0ValC{
        }
        ///Output Waveform 1 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inven1{}; 
        namespace Inven1ValC{
        }
        ///Output Waveform 2 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> inven2{}; 
        namespace Inven2ValC{
        }
        ///Output Waveform 3 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inven3{}; 
        namespace Inven3ValC{
        }
        ///Output Waveform 4 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inven4{}; 
        namespace Inven4ValC{
        }
        ///Output Waveform 5 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> inven5{}; 
        namespace Inven5ValC{
        }
        ///Output Waveform 6 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> inven6{}; 
        namespace Inven6ValC{
        }
        ///Output Waveform 7 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> inven7{}; 
        namespace Inven7ValC{
        }
        ///Non-Recoverable Fault Input 0 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval0{}; 
        namespace Filterval0ValC{
        }
        ///Non-Recoverable Fault Input 1 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> filterval1{}; 
        namespace Filterval1ValC{
        }
    }
    namespace TccEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42002020,0xf0f00800,0,unsigned>;
        ///Timer/counter Input Event0 Action
        enum class Evact0Val {
            off=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            countev=0x00000002,     ///<None
            start=0x00000003,     ///<None
            inc=0x00000004,     ///<None
            count=0x00000005,     ///<None
            fault=0x00000007,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Evact0Val> evact0{}; 
        namespace Evact0ValC{
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::off> off{};
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::countev> countev{};
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::start> start{};
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::inc> inc{};
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::count> count{};
            constexpr Register::FieldValue<decltype(evact0),Evact0Val::fault> fault{};
        }
        ///Timer/counter Input Event1 Action
        enum class Evact1Val {
            off=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            dir=0x00000002,     ///<None
            stop=0x00000003,     ///<None
            dec=0x00000004,     ///<None
            ppw=0x00000005,     ///<None
            pwp=0x00000006,     ///<None
            fault=0x00000007,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,Evact1Val> evact1{}; 
        namespace Evact1ValC{
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::off> off{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::dir> dir{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::stop> stop{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::dec> dec{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::pwp> pwp{};
            constexpr Register::FieldValue<decltype(evact1),Evact1Val::fault> fault{};
        }
        ///Timer/counter Output Event Mode
        enum class CntselVal {
            start=0x00000000,     ///<None
            end=0x00000001,     ///<None
            between=0x00000002,     ///<None
            boundary=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CntselVal> cntsel{}; 
        namespace CntselValC{
            constexpr Register::FieldValue<decltype(cntsel),CntselVal::start> start{};
            constexpr Register::FieldValue<decltype(cntsel),CntselVal::end> end{};
            constexpr Register::FieldValue<decltype(cntsel),CntselVal::between> between{};
            constexpr Register::FieldValue<decltype(cntsel),CntselVal::boundary> boundary{};
        }
        ///Overflow/Underflow Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        namespace OvfeoValC{
        }
        ///Retrigger Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> trgeo{}; 
        namespace TrgeoValC{
        }
        ///Timer/counter Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cnteo{}; 
        namespace CnteoValC{
        }
        ///Inverted Event 0 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcinv0{}; 
        namespace Tcinv0ValC{
        }
        ///Inverted Event 1 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcinv1{}; 
        namespace Tcinv1ValC{
        }
        ///Timer/counter Event 0 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tcei0{}; 
        namespace Tcei0ValC{
        }
        ///Timer/counter Event 1 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcei1{}; 
        namespace Tcei1ValC{
        }
        ///Match or Capture Channel 0 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcei0{}; 
        namespace Mcei0ValC{
        }
        ///Match or Capture Channel 1 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mcei1{}; 
        namespace Mcei1ValC{
        }
        ///Match or Capture Channel 2 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcei2{}; 
        namespace Mcei2ValC{
        }
        ///Match or Capture Channel 3 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mcei3{}; 
        namespace Mcei3ValC{
        }
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mceo0{}; 
        namespace Mceo0ValC{
        }
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mceo1{}; 
        namespace Mceo1ValC{
        }
        ///Match or Capture Channel 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mceo2{}; 
        namespace Mceo2ValC{
        }
        ///Match or Capture Channel 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mceo3{}; 
        namespace Mceo3ValC{
        }
    }
    namespace TccFctrla{    ///<Recoverable FaultA Configuration
        using Addr = Register::Address<0x4200200c,0xf0008004,0,unsigned>;
        ///FaultA Source
        enum class SrcVal {
            disable=0x00000000,     ///<None
            enable=0x00000001,     ///<None
            invert=0x00000002,     ///<None
            altfault=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src),SrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(src),SrcVal::enable> enable{};
            constexpr Register::FieldValue<decltype(src),SrcVal::invert> invert{};
            constexpr Register::FieldValue<decltype(src),SrcVal::altfault> altfault{};
        }
        ///FaultA Keeper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        namespace KeepValC{
        }
        ///FaultA Qualification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        namespace QualValC{
        }
        ///FaultA Blanking Mode
        enum class BlankVal {
            disable=0x00000000,     ///<None
            rise=0x00000001,     ///<None
            fall=0x00000002,     ///<None
            both=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank),BlankVal::disable> disable{};
            constexpr Register::FieldValue<decltype(blank),BlankVal::rise> rise{};
            constexpr Register::FieldValue<decltype(blank),BlankVal::fall> fall{};
            constexpr Register::FieldValue<decltype(blank),BlankVal::both> both{};
        }
        ///FaultA Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        namespace RestartValC{
        }
        ///FaultA Halt Mode
        enum class HaltVal {
            disable=0x00000000,     ///<None
            hw=0x00000001,     ///<None
            sw=0x00000002,     ///<None
            nr=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt),HaltVal::disable> disable{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::hw> hw{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::sw> sw{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::nr> nr{};
        }
        ///FaultA Capture Channel
        enum class ChselVal {
            cc0=0x00000000,     ///<None
            cc1=0x00000001,     ///<None
            cc2=0x00000002,     ///<None
            cc3=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ChselVal> chsel{}; 
        namespace ChselValC{
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc3> cc3{};
        }
        ///FaultA Capture Action
        enum class CaptureVal {
            disable=0x00000000,     ///<None
            capt=0x00000001,     ///<None
            captmin=0x00000002,     ///<None
            captmax=0x00000003,     ///<None
            locmin=0x00000004,     ///<None
            locmax=0x00000005,     ///<None
            deriv0=0x00000006,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture),CaptureVal::disable> disable{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::capt> capt{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::captmin> captmin{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::captmax> captmax{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::locmin> locmin{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::locmax> locmax{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::deriv0> deriv0{};
        }
        ///FaultA Blanking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        namespace BlankvalValC{
        }
        ///FaultA Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
        namespace FiltervalValC{
        }
    }
    namespace TccFctrlb{    ///<Recoverable FaultB Configuration
        using Addr = Register::Address<0x42002010,0xf0008004,0,unsigned>;
        ///FaultB Source
        enum class SrcVal {
            disable=0x00000000,     ///<None
            enable=0x00000001,     ///<None
            invert=0x00000002,     ///<None
            altfault=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src),SrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(src),SrcVal::enable> enable{};
            constexpr Register::FieldValue<decltype(src),SrcVal::invert> invert{};
            constexpr Register::FieldValue<decltype(src),SrcVal::altfault> altfault{};
        }
        ///FaultB Keeper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        namespace KeepValC{
        }
        ///FaultB Qualification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        namespace QualValC{
        }
        ///FaultB Blanking Mode
        enum class BlankVal {
            disable=0x00000000,     ///<None
            rise=0x00000001,     ///<None
            fall=0x00000002,     ///<None
            both=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank),BlankVal::disable> disable{};
            constexpr Register::FieldValue<decltype(blank),BlankVal::rise> rise{};
            constexpr Register::FieldValue<decltype(blank),BlankVal::fall> fall{};
            constexpr Register::FieldValue<decltype(blank),BlankVal::both> both{};
        }
        ///FaultB Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        namespace RestartValC{
        }
        ///FaultB Halt Mode
        enum class HaltVal {
            disable=0x00000000,     ///<None
            hw=0x00000001,     ///<None
            sw=0x00000002,     ///<None
            nr=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt),HaltVal::disable> disable{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::hw> hw{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::sw> sw{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::nr> nr{};
        }
        ///FaultB Capture Channel
        enum class ChselVal {
            cc0=0x00000000,     ///<None
            cc1=0x00000001,     ///<None
            cc2=0x00000002,     ///<None
            cc3=0x00000003,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ChselVal> chsel{}; 
        namespace ChselValC{
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(chsel),ChselVal::cc3> cc3{};
        }
        ///FaultB Capture Action
        enum class CaptureVal {
            disable=0x00000000,     ///<None
            capt=0x00000001,     ///<None
            captmin=0x00000002,     ///<None
            captmax=0x00000003,     ///<None
            locmin=0x00000004,     ///<None
            locmax=0x00000005,     ///<None
            deriv0=0x00000006,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture),CaptureVal::disable> disable{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::capt> capt{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::captmin> captmin{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::captmax> captmax{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::locmin> locmin{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::locmax> locmax{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::deriv0> deriv0{};
        }
        ///FaultB Blanking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        namespace BlankvalValC{
        }
        ///FaultB Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
        namespace FiltervalValC{
        }
    }
    namespace TccIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002024,0xfff007f0,0,unsigned>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        namespace OvfValC{
        }
        ///Retrigger Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        namespace TrgValC{
        }
        ///Counter Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Non-recoverable Debug Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        namespace DfsValC{
        }
        ///Recoverable FaultA Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        namespace FaultaValC{
        }
        ///Recoverable FaultB Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        namespace FaultbValC{
        }
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        namespace Fault0ValC{
        }
        ///Non-Recoverable Fault 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        namespace Fault1ValC{
        }
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        namespace Mc0ValC{
        }
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        namespace Mc1ValC{
        }
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        namespace Mc2ValC{
        }
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
        namespace Mc3ValC{
        }
    }
    namespace TccIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002028,0xfff007f0,0,unsigned>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        namespace OvfValC{
        }
        ///Retrigger Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        namespace TrgValC{
        }
        ///Counter Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Non-Recoverable Debug Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        namespace DfsValC{
        }
        ///Recoverable FaultA Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        namespace FaultaValC{
        }
        ///Recoverable FaultB Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        namespace FaultbValC{
        }
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        namespace Fault0ValC{
        }
        ///Non-Recoverable Fault 1 Interrupt Enabl
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        namespace Fault1ValC{
        }
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        namespace Mc0ValC{
        }
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        namespace Mc1ValC{
        }
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        namespace Mc2ValC{
        }
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
        namespace Mc3ValC{
        }
    }
    namespace TccIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4200202c,0xfff007f0,0,unsigned>;
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        namespace OvfValC{
        }
        ///Retrigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        namespace TrgValC{
        }
        ///Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Non-Recoverable Debug Fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        namespace DfsValC{
        }
        ///Recoverable FaultA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        namespace FaultaValC{
        }
        ///Recoverable FaultB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        namespace FaultbValC{
        }
        ///Non-Recoverable Fault 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        namespace Fault0ValC{
        }
        ///Non-Recoverable Fault 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        namespace Fault1ValC{
        }
        ///Match or Capture 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        namespace Mc0ValC{
        }
        ///Match or Capture 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        namespace Mc1ValC{
        }
        ///Match or Capture 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        namespace Mc2ValC{
        }
        ///Match or Capture 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
        namespace Mc3ValC{
        }
    }
    namespace TccPatt{    ///<Pattern
        using Addr = Register::Address<0x42002038,0xffff0000,0,unsigned>;
        ///Pattern Generator 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pge0{}; 
        namespace Pge0ValC{
        }
        ///Pattern Generator 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pge1{}; 
        namespace Pge1ValC{
        }
        ///Pattern Generator 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pge2{}; 
        namespace Pge2ValC{
        }
        ///Pattern Generator 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pge3{}; 
        namespace Pge3ValC{
        }
        ///Pattern Generator 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pge4{}; 
        namespace Pge4ValC{
        }
        ///Pattern Generator 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pge5{}; 
        namespace Pge5ValC{
        }
        ///Pattern Generator 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pge6{}; 
        namespace Pge6ValC{
        }
        ///Pattern Generator 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pge7{}; 
        namespace Pge7ValC{
        }
        ///Pattern Generator 0 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgv0{}; 
        namespace Pgv0ValC{
        }
        ///Pattern Generator 1 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgv1{}; 
        namespace Pgv1ValC{
        }
        ///Pattern Generator 2 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgv2{}; 
        namespace Pgv2ValC{
        }
        ///Pattern Generator 3 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgv3{}; 
        namespace Pgv3ValC{
        }
        ///Pattern Generator 4 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgv4{}; 
        namespace Pgv4ValC{
        }
        ///Pattern Generator 5 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgv5{}; 
        namespace Pgv5ValC{
        }
        ///Pattern Generator 6 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgv6{}; 
        namespace Pgv6ValC{
        }
        ///Pattern Generator 7 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgv7{}; 
        namespace Pgv7ValC{
        }
    }
    namespace TccPattb{    ///<Pattern Buffer
        using Addr = Register::Address<0x42002064,0xffff0000,0,unsigned>;
        ///Pattern Generator 0 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pgeb0{}; 
        namespace Pgeb0ValC{
        }
        ///Pattern Generator 1 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pgeb1{}; 
        namespace Pgeb1ValC{
        }
        ///Pattern Generator 2 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgeb2{}; 
        namespace Pgeb2ValC{
        }
        ///Pattern Generator 3 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pgeb3{}; 
        namespace Pgeb3ValC{
        }
        ///Pattern Generator 4 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pgeb4{}; 
        namespace Pgeb4ValC{
        }
        ///Pattern Generator 5 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgeb5{}; 
        namespace Pgeb5ValC{
        }
        ///Pattern Generator 6 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgeb6{}; 
        namespace Pgeb6ValC{
        }
        ///Pattern Generator 7 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgeb7{}; 
        namespace Pgeb7ValC{
        }
        ///Pattern Generator 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgvb0{}; 
        namespace Pgvb0ValC{
        }
        ///Pattern Generator 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgvb1{}; 
        namespace Pgvb1ValC{
        }
        ///Pattern Generator 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgvb2{}; 
        namespace Pgvb2ValC{
        }
        ///Pattern Generator 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgvb3{}; 
        namespace Pgvb3ValC{
        }
        ///Pattern Generator 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgvb4{}; 
        namespace Pgvb4ValC{
        }
        ///Pattern Generator 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgvb5{}; 
        namespace Pgvb5ValC{
        }
        ///Pattern Generator 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgvb6{}; 
        namespace Pgvb6ValC{
        }
        ///Pattern Generator 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgvb7{}; 
        namespace Pgvb7ValC{
        }
    }
    namespace TccPer{    ///<Period
        using Addr = Register::Address<0x42002040,0xff000000,0,unsigned>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
    }
    namespace TccPerb{    ///<Period Buffer
        using Addr = Register::Address<0x4200206c,0xff000000,0,unsigned>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> perb{}; 
        namespace PerbValC{
        }
    }
    namespace TccStatus{    ///<Status
        using Addr = Register::Address<0x42002030,0xf0f00014,0,unsigned>;
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Ramp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idx{}; 
        namespace IdxValC{
        }
        ///Non-Recoverable Debug Fault State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfs{}; 
        namespace DfsValC{
        }
        ///Pattern Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pattbv{}; 
        namespace PattbvValC{
        }
        ///Wave Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wavebv{}; 
        namespace WavebvValC{
        }
        ///Period Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> perbv{}; 
        namespace PerbvValC{
        }
        ///Recoverable FaultA Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> faultain{}; 
        namespace FaultainValC{
        }
        ///Recoverable FaultB Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> faultbin{}; 
        namespace FaultbinValC{
        }
        ///Non-Recoverable Fault0 Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fault0in{}; 
        namespace Fault0inValC{
        }
        ///Non-Recoverable Fault1 Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fault1in{}; 
        namespace Fault1inValC{
        }
        ///Recoverable FaultA State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        namespace FaultaValC{
        }
        ///Recoverable FaultB State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        namespace FaultbValC{
        }
        ///Non-Recoverable Fault 0 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        namespace Fault0ValC{
        }
        ///Non-Recoverable Fault 1 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        namespace Fault1ValC{
        }
        ///Compare Channel 0 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ccbv0{}; 
        namespace Ccbv0ValC{
        }
        ///Compare Channel 1 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ccbv1{}; 
        namespace Ccbv1ValC{
        }
        ///Compare Channel 2 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ccbv2{}; 
        namespace Ccbv2ValC{
        }
        ///Compare Channel 3 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccbv3{}; 
        namespace Ccbv3ValC{
        }
        ///Compare Channel 0 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cmp0{}; 
        namespace Cmp0ValC{
        }
        ///Compare Channel 1 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cmp1{}; 
        namespace Cmp1ValC{
        }
        ///Compare Channel 2 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///Compare Channel 3 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cmp3{}; 
        namespace Cmp3ValC{
        }
    }
    namespace TccSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x42002008,0xff80f000,0,unsigned>;
        ///Swrst Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Enable Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Ctrlb Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        namespace CtrlbValC{
        }
        ///Status Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///Count Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
        ///Pattern Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> patt{}; 
        namespace PattValC{
        }
        ///Wave Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///Period busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///Compare Channel Buffer 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc0{}; 
        namespace Cc0ValC{
        }
        ///Compare Channel Buffer 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1{}; 
        namespace Cc1ValC{
        }
        ///Compare Channel Buffer 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2{}; 
        namespace Cc2ValC{
        }
        ///Compare Channel Buffer 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3{}; 
        namespace Cc3ValC{
        }
        ///Pattern Buffer Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pattb{}; 
        namespace PattbValC{
        }
        ///Wave Buffer Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> waveb{}; 
        namespace WavebValC{
        }
        ///Period Buffer Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> perb{}; 
        namespace PerbValC{
        }
        ///Compare Channel Buffer 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccb0{}; 
        namespace Ccb0ValC{
        }
        ///Compare Channel Buffer 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ccb1{}; 
        namespace Ccb1ValC{
        }
        ///Compare Channel Buffer 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ccb2{}; 
        namespace Ccb2ValC{
        }
        ///Compare Channel Buffer 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ccb3{}; 
        namespace Ccb3ValC{
        }
    }
    namespace TccWave{    ///<Waveform Control
        using Addr = Register::Address<0x4200203c,0xf0f0f048,0,unsigned>;
        ///Waveform Generation
        enum class WavegenVal {
            nfrq=0x00000000,     ///<None
            mfrq=0x00000001,     ///<None
            npwm=0x00000002,     ///<None
            dscritical=0x00000004,     ///<None
            dsbottom=0x00000005,     ///<None
            dsboth=0x00000006,     ///<None
            dstop=0x00000007,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::dscritical> dscritical{};
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::dsbottom> dsbottom{};
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::dsboth> dsboth{};
            constexpr Register::FieldValue<decltype(wavegen),WavegenVal::dstop> dstop{};
        }
        ///Ramp Mode
        enum class RampVal {
            ramp1=0x00000000,     ///<None
            ramp2a=0x00000001,     ///<None
            ramp2=0x00000002,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RampVal> ramp{}; 
        namespace RampValC{
            constexpr Register::FieldValue<decltype(ramp),RampVal::ramp1> ramp1{};
            constexpr Register::FieldValue<decltype(ramp),RampVal::ramp2a> ramp2a{};
            constexpr Register::FieldValue<decltype(ramp),RampVal::ramp2> ramp2{};
        }
        ///Circular period Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperen{}; 
        namespace CiperenValC{
        }
        ///Circular Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccen0{}; 
        namespace Ciccen0ValC{
        }
        ///Circular Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccen1{}; 
        namespace Ciccen1ValC{
        }
        ///Circular Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccen2{}; 
        namespace Ciccen2ValC{
        }
        ///Circular Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccen3{}; 
        namespace Ciccen3ValC{
        }
        ///Channel 0 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol0{}; 
        namespace Pol0ValC{
        }
        ///Channel 1 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol1{}; 
        namespace Pol1ValC{
        }
        ///Channel 2 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol2{}; 
        namespace Pol2ValC{
        }
        ///Channel 3 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol3{}; 
        namespace Pol3ValC{
        }
        ///Swap DTI Output Pair 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swap0{}; 
        namespace Swap0ValC{
        }
        ///Swap DTI Output Pair 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swap1{}; 
        namespace Swap1ValC{
        }
        ///Swap DTI Output Pair 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swap2{}; 
        namespace Swap2ValC{
        }
        ///Swap DTI Output Pair 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swap3{}; 
        namespace Swap3ValC{
        }
    }
    namespace TccWaveb{    ///<Waveform Control Buffer
        using Addr = Register::Address<0x42002068,0xf0f0f048,0,unsigned>;
        ///Waveform Generation Buffer
        enum class WavegenbVal {
            nfrq=0x00000000,     ///<None
            mfrq=0x00000001,     ///<None
            npwm=0x00000002,     ///<None
            dscritical=0x00000004,     ///<None
            dsbottom=0x00000005,     ///<None
            dsboth=0x00000006,     ///<None
            dstop=0x00000007,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WavegenbVal> wavegenb{}; 
        namespace WavegenbValC{
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::dscritical> dscritical{};
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::dsbottom> dsbottom{};
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::dsboth> dsboth{};
            constexpr Register::FieldValue<decltype(wavegenb),WavegenbVal::dstop> dstop{};
        }
        ///Ramp Mode Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rampb{}; 
        namespace RampbValC{
        }
        ///Circular Period Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperenb{}; 
        namespace CiperenbValC{
        }
        ///Circular Channel 0 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccenb0{}; 
        namespace Ciccenb0ValC{
        }
        ///Circular Channel 1 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccenb1{}; 
        namespace Ciccenb1ValC{
        }
        ///Circular Channel 2 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccenb2{}; 
        namespace Ciccenb2ValC{
        }
        ///Circular Channel 3 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccenb3{}; 
        namespace Ciccenb3ValC{
        }
        ///Channel 0 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> polb0{}; 
        namespace Polb0ValC{
        }
        ///Channel 1 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> polb1{}; 
        namespace Polb1ValC{
        }
        ///Channel 2 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> polb2{}; 
        namespace Polb2ValC{
        }
        ///Channel 3 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> polb3{}; 
        namespace Polb3ValC{
        }
        ///Swap DTI Output Pair 0 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swapb0{}; 
        namespace Swapb0ValC{
        }
        ///Swap DTI Output Pair 1 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swapb1{}; 
        namespace Swapb1ValC{
        }
        ///Swap DTI Output Pair 2 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swapb2{}; 
        namespace Swapb2ValC{
        }
        ///Swap DTI Output Pair 3 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swapb3{}; 
        namespace Swapb3ValC{
        }
    }
    namespace TccWexctrl{    ///<Waveform Extension Configuration
        using Addr = Register::Address<0x42002014,0x0000f0fc,0,unsigned>;
        ///Output Matrix
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> otmx{}; 
        namespace OtmxValC{
        }
        ///Dead-time Insertion Generator 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dtien0{}; 
        namespace Dtien0ValC{
        }
        ///Dead-time Insertion Generator 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dtien1{}; 
        namespace Dtien1ValC{
        }
        ///Dead-time Insertion Generator 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dtien2{}; 
        namespace Dtien2ValC{
        }
        ///Dead-time Insertion Generator 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtien3{}; 
        namespace Dtien3ValC{
        }
        ///Dead-time Low Side Outputs Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dtls{}; 
        namespace DtlsValC{
        }
        ///Dead-time High Side Outputs Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dths{}; 
        namespace DthsValC{
        }
    }
}
