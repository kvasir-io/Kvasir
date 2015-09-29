#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Configuration
        using Addr = Register::Address<0x40042000,0x1cffff1e,0,unsigned>;
        ///Write Update Status Flag. 
        enum class updstsfVal {
            notSet=0x00000000,     ///<An internal pulse counter register update is not in progress.
            set=0x00000001,     ///<An internal pulse counter register update is in progress.
        };
        namespace updstsfValC{
            constexpr MPL::Value<updstsfVal,updstsfVal::notSet> notSet{};
            constexpr MPL::Value<updstsfVal,updstsfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,updstsfVal> updstsf{}; 
        ///Debug Signal Select. 
        enum class dbgselVal {
            none=0x00000000,     ///<No debug signals output.
            lcc0Lcc1=0x00000001,     ///<(LC Mode) DBG0 = CMP0OUT,  DBG1 = CMP0OUT.
            lcc0Int0=0x00000002,     ///<(LC Mode) DBG0 = CMP0OUT,  DBG1 = INTEG0.
            lcc1Int1=0x00000003,     ///<(LC Mode) DBG0 = CMP1OUT,  DBG1 = INTEG1.
            int0Int1=0x00000004,     ///<(Any Mode) DBG0 = INTEG0  DBG1 = INTEG1.
            cmp0Cmp1=0x00000005,     ///<(Switch Mode) DBG0 = CMP0OUT,  DBG1 = CMP0OUT.
            cmp0Int0=0x00000006,     ///<(Switch Mode) DBG0 = CMP0OUT,  DBG1 = INTEG0.
            cmp1Int1=0x00000007,     ///<(Switch Mode) DBG0= CMP1OUT,  DBG1 = INTEG1.
        };
        namespace dbgselValC{
            constexpr MPL::Value<dbgselVal,dbgselVal::none> none{};
            constexpr MPL::Value<dbgselVal,dbgselVal::lcc0Lcc1> lcc0Lcc1{};
            constexpr MPL::Value<dbgselVal,dbgselVal::lcc0Int0> lcc0Int0{};
            constexpr MPL::Value<dbgselVal,dbgselVal::lcc1Int1> lcc1Int1{};
            constexpr MPL::Value<dbgselVal,dbgselVal::int0Int1> int0Int1{};
            constexpr MPL::Value<dbgselVal,dbgselVal::cmp0Cmp1> cmp0Cmp1{};
            constexpr MPL::Value<dbgselVal,dbgselVal::cmp0Int0> cmp0Int0{};
            constexpr MPL::Value<dbgselVal,dbgselVal::cmp1Int1> cmp1Int1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,dbgselVal> dbgsel{}; 
        ///Flutter Quadrature-to-Dual Switch Enable. 
        enum class flqdenVal {
            disabled=0x00000000,     ///<The pulse counter remains in quadrature mode during a flutter event.
            enabled=0x00000001,     ///<The pulse counter switches from quadrature mode to dual mode during a flutter event.
        };
        namespace flqdenValC{
            constexpr MPL::Value<flqdenVal,flqdenVal::disabled> disabled{};
            constexpr MPL::Value<flqdenVal,flqdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,flqdenVal> flqden{}; 
        ///Flutter Stop Enable. 
        enum class flstpenVal {
            disabled=0x00000000,     ///<The pulse counter continues operating during a flutter event.
            enabled=0x00000001,     ///<The 24-bit counters stop counting during a flutter event.
        };
        namespace flstpenValC{
            constexpr MPL::Value<flstpenVal,flstpenVal::disabled> disabled{};
            constexpr MPL::Value<flstpenVal,flstpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,flstpenVal> flstpen{}; 
        ///Topology Mode. 
        enum class topmdVal {
            switch_=0x00000000,     ///<Select the switch closure topology.
            lc=0x00000001,     ///<Select the LC resonant topology.
        };
        namespace topmdValC{
            constexpr MPL::Value<topmdVal,topmdVal::switch_> switch_{};
            constexpr MPL::Value<topmdVal,topmdVal::lc> lc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,topmdVal> topmd{}; 
        ///Pulse Counter Mode. 
        enum class pcmdVal {
            disabled=0x00000000,     ///<Disable the pulse counter.
            single=0x00000001,     ///<Select single channel mode.
            dual=0x00000002,     ///<Select dual channel mode.
            quadrature=0x00000003,     ///<Select quadrature mode.
        };
        namespace pcmdValC{
            constexpr MPL::Value<pcmdVal,pcmdVal::disabled> disabled{};
            constexpr MPL::Value<pcmdVal,pcmdVal::single> single{};
            constexpr MPL::Value<pcmdVal,pcmdVal::dual> dual{};
            constexpr MPL::Value<pcmdVal,pcmdVal::quadrature> quadrature{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,pcmdVal> pcmd{}; 
    }
    namespace Nonecontrol{    ///<Control Register
        using Addr = Register::Address<0x40042010,0x00007fff,0,unsigned>;
        ///Comparator Low Threshold. 
        enum class cmplthVal {
            v32Percent=0x00000000,     ///<Set the digital comparator low threshold to 32% of VIO.
            v36Percent=0x00000001,     ///<Set the digital comparator low threshold to 36% of VIO.
            v40Percent=0x00000002,     ///<Set the digital comparator low threshold to 40% of VIO.
            v44Percent=0x00000003,     ///<Set the digital comparator low threshold to 44% of VIO.
        };
        namespace cmplthValC{
            constexpr MPL::Value<cmplthVal,cmplthVal::v32Percent> v32Percent{};
            constexpr MPL::Value<cmplthVal,cmplthVal::v36Percent> v36Percent{};
            constexpr MPL::Value<cmplthVal,cmplthVal::v40Percent> v40Percent{};
            constexpr MPL::Value<cmplthVal,cmplthVal::v44Percent> v44Percent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,cmplthVal> cmplth{}; 
        ///Comparator High Threshold. 
        enum class cmphthVal {
            v48Percent=0x00000000,     ///<Set the digital comparator high threshold to 48% of VIO.
            v52Percent=0x00000001,     ///<Set the digital comparator high threshold to 52% of VIO.
            v56Percent=0x00000002,     ///<Set the digital comparator high threshold to 56% of VIO.
            v60Percent=0x00000003,     ///<Set the digital comparator high threshold to 60% of VIO.
        };
        namespace cmphthValC{
            constexpr MPL::Value<cmphthVal,cmphthVal::v48Percent> v48Percent{};
            constexpr MPL::Value<cmphthVal,cmphthVal::v52Percent> v52Percent{};
            constexpr MPL::Value<cmphthVal,cmphthVal::v56Percent> v56Percent{};
            constexpr MPL::Value<cmphthVal,cmphthVal::v60Percent> v60Percent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,cmphthVal> cmphth{}; 
        ///Automatic Calibration Mode. 
        enum class calmdVal {
            untilPass=0x00000000,     ///<Continue to calibrate until a passing condition occurs.
            untilFail=0x00000001,     ///<Continue to calibrate until a failing condition occurs.
        };
        namespace calmdValC{
            constexpr MPL::Value<calmdVal,calmdVal::untilPass> untilPass{};
            constexpr MPL::Value<calmdVal,calmdVal::untilFail> untilFail{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,calmdVal> calmd{}; 
        ///Automatic Calibration Pull-up Mode. 
        enum class calpumdVal {
            full=0x00000000,     ///<Use full pull-up mode.
            small=0x00000001,     ///<Use small pull-up mode.
            medium=0x00000002,     ///<Use medium pull-up mode.
            large=0x00000003,     ///<Use large pull-up mode.
        };
        namespace calpumdValC{
            constexpr MPL::Value<calpumdVal,calpumdVal::full> full{};
            constexpr MPL::Value<calpumdVal,calpumdVal::small> small{};
            constexpr MPL::Value<calpumdVal,calpumdVal::medium> medium{};
            constexpr MPL::Value<calpumdVal,calpumdVal::large> large{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,calpumdVal> calpumd{}; 
        ///Force Continuous Pull-up Enable. 
        enum class fpupenVal {
            disabled=0x00000000,     ///<Pull-ups are enabled automatically by hardware.
            enabled=0x00000001,     ///<Always enable the pull-ups.
        };
        namespace fpupenValC{
            constexpr MPL::Value<fpupenVal,fpupenVal::disabled> disabled{};
            constexpr MPL::Value<fpupenVal,fpupenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,fpupenVal> fpupen{}; 
        ///Force Ground Input Enable. 
        enum class fpdnenVal {
            disabled=0x00000000,     ///<Disable input grounding.
            enabled=0x00000001,     ///<Enable input grounding. The IN0 and IN1 inputs are grounded.
        };
        namespace fpdnenValC{
            constexpr MPL::Value<fpdnenVal,fpdnenVal::disabled> disabled{};
            constexpr MPL::Value<fpdnenVal,fpdnenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,fpdnenVal> fpdnen{}; 
        ///Pull-up Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> puval{}; 
        ///Automatic Calibration Input Select. 
        enum class calselVal {
            in0=0x00000000,     ///<Calibrate the IN0 input.
            in1=0x00000001,     ///<Calibrate the IN1 input.
        };
        namespace calselValC{
            constexpr MPL::Value<calselVal,calselVal::in0> in0{};
            constexpr MPL::Value<calselVal,calselVal::in1> in1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,calselVal> calsel{}; 
        ///Calibration Result Flag. 
        enum class calrfVal {
            notSet=0x00000000,     ///<The automatic calibration operation did not succeed.
            set=0x00000001,     ///<The automatic calibration operation succeeded.
        };
        namespace calrfValC{
            constexpr MPL::Value<calrfVal,calrfVal::notSet> notSet{};
            constexpr MPL::Value<calrfVal,calrfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,calrfVal> calrf{}; 
        ///Calibration Busy Flag. 
        enum class calbusyfVal {
            notSet=0x00000000,     ///<A calibration operation is not in progress.
            set=0x00000001,     ///<A calibration operation is in progress. Hardware will clear this flag when the operation completes.
        };
        namespace calbusyfValC{
            constexpr MPL::Value<calbusyfVal,calbusyfVal::notSet> notSet{};
            constexpr MPL::Value<calbusyfVal,calbusyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,calbusyfVal> calbusyf{}; 
    }
    namespace Nonelcconfig{    ///<LC Configuration
        using Addr = Register::Address<0x40042020,0x80000000,0,unsigned>;
        ///LC Pulse Extension Mode. 
        enum class pemdVal {
            low=0x00000000,     ///<Stretch the LC comparator output low pulses by approximately 20 ns.
            high=0x00000001,     ///<Stretch the LC comparator output high pulses by approximately 20 ns.
            none=0x00000002,     ///<No pulse extension.
        };
        namespace pemdValC{
            constexpr MPL::Value<pemdVal,pemdVal::low> low{};
            constexpr MPL::Value<pemdVal,pemdVal::high> high{};
            constexpr MPL::Value<pemdVal,pemdVal::none> none{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pemdVal> pemd{}; 
        ///LC Comparator 0 Fine Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cmp0fth{}; 
        ///LC Comparator 0 Coarse Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,5),Register::ReadWriteAccess,unsigned> cmp0cth{}; 
        ///LC Comparator 0 Threshold Range. 
        enum class cmp0thrVal {
            low=0x00000000,     ///<Set the comparator 0 threshold to the low range (0 V to VIO/8 in 48 steps).
            full=0x00000001,     ///<Set the comparator 0 threshold to a full range (0 V to VIO in 64 steps).
        };
        namespace cmp0thrValC{
            constexpr MPL::Value<cmp0thrVal,cmp0thrVal::low> low{};
            constexpr MPL::Value<cmp0thrVal,cmp0thrVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cmp0thrVal> cmp0thr{}; 
        ///LC Comparator 1 Fine Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cmp1fth{}; 
        ///LC Comparator 1 Coarse Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,15),Register::ReadWriteAccess,unsigned> cmp1cth{}; 
        ///LC Comparator 1 Threshold Range. 
        enum class cmp1thrVal {
            low=0x00000000,     ///<Set the comparator 1 threshold to the low range (0 V to VIO/8 in 48 steps).
            full=0x00000001,     ///<Set the comparator 1 threshold to a full range (0 V to VIO in 64 steps).
        };
        namespace cmp1thrValC{
            constexpr MPL::Value<cmp1thrVal,cmp1thrVal::low> low{};
            constexpr MPL::Value<cmp1thrVal,cmp1thrVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,cmp1thrVal> cmp1thr{}; 
        ///LC Comparator Low-side Hysteresis. 
        enum class cmplhysVal {
            v0Mv=0x00000000,     ///<Set both LC comparators to use 0 mV low-side hysteresis.
            v5Mv=0x00000001,     ///<Set both LC comparators to use 5 mV low-side hysteresis.
            v10Mv=0x00000002,     ///<Set both LC comparators to use 10 mV low-side hysteresis.
            v20Mv=0x00000003,     ///<Set both LC comparators to use 20 mV low-side hysteresis.
        };
        namespace cmplhysValC{
            constexpr MPL::Value<cmplhysVal,cmplhysVal::v0Mv> v0Mv{};
            constexpr MPL::Value<cmplhysVal,cmplhysVal::v5Mv> v5Mv{};
            constexpr MPL::Value<cmplhysVal,cmplhysVal::v10Mv> v10Mv{};
            constexpr MPL::Value<cmplhysVal,cmplhysVal::v20Mv> v20Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,cmplhysVal> cmplhys{}; 
        ///LC Comparator High-side Hysteresis. 
        enum class cmphhysVal {
            v0Mv=0x00000000,     ///<Set both LC comparators to use 0 mV high-side hysteresis.
            v5Mv=0x00000001,     ///<Set both LC comparators to use 5 mV high-side hysteresis.
            v10Mv=0x00000002,     ///<Set both LC comparators to use 10 mV high-side hysteresis.
            v20Mv=0x00000003,     ///<Set both LC comparators to use 20 mV high-side hysteresis.
        };
        namespace cmphhysValC{
            constexpr MPL::Value<cmphhysVal,cmphhysVal::v0Mv> v0Mv{};
            constexpr MPL::Value<cmphhysVal,cmphhysVal::v5Mv> v5Mv{};
            constexpr MPL::Value<cmphhysVal,cmphhysVal::v10Mv> v10Mv{};
            constexpr MPL::Value<cmphhysVal,cmphhysVal::v20Mv> v20Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,cmphhysVal> cmphhys{}; 
        ///LC Comparator Mode. 
        enum class cmpmdVal {
            v5Us=0x00000000,     ///<Mode 0 (slowest response time, lowest power consumption).
            v1Us=0x00000001,     ///<Mode 1.
            v400Ns=0x00000002,     ///<Mode 2.
            v200Ns=0x00000003,     ///<Mode 3 (fastest response time, highest power consumption).
        };
        namespace cmpmdValC{
            constexpr MPL::Value<cmpmdVal,cmpmdVal::v5Us> v5Us{};
            constexpr MPL::Value<cmpmdVal,cmpmdVal::v1Us> v1Us{};
            constexpr MPL::Value<cmpmdVal,cmpmdVal::v400Ns> v400Ns{};
            constexpr MPL::Value<cmpmdVal,cmpmdVal::v200Ns> v200Ns{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,cmpmdVal> cmpmd{}; 
        ///LC Comparator 0 to Count 1 Enable. 
        enum class cmp0cnt1enVal {
            disabled=0x00000000,     ///<Use LC comparator 0 as an input to counter 0 and LC comparator 1 as an input to counter 1.
            enabled=0x00000001,     ///<Use LC comparator 0 as an input to both counter 0 and counter 1.
        };
        namespace cmp0cnt1enValC{
            constexpr MPL::Value<cmp0cnt1enVal,cmp0cnt1enVal::disabled> disabled{};
            constexpr MPL::Value<cmp0cnt1enVal,cmp0cnt1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,cmp0cnt1enVal> cmp0cnt1en{}; 
        ///Force LC Comparator 0 On Enable. 
        enum class fcmp0enVal {
            disabled=0x00000000,     ///<Hardware automatically turns LC comparator 0 on and off.
            enabled=0x00000001,     ///<Force LC comparator 0 always on.
        };
        namespace fcmp0enValC{
            constexpr MPL::Value<fcmp0enVal,fcmp0enVal::disabled> disabled{};
            constexpr MPL::Value<fcmp0enVal,fcmp0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,fcmp0enVal> fcmp0en{}; 
        ///Force LC Comparator 1 On Enable. 
        enum class fcmp1enVal {
            disabled=0x00000000,     ///<Hardware automatically turns LC comparator 1 on and off.
            enabled=0x00000001,     ///<Force LC comparator 1 always on.
        };
        namespace fcmp1enValC{
            constexpr MPL::Value<fcmp1enVal,fcmp1enVal::disabled> disabled{};
            constexpr MPL::Value<fcmp1enVal,fcmp1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,fcmp1enVal> fcmp1en{}; 
    }
    namespace Nonetiming{    ///<Timing
        using Addr = Register::Address<0x40042030,0x000001e0,0,unsigned>;
        ///Timing State. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> state{}; 
        ///Bias 0 Offset Enable. 
        enum class b0oenVal {
            disabled=0x00000000,     ///<The bias 0 pulse is a full width (minimum 2 RTC cycles).
            enabled=0x00000001,     ///<The bias 0 pulse is delayed 1/2 an RTC cycle and de-asserts 1/2 an RTC cycle early (minimum 3 RTC cycles).
        };
        namespace b0oenValC{
            constexpr MPL::Value<b0oenVal,b0oenVal::disabled> disabled{};
            constexpr MPL::Value<b0oenVal,b0oenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,b0oenVal> b0oen{}; 
        ///Bias 1 Offset Enable. 
        enum class b1oenVal {
            disabled=0x00000000,     ///<The bias 1 pulse is a full width (minimum 2 RTC cycles).
            enabled=0x00000001,     ///<The bias 1 pulse is delayed 1/2 an RTC cycle and de-asserts 1/2 an RTC cycle early (minimum 3 RTC cycles).
        };
        namespace b1oenValC{
            constexpr MPL::Value<b1oenVal,b1oenVal::disabled> disabled{};
            constexpr MPL::Value<b1oenVal,b1oenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,b1oenVal> b1oen{}; 
        ///Zone D Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> zoned{}; 
        ///Zone C Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> zonec{}; 
        ///Zone B Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> zoneb{}; 
        ///Zone A Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> zonea{}; 
        ///Zone P Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> zonep{}; 
        ///LC Wake Mode. 
        enum class wakemdVal {
            disabled=0x00000000,     ///<Disable wake up events.
            wzonep=0x00000001,     ///<Wake or interrupt at the start of zone P.
            wzonea=0x00000002,     ///<Wake or interrupt at the start of zone A.
            wzoneb=0x00000003,     ///<Wake or interrupt at the start of zone B.
            wzonec=0x00000004,     ///<Wake or interrupt at the start of zone C.
            wzoned=0x00000005,     ///<Wake or interrupt at the start of zone D.
            wend=0x00000006,     ///<Wake or interrupt at the end of the LC sequence.
            wkstop=0x00000007,     ///<Wake or interrupt at the end of the LC sequence and stop the sequencer when this event occurs.
        };
        namespace wakemdValC{
            constexpr MPL::Value<wakemdVal,wakemdVal::disabled> disabled{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wzonep> wzonep{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wzonea> wzonea{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wzoneb> wzoneb{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wzonec> wzonec{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wzoned> wzoned{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wend> wend{};
            constexpr MPL::Value<wakemdVal,wakemdVal::wkstop> wkstop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,wakemdVal> wakemd{}; 
        ///Sequencer Start. 
        enum class startVal {
            disabled=0x00000000,     ///<Do not start the sequencer.
            enabled=0x00000001,     ///<Start the sequencer.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::disabled> disabled{};
            constexpr MPL::Value<startVal,startVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,startVal> start{}; 
        ///Pulse Counter Period. 
        enum class periodVal {
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
        namespace periodValC{
            constexpr MPL::Value<periodVal,periodVal::v4Cycles> v4Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v8Cycles> v8Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v16Cycles> v16Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v32Cycles> v32Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v64Cycles> v64Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v128Cycles> v128Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v256Cycles> v256Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v512Cycles> v512Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v1024Cycles> v1024Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v2048Cycles> v2048Cycles{};
            constexpr MPL::Value<periodVal,periodVal::v4096Cycles> v4096Cycles{};
            constexpr MPL::Value<periodVal,periodVal::singleSample> singleSample{};
            constexpr MPL::Value<periodVal,periodVal::consecutiveSample> consecutiveSample{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,periodVal> period{}; 
    }
    namespace Nonelcmode{    ///<LC Mode
        using Addr = Register::Address<0x40042040,0x00000000,0,unsigned>;
        ///Automatic Tracking Enable. 
        enum class atrkenVal {
            disabled=0x00000000,     ///<Disable automatic tracking.
            enabled=0x00000001,     ///<Enable automatic tracking. A new MAX value of any size will increase both the MAX and MIN by 1, and a new MIN value of any size will decrease both the MAX and MIN by 1.
        };
        namespace atrkenValC{
            constexpr MPL::Value<atrkenVal,atrkenVal::disabled> disabled{};
            constexpr MPL::Value<atrkenVal,atrkenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,atrkenVal> atrken{}; 
        ///Automatic Center Discriminator Enable. 
        enum class acdenVal {
            disabled=0x00000000,     ///<Disable automatic center discriminator mode. Firmware must set the CD0 and CD1 fields. 
            enabled=0x00000001,     ///<Enable automatic center discriminator mode. Hardware will keep the CD0 and CD1 fields centered between MAX and MIN.
        };
        namespace acdenValC{
            constexpr MPL::Value<acdenVal,acdenVal::disabled> disabled{};
            constexpr MPL::Value<acdenVal,acdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,acdenVal> acden{}; 
        ///LC Discriminator 0 Digital Hysterisis. 
        enum class lcd0hysVal {
            zero=0x00000000,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0.
            minus1=0x00000001,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0 - 1.
            minus2=0x00000002,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0 - 2.
            minus3=0x00000003,     ///<A high-to-low transition occurs if LCCOUNT0 is less than CD0 - 3.
        };
        namespace lcd0hysValC{
            constexpr MPL::Value<lcd0hysVal,lcd0hysVal::zero> zero{};
            constexpr MPL::Value<lcd0hysVal,lcd0hysVal::minus1> minus1{};
            constexpr MPL::Value<lcd0hysVal,lcd0hysVal::minus2> minus2{};
            constexpr MPL::Value<lcd0hysVal,lcd0hysVal::minus3> minus3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,lcd0hysVal> lcd0hys{}; 
        ///LC Discriminator 1 Digital Hysterisis. 
        enum class lcd1hysVal {
            zero=0x00000000,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1.
            minus1=0x00000001,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1 - 1.
            minus2=0x00000002,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1 - 2.
            minus3=0x00000003,     ///<A high-to-low transition occurs if LCCOUNT1 is less than CD1 - 3.
        };
        namespace lcd1hysValC{
            constexpr MPL::Value<lcd1hysVal,lcd1hysVal::zero> zero{};
            constexpr MPL::Value<lcd1hysVal,lcd1hysVal::minus1> minus1{};
            constexpr MPL::Value<lcd1hysVal,lcd1hysVal::minus2> minus2{};
            constexpr MPL::Value<lcd1hysVal,lcd1hysVal::minus3> minus3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,lcd1hysVal> lcd1hys{}; 
        ///Counter 0 Active Zone Select. 
        enum class c0zoneVal {
            zonea=0x00000000,     ///<Select zone A as the active zone for counter 0 (LCIN0 input).
            zoneb=0x00000001,     ///<Select zone B as the active zone for counter 0 (LCIN0 input).
            zonec=0x00000002,     ///<Select zone C as the active zone for counter 0 (LCIN0 input).
            zoned=0x00000003,     ///<Select zone D as the active zone for counter 0 (LCIN0 input).
        };
        namespace c0zoneValC{
            constexpr MPL::Value<c0zoneVal,c0zoneVal::zonea> zonea{};
            constexpr MPL::Value<c0zoneVal,c0zoneVal::zoneb> zoneb{};
            constexpr MPL::Value<c0zoneVal,c0zoneVal::zonec> zonec{};
            constexpr MPL::Value<c0zoneVal,c0zoneVal::zoned> zoned{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,c0zoneVal> c0zone{}; 
        ///Counter 1 Active Zone Select. 
        enum class c1zoneVal {
            zonea=0x00000000,     ///<Select zone A as the active zone for counter 1 (LCIN1 input).
            zoneb=0x00000001,     ///<Select zone B as the active zone for counter 1 (LCIN1 input).
            zonec=0x00000002,     ///<Select zone C as the active zone for counter 1 (LCIN1 input).
            zoned=0x00000003,     ///<Select zone D as the active zone for counter 1 (LCIN1 input).
        };
        namespace c1zoneValC{
            constexpr MPL::Value<c1zoneVal,c1zoneVal::zonea> zonea{};
            constexpr MPL::Value<c1zoneVal,c1zoneVal::zoneb> zoneb{};
            constexpr MPL::Value<c1zoneVal,c1zoneVal::zonec> zonec{};
            constexpr MPL::Value<c1zoneVal,c1zoneVal::zoned> zoned{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,c1zoneVal> c1zone{}; 
        ///Pulse 0 Active Zone Select. 
        enum class p0zoneVal {
            disabled=0x00000000,     ///<Disable the pulse 0 output (LCPUL0).
            cOnly=0x00000001,     ///<Select zone C only as the active zone for the pulse 0 output (LCPUL0).
            aOnly=0x00000002,     ///<Select zone A only as the active zone for the pulse 0 output (LCPUL0).
            aAndC=0x00000003,     ///<Select zones A and C as the active zones for the pulse 0 output (LCPUL0).
        };
        namespace p0zoneValC{
            constexpr MPL::Value<p0zoneVal,p0zoneVal::disabled> disabled{};
            constexpr MPL::Value<p0zoneVal,p0zoneVal::cOnly> cOnly{};
            constexpr MPL::Value<p0zoneVal,p0zoneVal::aOnly> aOnly{};
            constexpr MPL::Value<p0zoneVal,p0zoneVal::aAndC> aAndC{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p0zoneVal> p0zone{}; 
        ///Pulse 1 Active Zone Select. 
        enum class p1zoneVal {
            disabled=0x00000000,     ///<Disable the pulse 1 output (LCPUL1).
            cOnly=0x00000001,     ///<Select zone C only as the active zone for the pulse 1 output (LCPUL1).
            aOnly=0x00000002,     ///<Select zone A only as the active zone for the pulse 1 output (LCPUL1).
            aAndC=0x00000003,     ///<Select zones A and C as the active zones for the pulse 1 output (LCPUL1).
        };
        namespace p1zoneValC{
            constexpr MPL::Value<p1zoneVal,p1zoneVal::disabled> disabled{};
            constexpr MPL::Value<p1zoneVal,p1zoneVal::cOnly> cOnly{};
            constexpr MPL::Value<p1zoneVal,p1zoneVal::aOnly> aOnly{};
            constexpr MPL::Value<p1zoneVal,p1zoneVal::aAndC> aAndC{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p1zoneVal> p1zone{}; 
        ///LC Pulse Mode. 
        enum class pmdVal {
            disabled=0x00000000,     ///<Disable pulse mode.
            toggle=0x00000001,     ///<Toggle at the start of zone A or zone C.
            pulseLow=0x00000002,     ///<Set the pulse mode to idle high, pulse low.
            pulseHigh=0x00000003,     ///<Set the pulse mode to idle low, pulse high.
        };
        namespace pmdValC{
            constexpr MPL::Value<pmdVal,pmdVal::disabled> disabled{};
            constexpr MPL::Value<pmdVal,pmdVal::toggle> toggle{};
            constexpr MPL::Value<pmdVal,pmdVal::pulseLow> pulseLow{};
            constexpr MPL::Value<pmdVal,pmdVal::pulseHigh> pulseHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pmdVal> pmd{}; 
        ///Bias 0 Zone C Enable. 
        enum class b0zonecenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone C.
            enabled=0x00000001,     ///<Enable bias 0 during zone C.
        };
        namespace b0zonecenValC{
            constexpr MPL::Value<b0zonecenVal,b0zonecenVal::disabled> disabled{};
            constexpr MPL::Value<b0zonecenVal,b0zonecenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,b0zonecenVal> b0zonecen{}; 
        ///Bias 0 Zone B Enable. 
        enum class b0zonebenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone B.
            enabled=0x00000001,     ///<Enable bias 0 during zone B.
        };
        namespace b0zonebenValC{
            constexpr MPL::Value<b0zonebenVal,b0zonebenVal::disabled> disabled{};
            constexpr MPL::Value<b0zonebenVal,b0zonebenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,b0zonebenVal> b0zoneben{}; 
        ///Bias 0 Zone A Enable. 
        enum class b0zoneaenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone A.
            enabled=0x00000001,     ///<Enable bias 0 during zone A.
        };
        namespace b0zoneaenValC{
            constexpr MPL::Value<b0zoneaenVal,b0zoneaenVal::disabled> disabled{};
            constexpr MPL::Value<b0zoneaenVal,b0zoneaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,b0zoneaenVal> b0zoneaen{}; 
        ///Bias 0 Zone P Enable. 
        enum class b0zonepenVal {
            disabled=0x00000000,     ///<Disable bias 0 during zone P.
            enabled=0x00000001,     ///<Enable bias 0 during zone P.
        };
        namespace b0zonepenValC{
            constexpr MPL::Value<b0zonepenVal,b0zonepenVal::disabled> disabled{};
            constexpr MPL::Value<b0zonepenVal,b0zonepenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,b0zonepenVal> b0zonepen{}; 
        ///Bias 0 Polarity. 
        enum class b0polVal {
            pulseLow=0x00000000,     ///<Set bias 0 to idle high, pulse low.
            pulseHigh=0x00000001,     ///<Set bias 0 to idle low, pulse high.
        };
        namespace b0polValC{
            constexpr MPL::Value<b0polVal,b0polVal::pulseLow> pulseLow{};
            constexpr MPL::Value<b0polVal,b0polVal::pulseHigh> pulseHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,b0polVal> b0pol{}; 
        ///Bias 1 Zone C Enable. 
        enum class b1zonecenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone C.
            enabled=0x00000001,     ///<Enable bias 1 during zone C.
        };
        namespace b1zonecenValC{
            constexpr MPL::Value<b1zonecenVal,b1zonecenVal::disabled> disabled{};
            constexpr MPL::Value<b1zonecenVal,b1zonecenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,b1zonecenVal> b1zonecen{}; 
        ///Bias 1 Zone B Enable. 
        enum class b1zonebenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone B.
            enabled=0x00000001,     ///<Enable bias 1 during zone B.
        };
        namespace b1zonebenValC{
            constexpr MPL::Value<b1zonebenVal,b1zonebenVal::disabled> disabled{};
            constexpr MPL::Value<b1zonebenVal,b1zonebenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,b1zonebenVal> b1zoneben{}; 
        ///Bias 1 Zone A Enable. 
        enum class b1zoneaenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone A.
            enabled=0x00000001,     ///<Enable bias 1 during zone A.
        };
        namespace b1zoneaenValC{
            constexpr MPL::Value<b1zoneaenVal,b1zoneaenVal::disabled> disabled{};
            constexpr MPL::Value<b1zoneaenVal,b1zoneaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,b1zoneaenVal> b1zoneaen{}; 
        ///Bias 1 Zone P Enable. 
        enum class b1zonepenVal {
            disabled=0x00000000,     ///<Disable bias 1 during zone P.
            enabled=0x00000001,     ///<Enable bias 1 during zone P.
        };
        namespace b1zonepenValC{
            constexpr MPL::Value<b1zonepenVal,b1zonepenVal::disabled> disabled{};
            constexpr MPL::Value<b1zonepenVal,b1zonepenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,b1zonepenVal> b1zonepen{}; 
        ///Bias 1 Polarity. 
        enum class b1polVal {
            pulseLow=0x00000000,     ///<Set bias 1 to idle high, pulse low.
            pulseHigh=0x00000001,     ///<Set bias 1 to idle low, pulse high.
        };
        namespace b1polValC{
            constexpr MPL::Value<b1polVal,b1polVal::pulseLow> pulseLow{};
            constexpr MPL::Value<b1polVal,b1polVal::pulseHigh> pulseHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,b1polVal> b1pol{}; 
        ///Bias Mode. 
        enum class bmdVal {
            mode0=0x00000000,     ///<Disable the bias signals.
            mode1=0x00000001,     ///<Use the bias signals externally only (LCBIAS0 and LCBIAS1 outputs).
            mode2=0x00000002,     ///<Use the bias signals internally only.
            mode3=0x00000003,     ///<Use the bias signals externally (LCBIAS0 and LCBIAS1 outputs) and internally.
        };
        namespace bmdValC{
            constexpr MPL::Value<bmdVal,bmdVal::mode0> mode0{};
            constexpr MPL::Value<bmdVal,bmdVal::mode1> mode1{};
            constexpr MPL::Value<bmdVal,bmdVal::mode2> mode2{};
            constexpr MPL::Value<bmdVal,bmdVal::mode3> mode3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,bmdVal> bmd{}; 
        ///LC Mode. 
        enum class lcmdVal {
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
        namespace lcmdValC{
            constexpr MPL::Value<lcmdVal,lcmdVal::mode0> mode0{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode1> mode1{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode2> mode2{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode3> mode3{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode4> mode4{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode5> mode5{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode6> mode6{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode7> mode7{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode8> mode8{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode9> mode9{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode10> mode10{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode11> mode11{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode12> mode12{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode13> mode13{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode14> mode14{};
            constexpr MPL::Value<lcmdVal,lcmdVal::mode15> mode15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,lcmdVal> lcmd{}; 
    }
    namespace Nonelcclkcontrol{    ///<LC Clock Control
        using Addr = Register::Address<0x40042050,0xf000e000,0,unsigned>;
        ///LC Oscillator Clock Cycles. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> clkcycles{}; 
        ///LC Oscillator Calibration Start. 
        enum class clkcalVal {
            notInProgress=0x00000000,     ///<A calibration operation is not in progress.
            start=0x00000001,     ///<Start an oscillator calibration or a calibration operation is in progress.
        };
        namespace clkcalValC{
            constexpr MPL::Value<clkcalVal,clkcalVal::notInProgress> notInProgress{};
            constexpr MPL::Value<clkcalVal,clkcalVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,clkcalVal> clkcal{}; 
        ///LC Oscillator Reload Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace Nonelclimits{    ///<LC Counter Limits
        using Addr = Register::Address<0x40042060,0x00000000,0,unsigned>;
        ///LC Counter 0 Minimum Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> min0{}; 
        ///LC Counter 0 Maximum Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> max0{}; 
        ///LC Counter 1 Minimum Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> min1{}; 
        ///LC Counter 1 Maximum Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> max1{}; 
    }
    namespace Nonelccount{    ///<LC Counters
        using Addr = Register::Address<0x40042070,0x00000000,0,unsigned>;
        ///LC Counter 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lccount0{}; 
        ///LC Counter 0 Discriminator. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cd0{}; 
        ///LC Counter 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lccount1{}; 
        ///LC Counter 1 Discriminator. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> cd1{}; 
    }
    namespace Nonedbconfig{    ///<Pulse Counter Debounce Configuration
        using Addr = Register::Address<0x40042080,0xfff80000,0,unsigned>;
        ///Integrator Low Debounce. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ldbth{}; 
        ///Integrator High Debounce. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hdbth{}; 
        ///PC Integrator Disconnect Enable. 
        enum class integdcenVal {
            disabled=0x00000000,     ///<Connect integrator to 24 bit counter state machine logic.
            enabled=0x00000001,     ///<Disconnect the integrators from the IN0 and IN1 inputs.
        };
        namespace integdcenValC{
            constexpr MPL::Value<integdcenVal,integdcenVal::disabled> disabled{};
            constexpr MPL::Value<integdcenVal,integdcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,integdcenVal> integdcen{}; 
        ///PC Integrator 0 Output. 
        enum class integ0Val {
            low=0x00000000,     ///<The integrator 0 output is low.
            high=0x00000001,     ///<The integrator 0 output is high.
        };
        namespace integ0ValC{
            constexpr MPL::Value<integ0Val,integ0Val::low> low{};
            constexpr MPL::Value<integ0Val,integ0Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,integ0Val> integ0{}; 
        ///PC Integrator 1 Output. 
        enum class integ1Val {
            low=0x00000000,     ///<The integrator 1 output is low.
            high=0x00000001,     ///<The integrator 1 output is high.
        };
        namespace integ1ValC{
            constexpr MPL::Value<integ1Val,integ1Val::low> low{};
            constexpr MPL::Value<integ1Val,integ1Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,integ1Val> integ1{}; 
    }
    namespace Nonecount0{    ///<Pulse Counter 0
        using Addr = Register::Address<0x40042090,0xff000000,0,unsigned>;
        ///Pulse Counter 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count0{}; 
    }
    namespace Nonecount1{    ///<Pulse Counter 1
        using Addr = Register::Address<0x400420a0,0xff000000,0,unsigned>;
        ///Pulse Counter 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count1{}; 
    }
    namespace Nonecomp0{    ///<Comparator 0
        using Addr = Register::Address<0x400420b0,0xff000000,0,unsigned>;
        ///Pulse Counter Comparator 0 Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> comp0{}; 
    }
    namespace Nonecomp1{    ///<Pulse Counter Comparator 1 Threshold
        using Addr = Register::Address<0x400420c0,0xff000000,0,unsigned>;
        ///Pulse Counter Comparator 1 Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> comp1{}; 
    }
    namespace Nonestatus{    ///<Pulse Counter Status
        using Addr = Register::Address<0x400420d0,0xc0000000,0,unsigned>;
        ///Direction Change Interrupt Flag. 
        enum class dirchgiVal {
            notSet=0x00000000,     ///<A direction change did not occur.
            set=0x00000001,     ///<A direction change occurred.
        };
        namespace dirchgiValC{
            constexpr MPL::Value<dirchgiVal,dirchgiVal::notSet> notSet{};
            constexpr MPL::Value<dirchgiVal,dirchgiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirchgiVal> dirchgi{}; 
        ///Counter Overflow Interrupt Flag. 
        enum class ovfiVal {
            notSet=0x00000000,     ///<Neither of the counters overflowed.
            set=0x00000001,     ///<One of the counters overflowed.
        };
        namespace ovfiValC{
            constexpr MPL::Value<ovfiVal,ovfiVal::notSet> notSet{};
            constexpr MPL::Value<ovfiVal,ovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovfiVal> ovfi{}; 
        ///Digital Comparator 0 Interrupt Flag. 
        enum class cmp0iVal {
            notSet=0x00000000,     ///<A digital comparator 0 and counter 0 match did not occur.
            set=0x00000001,     ///<A digital comparator 0 and counter 0 match occurred.
        };
        namespace cmp0iValC{
            constexpr MPL::Value<cmp0iVal,cmp0iVal::notSet> notSet{};
            constexpr MPL::Value<cmp0iVal,cmp0iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp0iVal> cmp0i{}; 
        ///Digital Comparator 1 Interrupt Flag. 
        enum class cmp1iVal {
            notSet=0x00000000,     ///<A digital comparator 1 and counter 1 match did not occur.
            set=0x00000001,     ///<A digital comparator 1 and counter 1 match occurred.
        };
        namespace cmp1iValC{
            constexpr MPL::Value<cmp1iVal,cmp1iVal::notSet> notSet{};
            constexpr MPL::Value<cmp1iVal,cmp1iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cmp1iVal> cmp1i{}; 
        ///Integrator Transition Interrupt Flag. 
        enum class transiVal {
            notSet=0x00000000,     ///<An integrator output transition did not occur.
            set=0x00000001,     ///<An integrator output transition occurred.
        };
        namespace transiValC{
            constexpr MPL::Value<transiVal,transiVal::notSet> notSet{};
            constexpr MPL::Value<transiVal,transiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,transiVal> transi{}; 
        ///Quadrature Error Interrupt Flag. 
        enum class qerriVal {
            notSet=0x00000000,     ///<A quadrature error did not occur.
            set=0x00000001,     ///<A quadrature error occurred.
        };
        namespace qerriValC{
            constexpr MPL::Value<qerriVal,qerriVal::notSet> notSet{};
            constexpr MPL::Value<qerriVal,qerriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,qerriVal> qerri{}; 
        ///Flutter Stop Interrupt Flag. 
        enum class flstopiVal {
            notSet=0x00000000,     ///<A flutter detection end event did not occur. 
            set=0x00000001,     ///<A flutter detection end event occurred.
        };
        namespace flstopiValC{
            constexpr MPL::Value<flstopiVal,flstopiVal::notSet> notSet{};
            constexpr MPL::Value<flstopiVal,flstopiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,flstopiVal> flstopi{}; 
        ///Flutter Start Interrupt Flag. 
        enum class flstartiVal {
            notSet=0x00000000,     ///<A flutter detection start event did not occur. 
            set=0x00000001,     ///<A flutter detection start event occurred.
        };
        namespace flstartiValC{
            constexpr MPL::Value<flstartiVal,flstartiVal::notSet> notSet{};
            constexpr MPL::Value<flstartiVal,flstartiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,flstartiVal> flstarti{}; 
        ///Direction Change Interrupt Enable. 
        enum class dirchgienVal {
            disabled=0x00000000,     ///<Disable direction change as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable direction change as an interrupt or wake up source.
        };
        namespace dirchgienValC{
            constexpr MPL::Value<dirchgienVal,dirchgienVal::disabled> disabled{};
            constexpr MPL::Value<dirchgienVal,dirchgienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,dirchgienVal> dirchgien{}; 
        ///Counter Overflow Interrupt Enable. 
        enum class ovfienVal {
            disabled=0x00000000,     ///<Disable counter overflows as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable counter overflows as an interrupt or wake up source.
        };
        namespace ovfienValC{
            constexpr MPL::Value<ovfienVal,ovfienVal::disabled> disabled{};
            constexpr MPL::Value<ovfienVal,ovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ovfienVal> ovfien{}; 
        ///Digital Comparator 0 Interrupt Enable. 
        enum class cmp0ienVal {
            disabled=0x00000000,     ///<Disable comparator 0 as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable comparator 0 as an interrupt or wake up source.
        };
        namespace cmp0ienValC{
            constexpr MPL::Value<cmp0ienVal,cmp0ienVal::disabled> disabled{};
            constexpr MPL::Value<cmp0ienVal,cmp0ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,cmp0ienVal> cmp0ien{}; 
        ///Digital Comparator 1 Interrupt Enable. 
        enum class cmp1ienVal {
            disabled=0x00000000,     ///<Disable comparator 1 as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable comparator 1 as an interrupt or wake up source.
        };
        namespace cmp1ienValC{
            constexpr MPL::Value<cmp1ienVal,cmp1ienVal::disabled> disabled{};
            constexpr MPL::Value<cmp1ienVal,cmp1ienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cmp1ienVal> cmp1ien{}; 
        ///Integrator Transition Interrupt Enable. 
        enum class transienVal {
            disabled=0x00000000,     ///<Disable integrator transitions as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable integrator transitions as an interrupt or wake up source.
        };
        namespace transienValC{
            constexpr MPL::Value<transienVal,transienVal::disabled> disabled{};
            constexpr MPL::Value<transienVal,transienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,transienVal> transien{}; 
        ///Quadrature Error Interrupt Enable. 
        enum class qerrienVal {
            disabled=0x00000000,     ///<Disable quadrature error as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable quadrature error as an interrupt or wake up source.
        };
        namespace qerrienValC{
            constexpr MPL::Value<qerrienVal,qerrienVal::disabled> disabled{};
            constexpr MPL::Value<qerrienVal,qerrienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,qerrienVal> qerrien{}; 
        ///Flutter Stop Interrupt Enable. 
        enum class flstopienVal {
            disabled=0x00000000,     ///<Disable flutter detection end events as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable flutter detection end events as an interrupt or wake up source.
        };
        namespace flstopienValC{
            constexpr MPL::Value<flstopienVal,flstopienVal::disabled> disabled{};
            constexpr MPL::Value<flstopienVal,flstopienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,flstopienVal> flstopien{}; 
        ///Flutter Start Interrupt Enable. 
        enum class flstartienVal {
            disabled=0x00000000,     ///<Disable flutter detection start events as an interrupt or wake up source.
            enabled=0x00000001,     ///<Enable flutter detection start events as an interrupt or wake up source.
        };
        namespace flstartienValC{
            constexpr MPL::Value<flstartienVal,flstartienVal::disabled> disabled{};
            constexpr MPL::Value<flstartienVal,flstartienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,flstartienVal> flstartien{}; 
        ///Integrator 0 Output. 
        enum class in0Val {
            low=0x00000000,     ///<The integrator 0 output is low.
            high=0x00000001,     ///<The integrator 0 output is high.
        };
        namespace in0ValC{
            constexpr MPL::Value<in0Val,in0Val::low> low{};
            constexpr MPL::Value<in0Val,in0Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,in0Val> in0{}; 
        ///Integrator 1 Output. 
        enum class in1Val {
            low=0x00000000,     ///<The integrator 1 output is low.
            high=0x00000001,     ///<The integrator 1 output is high.
        };
        namespace in1ValC{
            constexpr MPL::Value<in1Val,in1Val::low> low{};
            constexpr MPL::Value<in1Val,in1Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,in1Val> in1{}; 
        ///Previous Integrator 0 Output. 
        enum class in0prevVal {
            low=0x00000000,     ///<The previous integrator 0 output was low.
            high=0x00000001,     ///<The previous integrator 0 output was high.
        };
        namespace in0prevValC{
            constexpr MPL::Value<in0prevVal,in0prevVal::low> low{};
            constexpr MPL::Value<in0prevVal,in0prevVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,in0prevVal> in0prev{}; 
        ///Previous Integrator 1 Output. 
        enum class in1prevVal {
            low=0x00000000,     ///<The previous integrator 1 output was low.
            high=0x00000001,     ///<The previous integrator 1 output was high.
        };
        namespace in1prevValC{
            constexpr MPL::Value<in1prevVal,in1prevVal::low> low{};
            constexpr MPL::Value<in1prevVal,in1prevVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,in1prevVal> in1prev{}; 
        ///Pulse Counter State. 
        enum class stateVal {
            st0=0x00000000,     ///<The pulse counter is in state 0.
            st1=0x00000001,     ///<The pulse counter is in state 1.
            st2=0x00000002,     ///<The pulse counter is in state 2.
            st3=0x00000003,     ///<The pulse counter is in state 3.
        };
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::st0> st0{};
            constexpr MPL::Value<stateVal,stateVal::st1> st1{};
            constexpr MPL::Value<stateVal,stateVal::st2> st2{};
            constexpr MPL::Value<stateVal,stateVal::st3> st3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,stateVal> state{}; 
        ///Direction Flag. 
        enum class dirfVal {
            counterClockwise=0x00000000,     ///<The current direction is counter-clockwise.
            clockwise=0x00000001,     ///<The current direction is clockwise.
        };
        namespace dirfValC{
            constexpr MPL::Value<dirfVal,dirfVal::counterClockwise> counterClockwise{};
            constexpr MPL::Value<dirfVal,dirfVal::clockwise> clockwise{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,dirfVal> dirf{}; 
        ///Flutter Detected Flag. 
        enum class flfVal {
            notSet=0x00000000,     ///<The switch operates normally.
            set=0x00000001,     ///<A flutter event was detected.
        };
        namespace flfValC{
            constexpr MPL::Value<flfVal,flfVal::notSet> notSet{};
            constexpr MPL::Value<flfVal,flfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,flfVal> flf{}; 
        ///Direction History . 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> dirhist{}; 
        ///Comparator 0 Output. 
        enum class cmp0outVal {
            low=0x00000000,     ///<The output of comparator 0 is low.
            high=0x00000001,     ///<The output of comparator 0 is high.
        };
        namespace cmp0outValC{
            constexpr MPL::Value<cmp0outVal,cmp0outVal::low> low{};
            constexpr MPL::Value<cmp0outVal,cmp0outVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,cmp0outVal> cmp0out{}; 
        ///Comparator 1 Output. 
        enum class cmp1outVal {
            low=0x00000000,     ///<The output of comparator 1 is low.
            high=0x00000001,     ///<The output of comparator1 is high.
        };
        namespace cmp1outValC{
            constexpr MPL::Value<cmp1outVal,cmp1outVal::low> low{};
            constexpr MPL::Value<cmp1outVal,cmp1outVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,cmp1outVal> cmp1out{}; 
    }
    namespace Nonedebugen{    ///<Calibration
        using Addr = Register::Address<0x400420e0,0xffffbfff,0,unsigned>;
        ///Debug Output Enable. 
        enum class dbgoenVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace dbgoenValC{
            constexpr MPL::Value<dbgoenVal,dbgoenVal::disabled> disabled{};
            constexpr MPL::Value<dbgoenVal,dbgoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,dbgoenVal> dbgoen{}; 
    }
}
