#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Configuration
        using Addr = Register::Address<0x40042000,0x1cffff1e,0,unsigned>;
        ///Write Update Status Flag. 
        enum class UpdstsfVal {
            notSet=0x00000000,     ///<An internal pulse counter register update is not in progress.
            set=0x00000001,     ///<An internal pulse counter register update is in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UpdstsfVal> updstsf{}; 
        namespace UpdstsfValC{
            constexpr Register::FieldValue<decltype(updstsf)::Type,UpdstsfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(updstsf)::Type,UpdstsfVal::set> set{};
        }
        }
        ///Debug Signal Select. 
        enum class DbgselVal {
            none=0x00000000,     ///<No debug signals output.
            lcc0Lcc1=0x00000001,     ///<(LC Mode) DBG0 = CMP0OUT,  DBG1 = CMP1OUT.
            lcc0Int0=0x00000002,     ///<(LC Mode) DBG0 = CMP0OUT,  DBG1 = INTEG0.
            lcc1Int1=0x00000003,     ///<(LC Mode) DBG0 = CMP1OUT,  DBG1 = INTEG1.
            int0Int1=0x00000004,     ///<(Any Mode) DBG0 = INTEG0  DBG1 = INTEG1.
            cmp0Cmp1=0x00000005,     ///<(Switch Mode) DBG0 = CMP0OUT,  DBG1 = CMP1OUT.
            cmp0Int0=0x00000006,     ///<(Switch Mode) DBG0 = CMP0OUT,  DBG1 = INTEG0.
            cmp1Int1=0x00000007,     ///<(Switch Mode) DBG0= CMP1OUT,  DBG1 = INTEG1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,DbgselVal> dbgsel{}; 
        namespace DbgselValC{
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::none> none{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::lcc0Lcc1> lcc0Lcc1{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::lcc0Int0> lcc0Int0{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::lcc1Int1> lcc1Int1{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::int0Int1> int0Int1{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::cmp0Cmp1> cmp0Cmp1{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::cmp0Int0> cmp0Int0{};
            constexpr Register::FieldValue<decltype(dbgsel)::Type,DbgselVal::cmp1Int1> cmp1Int1{};
        }
        }
        ///Flutter Quadrature-to-Dual Switch Enable. 
        enum class FlqdenVal {
            disabled=0x00000000,     ///<The pulse counter remains in quadrature mode during a flutter event.
            enabled=0x00000001,     ///<The pulse counter switches from quadrature mode to dual mode during a flutter event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FlqdenVal> flqden{}; 
        namespace FlqdenValC{
            constexpr Register::FieldValue<decltype(flqden)::Type,FlqdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flqden)::Type,FlqdenVal::enabled> enabled{};
        }
        }
        ///Flutter Stop Enable. 
        enum class FlstpenVal {
            disabled=0x00000000,     ///<The pulse counter continues operating during a flutter event.
            enabled=0x00000001,     ///<The 24-bit counters stop counting during a flutter event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FlstpenVal> flstpen{}; 
        namespace FlstpenValC{
            constexpr Register::FieldValue<decltype(flstpen)::Type,FlstpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flstpen)::Type,FlstpenVal::enabled> enabled{};
        }
        }
        ///Topology Mode. 
        enum class TopmdVal {
            switch_=0x00000000,     ///<Select the switch closure topology.
            lc=0x00000001,     ///<Select the LC resonant topology.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,TopmdVal> topmd{}; 
        namespace TopmdValC{
            constexpr Register::FieldValue<decltype(topmd)::Type,TopmdVal::switch_> switch_{};
            constexpr Register::FieldValue<decltype(topmd)::Type,TopmdVal::lc> lc{};
        }
        }
        ///Pulse Counter Mode. 
        enum class PcmdVal {
            disabled=0x00000000,     ///<Disable the pulse counter.
            single=0x00000001,     ///<Select single channel mode.
            dual=0x00000002,     ///<Select dual channel mode.
            quadrature=0x00000003,     ///<Select quadrature mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,PcmdVal> pcmd{}; 
        namespace PcmdValC{
            constexpr Register::FieldValue<decltype(pcmd)::Type,PcmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pcmd)::Type,PcmdVal::single> single{};
            constexpr Register::FieldValue<decltype(pcmd)::Type,PcmdVal::dual> dual{};
            constexpr Register::FieldValue<decltype(pcmd)::Type,PcmdVal::quadrature> quadrature{};
        }
        }
    }
    namespace Nonecontrol{    ///<Control Register
        using Addr = Register::Address<0x40042010,0x00007fff,0,unsigned>;
        ///Comparator Low Threshold. 
        enum class CmplthVal {
            v32Percent=0x00000000,     ///<Set the digital comparator low threshold to 32% of VIO.
            v36Percent=0x00000001,     ///<Set the digital comparator low threshold to 36% of VIO.
            v40Percent=0x00000002,     ///<Set the digital comparator low threshold to 40% of VIO.
            v44Percent=0x00000003,     ///<Set the digital comparator low threshold to 44% of VIO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,CmplthVal> cmplth{}; 
        namespace CmplthValC{
            constexpr Register::FieldValue<decltype(cmplth)::Type,CmplthVal::v32Percent> v32Percent{};
            constexpr Register::FieldValue<decltype(cmplth)::Type,CmplthVal::v36Percent> v36Percent{};
            constexpr Register::FieldValue<decltype(cmplth)::Type,CmplthVal::v40Percent> v40Percent{};
            constexpr Register::FieldValue<decltype(cmplth)::Type,CmplthVal::v44Percent> v44Percent{};
        }
        }
        ///Comparator High Threshold. 
        enum class CmphthVal {
            v48Percent=0x00000000,     ///<Set the digital comparator high threshold to 48% of VIO.
            v52Percent=0x00000001,     ///<Set the digital comparator high threshold to 52% of VIO.
            v56Percent=0x00000002,     ///<Set the digital comparator high threshold to 56% of VIO.
            v60Percent=0x00000003,     ///<Set the digital comparator high threshold to 60% of VIO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,CmphthVal> cmphth{}; 
        namespace CmphthValC{
            constexpr Register::FieldValue<decltype(cmphth)::Type,CmphthVal::v48Percent> v48Percent{};
            constexpr Register::FieldValue<decltype(cmphth)::Type,CmphthVal::v52Percent> v52Percent{};
            constexpr Register::FieldValue<decltype(cmphth)::Type,CmphthVal::v56Percent> v56Percent{};
            constexpr Register::FieldValue<decltype(cmphth)::Type,CmphthVal::v60Percent> v60Percent{};
        }
        }
        ///Automatic Calibration Mode. 
        enum class CalmdVal {
            untilPass=0x00000000,     ///<Continue to calibrate until a passing condition occurs.
            untilFail=0x00000001,     ///<Continue to calibrate until a failing condition occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CalmdVal> calmd{}; 
        namespace CalmdValC{
            constexpr Register::FieldValue<decltype(calmd)::Type,CalmdVal::untilPass> untilPass{};
            constexpr Register::FieldValue<decltype(calmd)::Type,CalmdVal::untilFail> untilFail{};
        }
        }
        ///Automatic Calibration Pull-up Mode. 
        enum class CalpumdVal {
            full=0x00000000,     ///<Use full pull-up mode.
            small=0x00000001,     ///<Use small pull-up mode.
            medium=0x00000002,     ///<Use medium pull-up mode.
            large=0x00000003,     ///<Use large pull-up mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,CalpumdVal> calpumd{}; 
        namespace CalpumdValC{
            constexpr Register::FieldValue<decltype(calpumd)::Type,CalpumdVal::full> full{};
            constexpr Register::FieldValue<decltype(calpumd)::Type,CalpumdVal::small> small{};
            constexpr Register::FieldValue<decltype(calpumd)::Type,CalpumdVal::medium> medium{};
            constexpr Register::FieldValue<decltype(calpumd)::Type,CalpumdVal::large> large{};
        }
        }
        ///Force Continuous Pull-up Enable. 
        enum class FpupenVal {
            disabled=0x00000000,     ///<Pull-ups are enabled automatically by hardware.
            enabled=0x00000001,     ///<Always enable the pull-ups.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,FpupenVal> fpupen{}; 
        namespace FpupenValC{
            constexpr Register::FieldValue<decltype(fpupen)::Type,FpupenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fpupen)::Type,FpupenVal::enabled> enabled{};
        }
        }
        ///Force Ground Input Enable. 
        enum class FpdnenVal {
            disabled=0x00000000,     ///<Disable input grounding.
            enabled=0x00000001,     ///<Enable input grounding. The IN0 and IN1 inputs are grounded.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,FpdnenVal> fpdnen{}; 
        namespace FpdnenValC{
            constexpr Register::FieldValue<decltype(fpdnen)::Type,FpdnenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fpdnen)::Type,FpdnenVal::enabled> enabled{};
        }
        }
        ///Pull-up Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> puval{}; 
        ///Automatic Calibration Input Select. 
        enum class CalselVal {
            in0=0x00000000,     ///<Calibrate the IN0 input.
            in1=0x00000001,     ///<Calibrate the IN1 input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CalselVal> calsel{}; 
        namespace CalselValC{
            constexpr Register::FieldValue<decltype(calsel)::Type,CalselVal::in0> in0{};
            constexpr Register::FieldValue<decltype(calsel)::Type,CalselVal::in1> in1{};
        }
        }
        ///Calibration Result Flag. 
        enum class CalrfVal {
            notSet=0x00000000,     ///<The automatic calibration operation did not succeed.
            set=0x00000001,     ///<The automatic calibration operation succeeded.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,CalrfVal> calrf{}; 
        namespace CalrfValC{
            constexpr Register::FieldValue<decltype(calrf)::Type,CalrfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(calrf)::Type,CalrfVal::set> set{};
        }
        }
        ///Calibration Busy Flag. 
        enum class CalbusyfVal {
            notSet=0x00000000,     ///<A calibration operation is not in progress.
            set=0x00000001,     ///<A calibration operation is in progress. Hardware will clear this flag when the operation completes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,CalbusyfVal> calbusyf{}; 
        namespace CalbusyfValC{
            constexpr Register::FieldValue<decltype(calbusyf)::Type,CalbusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(calbusyf)::Type,CalbusyfVal::set> set{};
        }
        }
    }
    namespace Nonelcconfig{    ///<LC Configuration
        using Addr = Register::Address<0x40042020,0x80000000,0,unsigned>;
        ///LC Pulse Extension Mode. 
        enum class PemdVal {
            low=0x00000000,     ///<Stretch the LC comparator output low pulses by approximately 20 ns.
            high=0x00000001,     ///<Stretch the LC comparator output high pulses by approximately 20 ns.
            none=0x00000002,     ///<No pulse extension.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PemdVal> pemd{}; 
        namespace PemdValC{
            constexpr Register::FieldValue<decltype(pemd)::Type,PemdVal::low> low{};
            constexpr Register::FieldValue<decltype(pemd)::Type,PemdVal::high> high{};
            constexpr Register::FieldValue<decltype(pemd)::Type,PemdVal::none> none{};
        }
        }
        ///LC Comparator 0 Fine Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cmp0fth{}; 
        ///LC Comparator 0 Coarse Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,5),Register::ReadWriteAccess,unsigned> cmp0cth{}; 
        ///LC Comparator 0 Threshold Range. 
        enum class Cmp0thrVal {
            low=0x00000000,     ///<Set the comparator 0 threshold to the low range (0 V to VIO/8 in 48 steps).
            full=0x00000001,     ///<Set the comparator 0 threshold to a full range (0 V to VIO in 64 steps).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Cmp0thrVal> cmp0thr{}; 
        namespace Cmp0thrValC{
            constexpr Register::FieldValue<decltype(cmp0thr)::Type,Cmp0thrVal::low> low{};
            constexpr Register::FieldValue<decltype(cmp0thr)::Type,Cmp0thrVal::full> full{};
        }
        }
        ///LC Comparator 1 Fine Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cmp1fth{}; 
        ///LC Comparator 1 Coarse Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,15),Register::ReadWriteAccess,unsigned> cmp1cth{}; 
        ///LC Comparator 1 Threshold Range. 
        enum class Cmp1thrVal {
            low=0x00000000,     ///<Set the comparator 1 threshold to the low range (0 V to VIO/8 in 48 steps).
            full=0x00000001,     ///<Set the comparator 1 threshold to a full range (0 V to VIO in 64 steps).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Cmp1thrVal> cmp1thr{}; 
        namespace Cmp1thrValC{
            constexpr Register::FieldValue<decltype(cmp1thr)::Type,Cmp1thrVal::low> low{};
            constexpr Register::FieldValue<decltype(cmp1thr)::Type,Cmp1thrVal::full> full{};
        }
        }
        ///LC Comparator Low-side Hysteresis. 
        enum class CmplhysVal {
            v0Mv=0x00000000,     ///<Set both LC comparators to use 0 mV low-side hysteresis.
            v5Mv=0x00000001,     ///<Set both LC comparators to use 5 mV low-side hysteresis.
            v10Mv=0x00000002,     ///<Set both LC comparators to use 10 mV low-side hysteresis.
            v20Mv=0x00000003,     ///<Set both LC comparators to use 20 mV low-side hysteresis.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,CmplhysVal> cmplhys{}; 
        namespace CmplhysValC{
            constexpr Register::FieldValue<decltype(cmplhys)::Type,CmplhysVal::v0Mv> v0Mv{};
            constexpr Register::FieldValue<decltype(cmplhys)::Type,CmplhysVal::v5Mv> v5Mv{};
            constexpr Register::FieldValue<decltype(cmplhys)::Type,CmplhysVal::v10Mv> v10Mv{};
            constexpr Register::FieldValue<decltype(cmplhys)::Type,CmplhysVal::v20Mv> v20Mv{};
        }
        }
        ///LC Comparator High-side Hysteresis. 
        enum class CmphhysVal {
            v0Mv=0x00000000,     ///<Set both LC comparators to use 0 mV high-side hysteresis.
            v5Mv=0x00000001,     ///<Set both LC comparators to use 5 mV high-side hysteresis.
            v10Mv=0x00000002,     ///<Set both LC comparators to use 10 mV high-side hysteresis.
            v20Mv=0x00000003,     ///<Set both LC comparators to use 20 mV high-side hysteresis.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,CmphhysVal> cmphhys{}; 
        namespace CmphhysValC{
            constexpr Register::FieldValue<decltype(cmphhys)::Type,CmphhysVal::v0Mv> v0Mv{};
            constexpr Register::FieldValue<decltype(cmphhys)::Type,CmphhysVal::v5Mv> v5Mv{};
            constexpr Register::FieldValue<decltype(cmphhys)::Type,CmphhysVal::v10Mv> v10Mv{};
            constexpr Register::FieldValue<decltype(cmphhys)::Type,CmphhysVal::v20Mv> v20Mv{};
        }
        }
        ///LC Comparator Mode. 
        enum class CmpmdVal {
            v5Us=0x00000000,     ///<Mode 0 (slowest response time, lowest power consumption).
            v1Us=0x00000001,     ///<Mode 1.
            v400Ns=0x00000002,     ///<Mode 2.
            v200Ns=0x00000003,     ///<Mode 3 (fastest response time, highest power consumption).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,CmpmdVal> cmpmd{}; 
        namespace CmpmdValC{
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::v5Us> v5Us{};
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::v1Us> v1Us{};
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::v400Ns> v400Ns{};
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::v200Ns> v200Ns{};
        }
        }
        ///LC Comparator 0 to Count 1 Enable. 
        enum class Cmp0cnt1enVal {
            disabled=0x00000000,     ///<Use LC comparator 0 as an input to counter 0 and LC comparator 1 as an input to counter 1.
            enabled=0x00000001,     ///<Use LC comparator 0 as an input to both counter 0 and counter 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Cmp0cnt1enVal> cmp0cnt1en{}; 
        namespace Cmp0cnt1enValC{
            constexpr Register::FieldValue<decltype(cmp0cnt1en)::Type,Cmp0cnt1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0cnt1en)::Type,Cmp0cnt1enVal::enabled> enabled{};
        }
        }
        ///Force LC Comparator 0 On Enable. 
        enum class Fcmp0enVal {
            disabled=0x00000000,     ///<Hardware automatically turns LC comparator 0 on and off.
            enabled=0x00000001,     ///<Force LC comparator 0 always on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Fcmp0enVal> fcmp0en{}; 
        namespace Fcmp0enValC{
            constexpr Register::FieldValue<decltype(fcmp0en)::Type,Fcmp0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fcmp0en)::Type,Fcmp0enVal::enabled> enabled{};
        }
        }
        ///Force LC Comparator 1 On Enable. 
        enum class Fcmp1enVal {
            disabled=0x00000000,     ///<Hardware automatically turns LC comparator 1 on and off.
            enabled=0x00000001,     ///<Force LC comparator 1 always on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Fcmp1enVal> fcmp1en{}; 
        namespace Fcmp1enValC{
            constexpr Register::FieldValue<decltype(fcmp1en)::Type,Fcmp1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fcmp1en)::Type,Fcmp1enVal::enabled> enabled{};
        }
        }
    }
    namespace Nonetiming{    ///<Timing
        using Addr = Register::Address<0x40042030,0x000001e0,0,unsigned>;
        ///Timing State. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> state{}; 
        ///Bias 0 Offset Enable. 
        enum class B0oenVal {
            disabled=0x00000000,     ///<The bias 0 pulse is a full width (minimum 2 RTC cycles).
            enabled=0x00000001,     ///<The bias 0 pulse is delayed 1/2 an RTC cycle and de-asserts 1/2 an RTC cycle early (minimum 3 RTC cycles).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B0oenVal> b0oen{}; 
        namespace B0oenValC{
            constexpr Register::FieldValue<decltype(b0oen)::Type,B0oenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b0oen)::Type,B0oenVal::enabled> enabled{};
        }
        }
        ///Bias 1 Offset Enable. 
        enum class B1oenVal {
            disabled=0x00000000,     ///<The bias 1 pulse is a full width (minimum 2 RTC cycles).
            enabled=0x00000001,     ///<The bias 1 pulse is delayed 1/2 an RTC cycle and de-asserts 1/2 an RTC cycle early (minimum 3 RTC cycles).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,B1oenVal> b1oen{}; 
        namespace B1oenValC{
            constexpr Register::FieldValue<decltype(b1oen)::Type,B1oenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b1oen)::Type,B1oenVal::enabled> enabled{};
        }
        }
        ///Zone D Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> zoned{}; 
        ///Zone C Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> zonec{}; 
        ///Zone B Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> zoneb{}; 
        ///Zone A Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> zonea{}; 
        ///Zone P Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> zonep{}; 
        ///LC Wake Mode. 
        enum class WakemdVal {
            disabled=0x00000000,     ///<Disable wake up events.
            wzonep=0x00000001,     ///<Wake or interrupt at the start of zone P.
            wzonea=0x00000002,     ///<Wake or interrupt at the start of zone A.
            wzoneb=0x00000003,     ///<Wake or interrupt at the start of zone B.
            wzonec=0x00000004,     ///<Wake or interrupt at the start of zone C.
            wzoned=0x00000005,     ///<Wake or interrupt at the start of zone D.
            wend=0x00000006,     ///<Wake or interrupt at the end of the LC sequence.
            wkstop=0x00000007,     ///<Wake or interrupt at the end of the LC sequence and stop the sequencer when this event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,WakemdVal> wakemd{}; 
        namespace WakemdValC{
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wzonep> wzonep{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wzonea> wzonea{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wzoneb> wzoneb{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wzonec> wzonec{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wzoned> wzoned{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wend> wend{};
            constexpr Register::FieldValue<decltype(wakemd)::Type,WakemdVal::wkstop> wkstop{};
        }
        }
        ///Sequencer Start. 
        enum class StartVal {
            disabled=0x00000000,     ///<Do not start the sequencer.
            enabled=0x00000001,     ///<Start the sequencer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::enabled> enabled{};
        }
        }
        ///Pulse Counter Period. 
        enum class PeriodVal {
            v4Cycles=0x00000000,     ///<Set the period to 4 RTC cycles.
            v8Cycles=0x00000001,     ///<Set the period to 8 RTC cycles.
            v16Cycles=0x00000002,     ///<Set the period to 16 RTC cycles.
            v32Cycles=0x00000003,     ///<Set the period to 32 RTC cycles.
            v64Cycles=0x00000004,     ///<Set the period to 64 RTC cycles.
            v128Cycles=0x00000005,     ///<Set the period to 128 RTC cycles.
            v256Cycles=0x00000006,     ///<Set the period to 256 RTC cycles.
            v512Cycles=0x00000007,     ///<Set the period to 512 RTC cycles.
            v1024Cycles=0x00000008,     ///<Set the period to 1024 RTC cycles.
            v2048Cycles=0x00000009,     ///<Set the period to 2048 RTC cycles.
            v4096Cycles=0x0000000a,     ///<Set the period to 4096 RTC cycles.
            singleSample=0x0000000e,     ///<Set the module to single sample mode and disable the period counter after the next completion of the sequencer.  In this mode, firmware must start each sample by setting FLCSEN to 1. 
            consecutiveSample=0x0000000f,     ///<Set the module to consecutive sample mode and disable the period counter. After completing zone D, the timing engine will jump directly to zone A, skipping both the W and P zones.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,PeriodVal> period{}; 
        namespace PeriodValC{
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v4Cycles> v4Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v8Cycles> v8Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v16Cycles> v16Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v32Cycles> v32Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v64Cycles> v64Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v128Cycles> v128Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v256Cycles> v256Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v512Cycles> v512Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v1024Cycles> v1024Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v2048Cycles> v2048Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::v4096Cycles> v4096Cycles{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::singleSample> singleSample{};
            constexpr Register::FieldValue<decltype(period)::Type,PeriodVal::consecutiveSample> consecutiveSample{};
        }
        }
    }
    namespace Nonelcmode{    ///<LC Mode
        using Addr = Register::Address<0x40042040,0x00000000,0,unsigned>;
        ///Automatic Tracking Enable. 
        enum class AtrkenVal {
            disabled=0x00000000,     ///<Disable automatic tracking.
            enabled=0x00000001,     ///<Enable automatic tracking. A new MAX value of any size will increase both the MAX and MIN by 1, and a new MIN value of any size will decrease both the MAX and MIN by 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AtrkenVal> atrken{}; 
        namespace AtrkenValC{
            constexpr Register::FieldValue<decltype(atrken)::Type,AtrkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(atrken)::Type,AtrkenVal::enabled> enabled{};
        }
        }
        ///Automatic Center Discriminator Enable. 
        enum class AcdenVal {
            disabled=0x00000000,     ///<Disable automatic center discriminator mode. Firmware must set the CD0 and CD1 fields. 
            enabled=0x00000001,     ///<Enable automatic center discriminator mode. Hardware will keep the CD0 and CD1 fields centered between MAX and MIN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AcdenVal> acden{}; 
        namespace AcdenValC{
            constexpr Register::FieldValue<decltype(acden)::Type,AcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acden)::Type,AcdenVal::enabled> enabled{};
        }
        }
        ///LC Discriminator 0 Digital Hysterisis. 
        enum class Lcd0hysVal {
            zero=0x00000000,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0.
            minus1=0x00000001,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0 - 1.
            minus2=0x00000002,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0 - 2.
            minus3=0x00000003,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0 - 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Lcd0hysVal> lcd0hys{}; 
        namespace Lcd0hysValC{
            constexpr Register::FieldValue<decltype(lcd0hys)::Type,Lcd0hysVal::zero> zero{};
            constexpr Register::FieldValue<decltype(lcd0hys)::Type,Lcd0hysVal::minus1> minus1{};
            constexpr Register::FieldValue<decltype(lcd0hys)::Type,Lcd0hysVal::minus2> minus2{};
            constexpr Register::FieldValue<decltype(lcd0hys)::Type,Lcd0hysVal::minus3> minus3{};
        }
        }
        ///LC Discriminator 1 Digital Hysterisis. 
        enum class Lcd1hysVal {
            zero=0x00000000,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1.
            minus1=0x00000001,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1 - 1.
            minus2=0x00000002,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1 - 2.
            minus3=0x00000003,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1 - 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Lcd1hysVal> lcd1hys{}; 
        namespace Lcd1hysValC{
            constexpr Register::FieldValue<decltype(lcd1hys)::Type,Lcd1hysVal::zero> zero{};
            constexpr Register::FieldValue<decltype(lcd1hys)::Type,Lcd1hysVal::minus1> minus1{};
            constexpr Register::FieldValue<decltype(lcd1hys)::Type,Lcd1hysVal::minus2> minus2{};
            constexpr Register::FieldValue<decltype(lcd1hys)::Type,Lcd1hysVal::minus3> minus3{};
        }
        }
        ///Counter 0 Active Zone Select. 
        enum class C0zoneVal {
            zonea=0x00000000,     ///<Select zone A as the active zone for counter 0 (LCIN0 input).
            zoneb=0x00000001,     ///<Select zone B as the active zone for counter 0 (LCIN0 input).
            zonec=0x00000002,     ///<Select zone C as the active zone for counter 0 (LCIN0 input).
            zoned=0x00000003,     ///<Select zone D as the active zone for counter 0 (LCIN0 input).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,C0zoneVal> c0zone{}; 
        namespace C0zoneValC{
            constexpr Register::FieldValue<decltype(c0zone)::Type,C0zoneVal::zonea> zonea{};
            constexpr Register::FieldValue<decltype(c0zone)::Type,C0zoneVal::zoneb> zoneb{};
            constexpr Register::FieldValue<decltype(c0zone)::Type,C0zoneVal::zonec> zonec{};
            constexpr Register::FieldValue<decltype(c0zone)::Type,C0zoneVal::zoned> zoned{};
        }
        }
        ///Counter 1 Active Zone Select. 
        enum class C1zoneVal {
            zonea=0x00000000,     ///<Select zone A as the active zone for counter 1 (LCIN1 input).
            zoneb=0x00000001,     ///<Select zone B as the active zone for counter 1 (LCIN1 input).
            zonec=0x00000002,     ///<Select zone C as the active zone for counter 1 (LCIN1 input).
            zoned=0x00000003,     ///<Select zone D as the active zone for counter 1 (LCIN1 input).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,C1zoneVal> c1zone{}; 
        namespace C1zoneValC{
            constexpr Register::FieldValue<decltype(c1zone)::Type,C1zoneVal::zonea> zonea{};
            constexpr Register::FieldValue<decltype(c1zone)::Type,C1zoneVal::zoneb> zoneb{};
            constexpr Register::FieldValue<decltype(c1zone)::Type,C1zoneVal::zonec> zonec{};
            constexpr Register::FieldValue<decltype(c1zone)::Type,C1zoneVal::zoned> zoned{};
        }
        }
        ///Pulse 0 Active Zone Select. 
        enum class P0zoneVal {
            disabled=0x00000000,     ///<Disable the pulse 0 output (LCPUL0).
            cOnly=0x00000001,     ///<Select zone C only as the active zone for the pulse 0 output (LCPUL0).
            aOnly=0x00000002,     ///<Select zone A only as the active zone for the pulse 0 output (LCPUL0).
            aAndC=0x00000003,     ///<Select zones A and C as the active zones for the pulse 0 output (LCPUL0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P0zoneVal> p0zone{}; 
        namespace P0zoneValC{
            constexpr Register::FieldValue<decltype(p0zone)::Type,P0zoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p0zone)::Type,P0zoneVal::cOnly> cOnly{};
            constexpr Register::FieldValue<decltype(p0zone)::Type,P0zoneVal::aOnly> aOnly{};
            constexpr Register::FieldValue<decltype(p0zone)::Type,P0zoneVal::aAndC> aAndC{};
        }
        }
        ///Pulse 1 Active Zone Select. 
        enum class P1zoneVal {
            disabled=0x00000000,     ///<Disable the pulse 1 output (LCPUL1).
            cOnly=0x00000001,     ///<Select zone C only as the active zone for the pulse 1 output (LCPUL1).
            aOnly=0x00000002,     ///<Select zone A only as the active zone for the pulse 1 output (LCPUL1).
            aAndC=0x00000003,     ///<Select zones A and C as the active zones for the pulse 1 output (LCPUL1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P1zoneVal> p1zone{}; 
        namespace P1zoneValC{
            constexpr Register::FieldValue<decltype(p1zone)::Type,P1zoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p1zone)::Type,P1zoneVal::cOnly> cOnly{};
            constexpr Register::FieldValue<decltype(p1zone)::Type,P1zoneVal::aOnly> aOnly{};
            constexpr Register::FieldValue<decltype(p1zone)::Type,P1zoneVal::aAndC> aAndC{};
        }
        }
        ///LC Pulse Mode. 
        enum class PmdVal {
            disabled=0x00000000,     ///<Disable pulse mode.
            toggle=0x00000001,     ///<Toggle at the start of zone A or zone C.
            pulseLow=0x00000002,     ///<Set the pulse mode to idle high, pulse low.
            pulseHigh=0x00000003,     ///<Set the pulse mode to idle low, pulse high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,PmdVal> pmd{}; 
        namespace PmdValC{
            constexpr Register::FieldValue<decltype(pmd)::Type,PmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pmd)::Type,PmdVal::toggle> toggle{};
            constexpr Register::FieldValue<decltype(pmd)::Type,PmdVal::pulseLow> pulseLow{};
            constexpr Register::FieldValue<decltype(pmd)::Type,PmdVal::pulseHigh> pulseHigh{};
        }
        }
        ///Bias 0 Zone C Enable. 
        enum class B0zonecenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone C.
            enabled=0x00000001,     ///<Enable bias 0 during zone C.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,B0zonecenVal> b0zonecen{}; 
        namespace B0zonecenValC{
            constexpr Register::FieldValue<decltype(b0zonecen)::Type,B0zonecenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b0zonecen)::Type,B0zonecenVal::enabled> enabled{};
        }
        }
        ///Bias 0 Zone B Enable. 
        enum class B0zonebenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone B.
            enabled=0x00000001,     ///<Enable bias 0 during zone B.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,B0zonebenVal> b0zoneben{}; 
        namespace B0zonebenValC{
            constexpr Register::FieldValue<decltype(b0zoneben)::Type,B0zonebenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b0zoneben)::Type,B0zonebenVal::enabled> enabled{};
        }
        }
        ///Bias 0 Zone A Enable. 
        enum class B0zoneaenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone A.
            enabled=0x00000001,     ///<Enable bias 0 during zone A.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,B0zoneaenVal> b0zoneaen{}; 
        namespace B0zoneaenValC{
            constexpr Register::FieldValue<decltype(b0zoneaen)::Type,B0zoneaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b0zoneaen)::Type,B0zoneaenVal::enabled> enabled{};
        }
        }
        ///Bias 0 Zone P Enable. 
        enum class B0zonepenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone P.
            enabled=0x00000001,     ///<Enable bias 0 during zone P.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,B0zonepenVal> b0zonepen{}; 
        namespace B0zonepenValC{
            constexpr Register::FieldValue<decltype(b0zonepen)::Type,B0zonepenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b0zonepen)::Type,B0zonepenVal::enabled> enabled{};
        }
        }
        ///Bias 0 Polarity. 
        enum class B0polVal {
            pulseLow=0x00000000,     ///<Set bias 0 to idle high, pulse low.
            pulseHigh=0x00000001,     ///<Set bias 0 to idle low, pulse high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,B0polVal> b0pol{}; 
        namespace B0polValC{
            constexpr Register::FieldValue<decltype(b0pol)::Type,B0polVal::pulseLow> pulseLow{};
            constexpr Register::FieldValue<decltype(b0pol)::Type,B0polVal::pulseHigh> pulseHigh{};
        }
        }
        ///Bias 1 Zone C Enable. 
        enum class B1zonecenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone C.
            enabled=0x00000001,     ///<Enable bias 1 during zone C.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,B1zonecenVal> b1zonecen{}; 
        namespace B1zonecenValC{
            constexpr Register::FieldValue<decltype(b1zonecen)::Type,B1zonecenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b1zonecen)::Type,B1zonecenVal::enabled> enabled{};
        }
        }
        ///Bias 1 Zone B Enable. 
        enum class B1zonebenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone B.
            enabled=0x00000001,     ///<Enable bias 1 during zone B.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,B1zonebenVal> b1zoneben{}; 
        namespace B1zonebenValC{
            constexpr Register::FieldValue<decltype(b1zoneben)::Type,B1zonebenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b1zoneben)::Type,B1zonebenVal::enabled> enabled{};
        }
        }
        ///Bias 1 Zone A Enable. 
        enum class B1zoneaenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone A.
            enabled=0x00000001,     ///<Enable bias 1 during zone A.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,B1zoneaenVal> b1zoneaen{}; 
        namespace B1zoneaenValC{
            constexpr Register::FieldValue<decltype(b1zoneaen)::Type,B1zoneaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b1zoneaen)::Type,B1zoneaenVal::enabled> enabled{};
        }
        }
        ///Bias 1 Zone P Enable. 
        enum class B1zonepenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone P.
            enabled=0x00000001,     ///<Enable bias 1 during zone P.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,B1zonepenVal> b1zonepen{}; 
        namespace B1zonepenValC{
            constexpr Register::FieldValue<decltype(b1zonepen)::Type,B1zonepenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(b1zonepen)::Type,B1zonepenVal::enabled> enabled{};
        }
        }
        ///Bias 1 Polarity. 
        enum class B1polVal {
            pulseLow=0x00000000,     ///<Set bias 1 to idle high, pulse low.
            pulseHigh=0x00000001,     ///<Set bias 1 to idle low, pulse high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,B1polVal> b1pol{}; 
        namespace B1polValC{
            constexpr Register::FieldValue<decltype(b1pol)::Type,B1polVal::pulseLow> pulseLow{};
            constexpr Register::FieldValue<decltype(b1pol)::Type,B1polVal::pulseHigh> pulseHigh{};
        }
        }
        ///Bias Mode. 
        enum class BmdVal {
            mode0=0x00000000,     ///<Disable the bias signals.
            mode1=0x00000001,     ///<Use the bias signals externally only (LCBIAS0 and LCBIAS1 outputs).
            mode2=0x00000002,     ///<Use the bias signals internally only.
            mode3=0x00000003,     ///<Use the bias signals externally (LCBIAS0 and LCBIAS1 outputs) and internally.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BmdVal> bmd{}; 
        namespace BmdValC{
            constexpr Register::FieldValue<decltype(bmd)::Type,BmdVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(bmd)::Type,BmdVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(bmd)::Type,BmdVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(bmd)::Type,BmdVal::mode3> mode3{};
        }
        }
        ///LC Mode. 
        enum class LcmdVal {
            mode0=0x00000000,     ///<The LC pulse asserts throughout zone A or zone C with a single-ended comparator using the counter and discriminator.
            mode1=0x00000001,     ///<The LC pulse asserts throughout zone A or zone C with differential comparators using the counter and discriminator.
            mode2=0x00000002,     ///<The LC pulse asserts throughout zone A or zone C with a single-ended comparator sampling and holding at the end of the LC pulse.
            mode3=0x00000003,     ///<The LC pulse asserts throughout zone A or zone C with differential comparators sampling and holding at the end of the LC pulse.
            mode4=0x00000004,     ///<The LC pulse starts at the beginning of zone A or C and stops with the timer with a single-ended comparator using the counter and discriminator.
            mode5=0x00000005,     ///<The LC pulse starts at the beginning of zone A or C and stops with the timer with differential comparators using the counter and discriminator.
            mode6=0x00000006,     ///<The LC pulse starts at the beginning of zone A or C and stops with the timer with a single-ended comparator sampling and holding at the end of the LC pulse.
            mode7=0x00000007,     ///<The LC pulse starts at the beginning of zone A or C and stops with the timer with differential comparators sampling and holding at the end of the LC pulse.
            mode8=0x00000008,     ///<The LC pulse starts at beginning of zone A or C and stops with the rising edge of the external stop input (STOPx) with a single-ended comparator using the counter and discriminator.
            mode9=0x00000009,     ///<The LC pulse starts at beginning of zone A or C and stops with the falling edge of the external stop input (STOPx) with single-ended comparators using the counter and discriminator.
            mode10=0x0000000a,     ///<The LC pulse starts at beginning of zone A or C and stops with the rising edge of the external stop input (STOPx) with a single-ended comparator sampling and holding at the end of the LC pulse.
            mode11=0x0000000b,     ///<The LC pulse starts at beginning of zone A or C and stops with the falling edge of the external stop input (STOPx) with single-ended comparators sampling and holding at the end of the LC pulse.
            mode12=0x0000000c,     ///<Do not generate a pulse with a single-ended comparator using the timer and discrimintor.
            mode13=0x0000000d,     ///<Do not generate a pulse with differential comparators using the timer and discrimintor.
            mode14=0x0000000e,     ///<Do not generate a pulse with a single-ended comparator sampling and holding at the end of the zone.
            mode15=0x0000000f,     ///<Do not genreate a pulse with differential comparators sampling and holding at the end of the zone.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,LcmdVal> lcmd{}; 
        namespace LcmdValC{
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode3> mode3{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode4> mode4{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode5> mode5{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode6> mode6{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode7> mode7{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode8> mode8{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode9> mode9{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode10> mode10{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode11> mode11{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode12> mode12{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode13> mode13{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode14> mode14{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::mode15> mode15{};
        }
        }
    }
    namespace Nonelcclkcontrol{    ///<LC Clock Control
        using Addr = Register::Address<0x40042050,0xf000e000,0,unsigned>;
        ///LC Oscillator Clock Cycles. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> clkcycles{}; 
        ///LC Oscillator Calibration Start. 
        enum class ClkcalVal {
            notInProgress=0x00000000,     ///<A calibration operation is not in progress.
            start=0x00000001,     ///<Start an oscillator calibration or a calibration operation is in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ClkcalVal> clkcal{}; 
        namespace ClkcalValC{
            constexpr Register::FieldValue<decltype(clkcal)::Type,ClkcalVal::notInProgress> notInProgress{};
            constexpr Register::FieldValue<decltype(clkcal)::Type,ClkcalVal::start> start{};
        }
        }
        ///LC Oscillator Reload Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace Nonelclimits{    ///<LC Counter Limits
        using Addr = Register::Address<0x40042060,0x00000000,0,unsigned>;
        ///LC Counter 0 Minimum Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> min0{}; 
        ///LC Counter 0 Maximum Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> max0{}; 
        ///LC Counter 1 Minimum Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> min1{}; 
        ///LC Counter 1 Maximum Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> max1{}; 
    }
    namespace Nonelccount{    ///<LC Counters
        using Addr = Register::Address<0x40042070,0x00000000,0,unsigned>;
        ///LC Counter 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lccount0{}; 
        ///LC Counter 0 Discriminator. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cd0{}; 
        ///LC Counter 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lccount1{}; 
        ///LC Counter 1 Discriminator. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> cd1{}; 
    }
    namespace Nonedbconfig{    ///<Pulse Counter Debounce Configuration
        using Addr = Register::Address<0x40042080,0xfff80000,0,unsigned>;
        ///Integrator Low Debounce. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ldbth{}; 
        ///Integrator High Debounce. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hdbth{}; 
        ///PC Integrator Disconnect Enable. 
        enum class IntegdcenVal {
            disabled=0x00000000,     ///<Connect integrator to 24 bit counter state machine logic.
            enabled=0x00000001,     ///<Disconnect the integrators from the IN0 and IN1 inputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IntegdcenVal> integdcen{}; 
        namespace IntegdcenValC{
            constexpr Register::FieldValue<decltype(integdcen)::Type,IntegdcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(integdcen)::Type,IntegdcenVal::enabled> enabled{};
        }
        }
        ///PC Integrator 0 Output. 
        enum class Integ0Val {
            low=0x00000000,     ///<The integrator 0 output is low.
            high=0x00000001,     ///<The integrator 0 output is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Integ0Val> integ0{}; 
        namespace Integ0ValC{
            constexpr Register::FieldValue<decltype(integ0)::Type,Integ0Val::low> low{};
            constexpr Register::FieldValue<decltype(integ0)::Type,Integ0Val::high> high{};
        }
        }
        ///PC Integrator 1 Output. 
        enum class Integ1Val {
            low=0x00000000,     ///<The integrator 1 output is low.
            high=0x00000001,     ///<The integrator 1 output is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Integ1Val> integ1{}; 
        namespace Integ1ValC{
            constexpr Register::FieldValue<decltype(integ1)::Type,Integ1Val::low> low{};
            constexpr Register::FieldValue<decltype(integ1)::Type,Integ1Val::high> high{};
        }
        }
    }
    namespace Nonecount0{    ///<Pulse Counter 0
        using Addr = Register::Address<0x40042090,0xff000000,0,unsigned>;
        ///Pulse Counter 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count0{}; 
    }
    namespace Nonecount1{    ///<Pulse Counter 1
        using Addr = Register::Address<0x400420a0,0xff000000,0,unsigned>;
        ///Pulse Counter 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count1{}; 
    }
    namespace Nonecomp0{    ///<Comparator 0
        using Addr = Register::Address<0x400420b0,0xff000000,0,unsigned>;
        ///Pulse Counter Comparator 0 Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> comp0{}; 
    }
    namespace Nonecomp1{    ///<Pulse Counter Comparator 1 Threshold
        using Addr = Register::Address<0x400420c0,0xff000000,0,unsigned>;
        ///Pulse Counter Comparator 1 Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> comp1{}; 
    }
    namespace Nonestatus{    ///<Pulse Counter Status
        using Addr = Register::Address<0x400420d0,0xc0000000,0,unsigned>;
        ///Direction Change Interrupt Flag. 
        enum class DirchgiVal {
            notSet=0x00000000,     ///<A direction change did not occur.
            set=0x00000001,     ///<A direction change occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirchgiVal> dirchgi{}; 
        namespace DirchgiValC{
            constexpr Register::FieldValue<decltype(dirchgi)::Type,DirchgiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dirchgi)::Type,DirchgiVal::set> set{};
        }
        }
        ///Counter Overflow Interrupt Flag. 
        enum class OvfiVal {
            notSet=0x00000000,     ///<Neither of the counters overflowed.
            set=0x00000001,     ///<One of the counters overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvfiVal> ovfi{}; 
        namespace OvfiValC{
            constexpr Register::FieldValue<decltype(ovfi)::Type,OvfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ovfi)::Type,OvfiVal::set> set{};
        }
        }
        ///Digital Comparator 0 Interrupt Flag. 
        enum class Cmp0iVal {
            notSet=0x00000000,     ///<A digital comparator 0 and counter 0 match did not occur.
            set=0x00000001,     ///<A digital comparator 0 and counter 0 match occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cmp0iVal> cmp0i{}; 
        namespace Cmp0iValC{
            constexpr Register::FieldValue<decltype(cmp0i)::Type,Cmp0iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp0i)::Type,Cmp0iVal::set> set{};
        }
        }
        ///Digital Comparator 1 Interrupt Flag. 
        enum class Cmp1iVal {
            notSet=0x00000000,     ///<A digital comparator 1 and counter 1 match did not occur.
            set=0x00000001,     ///<A digital comparator 1 and counter 1 match occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Cmp1iVal> cmp1i{}; 
        namespace Cmp1iValC{
            constexpr Register::FieldValue<decltype(cmp1i)::Type,Cmp1iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmp1i)::Type,Cmp1iVal::set> set{};
        }
        }
        ///Integrator Transition Interrupt Flag. 
        enum class TransiVal {
            notSet=0x00000000,     ///<An integrator output transition did not occur.
            set=0x00000001,     ///<An integrator output transition occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TransiVal> transi{}; 
        namespace TransiValC{
            constexpr Register::FieldValue<decltype(transi)::Type,TransiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(transi)::Type,TransiVal::set> set{};
        }
        }
        ///Quadrature Error Interrupt Flag. 
        enum class QerriVal {
            notSet=0x00000000,     ///<A quadrature error did not occur.
            set=0x00000001,     ///<A quadrature error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,QerriVal> qerri{}; 
        namespace QerriValC{
            constexpr Register::FieldValue<decltype(qerri)::Type,QerriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(qerri)::Type,QerriVal::set> set{};
        }
        }
        ///Flutter Stop Interrupt Flag. 
        enum class FlstopiVal {
            notSet=0x00000000,     ///<A flutter detection end event did not occur. 
            set=0x00000001,     ///<A flutter detection end event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FlstopiVal> flstopi{}; 
        namespace FlstopiValC{
            constexpr Register::FieldValue<decltype(flstopi)::Type,FlstopiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(flstopi)::Type,FlstopiVal::set> set{};
        }
        }
        ///Flutter Start Interrupt Flag. 
        enum class FlstartiVal {
            notSet=0x00000000,     ///<A flutter detection start event did not occur. 
            set=0x00000001,     ///<A flutter detection start event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FlstartiVal> flstarti{}; 
        namespace FlstartiValC{
            constexpr Register::FieldValue<decltype(flstarti)::Type,FlstartiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(flstarti)::Type,FlstartiVal::set> set{};
        }
        }
        ///Direction Change Interrupt Enable. 
        enum class DirchgienVal {
            disabled=0x00000000,     ///<Disable direction change as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable direction change as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DirchgienVal> dirchgien{}; 
        namespace DirchgienValC{
            constexpr Register::FieldValue<decltype(dirchgien)::Type,DirchgienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dirchgien)::Type,DirchgienVal::enabled> enabled{};
        }
        }
        ///Counter Overflow Interrupt Enable. 
        enum class OvfienVal {
            disabled=0x00000000,     ///<Disable counter overflows as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable counter overflows as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,OvfienVal> ovfien{}; 
        namespace OvfienValC{
            constexpr Register::FieldValue<decltype(ovfien)::Type,OvfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfien)::Type,OvfienVal::enabled> enabled{};
        }
        }
        ///Digital Comparator 0 Interrupt Enable. 
        enum class Cmp0ienVal {
            disabled=0x00000000,     ///<Disable comparator 0 as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable comparator 0 as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Cmp0ienVal> cmp0ien{}; 
        namespace Cmp0ienValC{
            constexpr Register::FieldValue<decltype(cmp0ien)::Type,Cmp0ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0ien)::Type,Cmp0ienVal::enabled> enabled{};
        }
        }
        ///Digital Comparator 1 Interrupt Enable. 
        enum class Cmp1ienVal {
            disabled=0x00000000,     ///<Disable comparator 1 as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable comparator 1 as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Cmp1ienVal> cmp1ien{}; 
        namespace Cmp1ienValC{
            constexpr Register::FieldValue<decltype(cmp1ien)::Type,Cmp1ienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1ien)::Type,Cmp1ienVal::enabled> enabled{};
        }
        }
        ///Integrator Transition Interrupt Enable. 
        enum class TransienVal {
            disabled=0x00000000,     ///<Disable integrator transitions as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable integrator transitions as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TransienVal> transien{}; 
        namespace TransienValC{
            constexpr Register::FieldValue<decltype(transien)::Type,TransienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(transien)::Type,TransienVal::enabled> enabled{};
        }
        }
        ///Quadrature Error Interrupt Enable. 
        enum class QerrienVal {
            disabled=0x00000000,     ///<Disable quadrature error as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable quadrature error as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,QerrienVal> qerrien{}; 
        namespace QerrienValC{
            constexpr Register::FieldValue<decltype(qerrien)::Type,QerrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(qerrien)::Type,QerrienVal::enabled> enabled{};
        }
        }
        ///Flutter Stop Interrupt Enable. 
        enum class FlstopienVal {
            disabled=0x00000000,     ///<Disable flutter detection end events as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable flutter detection end events as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,FlstopienVal> flstopien{}; 
        namespace FlstopienValC{
            constexpr Register::FieldValue<decltype(flstopien)::Type,FlstopienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flstopien)::Type,FlstopienVal::enabled> enabled{};
        }
        }
        ///Flutter Start Interrupt Enable. 
        enum class FlstartienVal {
            disabled=0x00000000,     ///<Disable flutter detection start events as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable flutter detection start events as an interrupt or wake up source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,FlstartienVal> flstartien{}; 
        namespace FlstartienValC{
            constexpr Register::FieldValue<decltype(flstartien)::Type,FlstartienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flstartien)::Type,FlstartienVal::enabled> enabled{};
        }
        }
        ///Integrator 0 Output. 
        enum class In0Val {
            low=0x00000000,     ///<The integrator 0 output is low.
            high=0x00000001,     ///<The integrator 0 output is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,In0Val> in0{}; 
        namespace In0ValC{
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::low> low{};
            constexpr Register::FieldValue<decltype(in0)::Type,In0Val::high> high{};
        }
        }
        ///Integrator 1 Output. 
        enum class In1Val {
            low=0x00000000,     ///<The integrator 1 output is low.
            high=0x00000001,     ///<The integrator 1 output is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,In1Val> in1{}; 
        namespace In1ValC{
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::low> low{};
            constexpr Register::FieldValue<decltype(in1)::Type,In1Val::high> high{};
        }
        }
        ///Previous Integrator 0 Output. 
        enum class In0prevVal {
            low=0x00000000,     ///<The previous integrator 0 output was low.
            high=0x00000001,     ///<The previous integrator 0 output was high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,In0prevVal> in0prev{}; 
        namespace In0prevValC{
            constexpr Register::FieldValue<decltype(in0prev)::Type,In0prevVal::low> low{};
            constexpr Register::FieldValue<decltype(in0prev)::Type,In0prevVal::high> high{};
        }
        }
        ///Previous Integrator 1 Output. 
        enum class In1prevVal {
            low=0x00000000,     ///<The previous integrator 1 output was low.
            high=0x00000001,     ///<The previous integrator 1 output was high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,In1prevVal> in1prev{}; 
        namespace In1prevValC{
            constexpr Register::FieldValue<decltype(in1prev)::Type,In1prevVal::low> low{};
            constexpr Register::FieldValue<decltype(in1prev)::Type,In1prevVal::high> high{};
        }
        }
        ///Pulse Counter State. 
        enum class StateVal {
            st0=0x00000000,     ///<The pulse counter is in state 0.
            st1=0x00000001,     ///<The pulse counter is in state 1.
            st2=0x00000002,     ///<The pulse counter is in state 2.
            st3=0x00000003,     ///<The pulse counter is in state 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::st0> st0{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::st1> st1{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::st2> st2{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::st3> st3{};
        }
        }
        ///Direction Flag. 
        enum class DirfVal {
            counterClockwise=0x00000000,     ///<The current direction is counter-clockwise.
            clockwise=0x00000001,     ///<The current direction is clockwise.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,DirfVal> dirf{}; 
        namespace DirfValC{
            constexpr Register::FieldValue<decltype(dirf)::Type,DirfVal::counterClockwise> counterClockwise{};
            constexpr Register::FieldValue<decltype(dirf)::Type,DirfVal::clockwise> clockwise{};
        }
        }
        ///Flutter Detected Flag. 
        enum class FlfVal {
            notSet=0x00000000,     ///<The switch operates normally.
            set=0x00000001,     ///<A flutter event was detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,FlfVal> flf{}; 
        namespace FlfValC{
            constexpr Register::FieldValue<decltype(flf)::Type,FlfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(flf)::Type,FlfVal::set> set{};
        }
        }
        ///Direction History . 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> dirhist{}; 
        ///Comparator 0 Output. 
        enum class Cmp0outVal {
            low=0x00000000,     ///<The output of comparator 0 is low.
            high=0x00000001,     ///<The output of comparator 0 is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Cmp0outVal> cmp0out{}; 
        namespace Cmp0outValC{
            constexpr Register::FieldValue<decltype(cmp0out)::Type,Cmp0outVal::low> low{};
            constexpr Register::FieldValue<decltype(cmp0out)::Type,Cmp0outVal::high> high{};
        }
        }
        ///Comparator 1 Output. 
        enum class Cmp1outVal {
            low=0x00000000,     ///<The output of comparator 1 is low.
            high=0x00000001,     ///<The output of comparator1 is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Cmp1outVal> cmp1out{}; 
        namespace Cmp1outValC{
            constexpr Register::FieldValue<decltype(cmp1out)::Type,Cmp1outVal::low> low{};
            constexpr Register::FieldValue<decltype(cmp1out)::Type,Cmp1outVal::high> high{};
        }
        }
    }
    namespace Nonedebugen{    ///<Calibration
        using Addr = Register::Address<0x400420e0,0xffffbfff,0,unsigned>;
        ///Debug Output Enable. 
        enum class DbgoenVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DbgoenVal> dbgoen{}; 
        namespace DbgoenValC{
            constexpr Register::FieldValue<decltype(dbgoen)::Type,DbgoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dbgoen)::Type,DbgoenVal::enabled> enabled{};
        }
        }
    }
}
