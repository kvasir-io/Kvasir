#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Timer0/1/2/3 
    namespace Noneir{    ///<Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending.
        using Addr = Register::Address<0x40004000,0xffffffc0,0,unsigned>;
        ///Interrupt flag for match channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0int{}; 
        ///Interrupt flag for match channel 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1int{}; 
        ///Interrupt flag for match channel 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2int{}; 
        ///Interrupt flag for match channel 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3int{}; 
        ///Interrupt flag for capture channel 0 event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cr0int{}; 
        ///Interrupt flag for capture channel 1 event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cr1int{}; 
    }
    namespace Nonetcr{    ///<Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR.
        using Addr = Register::Address<0x40004004,0xfffffffc,0,unsigned>;
        ///When one, the Timer Counter and Prescale Counter are enabled for counting. When zero, the counters are disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///When one, the Timer Counter and the Prescale Counter are synchronously reset on the next positive edge of PCLK. The counters remain reset until TCR[1] is returned to zero.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crst{}; 
    }
    namespace Nonetc{    ///<Timer Counter. The 32 bit TC is incremented every PR+1 cycles of PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40004008,0x00000000,0,unsigned>;
        ///Timer counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Nonepr{    ///<Prescale Register. When the Prescale Counter (PC) is equal to this value, the next clock increments the TC and clears the PC.
        using Addr = Register::Address<0x4000400c,0x00000000,0,unsigned>;
        ///Prescale counter maximum value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Nonepc{    ///<Prescale Counter. The 32 bit PC is a counter which is incremented to the value stored in PR. When the value in PR is reached, the TC is incremented and the PC is cleared. The PC is observable and controllable through the bus interface.
        using Addr = Register::Address<0x40004010,0x00000000,0,unsigned>;
        ///Prescale counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Nonemcr{    ///<Match Control Register. The MCR is used to control if an interrupt is generated and if the TC is reset when a Match occurs.
        using Addr = Register::Address<0x40004014,0xfffff000,0,unsigned>;
        ///Interrupt on MR0
        enum class mr0iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR0 matches the value in the TC.
            interruptIsDisable=0x00000000,     ///<Interrupt is disabled
        };
        namespace mr0iValC{
            constexpr MPL::Value<mr0iVal,mr0iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr MPL::Value<mr0iVal,mr0iVal::interruptIsDisable> interruptIsDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mr0iVal> mr0i{}; 
        ///Reset on MR0
        enum class mr0rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR0 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr0rValC{
            constexpr MPL::Value<mr0rVal,mr0rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr MPL::Value<mr0rVal,mr0rVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mr0rVal> mr0r{}; 
        ///Stop on MR0
        enum class mr0sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR0 matches the TC.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr0sValC{
            constexpr MPL::Value<mr0sVal,mr0sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr MPL::Value<mr0sVal,mr0sVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mr0sVal> mr0s{}; 
        ///Interrupt on MR1
        enum class mr1iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR1 matches the value in the TC.
            interruptIsDisable=0x00000000,     ///<Interrupt is disabled.
        };
        namespace mr1iValC{
            constexpr MPL::Value<mr1iVal,mr1iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr MPL::Value<mr1iVal,mr1iVal::interruptIsDisable> interruptIsDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mr1iVal> mr1i{}; 
        ///Reset on MR1
        enum class mr1rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR1 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr1rValC{
            constexpr MPL::Value<mr1rVal,mr1rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr MPL::Value<mr1rVal,mr1rVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mr1rVal> mr1r{}; 
        ///Stop on MR1
        enum class mr1sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR1 matches the TC.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr1sValC{
            constexpr MPL::Value<mr1sVal,mr1sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr MPL::Value<mr1sVal,mr1sVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mr1sVal> mr1s{}; 
        ///Interrupt on MR2
        enum class mr2iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR2 matches the value in the TC.
            interruptIsDisable=0x00000000,     ///<Interrupt is disabled
        };
        namespace mr2iValC{
            constexpr MPL::Value<mr2iVal,mr2iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr MPL::Value<mr2iVal,mr2iVal::interruptIsDisable> interruptIsDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,mr2iVal> mr2i{}; 
        ///Reset on MR2
        enum class mr2rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR2 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr2rValC{
            constexpr MPL::Value<mr2rVal,mr2rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr MPL::Value<mr2rVal,mr2rVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,mr2rVal> mr2r{}; 
        ///Stop on MR2.
        enum class mr2sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR2 matches the TC
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr2sValC{
            constexpr MPL::Value<mr2sVal,mr2sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr MPL::Value<mr2sVal,mr2sVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,mr2sVal> mr2s{}; 
        ///Interrupt on MR3
        enum class mr3iVal {
            interruptIsGenerat=0x00000001,     ///<Interrupt is generated when MR3 matches the value in the TC.
            thisInterruptIsDi=0x00000000,     ///<This interrupt is disabled
        };
        namespace mr3iValC{
            constexpr MPL::Value<mr3iVal,mr3iVal::interruptIsGenerat> interruptIsGenerat{};
            constexpr MPL::Value<mr3iVal,mr3iVal::thisInterruptIsDi> thisInterruptIsDi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,mr3iVal> mr3i{}; 
        ///Reset on MR3
        enum class mr3rVal {
            tcWillBeResetIf=0x00000001,     ///<TC will be reset if MR3 matches it.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr3rValC{
            constexpr MPL::Value<mr3rVal,mr3rVal::tcWillBeResetIf> tcWillBeResetIf{};
            constexpr MPL::Value<mr3rVal,mr3rVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,mr3rVal> mr3r{}; 
        ///Stop on MR3
        enum class mr3sVal {
            tcAndPcWillBeSt=0x00000001,     ///<TC and PC will be stopped and TCR[0] will be set to 0 if MR3 matches the TC.
            featureDisabled=0x00000000,     ///<Feature disabled.
        };
        namespace mr3sValC{
            constexpr MPL::Value<mr3sVal,mr3sVal::tcAndPcWillBeSt> tcAndPcWillBeSt{};
            constexpr MPL::Value<mr3sVal,mr3sVal::featureDisabled> featureDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mr3sVal> mr3s{}; 
    }
    namespace Nonemr0{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR0 matches the TC.
        using Addr = Register::Address<0x40004018,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr1{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR0 matches the TC.
        using Addr = Register::Address<0x4000401c,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr2{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR0 matches the TC.
        using Addr = Register::Address<0x40004020,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr3{    ///<Match Register 0. MR0 can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR0 matches the TC.
        using Addr = Register::Address<0x40004024,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Noneccr{    ///<Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place.
        using Addr = Register::Address<0x40004028,0xffffffc0,0,unsigned>;
        ///Capture on CAPn.0 rising edge
        enum class cap0reVal {
            enable=0x00000001,     ///<A sequence of 0 then 1 on CAPn.0 will cause CR0 to be loaded with the contents of TC.
            disable=0x00000000,     ///<This feature is disabled.
        };
        namespace cap0reValC{
            constexpr MPL::Value<cap0reVal,cap0reVal::enable> enable{};
            constexpr MPL::Value<cap0reVal,cap0reVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cap0reVal> cap0re{}; 
        ///Capture on CAPn.0 falling edge
        enum class cap0feVal {
            enable=0x00000001,     ///<A sequence of 1 then 0 on CAPn.0 will cause CR0 to be loaded with the contents of TC.
            disable=0x00000000,     ///<This feature is disabled.
        };
        namespace cap0feValC{
            constexpr MPL::Value<cap0feVal,cap0feVal::enable> enable{};
            constexpr MPL::Value<cap0feVal,cap0feVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cap0feVal> cap0fe{}; 
        ///Interrupt on CAPn.0 event
        enum class cap0iVal {
            enable=0x00000001,     ///<A CR0 load due to a CAPn.0 event will generate an interrupt.
            disable=0x00000000,     ///<This feature is disabled.
        };
        namespace cap0iValC{
            constexpr MPL::Value<cap0iVal,cap0iVal::enable> enable{};
            constexpr MPL::Value<cap0iVal,cap0iVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cap0iVal> cap0i{}; 
        ///Capture on CAPn.1 rising edge
        enum class cap1reVal {
            enable=0x00000001,     ///<A sequence of 0 then 1 on CAPn.1 will cause CR1 to be loaded with the contents of TC.
            disable=0x00000000,     ///<This feature is disabled.
        };
        namespace cap1reValC{
            constexpr MPL::Value<cap1reVal,cap1reVal::enable> enable{};
            constexpr MPL::Value<cap1reVal,cap1reVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cap1reVal> cap1re{}; 
        ///Capture on CAPn.1 falling edge
        enum class cap1feVal {
            enable=0x00000001,     ///<A sequence of 1 then 0 on CAPn.1 will cause CR1 to be loaded with the contents of TC.
            disable=0x00000000,     ///<This feature is disabled.
        };
        namespace cap1feValC{
            constexpr MPL::Value<cap1feVal,cap1feVal::enable> enable{};
            constexpr MPL::Value<cap1feVal,cap1feVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cap1feVal> cap1fe{}; 
        ///Interrupt on CAPn.1 event
        enum class cap1iVal {
            enable=0x00000001,     ///<A CR1 load due to a CAPn.1 event will generate an interrupt.
            disable=0x00000000,     ///<This feature is disabled.
        };
        namespace cap1iValC{
            constexpr MPL::Value<cap1iVal,cap1iVal::enable> enable{};
            constexpr MPL::Value<cap1iVal,cap1iVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cap1iVal> cap1i{}; 
    }
    namespace Nonecr0{    ///<Capture Register 0. CR0 is loaded with the value of TC when there is an event on the CAPn.0 input.
        using Addr = Register::Address<0x4000402c,0x00000000,0,unsigned>;
        ///Timer counter capture value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Nonecr1{    ///<Capture Register 0. CR0 is loaded with the value of TC when there is an event on the CAPn.0 input.
        using Addr = Register::Address<0x40004030,0x00000000,0,unsigned>;
        ///Timer counter capture value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Noneemr{    ///<External Match Register. The EMR controls the external match pins.
        using Addr = Register::Address<0x4000403c,0xfffff000,0,unsigned>;
        ///External Match 0. When a match occurs between the TC and MR0, this bit can either toggle, go low, go high, or do nothing, depending on bits 5:4 of this register. This bit can be driven onto a MATn.0 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em0{}; 
        ///External Match 1. When a match occurs between the TC and MR1, this bit can either toggle, go low, go high, or do nothing, depending on bits 7:6 of this register. This bit can be driven onto a MATn.1 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> em1{}; 
        ///External Match 2. When a match occurs between the TC and MR2, this bit can either toggle, go low, go high, or do nothing, depending on bits 9:8 of this register. This bit can be driven onto a MATn.0 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> em2{}; 
        ///External Match 3. When a match occurs between the TC and MR3, this bit can either toggle, go low, go high, or do nothing, depending on bits 11:10 of this register. This bit can be driven onto a MATn.0 pin, in a positive-logic manner (0 = low, 1 = high).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> em3{}; 
        ///External Match Control 0. Determines the functionality of External Match 0.
        enum class emc0Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc0ValC{
            constexpr MPL::Value<emc0Val,emc0Val::doNothing> doNothing{};
            constexpr MPL::Value<emc0Val,emc0Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc0Val,emc0Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc0Val,emc0Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,emc0Val> emc0{}; 
        ///External Match Control 1. Determines the functionality of External Match 1.
        enum class emc1Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc1ValC{
            constexpr MPL::Value<emc1Val,emc1Val::doNothing> doNothing{};
            constexpr MPL::Value<emc1Val,emc1Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc1Val,emc1Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc1Val,emc1Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,emc1Val> emc1{}; 
        ///External Match Control 2. Determines the functionality of External Match 2.
        enum class emc2Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc2ValC{
            constexpr MPL::Value<emc2Val,emc2Val::doNothing> doNothing{};
            constexpr MPL::Value<emc2Val,emc2Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc2Val,emc2Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc2Val,emc2Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,emc2Val> emc2{}; 
        ///External Match Control 3. Determines the functionality of External Match 3.
        enum class emc3Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (MATn.m pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (MATn.m pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc3ValC{
            constexpr MPL::Value<emc3Val,emc3Val::doNothing> doNothing{};
            constexpr MPL::Value<emc3Val,emc3Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc3Val,emc3Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc3Val,emc3Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,emc3Val> emc3{}; 
    }
    namespace Nonectcr{    ///<Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting.
        using Addr = Register::Address<0x40004070,0xfffffff0,0,unsigned>;
        ///Counter/Timer Mode This field selects which rising PCLK edges can increment Timer's Prescale Counter (PC), or clear PC and increment Timer Counter (TC). Timer Mode: the TC is incremented when the Prescale Counter matches the Prescale Register.
        enum class ctmodeVal {
            timerModeEveryRi=0x00000000,     ///<Timer Mode: every rising PCLK edge
            rising=0x00000001,     ///<Counter Mode: TC is incremented on rising edges on the CAP input selected by bits 3:2.
            falling=0x00000002,     ///<Counter Mode: TC is incremented on falling edges on the CAP input selected by bits 3:2.
            dualedge=0x00000003,     ///<Counter Mode: TC is incremented on both edges on the CAP input selected by bits 3:2.
        };
        namespace ctmodeValC{
            constexpr MPL::Value<ctmodeVal,ctmodeVal::timerModeEveryRi> timerModeEveryRi{};
            constexpr MPL::Value<ctmodeVal,ctmodeVal::rising> rising{};
            constexpr MPL::Value<ctmodeVal,ctmodeVal::falling> falling{};
            constexpr MPL::Value<ctmodeVal,ctmodeVal::dualedge> dualedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ctmodeVal> ctmode{}; 
        ///Count Input Select When bits 1:0 in this register are not 00, these bits select which CAP pin is sampled for clocking. Note: If Counter mode is selected for a particular CAPn input in the TnCTCR, the 3 bits for that input in the Capture Control Register (TnCCR) must be programmed as 000. However, capture and/or interrupt can be selected for the other 3 CAPn inputs in the same timer.
        enum class cinselVal {
            capn0ForTimern=0x00000000,     ///<CAPn.0 for TIMERn
            capn1ForTimern=0x00000001,     ///<CAPn.1 for TIMERn
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace cinselValC{
            constexpr MPL::Value<cinselVal,cinselVal::capn0ForTimern> capn0ForTimern{};
            constexpr MPL::Value<cinselVal,cinselVal::capn1ForTimern> capn1ForTimern{};
            constexpr MPL::Value<cinselVal,cinselVal::reserved> reserved{};
            constexpr MPL::Value<cinselVal,cinselVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,cinselVal> cinsel{}; 
    }
}
