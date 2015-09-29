#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer Counter Control 0
    namespace TccCc0{    ///<Compare and Capture
        using Addr = Register::Address<0x42002044,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace TccCc1{    ///<Compare and Capture
        using Addr = Register::Address<0x42002048,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace TccCc2{    ///<Compare and Capture
        using Addr = Register::Address<0x4200204c,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace TccCc3{    ///<Compare and Capture
        using Addr = Register::Address<0x42002050,0xff000000,0,unsigned>;
        ///Compare and Capture value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace TccCcb0{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002070,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace TccCcb1{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002074,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace TccCcb2{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x42002078,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace TccCcb3{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4200207c,0xff000000,0,unsigned>;
        ///Compare and Capture buffer value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccb{}; 
    }
    namespace TccCount{    ///<Count
        using Addr = Register::Address<0x42002034,0xff000000,0,unsigned>;
        ///Count Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace TccCtrla{    ///<Control A
        using Addr = Register::Address<0x42002000,0xf0ff009c,0,unsigned>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Enhanced Resolution
        enum class resolutionVal {
            none=0x00000000,     ///<None
            dith4=0x00000001,     ///<None
            dith5=0x00000002,     ///<None
            dith6=0x00000003,     ///<None
        };
        namespace resolutionValC{
            constexpr MPL::Value<resolutionVal,resolutionVal::none> none{};
            constexpr MPL::Value<resolutionVal,resolutionVal::dith4> dith4{};
            constexpr MPL::Value<resolutionVal,resolutionVal::dith5> dith5{};
            constexpr MPL::Value<resolutionVal,resolutionVal::dith6> dith6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,resolutionVal> resolution{}; 
        ///Prescaler
        enum class prescalerVal {
            div1=0x00000000,     ///<None
            div2=0x00000001,     ///<None
            div4=0x00000002,     ///<None
            div8=0x00000003,     ///<None
            div16=0x00000004,     ///<None
            div64=0x00000005,     ///<None
            div256=0x00000006,     ///<None
            div1024=0x00000007,     ///<None
        };
        namespace prescalerValC{
            constexpr MPL::Value<prescalerVal,prescalerVal::div1> div1{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div2> div2{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div4> div4{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div8> div8{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div16> div16{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div64> div64{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div256> div256{};
            constexpr MPL::Value<prescalerVal,prescalerVal::div1024> div1024{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,prescalerVal> prescaler{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Prescaler and Counter Synchronization Selection
        enum class prescsyncVal {
            gclk=0x00000000,     ///<None
            presc=0x00000001,     ///<None
            resync=0x00000002,     ///<None
        };
        namespace prescsyncValC{
            constexpr MPL::Value<prescsyncVal,prescsyncVal::gclk> gclk{};
            constexpr MPL::Value<prescsyncVal,prescsyncVal::presc> presc{};
            constexpr MPL::Value<prescsyncVal,prescsyncVal::resync> resync{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,prescsyncVal> prescsync{}; 
        ///Auto Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> alock{}; 
        ///Master Synchronization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msync{}; 
        ///Capture Channel 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cpten1{}; 
        ///Capture Channel 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cpten2{}; 
        ///Capture Channel 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cpten3{}; 
    }
    namespace TccCtrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42002004,0xffffff00,0,unsigned char>;
        ///Counter Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Ramp Index Command
        enum class idxcmdVal {
            disable=0x00000000,     ///<None
            set=0x00000001,     ///<None
            clear=0x00000002,     ///<None
            hold=0x00000003,     ///<None
        };
        namespace idxcmdValC{
            constexpr MPL::Value<idxcmdVal,idxcmdVal::disable> disable{};
            constexpr MPL::Value<idxcmdVal,idxcmdVal::set> set{};
            constexpr MPL::Value<idxcmdVal,idxcmdVal::clear> clear{};
            constexpr MPL::Value<idxcmdVal,idxcmdVal::hold> hold{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,idxcmdVal> idxcmd{}; 
        ///TCC Command
        enum class cmdVal {
            none=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            stop=0x00000002,     ///<None
            update=0x00000003,     ///<None
            readsync=0x00000004,     ///<None
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::none> none{};
            constexpr MPL::Value<cmdVal,cmdVal::retrigger> retrigger{};
            constexpr MPL::Value<cmdVal,cmdVal::stop> stop{};
            constexpr MPL::Value<cmdVal,cmdVal::update> update{};
            constexpr MPL::Value<cmdVal,cmdVal::readsync> readsync{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,cmdVal> cmd{}; 
    }
    namespace TccCtrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42002005,0xffffff00,0,unsigned char>;
        ///Counter Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Ramp Index Command
        enum class idxcmdVal {
            disable=0x00000000,     ///<None
            set=0x00000001,     ///<None
            clear=0x00000002,     ///<None
            hold=0x00000003,     ///<None
        };
        namespace idxcmdValC{
            constexpr MPL::Value<idxcmdVal,idxcmdVal::disable> disable{};
            constexpr MPL::Value<idxcmdVal,idxcmdVal::set> set{};
            constexpr MPL::Value<idxcmdVal,idxcmdVal::clear> clear{};
            constexpr MPL::Value<idxcmdVal,idxcmdVal::hold> hold{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,idxcmdVal> idxcmd{}; 
        ///TCC Command
        enum class cmdVal {
            none=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            stop=0x00000002,     ///<None
            update=0x00000003,     ///<None
            readsync=0x00000004,     ///<None
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::none> none{};
            constexpr MPL::Value<cmdVal,cmdVal::retrigger> retrigger{};
            constexpr MPL::Value<cmdVal,cmdVal::stop> stop{};
            constexpr MPL::Value<cmdVal,cmdVal::update> update{};
            constexpr MPL::Value<cmdVal,cmdVal::readsync> readsync{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,cmdVal> cmd{}; 
    }
    namespace TccDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4200201e,0xfffffffa,0,unsigned char>;
        ///Debug Running Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
        ///Fault Detection on Debug Break Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fddbd{}; 
    }
    namespace TccDrvctrl{    ///<Driver Configuration
        using Addr = Register::Address<0x42002018,0x00000000,0,unsigned>;
        ///Non-Recoverable State 0 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nre0{}; 
        ///Non-Recoverable State 1 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nre1{}; 
        ///Non-Recoverable State 2 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nre2{}; 
        ///Non-Recoverable State 3 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nre3{}; 
        ///Non-Recoverable State 4 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nre4{}; 
        ///Non-Recoverable State 5 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nre5{}; 
        ///Non-Recoverable State 6 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nre6{}; 
        ///Non-Recoverable State 7 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nre7{}; 
        ///Non-Recoverable State 0 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nrv0{}; 
        ///Non-Recoverable State 1 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrv1{}; 
        ///Non-Recoverable State 2 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrv2{}; 
        ///Non-Recoverable State 3 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nrv3{}; 
        ///Non-Recoverable State 4 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nrv4{}; 
        ///Non-Recoverable State 5 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nrv5{}; 
        ///Non-Recoverable State 6 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nrv6{}; 
        ///Non-Recoverable State 7 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nrv7{}; 
        ///Output Waveform 0 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform 1 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inven1{}; 
        ///Output Waveform 2 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> inven2{}; 
        ///Output Waveform 3 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inven3{}; 
        ///Output Waveform 4 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inven4{}; 
        ///Output Waveform 5 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> inven5{}; 
        ///Output Waveform 6 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> inven6{}; 
        ///Output Waveform 7 Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> inven7{}; 
        ///Non-Recoverable Fault Input 0 Filter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval0{}; 
        ///Non-Recoverable Fault Input 1 Filter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> filterval1{}; 
    }
    namespace TccEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42002020,0xf0f00800,0,unsigned>;
        ///Timer/counter Input Event0 Action
        enum class evact0Val {
            off=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            countev=0x00000002,     ///<None
            start=0x00000003,     ///<None
            inc=0x00000004,     ///<None
            count=0x00000005,     ///<None
            fault=0x00000007,     ///<None
        };
        namespace evact0ValC{
            constexpr MPL::Value<evact0Val,evact0Val::off> off{};
            constexpr MPL::Value<evact0Val,evact0Val::retrigger> retrigger{};
            constexpr MPL::Value<evact0Val,evact0Val::countev> countev{};
            constexpr MPL::Value<evact0Val,evact0Val::start> start{};
            constexpr MPL::Value<evact0Val,evact0Val::inc> inc{};
            constexpr MPL::Value<evact0Val,evact0Val::count> count{};
            constexpr MPL::Value<evact0Val,evact0Val::fault> fault{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,evact0Val> evact0{}; 
        ///Timer/counter Input Event1 Action
        enum class evact1Val {
            off=0x00000000,     ///<None
            retrigger=0x00000001,     ///<None
            dir=0x00000002,     ///<None
            stop=0x00000003,     ///<None
            dec=0x00000004,     ///<None
            ppw=0x00000005,     ///<None
            pwp=0x00000006,     ///<None
            fault=0x00000007,     ///<None
        };
        namespace evact1ValC{
            constexpr MPL::Value<evact1Val,evact1Val::off> off{};
            constexpr MPL::Value<evact1Val,evact1Val::retrigger> retrigger{};
            constexpr MPL::Value<evact1Val,evact1Val::dir> dir{};
            constexpr MPL::Value<evact1Val,evact1Val::stop> stop{};
            constexpr MPL::Value<evact1Val,evact1Val::dec> dec{};
            constexpr MPL::Value<evact1Val,evact1Val::ppw> ppw{};
            constexpr MPL::Value<evact1Val,evact1Val::pwp> pwp{};
            constexpr MPL::Value<evact1Val,evact1Val::fault> fault{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,evact1Val> evact1{}; 
        ///Timer/counter Output Event Mode
        enum class cntselVal {
            start=0x00000000,     ///<None
            end=0x00000001,     ///<None
            between=0x00000002,     ///<None
            boundary=0x00000003,     ///<None
        };
        namespace cntselValC{
            constexpr MPL::Value<cntselVal,cntselVal::start> start{};
            constexpr MPL::Value<cntselVal,cntselVal::end> end{};
            constexpr MPL::Value<cntselVal,cntselVal::between> between{};
            constexpr MPL::Value<cntselVal,cntselVal::boundary> boundary{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,cntselVal> cntsel{}; 
        ///Overflow/Underflow Output Event Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Retrigger Output Event Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> trgeo{}; 
        ///Timer/counter Output Event Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cnteo{}; 
        ///Inverted Event 0 Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcinv0{}; 
        ///Inverted Event 1 Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcinv1{}; 
        ///Timer/counter Event 0 Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tcei0{}; 
        ///Timer/counter Event 1 Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcei1{}; 
        ///Match or Capture Channel 0 Event Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcei0{}; 
        ///Match or Capture Channel 1 Event Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mcei1{}; 
        ///Match or Capture Channel 2 Event Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcei2{}; 
        ///Match or Capture Channel 3 Event Input Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mcei3{}; 
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mceo1{}; 
        ///Match or Capture Channel 2 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mceo2{}; 
        ///Match or Capture Channel 3 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mceo3{}; 
    }
    namespace TccFctrla{    ///<Recoverable FaultA Configuration
        using Addr = Register::Address<0x4200200c,0xf0008004,0,unsigned>;
        ///FaultA Source
        enum class srcVal {
            disable=0x00000000,     ///<None
            enable=0x00000001,     ///<None
            invert=0x00000002,     ///<None
            altfault=0x00000003,     ///<None
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::disable> disable{};
            constexpr MPL::Value<srcVal,srcVal::enable> enable{};
            constexpr MPL::Value<srcVal,srcVal::invert> invert{};
            constexpr MPL::Value<srcVal,srcVal::altfault> altfault{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
        ///FaultA Keeper
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        ///FaultA Qualification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        ///FaultA Blanking Mode
        enum class blankVal {
            disable=0x00000000,     ///<None
            rise=0x00000001,     ///<None
            fall=0x00000002,     ///<None
            both=0x00000003,     ///<None
        };
        namespace blankValC{
            constexpr MPL::Value<blankVal,blankVal::disable> disable{};
            constexpr MPL::Value<blankVal,blankVal::rise> rise{};
            constexpr MPL::Value<blankVal,blankVal::fall> fall{};
            constexpr MPL::Value<blankVal,blankVal::both> both{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,blankVal> blank{}; 
        ///FaultA Restart
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        ///FaultA Halt Mode
        enum class haltVal {
            disable=0x00000000,     ///<None
            hw=0x00000001,     ///<None
            sw=0x00000002,     ///<None
            nr=0x00000003,     ///<None
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::disable> disable{};
            constexpr MPL::Value<haltVal,haltVal::hw> hw{};
            constexpr MPL::Value<haltVal,haltVal::sw> sw{};
            constexpr MPL::Value<haltVal,haltVal::nr> nr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,haltVal> halt{}; 
        ///FaultA Capture Channel
        enum class chselVal {
            cc0=0x00000000,     ///<None
            cc1=0x00000001,     ///<None
            cc2=0x00000002,     ///<None
            cc3=0x00000003,     ///<None
        };
        namespace chselValC{
            constexpr MPL::Value<chselVal,chselVal::cc0> cc0{};
            constexpr MPL::Value<chselVal,chselVal::cc1> cc1{};
            constexpr MPL::Value<chselVal,chselVal::cc2> cc2{};
            constexpr MPL::Value<chselVal,chselVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,chselVal> chsel{}; 
        ///FaultA Capture Action
        enum class captureVal {
            disable=0x00000000,     ///<None
            capt=0x00000001,     ///<None
            captmin=0x00000002,     ///<None
            captmax=0x00000003,     ///<None
            locmin=0x00000004,     ///<None
            locmax=0x00000005,     ///<None
            deriv0=0x00000006,     ///<None
        };
        namespace captureValC{
            constexpr MPL::Value<captureVal,captureVal::disable> disable{};
            constexpr MPL::Value<captureVal,captureVal::capt> capt{};
            constexpr MPL::Value<captureVal,captureVal::captmin> captmin{};
            constexpr MPL::Value<captureVal,captureVal::captmax> captmax{};
            constexpr MPL::Value<captureVal,captureVal::locmin> locmin{};
            constexpr MPL::Value<captureVal,captureVal::locmax> locmax{};
            constexpr MPL::Value<captureVal,captureVal::deriv0> deriv0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,captureVal> capture{}; 
        ///FaultA Blanking Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        ///FaultA Filter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
    }
    namespace TccFctrlb{    ///<Recoverable FaultB Configuration
        using Addr = Register::Address<0x42002010,0xf0008004,0,unsigned>;
        ///FaultB Source
        enum class srcVal {
            disable=0x00000000,     ///<None
            enable=0x00000001,     ///<None
            invert=0x00000002,     ///<None
            altfault=0x00000003,     ///<None
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::disable> disable{};
            constexpr MPL::Value<srcVal,srcVal::enable> enable{};
            constexpr MPL::Value<srcVal,srcVal::invert> invert{};
            constexpr MPL::Value<srcVal,srcVal::altfault> altfault{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,srcVal> src{}; 
        ///FaultB Keeper
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        ///FaultB Qualification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        ///FaultB Blanking Mode
        enum class blankVal {
            disable=0x00000000,     ///<None
            rise=0x00000001,     ///<None
            fall=0x00000002,     ///<None
            both=0x00000003,     ///<None
        };
        namespace blankValC{
            constexpr MPL::Value<blankVal,blankVal::disable> disable{};
            constexpr MPL::Value<blankVal,blankVal::rise> rise{};
            constexpr MPL::Value<blankVal,blankVal::fall> fall{};
            constexpr MPL::Value<blankVal,blankVal::both> both{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,blankVal> blank{}; 
        ///FaultB Restart
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        ///FaultB Halt Mode
        enum class haltVal {
            disable=0x00000000,     ///<None
            hw=0x00000001,     ///<None
            sw=0x00000002,     ///<None
            nr=0x00000003,     ///<None
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::disable> disable{};
            constexpr MPL::Value<haltVal,haltVal::hw> hw{};
            constexpr MPL::Value<haltVal,haltVal::sw> sw{};
            constexpr MPL::Value<haltVal,haltVal::nr> nr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,haltVal> halt{}; 
        ///FaultB Capture Channel
        enum class chselVal {
            cc0=0x00000000,     ///<None
            cc1=0x00000001,     ///<None
            cc2=0x00000002,     ///<None
            cc3=0x00000003,     ///<None
        };
        namespace chselValC{
            constexpr MPL::Value<chselVal,chselVal::cc0> cc0{};
            constexpr MPL::Value<chselVal,chselVal::cc1> cc1{};
            constexpr MPL::Value<chselVal,chselVal::cc2> cc2{};
            constexpr MPL::Value<chselVal,chselVal::cc3> cc3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,chselVal> chsel{}; 
        ///FaultB Capture Action
        enum class captureVal {
            disable=0x00000000,     ///<None
            capt=0x00000001,     ///<None
            captmin=0x00000002,     ///<None
            captmax=0x00000003,     ///<None
            locmin=0x00000004,     ///<None
            locmax=0x00000005,     ///<None
            deriv0=0x00000006,     ///<None
        };
        namespace captureValC{
            constexpr MPL::Value<captureVal,captureVal::disable> disable{};
            constexpr MPL::Value<captureVal,captureVal::capt> capt{};
            constexpr MPL::Value<captureVal,captureVal::captmin> captmin{};
            constexpr MPL::Value<captureVal,captureVal::captmax> captmax{};
            constexpr MPL::Value<captureVal,captureVal::locmin> locmin{};
            constexpr MPL::Value<captureVal,captureVal::locmax> locmax{};
            constexpr MPL::Value<captureVal,captureVal::deriv0> deriv0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,captureVal> capture{}; 
        ///FaultB Blanking Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        ///FaultB Filter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
    }
    namespace TccIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002024,0xfff007f0,0,unsigned>;
        ///Overflow Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-recoverable Debug Fault Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable FaultA Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
    }
    namespace TccIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002028,0xfff007f0,0,unsigned>;
        ///Overflow Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Debug Fault Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable FaultA Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 Interrupt Enabl
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
    }
    namespace TccIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4200202c,0xfff007f0,0,unsigned>;
        ///Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Debug Fault
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable FaultA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
    }
    namespace TccPatt{    ///<Pattern
        using Addr = Register::Address<0x42002038,0xffff0000,0,unsigned>;
        ///Pattern Generator 0 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pge0{}; 
        ///Pattern Generator 1 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pge1{}; 
        ///Pattern Generator 2 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pge2{}; 
        ///Pattern Generator 3 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pge3{}; 
        ///Pattern Generator 4 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pge4{}; 
        ///Pattern Generator 5 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pge5{}; 
        ///Pattern Generator 6 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pge6{}; 
        ///Pattern Generator 7 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pge7{}; 
        ///Pattern Generator 0 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgv0{}; 
        ///Pattern Generator 1 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgv1{}; 
        ///Pattern Generator 2 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgv2{}; 
        ///Pattern Generator 3 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgv3{}; 
        ///Pattern Generator 4 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgv4{}; 
        ///Pattern Generator 5 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgv5{}; 
        ///Pattern Generator 6 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgv6{}; 
        ///Pattern Generator 7 Output Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgv7{}; 
    }
    namespace TccPattb{    ///<Pattern Buffer
        using Addr = Register::Address<0x42002064,0xffff0000,0,unsigned>;
        ///Pattern Generator 0 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pgeb0{}; 
        ///Pattern Generator 1 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pgeb1{}; 
        ///Pattern Generator 2 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgeb2{}; 
        ///Pattern Generator 3 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pgeb3{}; 
        ///Pattern Generator 4 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pgeb4{}; 
        ///Pattern Generator 5 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgeb5{}; 
        ///Pattern Generator 6 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgeb6{}; 
        ///Pattern Generator 7 Output Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgeb7{}; 
        ///Pattern Generator 0 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgvb0{}; 
        ///Pattern Generator 1 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgvb1{}; 
        ///Pattern Generator 2 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgvb2{}; 
        ///Pattern Generator 3 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgvb3{}; 
        ///Pattern Generator 4 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgvb4{}; 
        ///Pattern Generator 5 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgvb5{}; 
        ///Pattern Generator 6 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgvb6{}; 
        ///Pattern Generator 7 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgvb7{}; 
    }
    namespace TccPer{    ///<Period
        using Addr = Register::Address<0x42002040,0xff000000,0,unsigned>;
        ///Period Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace TccPerb{    ///<Period Buffer
        using Addr = Register::Address<0x4200206c,0xff000000,0,unsigned>;
        ///Period Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> perb{}; 
    }
    namespace TccStatus{    ///<Status
        using Addr = Register::Address<0x42002030,0xf0f00014,0,unsigned>;
        ///Stop
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Ramp
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idx{}; 
        ///Non-Recoverable Debug Fault State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Pattern Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pattbv{}; 
        ///Wave Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wavebv{}; 
        ///Period Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> perbv{}; 
        ///Recoverable FaultA Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> faultain{}; 
        ///Recoverable FaultB Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> faultbin{}; 
        ///Non-Recoverable Fault0 Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fault0in{}; 
        ///Non-Recoverable Fault1 Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fault1in{}; 
        ///Recoverable FaultA State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable FaultB State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Compare Channel 0 Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ccbv0{}; 
        ///Compare Channel 1 Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ccbv1{}; 
        ///Compare Channel 2 Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ccbv2{}; 
        ///Compare Channel 3 Buffer Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccbv3{}; 
        ///Compare Channel 0 Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare Channel 1 Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Compare Channel 2 Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Compare Channel 3 Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cmp3{}; 
    }
    namespace TccSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x42002008,0xff80f000,0,unsigned>;
        ///Swrst Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Ctrlb Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///Status Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Count Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        ///Pattern Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> patt{}; 
        ///Wave Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wave{}; 
        ///Period busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per{}; 
        ///Compare Channel Buffer 0 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel Buffer 1 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1{}; 
        ///Compare Channel Buffer 2 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2{}; 
        ///Compare Channel Buffer 3 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3{}; 
        ///Pattern Buffer Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pattb{}; 
        ///Wave Buffer Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> waveb{}; 
        ///Period Buffer Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> perb{}; 
        ///Compare Channel Buffer 0 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccb0{}; 
        ///Compare Channel Buffer 1 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ccb1{}; 
        ///Compare Channel Buffer 2 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ccb2{}; 
        ///Compare Channel Buffer 3 Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ccb3{}; 
    }
    namespace TccWave{    ///<Waveform Control
        using Addr = Register::Address<0x4200203c,0xf0f0f048,0,unsigned>;
        ///Waveform Generation
        enum class wavegenVal {
            nfrq=0x00000000,     ///<None
            mfrq=0x00000001,     ///<None
            npwm=0x00000002,     ///<None
            dscritical=0x00000004,     ///<None
            dsbottom=0x00000005,     ///<None
            dsboth=0x00000006,     ///<None
            dstop=0x00000007,     ///<None
        };
        namespace wavegenValC{
            constexpr MPL::Value<wavegenVal,wavegenVal::nfrq> nfrq{};
            constexpr MPL::Value<wavegenVal,wavegenVal::mfrq> mfrq{};
            constexpr MPL::Value<wavegenVal,wavegenVal::npwm> npwm{};
            constexpr MPL::Value<wavegenVal,wavegenVal::dscritical> dscritical{};
            constexpr MPL::Value<wavegenVal,wavegenVal::dsbottom> dsbottom{};
            constexpr MPL::Value<wavegenVal,wavegenVal::dsboth> dsboth{};
            constexpr MPL::Value<wavegenVal,wavegenVal::dstop> dstop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,wavegenVal> wavegen{}; 
        ///Ramp Mode
        enum class rampVal {
            ramp1=0x00000000,     ///<None
            ramp2a=0x00000001,     ///<None
            ramp2=0x00000002,     ///<None
        };
        namespace rampValC{
            constexpr MPL::Value<rampVal,rampVal::ramp1> ramp1{};
            constexpr MPL::Value<rampVal,rampVal::ramp2a> ramp2a{};
            constexpr MPL::Value<rampVal,rampVal::ramp2> ramp2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,rampVal> ramp{}; 
        ///Circular period Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperen{}; 
        ///Circular Channel 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccen0{}; 
        ///Circular Channel 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccen1{}; 
        ///Circular Channel 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccen2{}; 
        ///Circular Channel 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccen3{}; 
        ///Channel 0 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Channel 1 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Channel 2 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Channel 3 Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Swap DTI Output Pair 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swap0{}; 
        ///Swap DTI Output Pair 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swap1{}; 
        ///Swap DTI Output Pair 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swap2{}; 
        ///Swap DTI Output Pair 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swap3{}; 
    }
    namespace TccWaveb{    ///<Waveform Control Buffer
        using Addr = Register::Address<0x42002068,0xf0f0f048,0,unsigned>;
        ///Waveform Generation Buffer
        enum class wavegenbVal {
            nfrq=0x00000000,     ///<None
            mfrq=0x00000001,     ///<None
            npwm=0x00000002,     ///<None
            dscritical=0x00000004,     ///<None
            dsbottom=0x00000005,     ///<None
            dsboth=0x00000006,     ///<None
            dstop=0x00000007,     ///<None
        };
        namespace wavegenbValC{
            constexpr MPL::Value<wavegenbVal,wavegenbVal::nfrq> nfrq{};
            constexpr MPL::Value<wavegenbVal,wavegenbVal::mfrq> mfrq{};
            constexpr MPL::Value<wavegenbVal,wavegenbVal::npwm> npwm{};
            constexpr MPL::Value<wavegenbVal,wavegenbVal::dscritical> dscritical{};
            constexpr MPL::Value<wavegenbVal,wavegenbVal::dsbottom> dsbottom{};
            constexpr MPL::Value<wavegenbVal,wavegenbVal::dsboth> dsboth{};
            constexpr MPL::Value<wavegenbVal,wavegenbVal::dstop> dstop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,wavegenbVal> wavegenb{}; 
        ///Ramp Mode Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rampb{}; 
        ///Circular Period Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperenb{}; 
        ///Circular Channel 0 Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccenb0{}; 
        ///Circular Channel 1 Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccenb1{}; 
        ///Circular Channel 2 Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccenb2{}; 
        ///Circular Channel 3 Enable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccenb3{}; 
        ///Channel 0 Polarity Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> polb0{}; 
        ///Channel 1 Polarity Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> polb1{}; 
        ///Channel 2 Polarity Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> polb2{}; 
        ///Channel 3 Polarity Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> polb3{}; 
        ///Swap DTI Output Pair 0 Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swapb0{}; 
        ///Swap DTI Output Pair 1 Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swapb1{}; 
        ///Swap DTI Output Pair 2 Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swapb2{}; 
        ///Swap DTI Output Pair 3 Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swapb3{}; 
    }
    namespace TccWexctrl{    ///<Waveform Extension Configuration
        using Addr = Register::Address<0x42002014,0x0000f0fc,0,unsigned>;
        ///Output Matrix
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> otmx{}; 
        ///Dead-time Insertion Generator 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dtien0{}; 
        ///Dead-time Insertion Generator 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dtien1{}; 
        ///Dead-time Insertion Generator 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dtien2{}; 
        ///Dead-time Insertion Generator 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtien3{}; 
        ///Dead-time Low Side Outputs Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dtls{}; 
        ///Dead-time High Side Outputs Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dths{}; 
    }
}
