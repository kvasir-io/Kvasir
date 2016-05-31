#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Timer0/1/2/3 Modification date=1/14/2011 Major revision=0 Minor revision=7 
    namespace Timer0Ir{    ///<Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending.
        using Addr = Register::Address<0x40084000,0x00000000,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Timer0Tcr{    ///<Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR.
        using Addr = Register::Address<0x40084004,0x00000000,0x00000000,unsigned>;
        ///When one, the Timer Counter and Prescale Counter are enabled for counting. When zero, the counters are disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///When one, the Timer Counter and the Prescale Counter are synchronously reset on the next positive edge of PCLK. The counters remain reset until TCR[1] is returned to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crst{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Timer0Tc{    ///<Timer Counter. The 32 bit TC is incremented every PR+1 cycles of PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40084008,0x00000000,0x00000000,unsigned>;
        ///Timer counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Timer0Pr{    ///<Prescale Register. The Prescale Counter (below) is equal to this value, the next clock increments the TC and clears the PC.
        using Addr = Register::Address<0x4008400c,0x00000000,0x00000000,unsigned>;
        ///Prescale counter maximum value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Timer0Pc{    ///<Prescale Counter. The 32 bit PC is a counter which is incremented to the value stored in PR. When the value in PR is reached, the TC is incremented and the PC is cleared. The PC is observable and controllable through the bus interface.
        using Addr = Register::Address<0x40084010,0x00000000,0x00000000,unsigned>;
        ///Prescale counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Timer0Mcr{    ///<Match Control Register. The MCR is used to control if an interrupt is generated and if the TC is reset when a Match occurs.
        using Addr = Register::Address<0x40084014,0x00000000,0x00000000,unsigned>;
        ///Interrupt on MR0
        enum class Mr0iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR0 matches the value in the TC.
            interruptIsDisable=0x00000000,     ///<Interrupt is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Mr0iVal> mr0i{}; 
        namespace Mr0iValC{
            constexpr Register::FieldValue<decltype(mr0i)::Type,Mr0iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr Register::FieldValue<decltype(mr0i)::Type,Mr0iVal::interruptIsDisable> interruptIsDisable{};
        }
        ///Reset on MR0
        enum class Mr0rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR0 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Mr0rVal> mr0r{}; 
        namespace Mr0rValC{
            constexpr Register::FieldValue<decltype(mr0r)::Type,Mr0rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr Register::FieldValue<decltype(mr0r)::Type,Mr0rVal::featureDisabled> featureDisabled{};
        }
        ///Stop on MR0
        enum class Mr0sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR0 matches the TC.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Mr0sVal> mr0s{}; 
        namespace Mr0sValC{
            constexpr Register::FieldValue<decltype(mr0s)::Type,Mr0sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr Register::FieldValue<decltype(mr0s)::Type,Mr0sVal::featureDisabled> featureDisabled{};
        }
        ///Interrupt on MR1
        enum class Mr1iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR1 matches the value in the TC.
            interruptIsDisable=0x00000000,     ///<Interrupt is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Mr1iVal> mr1i{}; 
        namespace Mr1iValC{
            constexpr Register::FieldValue<decltype(mr1i)::Type,Mr1iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr Register::FieldValue<decltype(mr1i)::Type,Mr1iVal::interruptIsDisable> interruptIsDisable{};
        }
        ///Reset on MR1
        enum class Mr1rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR1 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Mr1rVal> mr1r{}; 
        namespace Mr1rValC{
            constexpr Register::FieldValue<decltype(mr1r)::Type,Mr1rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr Register::FieldValue<decltype(mr1r)::Type,Mr1rVal::featureDisabled> featureDisabled{};
        }
        ///Stop on MR1
        enum class Mr1sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR1 matches the TC.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Mr1sVal> mr1s{}; 
        namespace Mr1sValC{
            constexpr Register::FieldValue<decltype(mr1s)::Type,Mr1sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr Register::FieldValue<decltype(mr1s)::Type,Mr1sVal::featureDisabled> featureDisabled{};
        }
        ///Interrupt on MR2
        enum class Mr2iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR2 matches the value in the TC.
            interruptIsDisable=0x00000000,     ///<Interrupt is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Mr2iVal> mr2i{}; 
        namespace Mr2iValC{
            constexpr Register::FieldValue<decltype(mr2i)::Type,Mr2iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr Register::FieldValue<decltype(mr2i)::Type,Mr2iVal::interruptIsDisable> interruptIsDisable{};
        }
        ///Reset on MR2
        enum class Mr2rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR2 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Mr2rVal> mr2r{}; 
        namespace Mr2rValC{
            constexpr Register::FieldValue<decltype(mr2r)::Type,Mr2rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr Register::FieldValue<decltype(mr2r)::Type,Mr2rVal::featureDisabled> featureDisabled{};
        }
        ///Stop on MR2.
        enum class Mr2sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR2 matches the TC
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Mr2sVal> mr2s{}; 
        namespace Mr2sValC{
            constexpr Register::FieldValue<decltype(mr2s)::Type,Mr2sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr Register::FieldValue<decltype(mr2s)::Type,Mr2sVal::featureDisabled> featureDisabled{};
        }
        ///Interrupt on MR3
        enum class Mr3iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR3 matches the value in the TC.
            thisInterruptIsDi=0x00000000,     ///<This interrupt is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Mr3iVal> mr3i{}; 
        namespace Mr3iValC{
            constexpr Register::FieldValue<decltype(mr3i)::Type,Mr3iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr Register::FieldValue<decltype(mr3i)::Type,Mr3iVal::thisInterruptIsDi> thisInterruptIsDi{};
        }
        ///Reset on MR3
        enum class Mr3rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR3 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Mr3rVal> mr3r{}; 
        namespace Mr3rValC{
            constexpr Register::FieldValue<decltype(mr3r)::Type,Mr3rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr Register::FieldValue<decltype(mr3r)::Type,Mr3rVal::featureDisabled> featureDisabled{};
        }
        ///Stop on MR3
        enum class Mr3sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR3 matches the TC.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Mr3sVal> mr3s{}; 
        namespace Mr3sValC{
            constexpr Register::FieldValue<decltype(mr3s)::Type,Mr3sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr Register::FieldValue<decltype(mr3s)::Type,Mr3sVal::featureDisabled> featureDisabled{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Timer0Ccr{    ///<Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place.
        using Addr = Register::Address<0x40084028,0x00000000,0x00000000,unsigned>;
        ///Capture on CAPn.0 rising edge
        enum class Cap0reVal {
            aSequenceOf0Then=0x00000001,     ///<A sequence of 0 then 1 on CAPn.0 will cause CR0 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Cap0reVal> cap0re{}; 
        namespace Cap0reValC{
            constexpr Register::FieldValue<decltype(cap0re)::Type,Cap0reVal::aSequenceOf0Then> aSequenceOf0Then{};
            constexpr Register::FieldValue<decltype(cap0re)::Type,Cap0reVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.0 falling edge
        enum class Cap0feVal {
            aSequenceOf1Then=0x00000001,     ///<A sequence of 1 then 0 on CAPn.0 will cause CR0 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Cap0feVal> cap0fe{}; 
        namespace Cap0feValC{
            constexpr Register::FieldValue<decltype(cap0fe)::Type,Cap0feVal::aSequenceOf1Then> aSequenceOf1Then{};
            constexpr Register::FieldValue<decltype(cap0fe)::Type,Cap0feVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Interrupt on CAPn.0 event
        enum class Cap0iVal {
            aCr0LoadDueToA=0x00000001,     ///<A CR0 load due to a CAPn.0 event will generate an interrupt.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cap0iVal> cap0i{}; 
        namespace Cap0iValC{
            constexpr Register::FieldValue<decltype(cap0i)::Type,Cap0iVal::aCr0LoadDueToA> aCr0LoadDueToA{};
            constexpr Register::FieldValue<decltype(cap0i)::Type,Cap0iVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.1 rising edge
        enum class Cap1reVal {
            aSequenceOf0Then=0x00000001,     ///<A sequence of 0 then 1 on CAPn.1 will cause CR1 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Cap1reVal> cap1re{}; 
        namespace Cap1reValC{
            constexpr Register::FieldValue<decltype(cap1re)::Type,Cap1reVal::aSequenceOf0Then> aSequenceOf0Then{};
            constexpr Register::FieldValue<decltype(cap1re)::Type,Cap1reVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.1 falling edge
        enum class Cap1feVal {
            aSequenceOf1Then=0x00000001,     ///<A sequence of 1 then 0 on CAPn.1 will cause CR1 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Cap1feVal> cap1fe{}; 
        namespace Cap1feValC{
            constexpr Register::FieldValue<decltype(cap1fe)::Type,Cap1feVal::aSequenceOf1Then> aSequenceOf1Then{};
            constexpr Register::FieldValue<decltype(cap1fe)::Type,Cap1feVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Interrupt on CAPn.1 event
        enum class Cap1iVal {
            aCr1LoadDueToA=0x00000001,     ///<A CR1 load due to a CAPn.1 event will generate an interrupt.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cap1iVal> cap1i{}; 
        namespace Cap1iValC{
            constexpr Register::FieldValue<decltype(cap1i)::Type,Cap1iVal::aCr1LoadDueToA> aCr1LoadDueToA{};
            constexpr Register::FieldValue<decltype(cap1i)::Type,Cap1iVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.2 rising edge
        enum class Cap2reVal {
            aSequenceOf0Then=0x00000001,     ///<A sequence of 0 then 1 on CAPn.2 will cause CR2 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Cap2reVal> cap2re{}; 
        namespace Cap2reValC{
            constexpr Register::FieldValue<decltype(cap2re)::Type,Cap2reVal::aSequenceOf0Then> aSequenceOf0Then{};
            constexpr Register::FieldValue<decltype(cap2re)::Type,Cap2reVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.2 falling edge:
        enum class Cap2feVal {
            aSequenceOf1Then=0x00000001,     ///<A sequence of 1 then 0 on CAPn.2 will cause CR2 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Cap2feVal> cap2fe{}; 
        namespace Cap2feValC{
            constexpr Register::FieldValue<decltype(cap2fe)::Type,Cap2feVal::aSequenceOf1Then> aSequenceOf1Then{};
            constexpr Register::FieldValue<decltype(cap2fe)::Type,Cap2feVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Interrupt on CAPn.2 event
        enum class Cap2iVal {
            aCr2LoadDueToA=0x00000001,     ///<A CR2 load due to a CAPn.2 event will generate an interrupt.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Cap2iVal> cap2i{}; 
        namespace Cap2iValC{
            constexpr Register::FieldValue<decltype(cap2i)::Type,Cap2iVal::aCr2LoadDueToA> aCr2LoadDueToA{};
            constexpr Register::FieldValue<decltype(cap2i)::Type,Cap2iVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.3 rising edge
        enum class Cap3reVal {
            aSequenceOf0Then=0x00000001,     ///<A sequence of 0 then 1 on CAPn.3 will cause CR3 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Cap3reVal> cap3re{}; 
        namespace Cap3reValC{
            constexpr Register::FieldValue<decltype(cap3re)::Type,Cap3reVal::aSequenceOf0Then> aSequenceOf0Then{};
            constexpr Register::FieldValue<decltype(cap3re)::Type,Cap3reVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Capture on CAPn.3 falling edge
        enum class Cap3feVal {
            aSequenceOf1Then=0x00000001,     ///<A sequence of 1 then 0 on CAPn.3 will cause CR3 to be loaded with the contents of TC.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Cap3feVal> cap3fe{}; 
        namespace Cap3feValC{
            constexpr Register::FieldValue<decltype(cap3fe)::Type,Cap3feVal::aSequenceOf1Then> aSequenceOf1Then{};
            constexpr Register::FieldValue<decltype(cap3fe)::Type,Cap3feVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Interrupt on CAPn.3 event:
        enum class Cap3iVal {
            aCr3LoadDueToA=0x00000001,     ///<A CR3 load due to a CAPn.3 event will generate an interrupt.
            thisFeatureIsDisa=0x00000000,     ///<This feature is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Cap3iVal> cap3i{}; 
        namespace Cap3iValC{
            constexpr Register::FieldValue<decltype(cap3i)::Type,Cap3iVal::aCr3LoadDueToA> aCr3LoadDueToA{};
            constexpr Register::FieldValue<decltype(cap3i)::Type,Cap3iVal::thisFeatureIsDisa> thisFeatureIsDisa{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Timer0Emr{    ///<External Match Register. The EMR controls the external match pins MATn.0-3 (MAT0.0-3 and MAT1.0-3 respectively).
        using Addr = Register::Address<0x4008403c,0xffff0000,0x00000000,unsigned>;
        ///External Match 0. When a match occurs between the TC and MR0, this bit can either toggle, go low, go high, or do nothing, depending on bits 5:4 of this register. This bit can be driven onto a MATn.0 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em0{}; 
        ///External Match 1. When a match occurs between the TC and MR1, this bit can either toggle, go low, go high, or do nothing, depending on bits 7:6 of this register. This bit can be driven onto a MATn.1 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> em1{}; 
        ///External Match 2. When a match occurs between the TC and MR2, this bit can either toggle, go low, go high, or do nothing, depending on bits 9:8 of this register. This bit can be driven onto a MATn.0 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> em2{}; 
        ///External Match 3. When a match occurs between the TC and MR3, this bit can either toggle, go low, go high, or do nothing, depending on bits 11:10 of this register. This bit can be driven onto a MATn.0 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> em3{}; 
        ///External Match Control 0. Determines the functionality of External Match 0.
        enum class Emc0Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
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
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
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
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
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
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Timer0Ctcr{    ///<Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting.
        using Addr = Register::Address<0x40084070,0x00000000,0x00000000,unsigned>;
        ///Counter/Timer Mode This field selects which rising PCLK edges can increment Timer's Prescale Counter (PC), or clear PC and increment Timer Counter (TC). Timer Mode: the TC is incremented when the Prescale Counter matches the Prescale Register.
        enum class CtmodeVal {
            timerModeEveryRi=0x00000000,     ///<Timer Mode: every rising PCLK edge
            counterModeTcIs=0x00000001,     ///<Counter Mode: TC is incremented on rising edges on the CAP input selected by bits 3:2.
            counterModeTcIs=0x00000002,     ///<Counter Mode: TC is incremented on falling edges on the CAP input selected by bits 3:2.
            counterModeTcIs=0x00000003,     ///<Counter Mode: TC is incremented on both edges on the CAP input selected by bits 3:2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CtmodeVal> ctmode{}; 
        namespace CtmodeValC{
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::timerModeEveryRi> timerModeEveryRi{};
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::counterModeTcIs> counterModeTcIs{};
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::counterModeTcIs> counterModeTcIs{};
            constexpr Register::FieldValue<decltype(ctmode)::Type,CtmodeVal::counterModeTcIs> counterModeTcIs{};
        }
        ///Count Input Select When bits 1:0 in this register are not 00, these bits select which CAP pin is sampled for clocking:
        enum class CinselVal {
            capn0ForTimern=0x00000000,     ///<CAPn.0 for TIMERn
            capn1ForTimern=0x00000001,     ///<CAPn.1 for TIMERn
            capn2ForTimern=0x00000002,     ///<CAPn.2 for TIMERn
            capn3ForTimernNo=0x00000003,     ///<CAPn.3 for TIMERn Note: If Counter mode is selected for a particular CAPn input in the TnCTCR, the 3 bits for that input in the Capture Control Register (TnCCR) must be programmed as 000. However, capture and/or interrupt can be selected for the other 3 CAPn inputs in the same timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CinselVal> cinsel{}; 
        namespace CinselValC{
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::capn0ForTimern> capn0ForTimern{};
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::capn1ForTimern> capn1ForTimern{};
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::capn2ForTimern> capn2ForTimern{};
            constexpr Register::FieldValue<decltype(cinsel)::Type,CinselVal::capn3ForTimernNo> capn3ForTimernNo{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Timer0Mr0{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40084018,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Timer0Mr1{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x4008401c,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Timer0Mr2{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40084020,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Timer0Mr3{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40084024,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Timer0Cr0{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CAPn.0 input.
        using Addr = Register::Address<0x4008402c,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Timer0Cr1{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40084030,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Timer0Cr2{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40084034,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Timer0Cr3{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40084038,0x00000000,0x00000000,unsigned>;
        ///Timer counter capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
}
