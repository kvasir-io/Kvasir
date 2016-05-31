#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pulse Width Modulators (PWM0/1) 
    namespace Pwm1Ir{    ///<Interrupt Register. The IR can be written to clear interrupts, or read to identify which PWM interrupt sources are pending.
        using Addr = Register::Address<0x40018000,0x00000000,0x00000000,unsigned>;
        ///Interrupt flag for PWM match channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwmmr0int{}; 
        ///Interrupt flag for PWM match channel 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwmmr1int{}; 
        ///Interrupt flag for PWM match channel 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwmmr2int{}; 
        ///Interrupt flag for PWM match channel 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmmr3int{}; 
        ///Interrupt flag for capture input 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pwmcap0int{}; 
        ///Interrupt flag for capture input 1 (available in PWM1IR only; this bit is reserved in PWM0IR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pwmcap1int{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Interrupt flag for PWM match channel 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pwmmr4int{}; 
        ///Interrupt flag for PWM match channel 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwmmr5int{}; 
        ///Interrupt flag for PWM match channel 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pwmmr6int{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Tcr{    ///<Timer Control Register. The TCR is used to control the Timer Counter functions.
        using Addr = Register::Address<0x40018004,0x00000000,0x00000000,unsigned>;
        ///Counter Enable
        enum class CeVal {
            thePwmTimerCounte=0x00000001,     ///<The PWM Timer Counter and PWM Prescale Counter are enabled for counting.
            theCountersAreDis=0x00000000,     ///<The counters are disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::thePwmTimerCounte> thePwmTimerCounte{};
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::theCountersAreDis> theCountersAreDis{};
        }
        ///Counter Reset
        enum class CrVal {
            thePwmTimerCounte=0x00000001,     ///<The PWM Timer Counter and the PWM Prescale Counter are synchronously reset on the next positive edge of PCLK. The counters remain reset until this bit is returned to zero.
            clearReset=0x00000000,     ///<Clear reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CrVal> cr{}; 
        namespace CrValC{
            constexpr Register::FieldValue<decltype(cr)::Type,CrVal::thePwmTimerCounte> thePwmTimerCounte{};
            constexpr Register::FieldValue<decltype(cr)::Type,CrVal::clearReset> clearReset{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM Enable
        enum class PwmenVal {
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled (counter resets to 1). PWM mode causes the shadow registers to operate in connection with the Match registers. A program write to a Match register will not have an effect on the Match result until the corresponding bit in PWMLER has been set, followed by the occurrence of a PWM Match 0 event. Note that the PWM Match register that determines the PWM rate (PWM Match Register 0 - MR0) must be set up prior to the PWM being enabled. Otherwise a Match event will not occur to cause shadow register contents to become effective.
            timerModeIsEnable=0x00000000,     ///<Timer mode is enabled (counter resets to 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PwmenVal> pwmen{}; 
        namespace PwmenValC{
            constexpr Register::FieldValue<decltype(pwmen)::Type,PwmenVal::pwmModeIsEnabled> pwmModeIsEnabled{};
            constexpr Register::FieldValue<decltype(pwmen)::Type,PwmenVal::timerModeIsEnable> timerModeIsEnable{};
        }
        ///Master Disable (PWM0 only). The two PWMs may be synchronized using the Master Disable control bit. The Master disable bit of the Master PWM (PWM0 module) controls a secondary enable input to both PWMs, as shown in Figure 141.  This bit has no function in the Slave PWM (PWM1).
        enum class MdisVal {
            masterUsePwm0Is=0x00000001,     ///<Master use. PWM0 is the master, and both PWMs are enabled for counting.
            individualUseThe=0x00000000,     ///<Individual use. The PWMs are used independently, and the individual Counter Enable bits are used to control the PWMs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MdisVal> mdis{}; 
        namespace MdisValC{
            constexpr Register::FieldValue<decltype(mdis)::Type,MdisVal::masterUsePwm0Is> masterUsePwm0Is{};
            constexpr Register::FieldValue<decltype(mdis)::Type,MdisVal::individualUseThe> individualUseThe{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Tc{    ///<Timer Counter. The 32 bit TC is incremented every PR+1 cycles of PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40018008,0x00000000,0x00000000,unsigned>;
        ///Timer counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Pwm1Pr{    ///<Prescale Register. Determines how often the PWM counter is incremented.
        using Addr = Register::Address<0x4001800c,0x00000000,0x00000000,unsigned>;
        ///Prescale counter maximum value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Pwm1Pc{    ///<Prescale Counter. Prescaler for the main PWM counter.
        using Addr = Register::Address<0x40018010,0x00000000,0x00000000,unsigned>;
        ///Prescale counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Pwm1Mcr{    ///<Match Control Register. The MCR is used to control whether an interrupt is generated and if the PWM counter is reset when a Match occurs.
        using Addr = Register::Address<0x40018014,0x00000000,0x00000000,unsigned>;
        ///Interrupt PWM0
        enum class Pwmmr0iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr0=0x00000001,     ///<Interrupt on PWMMR0: an interrupt is generated when PWMMR0 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pwmmr0iVal> pwmmr0i{}; 
        namespace Pwmmr0iValC{
            constexpr Register::FieldValue<decltype(pwmmr0i)::Type,Pwmmr0iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr0i)::Type,Pwmmr0iVal::interruptOnPwmmr0> interruptOnPwmmr0{};
        }
        ///Reset PWM0
        enum class Pwmmr0rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr0The=0x00000001,     ///<Reset on PWMMR0: the PWMTC will be reset if PWMMR0 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pwmmr0rVal> pwmmr0r{}; 
        namespace Pwmmr0rValC{
            constexpr Register::FieldValue<decltype(pwmmr0r)::Type,Pwmmr0rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr0r)::Type,Pwmmr0rVal::resetOnPwmmr0The> resetOnPwmmr0The{};
        }
        ///Stop PWM0
        enum class Pwmmr0sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr0The=0x00000001,     ///<Stop on PWMMR0: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR0 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmmr0sVal> pwmmr0s{}; 
        namespace Pwmmr0sValC{
            constexpr Register::FieldValue<decltype(pwmmr0s)::Type,Pwmmr0sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr0s)::Type,Pwmmr0sVal::stopOnPwmmr0The> stopOnPwmmr0The{};
        }
        ///Interrupt PWM1
        enum class Pwmmr1iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr1=0x00000001,     ///<Interrupt on PWMMR1: an interrupt is generated when PWMMR1 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmmr1iVal> pwmmr1i{}; 
        namespace Pwmmr1iValC{
            constexpr Register::FieldValue<decltype(pwmmr1i)::Type,Pwmmr1iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr1i)::Type,Pwmmr1iVal::interruptOnPwmmr1> interruptOnPwmmr1{};
        }
        ///Reset PWM1
        enum class Pwmmr1rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr1The=0x00000001,     ///<Reset on PWMMR1: the PWMTC will be reset if PWMMR1 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pwmmr1rVal> pwmmr1r{}; 
        namespace Pwmmr1rValC{
            constexpr Register::FieldValue<decltype(pwmmr1r)::Type,Pwmmr1rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr1r)::Type,Pwmmr1rVal::resetOnPwmmr1The> resetOnPwmmr1The{};
        }
        ///Stop PWM1
        enum class Pwmmr1sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr1The=0x00000001,     ///<Stop on PWMMR1: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR1 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pwmmr1sVal> pwmmr1s{}; 
        namespace Pwmmr1sValC{
            constexpr Register::FieldValue<decltype(pwmmr1s)::Type,Pwmmr1sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr1s)::Type,Pwmmr1sVal::stopOnPwmmr1The> stopOnPwmmr1The{};
        }
        ///Interrupt PWM0
        enum class Pwmmr2iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr2=0x00000001,     ///<Interrupt on PWMMR2: an interrupt is generated when PWMMR2 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pwmmr2iVal> pwmmr2i{}; 
        namespace Pwmmr2iValC{
            constexpr Register::FieldValue<decltype(pwmmr2i)::Type,Pwmmr2iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr2i)::Type,Pwmmr2iVal::interruptOnPwmmr2> interruptOnPwmmr2{};
        }
        ///Reset PWM0
        enum class Pwmmr2rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr2The=0x00000001,     ///<Reset on PWMMR2: the PWMTC will be reset if PWMMR2 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pwmmr2rVal> pwmmr2r{}; 
        namespace Pwmmr2rValC{
            constexpr Register::FieldValue<decltype(pwmmr2r)::Type,Pwmmr2rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr2r)::Type,Pwmmr2rVal::resetOnPwmmr2The> resetOnPwmmr2The{};
        }
        ///Stop PWM0
        enum class Pwmmr2sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr2The=0x00000001,     ///<Stop on PWMMR2: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR0 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pwmmr2sVal> pwmmr2s{}; 
        namespace Pwmmr2sValC{
            constexpr Register::FieldValue<decltype(pwmmr2s)::Type,Pwmmr2sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr2s)::Type,Pwmmr2sVal::stopOnPwmmr2The> stopOnPwmmr2The{};
        }
        ///Interrupt PWM3
        enum class Pwmmr3iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr3=0x00000001,     ///<Interrupt on PWMMR3: an interrupt is generated when PWMMR3 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pwmmr3iVal> pwmmr3i{}; 
        namespace Pwmmr3iValC{
            constexpr Register::FieldValue<decltype(pwmmr3i)::Type,Pwmmr3iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr3i)::Type,Pwmmr3iVal::interruptOnPwmmr3> interruptOnPwmmr3{};
        }
        ///Reset PWM3
        enum class Pwmmr3rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr3The=0x00000001,     ///<Reset on PWMMR3: the PWMTC will be reset if PWMMR3 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pwmmr3rVal> pwmmr3r{}; 
        namespace Pwmmr3rValC{
            constexpr Register::FieldValue<decltype(pwmmr3r)::Type,Pwmmr3rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr3r)::Type,Pwmmr3rVal::resetOnPwmmr3The> resetOnPwmmr3The{};
        }
        ///Stop PWM0
        enum class Pwmmr3sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr3The=0x00000001,     ///<Stop on PWMMR3: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR0 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pwmmr3sVal> pwmmr3s{}; 
        namespace Pwmmr3sValC{
            constexpr Register::FieldValue<decltype(pwmmr3s)::Type,Pwmmr3sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr3s)::Type,Pwmmr3sVal::stopOnPwmmr3The> stopOnPwmmr3The{};
        }
        ///Interrupt PWM4
        enum class Pwmmr4iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr4=0x00000001,     ///<Interrupt on PWMMR4: an interrupt is generated when PWMMR4 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pwmmr4iVal> pwmmr4i{}; 
        namespace Pwmmr4iValC{
            constexpr Register::FieldValue<decltype(pwmmr4i)::Type,Pwmmr4iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr4i)::Type,Pwmmr4iVal::interruptOnPwmmr4> interruptOnPwmmr4{};
        }
        ///Reset PWM4
        enum class Pwmmr4rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr4The=0x00000001,     ///<Reset on PWMMR4: the PWMTC will be reset if PWMMR4 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pwmmr4rVal> pwmmr4r{}; 
        namespace Pwmmr4rValC{
            constexpr Register::FieldValue<decltype(pwmmr4r)::Type,Pwmmr4rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr4r)::Type,Pwmmr4rVal::resetOnPwmmr4The> resetOnPwmmr4The{};
        }
        ///Stop PWM4
        enum class Pwmmr4sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr4The=0x00000001,     ///<Stop on PWMMR4: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR4 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwmmr4sVal> pwmmr4s{}; 
        namespace Pwmmr4sValC{
            constexpr Register::FieldValue<decltype(pwmmr4s)::Type,Pwmmr4sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr4s)::Type,Pwmmr4sVal::stopOnPwmmr4The> stopOnPwmmr4The{};
        }
        ///Interrupt PWM5
        enum class Pwmmr5iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr5=0x00000001,     ///<Interrupt on PWMMR5: an interrupt is generated when PWMMR5 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pwmmr5iVal> pwmmr5i{}; 
        namespace Pwmmr5iValC{
            constexpr Register::FieldValue<decltype(pwmmr5i)::Type,Pwmmr5iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr5i)::Type,Pwmmr5iVal::interruptOnPwmmr5> interruptOnPwmmr5{};
        }
        ///Reset PWM5
        enum class Pwmmr5rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr5The=0x00000001,     ///<Reset on PWMMR5: the PWMTC will be reset if PWMMR5 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pwmmr5rVal> pwmmr5r{}; 
        namespace Pwmmr5rValC{
            constexpr Register::FieldValue<decltype(pwmmr5r)::Type,Pwmmr5rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr5r)::Type,Pwmmr5rVal::resetOnPwmmr5The> resetOnPwmmr5The{};
        }
        ///Stop PWM5
        enum class Pwmmr5sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr5The=0x00000001,     ///<Stop on PWMMR5: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR5 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pwmmr5sVal> pwmmr5s{}; 
        namespace Pwmmr5sValC{
            constexpr Register::FieldValue<decltype(pwmmr5s)::Type,Pwmmr5sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr5s)::Type,Pwmmr5sVal::stopOnPwmmr5The> stopOnPwmmr5The{};
        }
        ///Interrupt PWM6
        enum class Pwmmr6iVal {
            disabled=0x00000000,     ///<Disabled.
            interruptOnPwmmr6=0x00000001,     ///<Interrupt on PWMMR6: an interrupt is generated when PWMMR6 matches the value in the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pwmmr6iVal> pwmmr6i{}; 
        namespace Pwmmr6iValC{
            constexpr Register::FieldValue<decltype(pwmmr6i)::Type,Pwmmr6iVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr6i)::Type,Pwmmr6iVal::interruptOnPwmmr6> interruptOnPwmmr6{};
        }
        ///Reset PWM6
        enum class Pwmmr6rVal {
            disabled=0x00000000,     ///<Disabled.
            resetOnPwmmr6The=0x00000001,     ///<Reset on PWMMR6: the PWMTC will be reset if PWMMR6 matches it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pwmmr6rVal> pwmmr6r{}; 
        namespace Pwmmr6rValC{
            constexpr Register::FieldValue<decltype(pwmmr6r)::Type,Pwmmr6rVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr6r)::Type,Pwmmr6rVal::resetOnPwmmr6The> resetOnPwmmr6The{};
        }
        ///Stop PWM6
        enum class Pwmmr6sVal {
            disabled=0x00000000,     ///<Disabled
            stopOnPwmmr6The=0x00000001,     ///<Stop on PWMMR6: the PWMTC and PWMPC will be stopped and PWMTCR bit 0 will be set to 0 if PWMMR6 matches the PWMTC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pwmmr6sVal> pwmmr6s{}; 
        namespace Pwmmr6sValC{
            constexpr Register::FieldValue<decltype(pwmmr6s)::Type,Pwmmr6sVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwmmr6s)::Type,Pwmmr6sVal::stopOnPwmmr6The> stopOnPwmmr6The{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Ccr{    ///<Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated for a capture event.
        using Addr = Register::Address<0x40018028,0x00000000,0x00000000,unsigned>;
        ///Capture on PWMn_CAP0 rising edge
        enum class Cap0rVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            risingEdgeASynch=0x00000001,     ///<Rising edge. A synchronously sampled rising edge on PWMn_CAP0 will cause CR0 to be loaded with the contents of the TC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Cap0rVal> cap0R{}; 
        namespace Cap0rValC{
            constexpr Register::FieldValue<decltype(cap0R)::Type,Cap0rVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr Register::FieldValue<decltype(cap0R)::Type,Cap0rVal::risingEdgeASynch> risingEdgeASynch{};
        }
        ///Capture on PWMn_CAP0 falling edge
        enum class Cap0fVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            fallingEdgeASync=0x00000001,     ///<Falling edge. A synchronously sampled falling edge on PWMn_CAP0 will cause CR0 to be loaded with the contents of TC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Cap0fVal> cap0F{}; 
        namespace Cap0fValC{
            constexpr Register::FieldValue<decltype(cap0F)::Type,Cap0fVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr Register::FieldValue<decltype(cap0F)::Type,Cap0fVal::fallingEdgeASync> fallingEdgeASync{};
        }
        ///Interrupt on PWMn_CAP0 event
        enum class Cap0iVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            interruptACr0Loa=0x00000001,     ///<Interrupt. A CR0 load due to a PWMn_CAP0 event will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cap0iVal> cap0I{}; 
        namespace Cap0iValC{
            constexpr Register::FieldValue<decltype(cap0I)::Type,Cap0iVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr Register::FieldValue<decltype(cap0I)::Type,Cap0iVal::interruptACr0Loa> interruptACr0Loa{};
        }
        ///Capture on PWMn_CAP1 rising edge. Reserved for PWM0.
        enum class Cap1rVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            risingEdgeASynch=0x00000001,     ///<Rising edge. A synchronously sampled rising edge on PWMn_CAP1 will cause CR1 to be loaded with the contents of the TC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Cap1rVal> cap1R{}; 
        namespace Cap1rValC{
            constexpr Register::FieldValue<decltype(cap1R)::Type,Cap1rVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr Register::FieldValue<decltype(cap1R)::Type,Cap1rVal::risingEdgeASynch> risingEdgeASynch{};
        }
        ///Capture on PWMn_CAP1 falling edge. Reserved for PWM0.
        enum class Cap1fVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            fallingEdgeASync=0x00000001,     ///<Falling edge. A synchronously sampled falling edge on PWMn_CAP1 will cause CR1 to be loaded with the contents of TC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Cap1fVal> cap1F{}; 
        namespace Cap1fValC{
            constexpr Register::FieldValue<decltype(cap1F)::Type,Cap1fVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr Register::FieldValue<decltype(cap1F)::Type,Cap1fVal::fallingEdgeASync> fallingEdgeASync{};
        }
        ///Interrupt on PWMn_CAP1 event. Reserved for PWM0.
        enum class Cap1iVal {
            disabledThisFeatu=0x00000000,     ///<Disabled. This feature is disabled.
            interruptACr1Loa=0x00000001,     ///<Interrupt. A CR1 load due to a PWMn_CAP1 event will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cap1iVal> cap1I{}; 
        namespace Cap1iValC{
            constexpr Register::FieldValue<decltype(cap1I)::Type,Cap1iVal::disabledThisFeatu> disabledThisFeatu{};
            constexpr Register::FieldValue<decltype(cap1I)::Type,Cap1iVal::interruptACr1Loa> interruptACr1Loa{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Pcr{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x4001804c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[2] output single/double edge mode control.
        enum class Pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmsel2Val> pwmsel2{}; 
        namespace Pwmsel2ValC{
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[3] output edge control.
        enum class Pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmsel3Val> pwmsel3{}; 
        namespace Pwmsel3ValC{
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[4] output edge control.
        enum class Pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pwmsel4Val> pwmsel4{}; 
        namespace Pwmsel4ValC{
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[5] output edge control.
        enum class Pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pwmsel5Val> pwmsel5{}; 
        namespace Pwmsel5ValC{
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[6] output edge control.
        enum class Pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pwmsel6Val> pwmsel6{}; 
        namespace Pwmsel6ValC{
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[1] output enable control.
        enum class Pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pwmena1Val> pwmena1{}; 
        namespace Pwmena1ValC{
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[2] output enable control.
        enum class Pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pwmena2Val> pwmena2{}; 
        namespace Pwmena2ValC{
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[3] output enable control.
        enum class Pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pwmena3Val> pwmena3{}; 
        namespace Pwmena3ValC{
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[4] output enable control.
        enum class Pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pwmena4Val> pwmena4{}; 
        namespace Pwmena4ValC{
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[5] output enable control.
        enum class Pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pwmena5Val> pwmena5{}; 
        namespace Pwmena5ValC{
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class Pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwmena6Val> pwmena6{}; 
        namespace Pwmena6ValC{
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///Unused, always zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Ler{    ///<Load Enable Register. Enables use of updated PWM match values.
        using Addr = Register::Address<0x40018050,0x00000000,0x00000000,unsigned>;
        ///Enable PWM Match 0 Latch. PWM MR0 register update control. Writing a one to this bit allows the last value written to the PWM Match Register 0 to be become effective when the timer is next reset by a PWM Match event. See Section 27.6.7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mat0latchen{}; 
        ///Enable PWM Match 1 Latch. PWM MR1 register update control. See bit 0 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mat1latchen{}; 
        ///Enable PWM Match 2 Latch. PWM MR2 register update control. See bit 0 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mat2latchen{}; 
        ///Enable PWM Match 3 Latch. PWM MR3 register update control. See bit 0 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mat3latchen{}; 
        ///Enable PWM Match 4 Latch. PWM MR4 register update control. See bit 0 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mat4latchen{}; 
        ///Enable PWM Match 5 Latch. PWM MR5 register update control. See bit 0 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mat5latchen{}; 
        ///Enable PWM Match 6 Latch. PWM MR6 register update control. See bit 0 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mat6latchen{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Ctcr{    ///<Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting.
        using Addr = Register::Address<0x40018070,0x00000000,0x00000000,unsigned>;
        ///Counter/  Timer Mode
        enum class ModVal {
            timerModeTheTcI=0x00000000,     ///<Timer Mode: the TC is incremented when the Prescale Counter matches the Prescale register.
            risingEdgeCounter=0x00000001,     ///<Rising edge counter Mode: the TC is incremented on rising edges of the PWM_CAP input selected by bits 3:2.
            fallingEdgeCounter=0x00000002,     ///<Falling edge counter Mode: the TC is incremented on falling edges of the PWM_CAP input selected by bits 3:2.
            dualEdgeCounterMo=0x00000003,     ///<Dual edge counter Mode: the TC is incremented on both edges of the PWM_CAP input selected by bits 3:2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModVal> mod{}; 
        namespace ModValC{
            constexpr Register::FieldValue<decltype(mod)::Type,ModVal::timerModeTheTcI> timerModeTheTcI{};
            constexpr Register::FieldValue<decltype(mod)::Type,ModVal::risingEdgeCounter> risingEdgeCounter{};
            constexpr Register::FieldValue<decltype(mod)::Type,ModVal::fallingEdgeCounter> fallingEdgeCounter{};
            constexpr Register::FieldValue<decltype(mod)::Type,ModVal::dualEdgeCounterMo> dualEdgeCounterMo{};
        }
        ///Count Input Select. When bits 1:0 are not 00, these bits select which PWM_CAP pin carries the signal used to increment the TC. Other combinations are reserved.
        enum class CisVal {
            forPwm000EqPwm0=0x00000000,     ///<For PWM0: 00 = PWM0_CAP0 (Other combinations are reserved) For PWM1: 00 = PWM1_CAP0, 01 = PWM1_CAP1 (Other combinations are reserved)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CisVal> cis{}; 
        namespace CisValC{
            constexpr Register::FieldValue<decltype(cis)::Type,CisVal::forPwm000EqPwm0> forPwm000EqPwm0{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Mr0{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018018,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr1{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x4001801c,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr2{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018020,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr3{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018024,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Cr0{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x4001802c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[2] output single/double edge mode control.
        enum class Pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmsel2Val> pwmsel2{}; 
        namespace Pwmsel2ValC{
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[3] output edge control.
        enum class Pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmsel3Val> pwmsel3{}; 
        namespace Pwmsel3ValC{
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[4] output edge control.
        enum class Pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pwmsel4Val> pwmsel4{}; 
        namespace Pwmsel4ValC{
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[5] output edge control.
        enum class Pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pwmsel5Val> pwmsel5{}; 
        namespace Pwmsel5ValC{
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[6] output edge control.
        enum class Pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pwmsel6Val> pwmsel6{}; 
        namespace Pwmsel6ValC{
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[1] output enable control.
        enum class Pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pwmena1Val> pwmena1{}; 
        namespace Pwmena1ValC{
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[2] output enable control.
        enum class Pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pwmena2Val> pwmena2{}; 
        namespace Pwmena2ValC{
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[3] output enable control.
        enum class Pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pwmena3Val> pwmena3{}; 
        namespace Pwmena3ValC{
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[4] output enable control.
        enum class Pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pwmena4Val> pwmena4{}; 
        namespace Pwmena4ValC{
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[5] output enable control.
        enum class Pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pwmena5Val> pwmena5{}; 
        namespace Pwmena5ValC{
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class Pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwmena6Val> pwmena6{}; 
        namespace Pwmena6ValC{
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///Unused, always zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Cr1{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x40018030,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[2] output single/double edge mode control.
        enum class Pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmsel2Val> pwmsel2{}; 
        namespace Pwmsel2ValC{
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[3] output edge control.
        enum class Pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmsel3Val> pwmsel3{}; 
        namespace Pwmsel3ValC{
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[4] output edge control.
        enum class Pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pwmsel4Val> pwmsel4{}; 
        namespace Pwmsel4ValC{
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[5] output edge control.
        enum class Pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pwmsel5Val> pwmsel5{}; 
        namespace Pwmsel5ValC{
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[6] output edge control.
        enum class Pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pwmsel6Val> pwmsel6{}; 
        namespace Pwmsel6ValC{
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[1] output enable control.
        enum class Pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pwmena1Val> pwmena1{}; 
        namespace Pwmena1ValC{
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[2] output enable control.
        enum class Pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pwmena2Val> pwmena2{}; 
        namespace Pwmena2ValC{
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[3] output enable control.
        enum class Pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pwmena3Val> pwmena3{}; 
        namespace Pwmena3ValC{
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[4] output enable control.
        enum class Pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pwmena4Val> pwmena4{}; 
        namespace Pwmena4ValC{
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[5] output enable control.
        enum class Pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pwmena5Val> pwmena5{}; 
        namespace Pwmena5ValC{
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class Pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwmena6Val> pwmena6{}; 
        namespace Pwmena6ValC{
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///Unused, always zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Mr4{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018040,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr5{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018044,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr6{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018048,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr0{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018018,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr1{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x4001801c,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr2{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018020,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr3{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018024,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Cr0{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x4001802c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[2] output single/double edge mode control.
        enum class Pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmsel2Val> pwmsel2{}; 
        namespace Pwmsel2ValC{
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[3] output edge control.
        enum class Pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmsel3Val> pwmsel3{}; 
        namespace Pwmsel3ValC{
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[4] output edge control.
        enum class Pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pwmsel4Val> pwmsel4{}; 
        namespace Pwmsel4ValC{
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[5] output edge control.
        enum class Pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pwmsel5Val> pwmsel5{}; 
        namespace Pwmsel5ValC{
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[6] output edge control.
        enum class Pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pwmsel6Val> pwmsel6{}; 
        namespace Pwmsel6ValC{
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[1] output enable control.
        enum class Pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pwmena1Val> pwmena1{}; 
        namespace Pwmena1ValC{
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[2] output enable control.
        enum class Pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pwmena2Val> pwmena2{}; 
        namespace Pwmena2ValC{
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[3] output enable control.
        enum class Pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pwmena3Val> pwmena3{}; 
        namespace Pwmena3ValC{
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[4] output enable control.
        enum class Pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pwmena4Val> pwmena4{}; 
        namespace Pwmena4ValC{
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[5] output enable control.
        enum class Pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pwmena5Val> pwmena5{}; 
        namespace Pwmena5ValC{
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class Pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwmena6Val> pwmena6{}; 
        namespace Pwmena6ValC{
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///Unused, always zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Cr1{    ///<PWM Control Register. Enables PWM outputs and selects either single edge or double edge controlled PWM outputs.
        using Addr = Register::Address<0x40018030,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[2] output single/double edge mode control.
        enum class Pwmsel2Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pwmsel2Val> pwmsel2{}; 
        namespace Pwmsel2ValC{
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel2)::Type,Pwmsel2Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[3] output edge control.
        enum class Pwmsel3Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pwmsel3Val> pwmsel3{}; 
        namespace Pwmsel3ValC{
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel3)::Type,Pwmsel3Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[4] output edge control.
        enum class Pwmsel4Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pwmsel4Val> pwmsel4{}; 
        namespace Pwmsel4ValC{
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel4)::Type,Pwmsel4Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[5] output edge control.
        enum class Pwmsel5Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pwmsel5Val> pwmsel5{}; 
        namespace Pwmsel5ValC{
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel5)::Type,Pwmsel5Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///PWM[6] output edge control.
        enum class Pwmsel6Val {
            singleEdgeControll=0x00000000,     ///<Single edge controlled mode is selected.
            doubleEdgeControll=0x00000001,     ///<Double edge controlled mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pwmsel6Val> pwmsel6{}; 
        namespace Pwmsel6ValC{
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::singleEdgeControll> singleEdgeControll{};
            constexpr Register::FieldValue<decltype(pwmsel6)::Type,Pwmsel6Val::doubleEdgeControll> doubleEdgeControll{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PWM[1] output enable control.
        enum class Pwmena1Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pwmena1Val> pwmena1{}; 
        namespace Pwmena1ValC{
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena1)::Type,Pwmena1Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[2] output enable control.
        enum class Pwmena2Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pwmena2Val> pwmena2{}; 
        namespace Pwmena2ValC{
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena2)::Type,Pwmena2Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[3] output enable control.
        enum class Pwmena3Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pwmena3Val> pwmena3{}; 
        namespace Pwmena3ValC{
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena3)::Type,Pwmena3Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[4] output enable control.
        enum class Pwmena4Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pwmena4Val> pwmena4{}; 
        namespace Pwmena4ValC{
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena4)::Type,Pwmena4Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[5] output enable control.
        enum class Pwmena5Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pwmena5Val> pwmena5{}; 
        namespace Pwmena5ValC{
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena5)::Type,Pwmena5Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///PWM[6] output enable control. See PWMENA1 for details.
        enum class Pwmena6Val {
            thePwmOutputIsDi=0x00000000,     ///<The PWM output is disabled.
            thePwmOutputIsEn=0x00000001,     ///<The PWM output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pwmena6Val> pwmena6{}; 
        namespace Pwmena6ValC{
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsDi> thePwmOutputIsDi{};
            constexpr Register::FieldValue<decltype(pwmena6)::Type,Pwmena6Val::thePwmOutputIsEn> thePwmOutputIsEn{};
        }
        ///Unused, always zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Pwm1Mr4{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018040,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr5{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018044,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Pwm1Mr6{    ///<Match Register. Match registersare continuously compared to the PWM counter in order to control PWMoutput edges.
        using Addr = Register::Address<0x40018048,0x00000000,0x00000000,unsigned>;
        ///Timer counter match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
}
