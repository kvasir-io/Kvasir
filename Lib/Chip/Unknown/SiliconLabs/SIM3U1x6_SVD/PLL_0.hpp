#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedivider{    ///<Reference Divider Setting
        using Addr = Register::Address<0x4003b000,0xf000f000,0,unsigned>;
        ///M Divider Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> m{}; 
        ///N Divider Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> n{}; 
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4003b010,0x0bccf1f8,0,unsigned>;
        ///CAL Saturation (Low) Flag. 
        enum class llmtfVal {
            notSet=0x00000000,     ///<DCO period is not saturated low.
            set=0x00000001,     ///<DCO period is saturated low.
        };
        namespace llmtfValC{
            constexpr MPL::Value<llmtfVal,llmtfVal::notSet> notSet{};
            constexpr MPL::Value<llmtfVal,llmtfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,llmtfVal> llmtf{}; 
        ///CAL Saturation (High) Flag. 
        enum class hlmtfVal {
            notSet=0x00000000,     ///<DCO period is not saturated high.
            set=0x00000001,     ///<DCO period is saturated high.
        };
        namespace hlmtfValC{
            constexpr MPL::Value<hlmtfVal,hlmtfVal::notSet> notSet{};
            constexpr MPL::Value<hlmtfVal,hlmtfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hlmtfVal> hlmtf{}; 
        ///Phase-Lock and Frequency-Lock Locked Interrupt Flag. 
        enum class lckiVal {
            notSet=0x00000000,     ///<DCO is disabled or not locked.
            set=0x00000001,     ///<DCO is enabled and locked.
        };
        namespace lckiValC{
            constexpr MPL::Value<lckiVal,lckiVal::notSet> notSet{};
            constexpr MPL::Value<lckiVal,lckiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,lckiVal> lcki{}; 
        ///Limit Interrupt Enable. 
        enum class lmtienVal {
            disabled=0x00000000,     ///<Saturation (high and low) interrupt disabled.
            enabled=0x00000001,     ///<Saturation (high and low) interrupt enabled.
        };
        namespace lmtienValC{
            constexpr MPL::Value<lmtienVal,lmtienVal::disabled> disabled{};
            constexpr MPL::Value<lmtienVal,lmtienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,lmtienVal> lmtien{}; 
        ///Locked Interrupt Enable. 
        enum class lckienVal {
            disabled=0x00000000,     ///<The PLL locking does not cause an interrupt
            enabled=0x00000001,     ///<An interrupt is generated if LCKI matches the state selected by LCKPOL.
        };
        namespace lckienValC{
            constexpr MPL::Value<lckienVal,lckienVal::disabled> disabled{};
            constexpr MPL::Value<lckienVal,lckienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,lckienVal> lckien{}; 
        ///Lock Interrupt Polarity. 
        enum class lckpolVal {
            activeLow=0x00000000,     ///<The lock state PLL interrupt will occur when LCKI is 0.
            activeHigh=0x00000001,     ///<The lock state PLL interrupt will occur when LCKI is 1.
        };
        namespace lckpolValC{
            constexpr MPL::Value<lckpolVal,lckpolVal::activeLow> activeLow{};
            constexpr MPL::Value<lckpolVal,lckpolVal::activeHigh> activeHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,lckpolVal> lckpol{}; 
        ///Reference Clock Selection Control. 
        enum class refselVal {
            rtc0osc=0x00000000,     ///<PLL reference clock (FREF) is the RTC0 oscillator (RTC0OSC).
            lposc0div=0x00000001,     ///<PLL reference clock (FREF) is the divided Low Power Oscillator (LPOSC0).
            extosc0=0x00000002,     ///<PLL reference clock (FREF) is the external oscillator output (EXTOSC0).
            usbosc0=0x00000003,     ///<PLL reference clock (FREF) is the USB0 oscillator (USB0OSC).
        };
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::rtc0osc> rtc0osc{};
            constexpr MPL::Value<refselVal,refselVal::lposc0div> lposc0div{};
            constexpr MPL::Value<refselVal,refselVal::extosc0> extosc0{};
            constexpr MPL::Value<refselVal,refselVal::usbosc0> usbosc0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,refselVal> refsel{}; 
        ///Lock Threshold Control. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> lockth{}; 
        ///DCO Output Updates Stall. 
        enum class stallVal {
            disabled=0x00000000,     ///<In phase-lock and frequency-lock modes, spectrum spreading, and dithering operate normally, if enabled.
            enabled=0x00000001,     ///<In phase-lock and frequency-lock modes, spectrum spreading, and dithering are prevented from updating the output of the DCO.
        };
        namespace stallValC{
            constexpr MPL::Value<stallVal,stallVal::disabled> disabled{};
            constexpr MPL::Value<stallVal,stallVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,stallVal> stall{}; 
        ///Dithering Enable. 
        enum class dithenVal {
            disabled=0x00000000,     ///<Automatic DCO output dithering disabled.
            enabled=0x00000001,     ///<Automatic DCO output dithering enabled.
        };
        namespace dithenValC{
            constexpr MPL::Value<dithenVal,dithenVal::disabled> disabled{};
            constexpr MPL::Value<dithenVal,dithenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,dithenVal> dithen{}; 
        ///Edge Lock Select. 
        enum class edgselVal {
            fallingEdge=0x00000000,     ///<Lock DCO output frequency to the falling edge of the reference frequency.
            risingEdge=0x00000001,     ///<Lock DCO output frequency to the rising edge of the reference frequency.
        };
        namespace edgselValC{
            constexpr MPL::Value<edgselVal,edgselVal::fallingEdge> fallingEdge{};
            constexpr MPL::Value<edgselVal,edgselVal::risingEdge> risingEdge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,edgselVal> edgsel{}; 
        ///PLL Output Mode. 
        enum class outmdVal {
            off=0x00000000,     ///<DCO output is off.
            dco=0x00000001,     ///<DCO output is in Free-Running DCO mode.
            fll=0x00000002,     ///<DCO output is in frequency-lock mode (reference source required).
            pll=0x00000003,     ///<DCO output is in phase-lock mode (reference source required).
        };
        namespace outmdValC{
            constexpr MPL::Value<outmdVal,outmdVal::off> off{};
            constexpr MPL::Value<outmdVal,outmdVal::dco> dco{};
            constexpr MPL::Value<outmdVal,outmdVal::fll> fll{};
            constexpr MPL::Value<outmdVal,outmdVal::pll> pll{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,outmdVal> outmd{}; 
    }
    namespace Nonesspr{    ///<Spectrum Spreading Control
        using Addr = Register::Address<0x4003b020,0xffffe0f8,0,unsigned>;
        ///Spectrum Spreading Amplitude. 
        enum class ssampVal {
            disabled=0x00000000,     ///<Disable Spectrum Spreading.
            setting1=0x00000001,     ///<Spectrum Spreading set to approximately +/- 0.1% of TDCO.
            setting2=0x00000002,     ///<Spectrum Spreading set to approximately +/- 0.2% of TDCO.
            setting3=0x00000003,     ///<Spectrum Spreading set to approximately +/- 0.4% of TDCO.
            setting4=0x00000004,     ///<Spectrum Spreading set to approximately +/- 0.8% of TDCO.
            setting5=0x00000005,     ///<Spectrum Spreading set to approximately +/- 1.6% of TDCO.
        };
        namespace ssampValC{
            constexpr MPL::Value<ssampVal,ssampVal::disabled> disabled{};
            constexpr MPL::Value<ssampVal,ssampVal::setting1> setting1{};
            constexpr MPL::Value<ssampVal,ssampVal::setting2> setting2{};
            constexpr MPL::Value<ssampVal,ssampVal::setting3> setting3{};
            constexpr MPL::Value<ssampVal,ssampVal::setting4> setting4{};
            constexpr MPL::Value<ssampVal,ssampVal::setting5> setting5{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ssampVal> ssamp{}; 
        ///Spectrum Spreading Update Interval. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> ssuinv{}; 
    }
    namespace Nonecalconfig{    ///<Calibration Configuration
        using Addr = Register::Address<0x4003b030,0xfff80000,0,unsigned>;
        ///DCO Dither Setting. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///DCO Calibration Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> cal{}; 
        ///DCO Range. 
        enum class rangeVal {
            range0=0x00000000,     ///<DCO operates from 23 to 37 MHz.
            range1=0x00000001,     ///<DCO operates from 33 to 54 MHz.
            range2=0x00000002,     ///<DCO operates from 45 to 71 MHz.
            range3=0x00000003,     ///<DCO operates from 53 to 80 MHz.
            range4=0x00000004,     ///<DCO operates from 73 to 80 MHz.
        };
        namespace rangeValC{
            constexpr MPL::Value<rangeVal,rangeVal::range0> range0{};
            constexpr MPL::Value<rangeVal,rangeVal::range1> range1{};
            constexpr MPL::Value<rangeVal,rangeVal::range2> range2{};
            constexpr MPL::Value<rangeVal,rangeVal::range3> range3{};
            constexpr MPL::Value<rangeVal,rangeVal::range4> range4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,rangeVal> range{}; 
    }
}
