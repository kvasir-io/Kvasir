#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx 10-bit ADC0/1 Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Nonecr{    ///<A/D Control Register. The AD0CR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x400e3000,0xf0d00000,0,unsigned>;
        ///Selects which of the ADC[7:0] pins are to be sampled and converted. Bit 0 selects Pin ADC0, bit 1 selects pin AD1,..., and bit 7 selects pin ADC7. In software-controlled mode, only one of these bits should be 1. In hardware scan mode, any value containing 1 to 8 ones. All zeroes is equivalent to 0x01.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///The ADC clock is divided by the CLKDIV value plus one to produce the clock for the A/D converter, which should be less than or equal to 4.5 MHz. Typically, software should program the smallest value in this field that yields a clock of 4.5 MHz or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Burst mode
        enum class burstVal {
            software=0x00000000,     ///<Conversions are software controlled and require 11 clocks.
            burst=0x00000001,     ///<The AD converter does repeated conversions at the rate selected by the CLKS field, scanning (if necessary) through the pins selected by 1s in the SEL field. The first conversion after the start corresponds to the least-significant 1 in the SEL field, then higher numbered 1 bits (pins) if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion that is  in progress when this bit is cleared will be completed. Important: START bits must be 000 when BURST = 1 or conversions will not start.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::software> software{};
            constexpr MPL::Value<burstVal,burstVal::burst> burst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,burstVal> burst{}; 
        ///This field selects the number of clocks used for each conversion in Burst mode, and the number of bits of accuracy of the result in the LS bits of ADDR, between 11 clocks (10 bits) and 4 clocks (3 bits).
        enum class clksVal {
            v11Clocks10Bits=0x00000000,     ///<11 clocks / 10 bits
            v10Clocks9Bits=0x00000001,     ///<10 clocks / 9 bits
            v9Clocks8Bits=0x00000002,     ///<9 clocks / 8 bits
            v8Clocks7Bits=0x00000003,     ///<8 clocks / 7 bits
            v7Clocks6Bits=0x00000004,     ///<7 clocks / 6 bits
            v6Clocks5Bits=0x00000005,     ///<6 clocks / 5 bits
            v5Clocks4Bits=0x00000006,     ///<5 clocks / 4 bits
            v4Clocks3Bits=0x00000007,     ///<4 clocks / 3 bits
        };
        namespace clksValC{
            constexpr MPL::Value<clksVal,clksVal::v11Clocks10Bits> v11Clocks10Bits{};
            constexpr MPL::Value<clksVal,clksVal::v10Clocks9Bits> v10Clocks9Bits{};
            constexpr MPL::Value<clksVal,clksVal::v9Clocks8Bits> v9Clocks8Bits{};
            constexpr MPL::Value<clksVal,clksVal::v8Clocks7Bits> v8Clocks7Bits{};
            constexpr MPL::Value<clksVal,clksVal::v7Clocks6Bits> v7Clocks6Bits{};
            constexpr MPL::Value<clksVal,clksVal::v6Clocks5Bits> v6Clocks5Bits{};
            constexpr MPL::Value<clksVal,clksVal::v5Clocks4Bits> v5Clocks4Bits{};
            constexpr MPL::Value<clksVal,clksVal::v4Clocks3Bits> v4Clocks3Bits{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,clksVal> clks{}; 
        ///Power mode
        enum class pdnVal {
            powerdown=0x00000000,     ///<The A/D converter is in Power-down mode.
            running=0x00000001,     ///<The A/D converter is operational.
        };
        namespace pdnValC{
            constexpr MPL::Value<pdnVal,pdnVal::powerdown> powerdown{};
            constexpr MPL::Value<pdnVal,pdnVal::running> running{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pdnVal> pdn{}; 
        ///When the BURST bit is 0, these bits control whether and when an A/D conversion is started (also see Figure 56):
        enum class startVal {
            noStartThisValue=0x00000000,     ///<No start (this value should be used when clearing PDN to 0).
            startConversionNow=0x00000001,     ///<Start conversion now.
            ctout15=0x00000002,     ///<Start conversion when the edge selected by bit 27 occurs on CTOUT_15 (combined timer output 15).
            ctout8=0x00000003,     ///<Start conversion when the edge selected by bit 27 occurs on CTOUT_8 (combined timer output 8).
            adctrig0=0x00000004,     ///<Start conversion when the edge selected by bit 27 occurs on ADCTRIG0 input.
            adctrig1=0x00000005,     ///<Start conversion when the edge selected by bit 27 occurs on ADCTRIG1 input.
            mcoa2=0x00000006,     ///<Start conversion when the edge selected by bit 27 occurs on Motocon PWM output MCOA2.
            reserved=0x00000007,     ///<Reserved.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::noStartThisValue> noStartThisValue{};
            constexpr MPL::Value<startVal,startVal::startConversionNow> startConversionNow{};
            constexpr MPL::Value<startVal,startVal::ctout15> ctout15{};
            constexpr MPL::Value<startVal,startVal::ctout8> ctout8{};
            constexpr MPL::Value<startVal,startVal::adctrig0> adctrig0{};
            constexpr MPL::Value<startVal,startVal::adctrig1> adctrig1{};
            constexpr MPL::Value<startVal,startVal::mcoa2> mcoa2{};
            constexpr MPL::Value<startVal,startVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,startVal> start{}; 
        ///This bit is significant only when the START field contains 0x2 -0x6. In these cases:
        enum class edgeVal {
            rising=0x00000000,     ///<Start conversion on a rising edge on the selected signal.
            falling=0x00000001,     ///<Start conversion on a falling edge on the selected signal.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::rising> rising{};
            constexpr MPL::Value<edgeVal,edgeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,edgeVal> edge{}; 
    }
    namespace Nonegdr{    ///<A/D Global Data Register. Contains the result of the most recent A/D conversion.
        using Addr = Register::Address<0x400e3004,0x38ff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn pin selected by the SEL field, divided by the reference voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VSSA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///These bits contain the channel from which the LS bits were converted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an analog-to-digital conversion completes. It is cleared when this register is read and when the AD0/1CR register is written. If the AD0/1CR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x400e300c,0xfffffe00,0,unsigned>;
        ///These bits allow control over which A/D channels generate interrupts for conversion completion. When bit 0 is one, completion of a conversion on A/D channel 0 will generate an interrupt, when bit 1 is one, completion of a conversion on A/D channel 1 will generate an interrupt, etc.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adinten{}; 
        ///When 1, enables the global DONE flag in ADDR to generate an interrupt. When 0, only the individual A/D channels enabled by ADINTEN 7:0 will generate interrupts.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adginten{}; 
    }
    namespace Nonedr0{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e3010,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr1{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e3014,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr2{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e3018,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr3{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e301c,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr4{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e3020,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr5{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e3024,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr6{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e3028,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr7{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e302c,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonestat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt flag.
        using Addr = Register::Address<0x400e3030,0xfffe0000,0,unsigned>;
        ///These bits mirror the DONE status flags that appear in the result register for each A/D channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///These bits mirror the OVERRRUN status flags that appear in the result register for each A/D channel. Reading ADSTAT allows checking the status of all A/D channels simultaneously.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> overun{}; 
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
    }
}
