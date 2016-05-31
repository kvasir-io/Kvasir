#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Timer Counter Control 2
    namespace Tcc2Count{    ///<Count
        using Addr = Register::Address<0x42002834,0xff000000,0x00000000,unsigned>;
        ///Count Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tcc2Ctrla{    ///<Control A
        using Addr = Register::Address<0x42002800,0xf0ff009c,0x00000000,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Enhanced Resolution
        enum class ResolutionVal {
            none=0x00000000,     ///<
            dith4=0x00000001,     ///<
            dith5=0x00000002,     ///<
            dith6=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,ResolutionVal> resolution{}; 
        namespace ResolutionValC{
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::none> none{};
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::dith4> dith4{};
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::dith5> dith5{};
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::dith6> dith6{};
        }
        ///Prescaler
        enum class PrescalerVal {
            div1=0x00000000,     ///<
            div2=0x00000001,     ///<
            div4=0x00000002,     ///<
            div8=0x00000003,     ///<
            div16=0x00000004,     ///<
            div64=0x00000005,     ///<
            div256=0x00000006,     ///<
            div1024=0x00000007,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Prescaler and Counter Synchronization Selection
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<
            presc=0x00000001,     ///<
            resync=0x00000002,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> alock{}; 
        ///Master Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msync{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cpten1{}; 
        ///Capture Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cpten2{}; 
        ///Capture Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cpten3{}; 
    }
    namespace Tcc2Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42002804,0xffffff00,0x00000000,unsigned char>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Ramp Index Command
        enum class IdxcmdVal {
            disable=0x00000000,     ///<
            set=0x00000001,     ///<
            clear=0x00000002,     ///<
            hold=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,IdxcmdVal> idxcmd{}; 
        namespace IdxcmdValC{
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::set> set{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::hold> hold{};
        }
        ///TCC Command
        enum class CmdVal {
            none=0x00000000,     ///<
            retrigger=0x00000001,     ///<
            stop=0x00000002,     ///<
            update=0x00000003,     ///<
            readsync=0x00000004,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
        }
    }
    namespace Tcc2Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42002805,0xffffff00,0x00000000,unsigned char>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Ramp Index Command
        enum class IdxcmdVal {
            disable=0x00000000,     ///<
            set=0x00000001,     ///<
            clear=0x00000002,     ///<
            hold=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,IdxcmdVal> idxcmd{}; 
        namespace IdxcmdValC{
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::set> set{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::hold> hold{};
        }
        ///TCC Command
        enum class CmdVal {
            none=0x00000000,     ///<
            retrigger=0x00000001,     ///<
            stop=0x00000002,     ///<
            update=0x00000003,     ///<
            readsync=0x00000004,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
        }
    }
    namespace Tcc2Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4200281e,0xfffffffa,0x00000000,unsigned char>;
        ///Debug Running Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
        ///Fault Detection on Debug Break Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fddbd{}; 
    }
    namespace Tcc2Drvctrl{    ///<Driver Configuration
        using Addr = Register::Address<0x42002818,0x00000000,0x00000000,unsigned>;
        ///Non-Recoverable State 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nre0{}; 
        ///Non-Recoverable State 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nre1{}; 
        ///Non-Recoverable State 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nre2{}; 
        ///Non-Recoverable State 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nre3{}; 
        ///Non-Recoverable State 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nre4{}; 
        ///Non-Recoverable State 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nre5{}; 
        ///Non-Recoverable State 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nre6{}; 
        ///Non-Recoverable State 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nre7{}; 
        ///Non-Recoverable State 0 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nrv0{}; 
        ///Non-Recoverable State 1 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrv1{}; 
        ///Non-Recoverable State 2 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrv2{}; 
        ///Non-Recoverable State 3 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nrv3{}; 
        ///Non-Recoverable State 4 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nrv4{}; 
        ///Non-Recoverable State 5 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nrv5{}; 
        ///Non-Recoverable State 6 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nrv6{}; 
        ///Non-Recoverable State 7 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nrv7{}; 
        ///Output Waveform 0 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform 1 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inven1{}; 
        ///Output Waveform 2 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> inven2{}; 
        ///Output Waveform 3 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inven3{}; 
        ///Output Waveform 4 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inven4{}; 
        ///Output Waveform 5 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> inven5{}; 
        ///Output Waveform 6 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> inven6{}; 
        ///Output Waveform 7 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> inven7{}; 
        ///Non-Recoverable Fault Input 0 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval0{}; 
        ///Non-Recoverable Fault Input 1 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> filterval1{}; 
    }
    namespace Tcc2Evctrl{    ///<Event Control
        using Addr = Register::Address<0x42002820,0xf0f00800,0x00000000,unsigned>;
        ///Timer/counter Input Event0 Action
        enum class Evact0Val {
            off=0x00000000,     ///<
            retrigger=0x00000001,     ///<
            countev=0x00000002,     ///<
            start=0x00000003,     ///<
            inc=0x00000004,     ///<
            count=0x00000005,     ///<
            fault=0x00000007,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Evact0Val> evact0{}; 
        namespace Evact0ValC{
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::off> off{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::countev> countev{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::start> start{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::inc> inc{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::count> count{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::fault> fault{};
        }
        ///Timer/counter Input Event1 Action
        enum class Evact1Val {
            off=0x00000000,     ///<
            retrigger=0x00000001,     ///<
            dir=0x00000002,     ///<
            stop=0x00000003,     ///<
            dec=0x00000004,     ///<
            ppw=0x00000005,     ///<
            pwp=0x00000006,     ///<
            fault=0x00000007,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,Evact1Val> evact1{}; 
        namespace Evact1ValC{
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::off> off{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::dir> dir{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::stop> stop{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::dec> dec{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::pwp> pwp{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::fault> fault{};
        }
        ///Timer/counter Output Event Mode
        enum class CntselVal {
            start=0x00000000,     ///<
            end=0x00000001,     ///<
            between=0x00000002,     ///<
            boundary=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CntselVal> cntsel{}; 
        namespace CntselValC{
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::start> start{};
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::end> end{};
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::between> between{};
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::boundary> boundary{};
        }
        ///Overflow/Underflow Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Retrigger Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> trgeo{}; 
        ///Timer/counter Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cnteo{}; 
        ///Inverted Event 0 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcinv0{}; 
        ///Inverted Event 1 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcinv1{}; 
        ///Timer/counter Event 0 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tcei0{}; 
        ///Timer/counter Event 1 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcei1{}; 
        ///Match or Capture Channel 0 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcei0{}; 
        ///Match or Capture Channel 1 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mcei1{}; 
        ///Match or Capture Channel 2 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcei2{}; 
        ///Match or Capture Channel 3 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mcei3{}; 
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mceo1{}; 
        ///Match or Capture Channel 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mceo2{}; 
        ///Match or Capture Channel 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mceo3{}; 
    }
    namespace Tcc2Fctrla{    ///<Recoverable FaultA Configuration
        using Addr = Register::Address<0x4200280c,0xf0008004,0x00000000,unsigned>;
        ///FaultA Source
        enum class SrcVal {
            disable=0x00000000,     ///<
            enable=0x00000001,     ///<
            invert=0x00000002,     ///<
            altfault=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::enable> enable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::invert> invert{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::altfault> altfault{};
        }
        ///FaultA Keeper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        ///FaultA Qualification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        ///FaultA Blanking Mode
        enum class BlankVal {
            disable=0x00000000,     ///<
            rise=0x00000001,     ///<
            fall=0x00000002,     ///<
            both=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::disable> disable{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::rise> rise{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::fall> fall{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::both> both{};
        }
        ///FaultA Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        ///FaultA Halt Mode
        enum class HaltVal {
            disable=0x00000000,     ///<
            hw=0x00000001,     ///<
            sw=0x00000002,     ///<
            nr=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::disable> disable{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::hw> hw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::sw> sw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::nr> nr{};
        }
        ///FaultA Capture Channel
        enum class ChselVal {
            cc0=0x00000000,     ///<
            cc1=0x00000001,     ///<
            cc2=0x00000002,     ///<
            cc3=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ChselVal> chsel{}; 
        namespace ChselValC{
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc3> cc3{};
        }
        ///FaultA Capture Action
        enum class CaptureVal {
            disable=0x00000000,     ///<
            capt=0x00000001,     ///<
            captmin=0x00000002,     ///<
            captmax=0x00000003,     ///<
            locmin=0x00000004,     ///<
            locmax=0x00000005,     ///<
            deriv0=0x00000006,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::disable> disable{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::capt> capt{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmin> captmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmax> captmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmin> locmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmax> locmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::deriv0> deriv0{};
        }
        ///FaultA Blanking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        ///FaultA Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
    }
    namespace Tcc2Fctrlb{    ///<Recoverable FaultB Configuration
        using Addr = Register::Address<0x42002810,0xf0008004,0x00000000,unsigned>;
        ///FaultB Source
        enum class SrcVal {
            disable=0x00000000,     ///<
            enable=0x00000001,     ///<
            invert=0x00000002,     ///<
            altfault=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::enable> enable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::invert> invert{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::altfault> altfault{};
        }
        ///FaultB Keeper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        ///FaultB Qualification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        ///FaultB Blanking Mode
        enum class BlankVal {
            disable=0x00000000,     ///<
            rise=0x00000001,     ///<
            fall=0x00000002,     ///<
            both=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::disable> disable{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::rise> rise{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::fall> fall{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::both> both{};
        }
        ///FaultB Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        ///FaultB Halt Mode
        enum class HaltVal {
            disable=0x00000000,     ///<
            hw=0x00000001,     ///<
            sw=0x00000002,     ///<
            nr=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::disable> disable{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::hw> hw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::sw> sw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::nr> nr{};
        }
        ///FaultB Capture Channel
        enum class ChselVal {
            cc0=0x00000000,     ///<
            cc1=0x00000001,     ///<
            cc2=0x00000002,     ///<
            cc3=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ChselVal> chsel{}; 
        namespace ChselValC{
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc3> cc3{};
        }
        ///FaultB Capture Action
        enum class CaptureVal {
            disable=0x00000000,     ///<
            capt=0x00000001,     ///<
            captmin=0x00000002,     ///<
            captmax=0x00000003,     ///<
            locmin=0x00000004,     ///<
            locmax=0x00000005,     ///<
            deriv0=0x00000006,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::disable> disable{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::capt> capt{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmin> captmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmax> captmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmin> locmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmax> locmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::deriv0> deriv0{};
        }
        ///FaultB Blanking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        ///FaultB Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
    }
    namespace Tcc2Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002824,0xfff007f0,0x00000000,unsigned>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-recoverable Debug Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable FaultA Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
    }
    namespace Tcc2Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002828,0xfff007f0,0x00000000,unsigned>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Debug Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable FaultA Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 Interrupt Enabl
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
    }
    namespace Tcc2Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4200282c,0xfff007f0,0x00000000,unsigned>;
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Debug Fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable FaultA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
    }
    namespace Tcc2Patt{    ///<Pattern
        using Addr = Register::Address<0x42002838,0xffff0000,0x00000000,unsigned>;
        ///Pattern Generator 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pge0{}; 
        ///Pattern Generator 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pge1{}; 
        ///Pattern Generator 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pge2{}; 
        ///Pattern Generator 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pge3{}; 
        ///Pattern Generator 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pge4{}; 
        ///Pattern Generator 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pge5{}; 
        ///Pattern Generator 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pge6{}; 
        ///Pattern Generator 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pge7{}; 
        ///Pattern Generator 0 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgv0{}; 
        ///Pattern Generator 1 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgv1{}; 
        ///Pattern Generator 2 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgv2{}; 
        ///Pattern Generator 3 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgv3{}; 
        ///Pattern Generator 4 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgv4{}; 
        ///Pattern Generator 5 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgv5{}; 
        ///Pattern Generator 6 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgv6{}; 
        ///Pattern Generator 7 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgv7{}; 
    }
    namespace Tcc2Pattb{    ///<Pattern Buffer
        using Addr = Register::Address<0x42002864,0xffff0000,0x00000000,unsigned>;
        ///Pattern Generator 0 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pgeb0{}; 
        ///Pattern Generator 1 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pgeb1{}; 
        ///Pattern Generator 2 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgeb2{}; 
        ///Pattern Generator 3 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pgeb3{}; 
        ///Pattern Generator 4 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pgeb4{}; 
        ///Pattern Generator 5 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgeb5{}; 
        ///Pattern Generator 6 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgeb6{}; 
        ///Pattern Generator 7 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgeb7{}; 
        ///Pattern Generator 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgvb0{}; 
        ///Pattern Generator 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgvb1{}; 
        ///Pattern Generator 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgvb2{}; 
        ///Pattern Generator 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgvb3{}; 
        ///Pattern Generator 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgvb4{}; 
        ///Pattern Generator 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgvb5{}; 
        ///Pattern Generator 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgvb6{}; 
        ///Pattern Generator 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgvb7{}; 
    }
    namespace Tcc2Per{    ///<Period
        using Addr = Register::Address<0x42002840,0xff000000,0x00000000,unsigned>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tcc2Perb{    ///<Period Buffer
        using Addr = Register::Address<0x4200286c,0xff000000,0x00000000,unsigned>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> perb{}; 
    }
    namespace Tcc2Status{    ///<Status
        using Addr = Register::Address<0x42002830,0xf0f00014,0x00000000,unsigned>;
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Ramp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idx{}; 
        ///Non-Recoverable Debug Fault State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Pattern Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pattbv{}; 
        ///Wave Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wavebv{}; 
        ///Period Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> perbv{}; 
        ///Recoverable FaultA Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> faultain{}; 
        ///Recoverable FaultB Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> faultbin{}; 
        ///Non-Recoverable Fault0 Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fault0in{}; 
        ///Non-Recoverable Fault1 Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fault1in{}; 
        ///Recoverable FaultA State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Compare Channel 0 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ccbv0{}; 
        ///Compare Channel 1 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ccbv1{}; 
        ///Compare Channel 2 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ccbv2{}; 
        ///Compare Channel 3 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccbv3{}; 
        ///Compare Channel 0 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp0{}; 
        ///Compare Channel 1 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp1{}; 
        ///Compare Channel 2 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp2{}; 
        ///Compare Channel 3 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp3{}; 
    }
    namespace Tcc2Syncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x42002808,0xff80f000,0x00000000,unsigned>;
        ///Swrst Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Ctrlb Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///Status Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Count Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        ///Pattern Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> patt{}; 
        ///Wave Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wave{}; 
        ///Period busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per{}; 
        ///Compare Channel Buffer 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel Buffer 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1{}; 
        ///Compare Channel Buffer 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2{}; 
        ///Compare Channel Buffer 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3{}; 
        ///Pattern Buffer Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pattb{}; 
        ///Wave Buffer Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> waveb{}; 
        ///Period Buffer Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> perb{}; 
        ///Compare Channel Buffer 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccb0{}; 
        ///Compare Channel Buffer 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ccb1{}; 
        ///Compare Channel Buffer 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ccb2{}; 
        ///Compare Channel Buffer 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ccb3{}; 
    }
    namespace Tcc2Wave{    ///<Waveform Control
        using Addr = Register::Address<0x4200283c,0xf0f0f048,0x00000000,unsigned>;
        ///Waveform Generation
        enum class WavegenVal {
            nfrq=0x00000000,     ///<
            mfrq=0x00000001,     ///<
            npwm=0x00000002,     ///<
            dscritical=0x00000004,     ///<
            dsbottom=0x00000005,     ///<
            dsboth=0x00000006,     ///<
            dstop=0x00000007,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dscritical> dscritical{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dsbottom> dsbottom{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dsboth> dsboth{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dstop> dstop{};
        }
        ///Ramp Mode
        enum class RampVal {
            ramp1=0x00000000,     ///<
            ramp2a=0x00000001,     ///<
            ramp2=0x00000002,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RampVal> ramp{}; 
        namespace RampValC{
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp1> ramp1{};
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp2a> ramp2a{};
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp2> ramp2{};
        }
        ///Circular period Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperen{}; 
        ///Circular Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccen0{}; 
        ///Circular Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccen1{}; 
        ///Circular Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccen2{}; 
        ///Circular Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccen3{}; 
        ///Channel 0 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Channel 1 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Channel 2 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Channel 3 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Swap DTI Output Pair 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swap0{}; 
        ///Swap DTI Output Pair 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swap1{}; 
        ///Swap DTI Output Pair 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swap2{}; 
        ///Swap DTI Output Pair 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swap3{}; 
    }
    namespace Tcc2Waveb{    ///<Waveform Control Buffer
        using Addr = Register::Address<0x42002868,0xf0f0f048,0x00000000,unsigned>;
        ///Waveform Generation Buffer
        enum class WavegenbVal {
            nfrq=0x00000000,     ///<
            mfrq=0x00000001,     ///<
            npwm=0x00000002,     ///<
            dscritical=0x00000004,     ///<
            dsbottom=0x00000005,     ///<
            dsboth=0x00000006,     ///<
            dstop=0x00000007,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WavegenbVal> wavegenb{}; 
        namespace WavegenbValC{
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::dscritical> dscritical{};
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::dsbottom> dsbottom{};
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::dsboth> dsboth{};
            constexpr Register::FieldValue<decltype(wavegenb)::Type,WavegenbVal::dstop> dstop{};
        }
        ///Ramp Mode Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rampb{}; 
        ///Circular Period Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperenb{}; 
        ///Circular Channel 0 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccenb0{}; 
        ///Circular Channel 1 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccenb1{}; 
        ///Circular Channel 2 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccenb2{}; 
        ///Circular Channel 3 Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccenb3{}; 
        ///Channel 0 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> polb0{}; 
        ///Channel 1 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> polb1{}; 
        ///Channel 2 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> polb2{}; 
        ///Channel 3 Polarity Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> polb3{}; 
        ///Swap DTI Output Pair 0 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swapb0{}; 
        ///Swap DTI Output Pair 1 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swapb1{}; 
        ///Swap DTI Output Pair 2 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swapb2{}; 
        ///Swap DTI Output Pair 3 Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swapb3{}; 
    }
    namespace Tcc2Wexctrl{    ///<Waveform Extension Configuration
        using Addr = Register::Address<0x42002814,0x0000f0fc,0x00000000,unsigned>;
        ///Output Matrix
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> otmx{}; 
        ///Dead-time Insertion Generator 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dtien0{}; 
        ///Dead-time Insertion Generator 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dtien1{}; 
        ///Dead-time Insertion Generator 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dtien2{}; 
        ///Dead-time Insertion Generator 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtien3{}; 
        ///Dead-time Low Side Outputs Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dtls{}; 
        ///Dead-time High Side Outputs Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dths{}; 
    }
    namespace Tcc2Cc0{    ///<Compare and Capture
        using Addr = Register::Address<0x42002844,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Cc1{    ///<Compare and Capture
        using Addr = Register::Address<0x42002848,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Cc2{    ///<Compare and Capture
        using Addr = Register::Address<0x4200284c,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Cc3{    ///<Compare and Capture
        using Addr = Register::Address<0x42002850,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Ccb0{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002870,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Ccb1{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002874,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Ccb2{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002878,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Ccb3{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4200287c,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Cc0{    ///<Compare and Capture
        using Addr = Register::Address<0x42002844,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Cc1{    ///<Compare and Capture
        using Addr = Register::Address<0x42002848,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Cc2{    ///<Compare and Capture
        using Addr = Register::Address<0x4200284c,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Cc3{    ///<Compare and Capture
        using Addr = Register::Address<0x42002850,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc2Ccb0{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002870,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Ccb1{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002874,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Ccb2{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002878,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace Tcc2Ccb3{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4200287c,0xff000000,0x00000000,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
}
