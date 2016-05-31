#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//32-bit counter/timers CT32B0/1
    namespace Ct32b0Ir{    ///<Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending.
        using Addr = Register::Address<0x40014000,0x00000000,0x00000000,unsigned>;
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Tcr{    ///<Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR.
        using Addr = Register::Address<0x40014004,0x00000000,0x00000000,unsigned>;
        ///Counter enable.
        enum class CenVal {
            theCountersAreDis=0x00000000,     ///<The counters are disabled.
            theTimerCounterAn=0x00000001,     ///<The Timer Counter and Prescale Counter are enabled for counting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CenVal> cen{}; 
        namespace CenValC{
            constexpr Register::FieldValue<decltype(cen)::Type,CenVal::theCountersAreDis> theCountersAreDis{};
            constexpr Register::FieldValue<decltype(cen)::Type,CenVal::theTimerCounterAn> theTimerCounterAn{};
        }
        ///Counter reset.
        enum class CrstVal {
            doNothing=0x00000000,     ///<Do nothing.
            theTimerCounterAn=0x00000001,     ///<The Timer Counter and the Prescale Counter are synchronously reset on the next positive edge of PCLK. The counters remain reset until TCR[1] is returned to zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CrstVal> crst{}; 
        namespace CrstValC{
            constexpr Register::FieldValue<decltype(crst)::Type,CrstVal::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(crst)::Type,CrstVal::theTimerCounterAn> theTimerCounterAn{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Tc{    ///<Timer Counter. The 32-bit TC is incremented every PR+1 cycles of PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40014008,0x00000000,0x00000000,unsigned>;
        ///Timer counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Ct32b0Pr{    ///<Prescale Register. When the Prescale Counter (below) is equal to this value, the next clock increments the TC and clears the PC.
        using Addr = Register::Address<0x4001400c,0x00000000,0x00000000,unsigned>;
        ///Prescaler value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcval{}; 
    }
    namespace Ct32b0Pc{    ///<Prescale Counter. The 32-bit PC is a counter which is incremented to the value stored in PR. When the value in PR is reached, the TC is incremented and the PC is cleared. The PC is observable and controllable through the bus interface.
        using Addr = Register::Address<0x40014010,0x00000000,0x00000000,unsigned>;
        ///Prescale counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Ct32b0Mcr{    ///<Match Control Register. The MCR is used to control if an interrupt is generated and if the TC is reset when a Match occurs.
        using Addr = Register::Address<0x40014014,0x00000000,0x00000000,unsigned>;
        ///Interrupt on MR0: an interrupt is generated when MR0 matches the value in the TC.
        enum class Mr0iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Mr0iVal> mr0i{}; 
        namespace Mr0iValC{
            constexpr Register::FieldValue<decltype(mr0i)::Type,Mr0iVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr0i)::Type,Mr0iVal::disabled> disabled{};
        }
        ///Reset on MR0: the TC will be reset if MR0 matches it.
        enum class Mr0rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Mr0rVal> mr0r{}; 
        namespace Mr0rValC{
            constexpr Register::FieldValue<decltype(mr0r)::Type,Mr0rVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr0r)::Type,Mr0rVal::disabled> disabled{};
        }
        ///Stop on MR0: the TC and PC will be stopped and TCR[0] will be set to 0 if MR0 matches the TC.
        enum class Mr0sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Mr0sVal> mr0s{}; 
        namespace Mr0sValC{
            constexpr Register::FieldValue<decltype(mr0s)::Type,Mr0sVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr0s)::Type,Mr0sVal::disabled> disabled{};
        }
        ///Interrupt on MR1: an interrupt is generated when MR1 matches the value in the TC.
        enum class Mr1iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Mr1iVal> mr1i{}; 
        namespace Mr1iValC{
            constexpr Register::FieldValue<decltype(mr1i)::Type,Mr1iVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr1i)::Type,Mr1iVal::disabled> disabled{};
        }
        ///Reset on MR1: the TC will be reset if MR1 matches it.
        enum class Mr1rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Mr1rVal> mr1r{}; 
        namespace Mr1rValC{
            constexpr Register::FieldValue<decltype(mr1r)::Type,Mr1rVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr1r)::Type,Mr1rVal::disabled> disabled{};
        }
        ///Stop on MR1: the TC and PC will be stopped and TCR[0] will be set to 0 if MR1 matches the TC.
        enum class Mr1sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Mr1sVal> mr1s{}; 
        namespace Mr1sValC{
            constexpr Register::FieldValue<decltype(mr1s)::Type,Mr1sVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr1s)::Type,Mr1sVal::disabled> disabled{};
        }
        ///Interrupt on MR2: an interrupt is generated when MR2 matches the value in the TC.
        enum class Mr2iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Mr2iVal> mr2i{}; 
        namespace Mr2iValC{
            constexpr Register::FieldValue<decltype(mr2i)::Type,Mr2iVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr2i)::Type,Mr2iVal::disabled> disabled{};
        }
        ///Reset on MR2: the TC will be reset if MR2 matches it.
        enum class Mr2rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Mr2rVal> mr2r{}; 
        namespace Mr2rValC{
            constexpr Register::FieldValue<decltype(mr2r)::Type,Mr2rVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr2r)::Type,Mr2rVal::disabled> disabled{};
        }
        ///Stop on MR2: the TC and PC will be stopped and TCR[0] will be set to 0 if MR2 matches the TC.
        enum class Mr2sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Mr2sVal> mr2s{}; 
        namespace Mr2sValC{
            constexpr Register::FieldValue<decltype(mr2s)::Type,Mr2sVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr2s)::Type,Mr2sVal::disabled> disabled{};
        }
        ///Interrupt on MR3: an interrupt is generated when MR3 matches the value in the TC.
        enum class Mr3iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Mr3iVal> mr3i{}; 
        namespace Mr3iValC{
            constexpr Register::FieldValue<decltype(mr3i)::Type,Mr3iVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr3i)::Type,Mr3iVal::disabled> disabled{};
        }
        ///Reset on MR3: the TC will be reset if MR3 matches it.
        enum class Mr3rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Mr3rVal> mr3r{}; 
        namespace Mr3rValC{
            constexpr Register::FieldValue<decltype(mr3r)::Type,Mr3rVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr3r)::Type,Mr3rVal::disabled> disabled{};
        }
        ///Stop on MR3: the TC and PC will be stopped and TCR[0] will be set to 0 if MR3 matches the TC.
        enum class Mr3sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Mr3sVal> mr3s{}; 
        namespace Mr3sValC{
            constexpr Register::FieldValue<decltype(mr3s)::Type,Mr3sVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mr3s)::Type,Mr3sVal::disabled> disabled{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Ccr{    ///<Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place.
        using Addr = Register::Address<0x40014028,0x00000000,0x00000000,unsigned>;
        ///Capture on CT32Bn_CAP0 rising edge: a sequence of 0 then 1 on CT32Bn_CAP0 will cause CR0 to be loaded with the contents of TC.
        enum class Cap0reVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Cap0reVal> cap0re{}; 
        namespace Cap0reValC{
            constexpr Register::FieldValue<decltype(cap0re)::Type,Cap0reVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cap0re)::Type,Cap0reVal::disabled> disabled{};
        }
        ///Capture on CT32Bn_CAP0 falling edge: a sequence of 1 then 0 on CT32Bn_CAP0 will cause CR0 to be loaded with the contents of TC.
        enum class Cap0feVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Cap0feVal> cap0fe{}; 
        namespace Cap0feValC{
            constexpr Register::FieldValue<decltype(cap0fe)::Type,Cap0feVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cap0fe)::Type,Cap0feVal::disabled> disabled{};
        }
        ///Interrupt on CT32Bn_CAP0 event: a CR0 load due to a CT32Bn_CAP0 event will generate an interrupt.
        enum class Cap0iVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cap0iVal> cap0i{}; 
        namespace Cap0iValC{
            constexpr Register::FieldValue<decltype(cap0i)::Type,Cap0iVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cap0i)::Type,Cap0iVal::disabled> disabled{};
        }
        ///Capture on CT32Bn_CAP1 rising edge: a sequence of 0 then 1 on CT32Bn_CAP1 will cause CR1 to be loaded with the contents of TC.
        enum class Cap1reVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Cap1reVal> cap1re{}; 
        namespace Cap1reValC{
            constexpr Register::FieldValue<decltype(cap1re)::Type,Cap1reVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cap1re)::Type,Cap1reVal::disabled> disabled{};
        }
        ///Capture on CT32Bn_CAP1 falling edge: a sequence of 1 then 0 on CT32Bn_CAP1 will cause CR1 to be loaded with the contents of TC.
        enum class Cap1feVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Cap1feVal> cap1fe{}; 
        namespace Cap1feValC{
            constexpr Register::FieldValue<decltype(cap1fe)::Type,Cap1feVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cap1fe)::Type,Cap1feVal::disabled> disabled{};
        }
        ///Interrupt on CT32Bn_CAP1 event: a CR1 load due to a CT32Bn_CAP1 event will generate an interrupt.
        enum class Cap1iVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cap1iVal> cap1i{}; 
        namespace Cap1iValC{
            constexpr Register::FieldValue<decltype(cap1i)::Type,Cap1iVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(cap1i)::Type,Cap1iVal::disabled> disabled{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Emr{    ///<External Match Register. The EMR controls the match function and the external match pins CT32Bn_MAT[3:0].
        using Addr = Register::Address<0x4001403c,0x00000000,0x00000000,unsigned>;
        ///External Match 0. This bit reflects the state of output CT32Bn_MAT0, whether or not this output is connected to its pin. When a match occurs between the TC and MR0, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[5:4] control the functionality of this output. This bit is driven to the CT32B0_MAT0/CT32B1_MAT0 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em0{}; 
        ///External Match 1. This bit reflects the state of output CT32Bn_MAT1, whether or not this output is connected to its pin. When a match occurs between the TC and MR1, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[7:6] control the functionality of this output. This bit is driven to the CT32B0_MAT1/CT32B1_MAT1 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> em1{}; 
        ///External Match 2. This bit reflects the state of output CT32Bn_MAT2, whether or not this output is connected to its pin. When a match occurs between the TC and MR2, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[9:8] control the functionality of this output. This bit is driven to the CT32B0_MAT2/CT32B1_MAT2 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> em2{}; 
        ///External Match 3. This bit reflects the state of output CT32Bn_MAT3, whether or not this output is connected to its pin. When a match occurs between the TC and MR3, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[11:10] control the functionality of this output. This bit is driven to the CT32B3_MAT0/CT32B1_MAT3 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> em3{}; 
        ///External Match Control 0. Determines the functionality of External Match 0.
        enum class Emc0Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT0 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT0 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Emc0Val> emc0{}; 
        namespace Emc0ValC{
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr Register::FieldValue<decltype(emc0)::Type,Emc0Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        ///External Match Control 1. Determines the functionality of External Match 1.
        enum class Emc1Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT1 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT1 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Emc1Val> emc1{}; 
        namespace Emc1ValC{
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr Register::FieldValue<decltype(emc1)::Type,Emc1Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        ///External Match Control 2. Determines the functionality of External Match 2.
        enum class Emc2Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT2 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT2 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Emc2Val> emc2{}; 
        namespace Emc2ValC{
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr Register::FieldValue<decltype(emc2)::Type,Emc2Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        ///External Match Control 3. Determines the functionality of External Match 3.
        enum class Emc3Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT3 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT3 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Emc3Val> emc3{}; 
        namespace Emc3ValC{
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::doNothing> doNothing{};
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr Register::FieldValue<decltype(emc3)::Type,Emc3Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Ctcr{    ///<Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting.
        using Addr = Register::Address<0x40014070,0x00000000,0x00000000,unsigned>;
        ///Counter/Timer Mode. This field selects which rising PCLK edges can increment Timer's Prescale Counter (PC), or clear PC and increment Timer Counter (TC). If Counter mode is selected in the CTCR, bits 2:0 in the Capture Control Register (CCR) must be programmed as 000.
        enum class CtmVal {
            timerModeEveryRi=0x00000000,     ///<Timer Mode: every rising PCLK edge
            rising=0x00000001,     ///<Counter Mode: TC is incremented on rising edges on the CAP input selected by bits 3:2.
            falling=0x00000002,     ///<Counter Mode: TC is incremented on falling edges on the CAP input selected by bits 3:2.
            bothedges=0x00000003,     ///<Counter Mode: TC is incremented on both edges on the CAP input selected by bits 3:2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CtmVal> ctm{}; 
        namespace CtmValC{
            constexpr Register::FieldValue<decltype(ctm)::Type,CtmVal::timerModeEveryRi> timerModeEveryRi{};
            constexpr Register::FieldValue<decltype(ctm)::Type,CtmVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ctm)::Type,CtmVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ctm)::Type,CtmVal::bothedges> bothedges{};
        }
        ///Count Input Select. In counter mode (when bits 1:0 in this register are not 00), these bits select which CAP pin or comparator output is sampled for clocking.  If Counter mode is selected in the CTCR, the 3 bits for that input in the Capture Control Register (CCR) must be programmed as 000. Values 0x2 to 0x3 are reserved.
        enum class CisVal {
            ct32bnCap0=0x00000000,     ///<CT32Bn_CAP0
            ct32bnCap1=0x00000001,     ///<CT32Bn_CAP1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CisVal> cis{}; 
        namespace CisValC{
            constexpr Register::FieldValue<decltype(cis)::Type,CisVal::ct32bnCap0> ct32bnCap0{};
            constexpr Register::FieldValue<decltype(cis)::Type,CisVal::ct32bnCap1> ct32bnCap1{};
        }
        ///Setting this bit to 1 enables clearing of the timer and the prescaler when the capture-edge event specified in bits 7:5 occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> encc{}; 
        ///When bit 4 is a 1, these bits select which capture input edge will cause the timer and prescaler to be cleared. These bits have no effect when bit 4 is low. Values 0x3 to 0x7 are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> selcc{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Pwmc{    ///<PWM Control Register. The PWMCON enables PWM mode for the external match pins CT32Bn_MAT[3:0].
        using Addr = Register::Address<0x40014074,0x00000000,0x00000000,unsigned>;
        ///PWM mode enable for channel0.
        enum class Pwmen0Val {
            em0=0x00000000,     ///<CT32Bi_MAT0 is controlled by EM0.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT32Bi_MAT0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pwmen0Val> pwmen0{}; 
        namespace Pwmen0ValC{
            constexpr Register::FieldValue<decltype(pwmen0)::Type,Pwmen0Val::em0> em0{};
            constexpr Register::FieldValue<decltype(pwmen0)::Type,Pwmen0Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        ///PWM mode enable for channel1.
        enum class Pwmen1Val {
            em1=0x00000000,     ///<CT32Bi_MAT01 is controlled by EM1.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT32Bi_MAT1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pwmen1Val> pwmen1{}; 
        namespace Pwmen1ValC{
            constexpr Register::FieldValue<decltype(pwmen1)::Type,Pwmen1Val::em1> em1{};
            constexpr Register::FieldValue<decltype(pwmen1)::Type,Pwmen1Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        ///PWM mode enable for channel2.
        enum class Pwmen2Val {
            em2=0x00000000,     ///<CT32Bi_MAT2 is controlled by EM2.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT32Bi_MAT2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmen2Val> pwmen2{}; 
        namespace Pwmen2ValC{
            constexpr Register::FieldValue<decltype(pwmen2)::Type,Pwmen2Val::em2> em2{};
            constexpr Register::FieldValue<decltype(pwmen2)::Type,Pwmen2Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        ///PWM mode enable for channel3.  Note: It is recommended to use match channel 3 to set the PWM cycle.
        enum class Pwmen3Val {
            em3=0x00000000,     ///<CT32Bi_MAT3 is controlled by EM3.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT132Bi_MAT3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmen3Val> pwmen3{}; 
        namespace Pwmen3ValC{
            constexpr Register::FieldValue<decltype(pwmen3)::Type,Pwmen3Val::em3> em3{};
            constexpr Register::FieldValue<decltype(pwmen3)::Type,Pwmen3Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ct32b0Mr0{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40014018,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b0Mr1{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x4001401c,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b0Mr2{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40014020,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b0Mr3{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40014024,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Ct32b0Cr0{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x4001402c,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Ct32b0Cr1{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x40014030,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Ct32b0Cr2{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x40014034,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Ct32b0Cr3{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x40014038,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
}
