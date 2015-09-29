#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Modulators (PWM1) 
    namespace Noneir{    ///<Interrupt Register. The IR can be written to clear interrupts, or read to identify which PWM interrupt sources are pending.
        using Addr = Register::Address<0x40018000,0xfffff8c0,0,unsigned>;
        ///Interrupt flag for PWM match channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwmmr0int{}; 
        ///Interrupt flag for PWM match channel 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwmmr1int{}; 
        ///Interrupt flag for PWM match channel 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwmmr2int{}; 
        ///Interrupt flag for PWM match channel 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmmr3int{}; 
        ///Interrupt flag for capture input 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pwmcap0int{}; 
        ///Interrupt flag for capture input 1 (available in PWM1IR only; this bit is reserved in PWM0IR).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pwmcap1int{}; 
        ///Interrupt flag for PWM match channel 4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pwmmr4int{}; 
        ///Interrupt flag for PWM match channel 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwmmr5int{}; 
        ///Interrupt flag for PWM match channel 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pwmmr6int{}; 
    }
    namespace Nonetcr{    ///<Timer Control Register. The TCR is used to control the Timer Counter functions.
        using Addr = Register::Address<0x40018004,0xffffffe4,0,unsigned>;
        ///Counter Enable
        enum class ceVal {
            thePwmTimerCounte=0x00000001,     ///<The PWM Timer Counter and PWM Prescale Counter are enabled for counting.
            theCountersAreDis=0x00000000,     ///<The counters are disabled.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::thePwmTimerCounte> thePwmTimerCounte{};
            constexpr MPL::Value<ceVal,ceVal::theCountersAreDis> theCountersAreDis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ceVal> ce{}; 
        ///Counter Reset
        enum class crVal {
            thePwmTimerCounte=0x00000001,     ///<The PWM Timer Counter and the PWM Prescale Counter are synchronously reset on the next positive edge of PCLK. The counters remain reset until this bit is returned to zero.
            clearReset=0x00000000,     ///<Clear reset.
        };
        namespace crValC{
            constexpr MPL::Value<crVal,crVal::thePwmTimerCounte> thePwmTimerCounte{};
            constexpr MPL::Value<crVal,crVal::clearReset> clearReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,crVal> cr{}; 
        ///PWM Enable
        enum class pwmenVal {
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled (counter resets to 1). PWM mode causes the shadow registers to operate in connection with the Match registers. A program write to a Match register will not have an effect on the Match result until the corresponding bit in PWMLER has been set, followed by the occurrence of a PWM Match 0 event. Note that the PWM Match register that determines the PWM rate (PWM Match Register 0 - MR0) must be set up prior to the PWM being enabled. Otherwise a Match event will not occur to cause shadow register contents to become effective.
            timerModeIsEnable=0x00000000,     ///<Timer mode is enabled (counter resets to 0).
        };
        namespace pwmenValC{
            constexpr MPL::Value<pwmenVal,pwmenVal::pwmModeIsEnabled> pwmModeIsEnabled{};
            constexpr MPL::Value<pwmenVal,pwmenVal::timerModeIsEnable> timerModeIsEnable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmenVal> pwmen{}; 
        ///Master Disable (PWM0 only). The two PWMs may be synchronized using the Master Disable control bit. The Master disable bit of the Master PWM (PWM0 module) controls a secondary enable input to both PWMs, as shown in Figure 141.  This bit has no function in the Slave PWM (PWM1).
        enum class mdisVal {
            masterUsePwm0Is=0x00000001,     ///<Master use. PWM0 is the master, and both PWMs are enabled for counting.
            individualUseThe=0x00000000,     ///<Individual use. The PWMs are used independently, and the individual Counter Enable bits are used to control the PWMs.
        };
        namespace mdisValC{
            constexpr MPL::Value<mdisVal,mdisVal::masterUsePwm0Is> masterUsePwm0Is{};
            constexpr MPL::Value<mdisVal,mdisVal::individualUseThe> individualUseThe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mdisVal> mdis{}; 
    }
    namespace Nonetc{    ///<Timer Counter. The 32 bit TC is incremented every PR+1 cycles of PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40018008,0x00000000,0,unsigned>;
        ///Timer counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Nonepr{    ///<Prescale Register. Determines how often the PWM counter is incremented.
        using Addr = Register::Address<0x4001800c,0x00000000,0,unsigned>;
        ///Prescale counter maximum value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Nonepc{    ///<Prescale Counter. Prescaler for the main PWM counter.
        using Addr = Register::Address<0x40018010,0x00000000,0,unsigned>;
        ///Prescale counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Nonemcr{    ///<Match Control Register. The MCR is used to control whether an interrupt is generated and if the PWM counter is reset when a Match occurs.
        using Addr = Register::Address<0x40018014,0xffe00000,0,unsigned>;
        ///Interrupt PWM0
        enum class pwmmr0iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr0=0x00000001,     ///<Interrupt on PWMMR0: an interrupt is generated when PWMMR0 matches the value in the PWMTC.
        };
        namespace pwmmr0iValC{
            constexpr MPL::Value<pwmmr0iVal,pwmmr0iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr0iVal,pwmmr0iVal::interruptOnPwmmr0> interruptOnPwmmr0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pwmmr0iVal> pwmmr0i{}; 
        ///Reset PWM0
        enum class pwmmr0rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr0The=0x00000001,     ///<Reset on PWMMR0: the PWMTC will be reset if PWMMR0 matches it.
        };
        namespace pwmmr0rValC{
            constexpr MPL::Value<pwmmr0rVal,pwmmr0rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr0rVal,pwmmr0rVal::resetOnPwmmr0The> resetOnPwmmr0The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pwmmr0rVal> pwmmr0r{}; 
        ///Stop PWM0
        enum class pwmmr0sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr0The=0x00000001,     ///<Stop on PWMMR0: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR0 matches the PWMTC.
        };
        namespace pwmmr0sValC{
            constexpr MPL::Value<pwmmr0sVal,pwmmr0sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr0sVal,pwmmr0sVal::stopOnPwmmr0The> stopOnPwmmr0The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pwmmr0sVal> pwmmr0s{}; 
        ///Interrupt PWM1
        enum class pwmmr1iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr1=0x00000001,     ///<Interrupt on PWMMR1: an interrupt is generated when PWMMR1 matches the value in the PWMTC.
        };
        namespace pwmmr1iValC{
            constexpr MPL::Value<pwmmr1iVal,pwmmr1iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr1iVal,pwmmr1iVal::interruptOnPwmmr1> interruptOnPwmmr1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmmr1iVal> pwmmr1i{}; 
        ///Reset PWM1
        enum class pwmmr1rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr1The=0x00000001,     ///<Reset on PWMMR1: the PWMTC will be reset if PWMMR1 matches it.
        };
        namespace pwmmr1rValC{
            constexpr MPL::Value<pwmmr1rVal,pwmmr1rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr1rVal,pwmmr1rVal::resetOnPwmmr1The> resetOnPwmmr1The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pwmmr1rVal> pwmmr1r{}; 
        ///Stop PWM1
        enum class pwmmr1sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr1The=0x00000001,     ///<Stop on PWMMR1: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR1 matches the PWMTC.
        };
        namespace pwmmr1sValC{
            constexpr MPL::Value<pwmmr1sVal,pwmmr1sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr1sVal,pwmmr1sVal::stopOnPwmmr1The> stopOnPwmmr1The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pwmmr1sVal> pwmmr1s{}; 
        ///Interrupt PWM0
        enum class pwmmr2iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr2=0x00000001,     ///<Interrupt on PWMMR2: an interrupt is generated when PWMMR2 matches the value in the PWMTC.
        };
        namespace pwmmr2iValC{
            constexpr MPL::Value<pwmmr2iVal,pwmmr2iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr2iVal,pwmmr2iVal::interruptOnPwmmr2> interruptOnPwmmr2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmmr2iVal> pwmmr2i{}; 
        ///Reset PWM0
        enum class pwmmr2rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr2The=0x00000001,     ///<Reset on PWMMR2: the PWMTC will be reset if PWMMR2 matches it.
        };
        namespace pwmmr2rValC{
            constexpr MPL::Value<pwmmr2rVal,pwmmr2rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr2rVal,pwmmr2rVal::resetOnPwmmr2The> resetOnPwmmr2The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pwmmr2rVal> pwmmr2r{}; 
        ///Stop PWM0
        enum class pwmmr2sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr2The=0x00000001,     ///<Stop on PWMMR2: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR0 matches the PWMTC.
        };
        namespace pwmmr2sValC{
            constexpr MPL::Value<pwmmr2sVal,pwmmr2sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr2sVal,pwmmr2sVal::stopOnPwmmr2The> stopOnPwmmr2The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pwmmr2sVal> pwmmr2s{}; 
        ///Interrupt PWM3
        enum class pwmmr3iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr3=0x00000001,     ///<Interrupt on PWMMR3: an interrupt is generated when PWMMR3 matches the value in the PWMTC.
        };
        namespace pwmmr3iValC{
            constexpr MPL::Value<pwmmr3iVal,pwmmr3iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr3iVal,pwmmr3iVal::interruptOnPwmmr3> interruptOnPwmmr3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pwmmr3iVal> pwmmr3i{}; 
        ///Reset PWM3
        enum class pwmmr3rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr3The=0x00000001,     ///<Reset on PWMMR3: the PWMTC will be reset if PWMMR3 matches it.
        };
        namespace pwmmr3rValC{
            constexpr MPL::Value<pwmmr3rVal,pwmmr3rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr3rVal,pwmmr3rVal::resetOnPwmmr3The> resetOnPwmmr3The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pwmmr3rVal> pwmmr3r{}; 
        ///Stop PWM0
        enum class pwmmr3sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr3The=0x00000001,     ///<Stop on PWMMR3: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR0 matches the PWMTC.
        };
        namespace pwmmr3sValC{
            constexpr MPL::Value<pwmmr3sVal,pwmmr3sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr3sVal,pwmmr3sVal::stopOnPwmmr3The> stopOnPwmmr3The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pwmmr3sVal> pwmmr3s{}; 
        ///Interrupt PWM4
        enum class pwmmr4iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr4=0x00000001,     ///<Interrupt on PWMMR4: an interrupt is generated when PWMMR4 matches the value in the PWMTC.
        };
        namespace pwmmr4iValC{
            constexpr MPL::Value<pwmmr4iVal,pwmmr4iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr4iVal,pwmmr4iVal::interruptOnPwmmr4> interruptOnPwmmr4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pwmmr4iVal> pwmmr4i{}; 
        ///Reset PWM4
        enum class pwmmr4rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr4The=0x00000001,     ///<Reset on PWMMR4: the PWMTC will be reset if PWMMR4 matches it.
        };
        namespace pwmmr4rValC{
            constexpr MPL::Value<pwmmr4rVal,pwmmr4rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr4rVal,pwmmr4rVal::resetOnPwmmr4The> resetOnPwmmr4The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pwmmr4rVal> pwmmr4r{}; 
        ///Stop PWM4
        enum class pwmmr4sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr4The=0x00000001,     ///<Stop on PWMMR4: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR4 matches the PWMTC.
        };
        namespace pwmmr4sValC{
            constexpr MPL::Value<pwmmr4sVal,pwmmr4sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr4sVal,pwmmr4sVal::stopOnPwmmr4The> stopOnPwmmr4The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwmmr4sVal> pwmmr4s{}; 
        ///Interrupt PWM5
        enum class pwmmr5iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr5=0x00000001,     ///<Interrupt on PWMMR5: an interrupt is generated when PWMMR5 matches the value in the PWMTC.
        };
        namespace pwmmr5iValC{
            constexpr MPL::Value<pwmmr5iVal,pwmmr5iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr5iVal,pwmmr5iVal::interruptOnPwmmr5> interruptOnPwmmr5{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pwmmr5iVal> pwmmr5i{}; 
        ///Reset PWM5
        enum class pwmmr5rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr5The=0x00000001,     ///<Reset on PWMMR5: the PWMTC will be reset if PWMMR5 matches it.
        };
        namespace pwmmr5rValC{
            constexpr MPL::Value<pwmmr5rVal,pwmmr5rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr5rVal,pwmmr5rVal::resetOnPwmmr5The> resetOnPwmmr5The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pwmmr5rVal> pwmmr5r{}; 
        ///Stop PWM5
        enum class pwmmr5sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr5The=0x00000001,     ///<Stop on PWMMR5: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR5 matches the PWMTC.
        };
        namespace pwmmr5sValC{
            constexpr MPL::Value<pwmmr5sVal,pwmmr5sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr5sVal,pwmmr5sVal::stopOnPwmmr5The> stopOnPwmmr5The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pwmmr5sVal> pwmmr5s{}; 
        ///Interrupt PWM6
        enum class pwmmr6iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr6=0x00000001,     ///<Interrupt on PWMMR6: an interrupt is generated when PWMMR6 matches the value in the PWMTC.
        };
        namespace pwmmr6iValC{
            constexpr MPL::Value<pwmmr6iVal,pwmmr6iVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr6iVal,pwmmr6iVal::interruptOnPwmmr6> interruptOnPwmmr6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pwmmr6iVal> pwmmr6i{}; 
        ///Reset PWM6
        enum class pwmmr6rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr6The=0x00000001,     ///<Reset on PWMMR6: the PWMTC will be reset if PWMMR6 matches it.
        };
        namespace pwmmr6rValC{
            constexpr MPL::Value<pwmmr6rVal,pwmmr6rVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr6rVal,pwmmr6rVal::resetOnPwmmr6The> resetOnPwmmr6The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pwmmr6rVal> pwmmr6r{}; 
        ///Stop PWM6
        enum class pwmmr6sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr6The=0x00000001,     ///<Stop on PWMMR6: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR6 matches the PWMTC.
        };
        namespace pwmmr6sValC{
            constexpr MPL::Value<pwmmr6sVal,pwmmr6sVal::disabled> disabled{};
            constexpr MPL::Value<pwmmr6sVal,pwmmr6sVal::stopOnPwmmr6The> stopOnPwmmr6The{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pwmmr6sVal> pwmmr6s{}; 
    }
    namespace Nonemr0{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x40018018,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr1{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x4001801c,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr2{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x40018020,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr3{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x40018024,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Noneccr{    ///<Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated for a capture event.
        using Addr = Register::Address<0x40018028,0xffffffc0,0,unsigned>;
        ///Capture on PWMn_CAP0 rising edge
        enum class cap0RVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            risingEdgeASynch=0x00000001,     ///<Rising edge. A synchronously sampled rising edge on PWMn_CAP0 will cause CR0 to be loaded with the contents of the TC.
        };
        namespace cap0RValC{
            constexpr MPL::Value<cap0RVal,cap0RVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr MPL::Value<cap0RVal,cap0RVal::risingEdgeASynch> risingEdgeASynch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cap0RVal> cap0R{}; 
        ///Capture on PWMn_CAP0 falling edge
        enum class cap0FVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            fallingEdgeASync=0x00000001,     ///<Falling edge. A synchronously sampled falling edge on PWMn_CAP0 will cause CR0 to be loaded with the contents of TC.
        };
        namespace cap0FValC{
            constexpr MPL::Value<cap0FVal,cap0FVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr MPL::Value<cap0FVal,cap0FVal::fallingEdgeASync> fallingEdgeASync{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cap0FVal> cap0F{}; 
        ///Interrupt on PWMn_CAP0 event
        enum class cap0IVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            interruptACr0Loa=0x00000001,     ///<Interrupt. A CR0 load due to a PWMn_CAP0 event will generate an interrupt.
        };
        namespace cap0IValC{
            constexpr MPL::Value<cap0IVal,cap0IVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr MPL::Value<cap0IVal,cap0IVal::interruptACr0Loa> interruptACr0Loa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cap0IVal> cap0I{}; 
        ///Capture on PWMn_CAP1 rising edge. Reserved for PWM0.
        enum class cap1RVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            risingEdgeASynch=0x00000001,     ///<Rising edge. A synchronously sampled rising edge on PWMn_CAP1 will cause CR1 to be loaded with the contents of the TC.
        };
        namespace cap1RValC{
            constexpr MPL::Value<cap1RVal,cap1RVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr MPL::Value<cap1RVal,cap1RVal::risingEdgeASynch> risingEdgeASynch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cap1RVal> cap1R{}; 
        ///Capture on PWMn_CAP1 falling edge. Reserved for PWM0.
        enum class cap1FVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            fallingEdgeASync=0x00000001,     ///<Falling edge. A synchronously sampled falling edge on PWMn_CAP1 will cause CR1 to be loaded with the contents of TC.
        };
        namespace cap1FValC{
            constexpr MPL::Value<cap1FVal,cap1FVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr MPL::Value<cap1FVal,cap1FVal::fallingEdgeASync> fallingEdgeASync{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cap1FVal> cap1F{}; 
        ///Interrupt on PWMn_CAP1 event. Reserved for PWM0.
        enum class cap1IVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            interruptACr1Loa=0x00000001,     ///<Interrupt. A CR1 load due to a PWMn_CAP1 event will generate an interrupt.
        };
        namespace cap1IValC{
            constexpr MPL::Value<cap1IVal,cap1IVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr MPL::Value<cap1IVal,cap1IVal::interruptACr1Loa> interruptACr1Loa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cap1IVal> cap1I{}; 
    }
    namespace Nonecr0{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x4001802c,0xffff8183,0,unsigned>;
        ///PWM[2] output single/double edge mode control.
        enum class pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel2ValC{
            constexpr MPL::Value<pwmsel2Val,pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel2Val,pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pwmsel2Val> pwmsel2{}; 
        ///PWM[3] output edge control.
        enum class pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel3ValC{
            constexpr MPL::Value<pwmsel3Val,pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel3Val,pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmsel3Val> pwmsel3{}; 
        ///PWM[4] output edge control.
        enum class pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel4ValC{
            constexpr MPL::Value<pwmsel4Val,pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel4Val,pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pwmsel4Val> pwmsel4{}; 
        ///PWM[5] output edge control.
        enum class pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel5ValC{
            constexpr MPL::Value<pwmsel5Val,pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel5Val,pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pwmsel5Val> pwmsel5{}; 
        ///PWM[6] output edge control.
        enum class pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel6ValC{
            constexpr MPL::Value<pwmsel6Val,pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel6Val,pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmsel6Val> pwmsel6{}; 
        ///PWM[1] output enable control.
        enum class pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena1ValC{
            constexpr MPL::Value<pwmena1Val,pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena1Val,pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pwmena1Val> pwmena1{}; 
        ///PWM[2] output enable control.
        enum class pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena2ValC{
            constexpr MPL::Value<pwmena2Val,pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena2Val,pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pwmena2Val> pwmena2{}; 
        ///PWM[3] output enable control.
        enum class pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena3ValC{
            constexpr MPL::Value<pwmena3Val,pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena3Val,pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pwmena3Val> pwmena3{}; 
        ///PWM[4] output enable control.
        enum class pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena4ValC{
            constexpr MPL::Value<pwmena4Val,pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena4Val,pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pwmena4Val> pwmena4{}; 
        ///PWM[5] output enable control.
        enum class pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena5ValC{
            constexpr MPL::Value<pwmena5Val,pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena5Val,pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pwmena5Val> pwmena5{}; 
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena6ValC{
            constexpr MPL::Value<pwmena6Val,pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena6Val,pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwmena6Val> pwmena6{}; 
    }
    namespace Nonecr1{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x40018030,0xffff8183,0,unsigned>;
        ///PWM[2] output single/double edge mode control.
        enum class pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel2ValC{
            constexpr MPL::Value<pwmsel2Val,pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel2Val,pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pwmsel2Val> pwmsel2{}; 
        ///PWM[3] output edge control.
        enum class pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel3ValC{
            constexpr MPL::Value<pwmsel3Val,pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel3Val,pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmsel3Val> pwmsel3{}; 
        ///PWM[4] output edge control.
        enum class pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel4ValC{
            constexpr MPL::Value<pwmsel4Val,pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel4Val,pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pwmsel4Val> pwmsel4{}; 
        ///PWM[5] output edge control.
        enum class pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel5ValC{
            constexpr MPL::Value<pwmsel5Val,pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel5Val,pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pwmsel5Val> pwmsel5{}; 
        ///PWM[6] output edge control.
        enum class pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel6ValC{
            constexpr MPL::Value<pwmsel6Val,pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel6Val,pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmsel6Val> pwmsel6{}; 
        ///PWM[1] output enable control.
        enum class pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena1ValC{
            constexpr MPL::Value<pwmena1Val,pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena1Val,pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pwmena1Val> pwmena1{}; 
        ///PWM[2] output enable control.
        enum class pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena2ValC{
            constexpr MPL::Value<pwmena2Val,pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena2Val,pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pwmena2Val> pwmena2{}; 
        ///PWM[3] output enable control.
        enum class pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena3ValC{
            constexpr MPL::Value<pwmena3Val,pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena3Val,pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pwmena3Val> pwmena3{}; 
        ///PWM[4] output enable control.
        enum class pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena4ValC{
            constexpr MPL::Value<pwmena4Val,pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena4Val,pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pwmena4Val> pwmena4{}; 
        ///PWM[5] output enable control.
        enum class pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena5ValC{
            constexpr MPL::Value<pwmena5Val,pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena5Val,pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pwmena5Val> pwmena5{}; 
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena6ValC{
            constexpr MPL::Value<pwmena6Val,pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena6Val,pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwmena6Val> pwmena6{}; 
    }
    namespace Nonemr4{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x40018040,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr5{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x40018044,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr6{    ///<Match Register. Match registers
are continuously compared to the PWM counter in order to control PWM
output edges.
        using Addr = Register::Address<0x40018048,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonepcr{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x4001804c,0xffff8183,0,unsigned>;
        ///PWM[2] output single/double edge mode control.
        enum class pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel2ValC{
            constexpr MPL::Value<pwmsel2Val,pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel2Val,pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pwmsel2Val> pwmsel2{}; 
        ///PWM[3] output edge control.
        enum class pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel3ValC{
            constexpr MPL::Value<pwmsel3Val,pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel3Val,pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmsel3Val> pwmsel3{}; 
        ///PWM[4] output edge control.
        enum class pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel4ValC{
            constexpr MPL::Value<pwmsel4Val,pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel4Val,pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pwmsel4Val> pwmsel4{}; 
        ///PWM[5] output edge control.
        enum class pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel5ValC{
            constexpr MPL::Value<pwmsel5Val,pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel5Val,pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pwmsel5Val> pwmsel5{}; 
        ///PWM[6] output edge control.
        enum class pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        namespace pwmsel6ValC{
            constexpr MPL::Value<pwmsel6Val,pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr MPL::Value<pwmsel6Val,pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pwmsel6Val> pwmsel6{}; 
        ///PWM[1] output enable control.
        enum class pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena1ValC{
            constexpr MPL::Value<pwmena1Val,pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena1Val,pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pwmena1Val> pwmena1{}; 
        ///PWM[2] output enable control.
        enum class pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena2ValC{
            constexpr MPL::Value<pwmena2Val,pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena2Val,pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pwmena2Val> pwmena2{}; 
        ///PWM[3] output enable control.
        enum class pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena3ValC{
            constexpr MPL::Value<pwmena3Val,pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena3Val,pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pwmena3Val> pwmena3{}; 
        ///PWM[4] output enable control.
        enum class pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena4ValC{
            constexpr MPL::Value<pwmena4Val,pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena4Val,pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pwmena4Val> pwmena4{}; 
        ///PWM[5] output enable control.
        enum class pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena5ValC{
            constexpr MPL::Value<pwmena5Val,pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena5Val,pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pwmena5Val> pwmena5{}; 
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        namespace pwmena6ValC{
            constexpr MPL::Value<pwmena6Val,pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr MPL::Value<pwmena6Val,pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwmena6Val> pwmena6{}; 
    }
    namespace Noneler{    ///<Load Enable Register. Enables use of updated PWM match values.
        using Addr = Register::Address<0x40018050,0xffffff80,0,unsigned>;
        ///Enable PWM Match 0 Latch. PWM MR0 register update control. Writing a one to this bit allows the last value written to the PWM Match Register 0 to be become effective when the timer is next reset by a PWM Match event. See Section 27.6.7.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mat0latchen{}; 
        ///Enable PWM Match 1 Latch. PWM MR1 register update control. See bit 0 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mat1latchen{}; 
        ///Enable PWM Match 2 Latch. PWM MR2 register update control. See bit 0 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mat2latchen{}; 
        ///Enable PWM Match 3 Latch. PWM MR3 register update control. See bit 0 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mat3latchen{}; 
        ///Enable PWM Match 4 Latch. PWM MR4 register update control. See bit 0 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mat4latchen{}; 
        ///Enable PWM Match 5 Latch. PWM MR5 register update control. See bit 0 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mat5latchen{}; 
        ///Enable PWM Match 6 Latch. PWM MR6 register update control. See bit 0 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mat6latchen{}; 
    }
    namespace Nonectcr{    ///<Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting.
        using Addr = Register::Address<0x40018070,0xfffffff0,0,unsigned>;
        ///Counter/  Timer Mode
        enum class modVal {
            timerModeTheTcI=0x00000000,     ///<Timer Mode: the TC is incremented when the Prescale Counter matches the Prescale register.
            risingEdgeCounter=0x00000001,     ///<Rising edge counter Mode: the TC is incremented on rising edges of the PWM_CAP input selected by bits 3:2.
            fallingEdgeCounter=0x00000002,     ///<Falling edge counter Mode: the TC is incremented on falling edges of the PWM_CAP input selected by bits 3:2.
            dualEdgeCounterMo=0x00000003,     ///<Dual edge counter Mode: the TC is incremented on both edges of the PWM_CAP input selected by bits 3:2.
        };
        namespace modValC{
            constexpr MPL::Value<modVal,modVal::timerModeTheTcI> timerModeTheTcI{};
            constexpr MPL::Value<modVal,modVal::risingEdgeCounter> risingEdgeCounter{};
            constexpr MPL::Value<modVal,modVal::fallingEdgeCounter> fallingEdgeCounter{};
            constexpr MPL::Value<modVal,modVal::dualEdgeCounterMo> dualEdgeCounterMo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modVal> mod{}; 
        ///Count Input Select. When bits 1:0 are not 00, these bits select which PWM_CAP pin carries the signal used to increment the TC. Other combinations are reserved.
        enum class cisVal {
            forPwm000EqPwm0=0x00000000,     ///<For PWM0: 00 = PWM0_CAP0 (Other combinations are reserved) For PWM1: 00 = PWM1_CAP0, 01 = PWM1_CAP1 (Other combinations are reserved)
        };
        namespace cisValC{
            constexpr MPL::Value<cisVal,cisVal::forPwm000EqPwm0> forPwm000EqPwm0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,cisVal> cis{}; 
    }
}
