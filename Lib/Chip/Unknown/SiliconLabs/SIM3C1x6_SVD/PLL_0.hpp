#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedivider{    ///<Reference Divider Setting
        using Addr = Register::Address<0x4003b000,0xf000f000,0,unsigned>;
        ///M Divider Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> m{}; 
        ///N Divider Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> n{}; 
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4003b010,0x0bccf1f8,0,unsigned>;
        ///CAL Saturation (Low) Flag. 
        enum class LlmtfVal {
            notSet=0x00000000,     ///<DCO period is not saturated low.
            set=0x00000001,     ///<DCO period is saturated low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LlmtfVal> llmtf{}; 
        namespace LlmtfValC{
            constexpr Register::FieldValue<decltype(llmtf)::Type,LlmtfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(llmtf)::Type,LlmtfVal::set> set{};
        }
        ///CAL Saturation (High) Flag. 
        enum class HlmtfVal {
            notSet=0x00000000,     ///<DCO period is not saturated high.
            set=0x00000001,     ///<DCO period is saturated high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HlmtfVal> hlmtf{}; 
        namespace HlmtfValC{
            constexpr Register::FieldValue<decltype(hlmtf)::Type,HlmtfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(hlmtf)::Type,HlmtfVal::set> set{};
        }
        ///Phase-Lock and Frequency-Lock Locked Interrupt Flag. 
        enum class LckiVal {
            notSet=0x00000000,     ///<DCO is disabled or not locked.
            set=0x00000001,     ///<DCO is enabled and locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LckiVal> lcki{}; 
        namespace LckiValC{
            constexpr Register::FieldValue<decltype(lcki)::Type,LckiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lcki)::Type,LckiVal::set> set{};
        }
        ///Limit Interrupt Enable. 
        enum class LmtienVal {
            disabled=0x00000000,     ///<Saturation (high and low) interrupt disabled.
            enabled=0x00000001,     ///<Saturation (high and low) interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LmtienVal> lmtien{}; 
        namespace LmtienValC{
            constexpr Register::FieldValue<decltype(lmtien)::Type,LmtienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lmtien)::Type,LmtienVal::enabled> enabled{};
        }
        ///Locked Interrupt Enable. 
        enum class LckienVal {
            disabled=0x00000000,     ///<The PLL locking does not cause an interrupt
            enabled=0x00000001,     ///<An interrupt is generated if LCKI matches the state selected by LCKPOL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,LckienVal> lckien{}; 
        namespace LckienValC{
            constexpr Register::FieldValue<decltype(lckien)::Type,LckienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lckien)::Type,LckienVal::enabled> enabled{};
        }
        ///Lock Interrupt Polarity. 
        enum class LckpolVal {
            activeLow=0x00000000,     ///<The lock state PLL interrupt will occur when LCKI is 0.
            activeHigh=0x00000001,     ///<The lock state PLL interrupt will occur when LCKI is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,LckpolVal> lckpol{}; 
        namespace LckpolValC{
            constexpr Register::FieldValue<decltype(lckpol)::Type,LckpolVal::activeLow> activeLow{};
            constexpr Register::FieldValue<decltype(lckpol)::Type,LckpolVal::activeHigh> activeHigh{};
        }
        ///Reference Clock Selection Control. 
        enum class RefselVal {
            rtc0osc=0x00000000,     ///<PLL reference clock (FREF) is the RTC0 oscillator (RTC0OSC).
            lposc0div=0x00000001,     ///<PLL reference clock (FREF) is the divided Low Power Oscillator (LPOSC0).
            extosc0=0x00000002,     ///<PLL reference clock (FREF) is the external oscillator output (EXTOSC0).
            usbosc0=0x00000003,     ///<PLL reference clock (FREF) is the USB0 oscillator (USB0OSC).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::rtc0osc> rtc0osc{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::lposc0div> lposc0div{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::extosc0> extosc0{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::usbosc0> usbosc0{};
        }
        ///Lock Threshold Control. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> lockth{}; 
        ///DCO Output Updates Stall. 
        enum class StallVal {
            disabled=0x00000000,     ///<In phase-lock and frequency-lock modes, spectrum spreading, and dithering operate normally, if enabled.
            enabled=0x00000001,     ///<In phase-lock and frequency-lock modes, spectrum spreading, and dithering are prevented from updating the output of the DCO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,StallVal> stall{}; 
        namespace StallValC{
            constexpr Register::FieldValue<decltype(stall)::Type,StallVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stall)::Type,StallVal::enabled> enabled{};
        }
        ///Dithering Enable. 
        enum class DithenVal {
            disabled=0x00000000,     ///<Automatic DCO output dithering disabled.
            enabled=0x00000001,     ///<Automatic DCO output dithering enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,DithenVal> dithen{}; 
        namespace DithenValC{
            constexpr Register::FieldValue<decltype(dithen)::Type,DithenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dithen)::Type,DithenVal::enabled> enabled{};
        }
        ///Edge Lock Select. 
        enum class EdgselVal {
            fallingEdge=0x00000000,     ///<Lock DCO output frequency to the falling edge of the reference frequency.
            risingEdge=0x00000001,     ///<Lock DCO output frequency to the rising edge of the reference frequency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
        }
        ///PLL Output Mode. 
        enum class OutmdVal {
            off=0x00000000,     ///<DCO output is off.
            dco=0x00000001,     ///<DCO output is in Free-Running DCO mode.
            fll=0x00000002,     ///<DCO output is in frequency-lock mode (reference source required).
            pll=0x00000003,     ///<DCO output is in phase-lock mode (reference source required).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,OutmdVal> outmd{}; 
        namespace OutmdValC{
            constexpr Register::FieldValue<decltype(outmd)::Type,OutmdVal::off> off{};
            constexpr Register::FieldValue<decltype(outmd)::Type,OutmdVal::dco> dco{};
            constexpr Register::FieldValue<decltype(outmd)::Type,OutmdVal::fll> fll{};
            constexpr Register::FieldValue<decltype(outmd)::Type,OutmdVal::pll> pll{};
        }
    }
    namespace Nonesspr{    ///<Spectrum Spreading Control
        using Addr = Register::Address<0x4003b020,0xffffe0f8,0,unsigned>;
        ///Spectrum Spreading Amplitude. 
        enum class SsampVal {
            disabled=0x00000000,     ///<Disable Spectrum Spreading.
            setting1=0x00000001,     ///<Spectrum Spreading set to approximately +/- 0.1% of TDCO.
            setting2=0x00000002,     ///<Spectrum Spreading set to approximately +/- 0.2% of TDCO.
            setting3=0x00000003,     ///<Spectrum Spreading set to approximately +/- 0.4% of TDCO.
            setting4=0x00000004,     ///<Spectrum Spreading set to approximately +/- 0.8% of TDCO.
            setting5=0x00000005,     ///<Spectrum Spreading set to approximately +/- 1.6% of TDCO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SsampVal> ssamp{}; 
        namespace SsampValC{
            constexpr Register::FieldValue<decltype(ssamp)::Type,SsampVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssamp)::Type,SsampVal::setting1> setting1{};
            constexpr Register::FieldValue<decltype(ssamp)::Type,SsampVal::setting2> setting2{};
            constexpr Register::FieldValue<decltype(ssamp)::Type,SsampVal::setting3> setting3{};
            constexpr Register::FieldValue<decltype(ssamp)::Type,SsampVal::setting4> setting4{};
            constexpr Register::FieldValue<decltype(ssamp)::Type,SsampVal::setting5> setting5{};
        }
        ///Spectrum Spreading Update Interval. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> ssuinv{}; 
    }
    namespace Nonecalconfig{    ///<Calibration Configuration
        using Addr = Register::Address<0x4003b030,0xfff80000,0,unsigned>;
        ///DCO Dither Setting. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///DCO Calibration Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> cal{}; 
        ///DCO Range. 
        enum class RangeVal {
            range0=0x00000000,     ///<DCO operates from 23 to 37 MHz.
            range1=0x00000001,     ///<DCO operates from 33 to 54 MHz.
            range2=0x00000002,     ///<DCO operates from 45 to 71 MHz.
            range3=0x00000003,     ///<DCO operates from 53 to 80 MHz.
            range4=0x00000004,     ///<DCO operates from 73 to 80 MHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,RangeVal> range{}; 
        namespace RangeValC{
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::range0> range0{};
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::range1> range1{};
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::range2> range2{};
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::range3> range3{};
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::range4> range4{};
        }
    }
}
