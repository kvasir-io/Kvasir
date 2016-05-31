#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Standard counter/timer 2 
    namespace Ct32b2Ir{    ///<Interrupt Register. The IR can be written to clear interrupts. The						IR can be read to identify which of eight possible interrupt sources are						pending.
        using Addr = Register::Address<0x40004000,0x00000000,0x00000000,unsigned>;
        ///Interrupt flag for match channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0int{}; 
        ///Interrupt flag for match channel 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1int{}; 
        ///Interrupt flag for match channel 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2int{}; 
        ///Interrupt flag for match channel 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3int{}; 
        ///Interrupt flag for capture channel 0 event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cr0int{}; 
        ///Interrupt flag for capture channel 1 event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cr1int{}; 
        ///Interrupt flag for capture channel 2 event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cr2int{}; 
        ///Interrupt flag for capture channel 3 event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cr3int{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Tcr{    ///<Timer Control Register. The TCR is used to control the Timer						Counter functions. The Timer Counter can be disabled or reset through the						TCR.
        using Addr = Register::Address<0x40004004,0x00000000,0x00000000,unsigned>;
        ///Counter enable.
        enum class CenVal {
            disabled=0x00000000,     ///<Disabled.The counters are disabled.
            enabled=0x00000001,     ///<Enabled. The Timer Counter and Prescale Counter are										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CenVal> cen{}; 
        namespace CenValC{
            constexpr Register::FieldValue<decltype(cen)::Type,CenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cen)::Type,CenVal::enabled> enabled{};
        }
        ///Counter reset.
        enum class CrstVal {
            disabled=0x00000000,     ///<Disabled. Do nothing.
            enabled=0x00000001,     ///<Enabled. The Timer Counter and the Prescale Counter										are synchronously reset on the next positive edge of PCLK.										The counters remain reset until TCR[1] is returned to										zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CrstVal> crst{}; 
        namespace CrstValC{
            constexpr Register::FieldValue<decltype(crst)::Type,CrstVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crst)::Type,CrstVal::enabled> enabled{};
        }
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Tc{    ///<Timer Counter. The 32 bit TC is incremented every PR+1 cycles of						PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40004008,0x00000000,0x00000000,unsigned>;
        ///Timer counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcval{}; 
    }
    namespace Ct32b2Pr{    ///<Prescale Register. When the Prescale Counter (PC) is equal to this						value, the next clock increments the TC and clears the PC.
        using Addr = Register::Address<0x4000400c,0x00000000,0x00000000,unsigned>;
        ///Prescale counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prval{}; 
    }
    namespace Ct32b2Pc{    ///<Prescale Counter. The 32 bit PC is a counter which is incremented						to the value stored in PR. When the value in PR is reached, the TC is						incremented and the PC is cleared. The PC is observable and controllable						through the bus interface.
        using Addr = Register::Address<0x40004010,0x00000000,0x00000000,unsigned>;
        ///Prescale counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcval{}; 
    }
    namespace Ct32b2Mcr{    ///<Match Control Register. The MCR is used to control if an interrupt						is generated and if the TC is reset when a Match occurs.
        using Addr = Register::Address<0x40004014,0x00000000,0x00000000,unsigned>;
        ///Interrupt on MR0: an interrupt is generated when MR0								matches the value in the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0i{}; 
        ///Reset on MR0: the TC will be reset if MR0 matches it. 0 =								disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr0r{}; 
        ///Stop on MR0: the TC and PC will be stopped and TCR[0] will								be set to 0 if MR0 matches the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr0s{}; 
        ///Interrupt on MR1: an interrupt is generated when MR1								matches the value in the TC. 0 = disabled. 1 = enabled. 0 =								disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr1i{}; 
        ///Reset on MR1: the TC will be reset if MR1 matches it. 0 =								disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr1r{}; 
        ///Stop on MR1: the TC and PC will be stopped and TCR[0] will								be set to 0 if MR1 matches the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr1s{}; 
        ///Interrupt on MR2: an interrupt is generated when MR2								matches the value in the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr2i{}; 
        ///Reset on MR2: the TC will be reset if MR2 matches it. 0 =								disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr2r{}; 
        ///Stop on MR2: the TC and PC will be stopped and TCR[0] will								be set to 0 if MR2 matches the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr2s{}; 
        ///Interrupt on MR3: an interrupt is generated when MR3								matches the value in the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr3i{}; 
        ///Reset on MR3: the TC will be reset if MR3 matches it. 0 =								disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr3r{}; 
        ///Stop on MR3: the TC and PC will be stopped and TCR[0] will								be set to 0 if MR3 matches the TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr3s{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Ccr{    ///<Capture Control Register. The CCR controls which edges of the						capture inputs are used to load the Capture Registers and whether or not an						interrupt is generated when a capture takes place.
        using Addr = Register::Address<0x40004028,0x00000000,0x00000000,unsigned>;
        ///Rising edge of capture channel 0: a sequence of 0 then 1								causes CR0 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0re{}; 
        ///Falling edge of capture channel 0: a sequence of 1 then 0								causes CR0 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0fe{}; 
        ///Generate interrupt on channel 0 capture event: a CR0 load								generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0i{}; 
        ///Rising edge of capture channel 1: a sequence of 0 then 1								causes CR1 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap1re{}; 
        ///Falling edge of capture channel 1: a sequence of 1 then 0								causes CR1 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap1fe{}; 
        ///Generate interrupt on channel 1 capture event: a CR1 load								generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap1i{}; 
        ///Rising edge of capture channel 2: a sequence of 0 then 1								causes CR2 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap2re{}; 
        ///Falling edge of capture channel 2: a sequence of 1 then 0								causes CR2 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap2fe{}; 
        ///Generate interrupt on channel 2 capture event: a CR2 load								generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap2i{}; 
        ///Rising edge of capture channel 3: a sequence of 0 then 1								causes CR3 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap3re{}; 
        ///Falling edge of capture channel 3: a sequence of 1 then 0								causes CR3 to be loaded with the contents of TC. 0 = disabled. 1 =								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap3fe{}; 
        ///Generate interrupt on channel 3 capture event: a CR3 load								generates an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap3i{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Emr{    ///<External Match Register. The EMR controls the match function and						the external match pins.
        using Addr = Register::Address<0x4000403c,0x00000000,0x00000000,unsigned>;
        ///External Match 0. This bit reflects the state of output								MAT0, whether or not this output is connected to a pin. When a match								occurs between the TC and MR0, this bit can either toggle, go LOW,								go HIGH, or do nothing, as selected by EMR[5:4]. This bit is driven								to the MAT pins if the match function is selected via IOCON. 0 =								LOW. 1 = HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em0{}; 
        ///External Match 1. This bit reflects the state of output								MAT1, whether or not this output is connected to a pin. When a match								occurs between the TC and MR1, this bit can either toggle, go LOW,								go HIGH, or do nothing, as selected by EMR[7:6]. This bit is driven								to the MAT pins if the match function is selected via IOCON. 0 =								LOW. 1 = HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> em1{}; 
        ///External Match 2. This bit reflects the state of output								MAT2, whether or not this output is connected to a pin. When a match								occurs between the TC and MR2, this bit can either toggle, go LOW,								go HIGH, or do nothing, as selected by EMR[9:8]. This bit is driven								to the MAT pins if the match function is selected via IOCON. 0 =								LOW. 1 = HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> em2{}; 
        ///External Match 3. This bit reflects the state of output								MAT3, whether or not this output is connected to a pin. When a match								occurs between the TC and MR3, this bit can either toggle, go LOW,								go HIGH, or do nothing, as selected by MR[11:10]. This bit is driven								to the MAT pins if the match function is selected via IOCON. 0 =								LOW. 1 = HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> em3{}; 
        ///External Match Control 0. Determines the functionality of								External Match 0.
        enum class Emc0Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clear=0x00000001,     ///<Clear. Clear the corresponding External Match										bit/output to 0 (MAT0 pin is LOW if pinned										out).
            set=0x00000002,     ///<Set. Set the corresponding External Match										bit/output to 1 (MAT0 pin is HIGH if pinned										out).
            toggle=0x00000003,     ///<Toggle. Toggle the corresponding External Match										bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Emc0Val> emc0{}; 
        namespace Emc0ValC{
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::clear> clear{};
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::set> set{};
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::toggle> toggle{};
        }
        ///External Match Control 1. Determines the functionality of								External Match 1.
        enum class Emc1Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clear=0x00000001,     ///<Clear. Clear the corresponding External Match										bit/output to 0 (MAT1 pin is LOW if pinned										out).
            set=0x00000002,     ///<Set. Set the corresponding External Match										bit/output to 1 (MAT1 pin is HIGH if pinned										out).
            toggle=0x00000003,     ///<Toggle. Toggle the corresponding External Match										bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Emc1Val> emc1{}; 
        namespace Emc1ValC{
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::clear> clear{};
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::set> set{};
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::toggle> toggle{};
        }
        ///External Match Control 2. Determines the functionality of								External Match 2.
        enum class Emc2Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clear=0x00000001,     ///<Clear. Clear the corresponding External Match										bit/output to 0 (MAT2 pin is LOW if pinned										out).
            set=0x00000002,     ///<Set. Set the corresponding External Match										bit/output to 1 (MAT2 pin is HIGH if pinned										out).
            toggle=0x00000003,     ///<Toggle. Toggle the corresponding External Match										bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Emc2Val> emc2{}; 
        namespace Emc2ValC{
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::clear> clear{};
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::set> set{};
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::toggle> toggle{};
        }
        ///External Match Control 3. Determines the functionality of								External Match 3.
        enum class Emc3Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clear=0x00000001,     ///<Clear. Clear the corresponding External Match										bit/output to 0 (MAT3 pin is LOW if pinned										out).
            set=0x00000002,     ///<Set. Set the corresponding External Match										bit/output to 1 (MAT3 pin is HIGH if pinned										out).
            toggle=0x00000003,     ///<Toggle. Toggle the corresponding External Match										bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Emc3Val> emc3{}; 
        namespace Emc3ValC{
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::clear> clear{};
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::set> set{};
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::toggle> toggle{};
        }
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Ctcr{    ///<Count Control Register. The CTCR selects between Timer and Counter						mode, and in Counter mode selects the signal and edge(s) for						counting.
        using Addr = Register::Address<0x40004070,0x00000000,0x00000000,unsigned>;
        ///Counter/Timer Mode This field selects which rising PCLK								edges can increment Timer's Prescale Counter (PC), or clear PC and								increment Timer Counter (TC). Timer Mode: the TC is incremented when								the Prescale Counter matches the Prescale Register.
        enum class CtmodeVal {
            timerMode=0x00000000,     ///<Timer Mode. Incremented every rising PCLK										edge.
            counterModeRising=0x00000001,     ///<Counter Mode rising edge. TC is incremented on										rising edges on the CAP input selected by bits										3:2.
            counterModeFalling=0x00000002,     ///<Counter Mode falling edge. TC is incremented on										falling edges on the CAP input selected by bits										3:2.
            counterModeDualEd=0x00000003,     ///<Counter Mode dual edge. TC is incremented on both										edges on the CAP input selected by bits 3:2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CtmodeVal> ctmode{}; 
        namespace CtmodeValC{
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::timerMode> timerMode{};
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::counterModeRising> counterModeRising{};
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::counterModeFalling> counterModeFalling{};
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::counterModeDualEd> counterModeDualEd{};
        }
        ///Count Input Select When bits 1:0 in this register are not								00, these bits select which CAP pin is sampled for clocking. Note:								If Counter mode is selected for a particular CAPn input in the CTCR,								the 3 bits for that input in the Capture Control Register (CCR) must								be programmed as 000. However, capture and/or interrupt can be								selected for the other 3 CAPn inputs in the same								timer.
        enum class CinselVal {
            channel0=0x00000000,     ///<Channel 0. CAPn.0 for TIMERn
            channel1=0x00000001,     ///<Channel 1. CAPn.1 for TIMERn
            channel2=0x00000002,     ///<Channel 2. CAPn.2 for TIMERn
            channel3=0x00000003,     ///<Channel 3. CAPn.3 for TIMERn
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CinselVal> cinsel{}; 
        namespace CinselValC{
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::channel0> channel0{};
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::channel1> channel1{};
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::channel2> channel2{};
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::channel3> channel3{};
        }
        ///Setting this bit to 1 enables clearing of the timer and the								prescaler when the capture-edge event specified in bits 7:5								occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> encc{}; 
        ///Edge select. When bit 4 is 1, these bits select which								capture input edge will cause the timer and prescaler to be cleared.								These bits have no effect when bit 4 is low. Values 0x2 to 0x3 and								0x6 to 0x7 are reserved.
        enum class SelccVal {
            channel0RisingEdg=0x00000000,     ///<Channel 0 Rising Edge. Rising edge of the signal on										capture channel 0 clears the timer (if bit 4 is										set).
            channel0FallingEd=0x00000001,     ///<Channel 0 Falling Edge. Falling edge of the signal										on capture channel 0 clears the timer (if bit 4 is										set).
            channel1RisingEdg=0x00000002,     ///<Channel 1 Rising Edge. Rising edge of the signal on										capture channel 1 clears the timer (if bit 4 is										set).
            channel1FallingEd=0x00000003,     ///<Channel 1 Falling Edge. Falling edge of the signal										on capture channel 1 clears the timer (if bit 4 is										set).
            channel2RisingEdg=0x00000004,     ///<Channel 2 Rising Edge. Rising edge of the signal on										capture channel 2 clears the timer (if bit 4 is										set).
            channel2FallingEd=0x00000005,     ///<Channel 2 Falling Edge. Falling edge of the signal										on capture channel 2 clears the timer (if bit 4 is										set).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,SelccVal> selcc{}; 
        namespace SelccValC{
            constexpr Register::FieldValue<decltype(selcc)::Type,SelccVal::channel0RisingEdg> channel0RisingEdg{};
            constexpr Register::FieldValue<decltype(selcc)::Type,SelccVal::channel0FallingEd> channel0FallingEd{};
            constexpr Register::FieldValue<decltype(selcc)::Type,SelccVal::channel1RisingEdg> channel1RisingEdg{};
            constexpr Register::FieldValue<decltype(selcc)::Type,SelccVal::channel1FallingEd> channel1FallingEd{};
            constexpr Register::FieldValue<decltype(selcc)::Type,SelccVal::channel2RisingEdg> channel2RisingEdg{};
            constexpr Register::FieldValue<decltype(selcc)::Type,SelccVal::channel2FallingEd> channel2FallingEd{};
        }
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Pwmc{    ///<PWM Control Register. The PWMCON enables PWM mode for the external						match pins.
        using Addr = Register::Address<0x40004074,0x00000000,0x00000000,unsigned>;
        ///PWM mode enable for channel0.
        enum class Pwmen0Val {
            match=0x00000000,     ///<Match. CT32Bn_MAT0 is controlled by										EM0.
            pwm=0x00000001,     ///<PWM. PWM mode is enabled for										CT32Bn_MAT0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pwmen0Val> pwmen0{}; 
        namespace Pwmen0ValC{
            constexpr Register::FieldValue<decltype(pwmen0)::Type,Pwmen0Val::match> match{};
            constexpr Register::FieldValue<decltype(pwmen0)::Type,Pwmen0Val::pwm> pwm{};
        }
        ///PWM mode enable for channel1.
        enum class Pwmen1Val {
            match=0x00000000,     ///<Match. CT32Bn_MAT01 is controlled by										EM1.
            pwm=0x00000001,     ///<PWM. PWM mode is enabled for										CT32Bn_MAT1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pwmen1Val> pwmen1{}; 
        namespace Pwmen1ValC{
            constexpr Register::FieldValue<decltype(pwmen1)::Type,Pwmen1Val::match> match{};
            constexpr Register::FieldValue<decltype(pwmen1)::Type,Pwmen1Val::pwm> pwm{};
        }
        ///PWM mode enable for channel2.
        enum class Pwmen2Val {
            match=0x00000000,     ///<Match. CT32Bn_MAT2 is controlled by										EM2.
            pwm=0x00000001,     ///<PWM. PWM mode is enabled for										CT32Bn_MAT2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmen2Val> pwmen2{}; 
        namespace Pwmen2ValC{
            constexpr Register::FieldValue<decltype(pwmen2)::Type,Pwmen2Val::match> match{};
            constexpr Register::FieldValue<decltype(pwmen2)::Type,Pwmen2Val::pwm> pwm{};
        }
        ///PWM mode enable for channel3. Note: It is recommended to								use match channel 3 to set the PWM cycle.
        enum class Pwmen3Val {
            match=0x00000000,     ///<Match. CT32Bn_MAT3 is controlled by										EM3.
            pwm=0x00000001,     ///<PWM. PWM mode is enabled for										CT132Bn_MAT3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmen3Val> pwmen3{}; 
        namespace Pwmen3ValC{
            constexpr Register::FieldValue<decltype(pwmen3)::Type,Pwmen3Val::match> match{};
            constexpr Register::FieldValue<decltype(pwmen3)::Type,Pwmen3Val::pwm> pwm{};
        }
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b2Mr0{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the						TC, stop both the TC and PC, and/or generate an interrupt every time MR0						matches the TC.
        using Addr = Register::Address<0x40004018,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b2Mr1{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the						TC, stop both the TC and PC, and/or generate an interrupt every time MR0						matches the TC.
        using Addr = Register::Address<0x4000401c,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b2Mr2{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the						TC, stop both the TC and PC, and/or generate an interrupt every time MR0						matches the TC.
        using Addr = Register::Address<0x40004020,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b2Mr3{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the						TC, stop both the TC and PC, and/or generate an interrupt every time MR0						matches the TC.
        using Addr = Register::Address<0x40004024,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b2Cr0{    ///<Capture Register 0. CR0 is loaded with the value of TC when there						is an event on the CAPn.0 input.
        using Addr = Register::Address<0x4000402c,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Ct32b2Cr1{    ///<Capture Register 0. CR0 is loaded with the value of TC when there						is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40004030,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Ct32b2Cr2{    ///<Capture Register 0. CR0 is loaded with the value of TC when there						is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40004034,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Ct32b2Cr3{    ///<Capture Register 0. CR0 is loaded with the value of TC when there						is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40004038,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
}
