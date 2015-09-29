#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (ADC) 
    namespace Nonecr{    ///<A/D Control Register. The ADCR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x40034000,0xf0de0000,0,unsigned>;
        ///Selects which of the AD0[7:0] pins is (are) to be sampled and converted. For AD0, bit 0 selects Pin AD0[0], and bit 7 selects pin AD0[7]. In software-controlled mode, only one of these bits should be 1. In hardware scan mode, any value containing 1 to 8 ones is allowed. All zeroes is equivalent to 0x01.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///The APB clock (PCLK) is divided by (this value plus one) to produce the clock for the A/D converter, which should be less than or equal to 12.4 MHz. Typically, software should program the smallest value in this field that yields a clock of 12.4 MHz or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Burst mode
        enum class burstVal {
            burst=0x00000001,     ///<The AD converter does repeated conversions at up to 400 kHz, scanning (if necessary) through the pins selected by bits set to ones in the SEL field. The first conversion after the start corresponds to the least-significant 1 in the SEL field, then higher numbered 1-bits (pins) if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion that's in progress when this bit is cleared will be completed. START bits must be 000 when BURST = 1 or conversions will not start.
            sw=0x00000000,     ///<Conversions are software controlled and require 31 clocks.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::burst> burst{};
            constexpr MPL::Value<burstVal,burstVal::sw> sw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,burstVal> burst{}; 
        ///Power down mode
        enum class pdnVal {
            powered=0x00000001,     ///<The A/D converter is operational.
            powerdown=0x00000000,     ///<The A/D converter is in power-down mode.
        };
        namespace pdnValC{
            constexpr MPL::Value<pdnVal,pdnVal::powered> powered{};
            constexpr MPL::Value<pdnVal,pdnVal::powerdown> powerdown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pdnVal> pdn{}; 
        ///When the BURST bit is 0, these bits control whether and when an A/D conversion is started:
        enum class startVal {
            noStartThisValue=0x00000000,     ///<No start (this value should be used when clearing PDN to 0).
            startConversionNow=0x00000001,     ///<Start conversion now.
            p210=0x00000002,     ///<Start conversion when the edge selected by bit 27 occurs on the P2[10] pin.
            p127=0x00000003,     ///<Start conversion when the edge selected by bit 27 occurs on the P1[27] pin.
            mat01=0x00000004,     ///<Start conversion when the edge selected by bit 27 occurs on MAT0.1. Note that this does not require that the MAT0.1 function appear on a device pin.
            mat03=0x00000005,     ///<Start conversion when the edge selected by bit 27 occurs on MAT0.3. Note that it is not possible to cause the MAT0.3 function to appear on a device pin.
            mat10=0x00000006,     ///<Start conversion when the edge selected by bit 27 occurs on MAT1.0. Note that this does not require that the MAT1.0 function appear on a device pin.
            mat11=0x00000007,     ///<Start conversion when the edge selected by bit 27 occurs on MAT1.1. Note that this does not require that the MAT1.1 function appear on a device pin.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::noStartThisValue> noStartThisValue{};
            constexpr MPL::Value<startVal,startVal::startConversionNow> startConversionNow{};
            constexpr MPL::Value<startVal,startVal::p210> p210{};
            constexpr MPL::Value<startVal,startVal::p127> p127{};
            constexpr MPL::Value<startVal,startVal::mat01> mat01{};
            constexpr MPL::Value<startVal,startVal::mat03> mat03{};
            constexpr MPL::Value<startVal,startVal::mat10> mat10{};
            constexpr MPL::Value<startVal,startVal::mat11> mat11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,startVal> start{}; 
        ///This bit is significant only when the START field contains 010-111. In these cases:
        enum class edgeVal {
            fallling=0x00000001,     ///<Start conversion on a falling edge on the selected CAP/MAT signal.
            rising=0x00000000,     ///<Start conversion on a rising edge on the selected CAP/MAT signal.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::fallling> fallling{};
            constexpr MPL::Value<edgeVal,edgeVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,edgeVal> edge{}; 
    }
    namespace Nonegdr{    ///<A/D Global Data Register. This register contains the ADC's DONE bit and the result of the most recent A/D conversion.
        using Addr = Register::Address<0x40034004,0x38ff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin selected by the SEL field, as it falls within the range of VREFP to VSS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 000 identifies channel 0, 001 channel 1...).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits. This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read and when the ADCR is written. If the ADCR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x4003400c,0xfffffe00,0,unsigned>;
        ///Interrupt enable
        enum class adinten0Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 0 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 0 will generate an interrupt.
        };
        namespace adinten0ValC{
            constexpr MPL::Value<adinten0Val,adinten0Val::disable> disable{};
            constexpr MPL::Value<adinten0Val,adinten0Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,adinten0Val> adinten0{}; 
        ///Interrupt enable
        enum class adinten1Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 1 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 1 will generate an interrupt.
        };
        namespace adinten1ValC{
            constexpr MPL::Value<adinten1Val,adinten1Val::disable> disable{};
            constexpr MPL::Value<adinten1Val,adinten1Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,adinten1Val> adinten1{}; 
        ///Interrupt enable
        enum class adinten2Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 2 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 2 will generate an interrupt.
        };
        namespace adinten2ValC{
            constexpr MPL::Value<adinten2Val,adinten2Val::disable> disable{};
            constexpr MPL::Value<adinten2Val,adinten2Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,adinten2Val> adinten2{}; 
        ///Interrupt enable
        enum class adinten3Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 3 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 3 will generate an interrupt.
        };
        namespace adinten3ValC{
            constexpr MPL::Value<adinten3Val,adinten3Val::disable> disable{};
            constexpr MPL::Value<adinten3Val,adinten3Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adinten3Val> adinten3{}; 
        ///Interrupt enable
        enum class adinten4Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 4 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 4 will generate an interrupt.
        };
        namespace adinten4ValC{
            constexpr MPL::Value<adinten4Val,adinten4Val::disable> disable{};
            constexpr MPL::Value<adinten4Val,adinten4Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adinten4Val> adinten4{}; 
        ///Interrupt enable
        enum class adinten5Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 5 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 5 will generate an interrupt.
        };
        namespace adinten5ValC{
            constexpr MPL::Value<adinten5Val,adinten5Val::disable> disable{};
            constexpr MPL::Value<adinten5Val,adinten5Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,adinten5Val> adinten5{}; 
        ///Interrupt enable
        enum class adinten6Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 6 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 6 will generate an interrupt.
        };
        namespace adinten6ValC{
            constexpr MPL::Value<adinten6Val,adinten6Val::disable> disable{};
            constexpr MPL::Value<adinten6Val,adinten6Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adinten6Val> adinten6{}; 
        ///Interrupt enable
        enum class adinten7Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 7 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 7 will generate an interrupt.
        };
        namespace adinten7ValC{
            constexpr MPL::Value<adinten7Val,adinten7Val::disable> disable{};
            constexpr MPL::Value<adinten7Val,adinten7Val::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adinten7Val> adinten7{}; 
        ///Interrupt enable
        enum class adgintenVal {
            channels=0x00000000,     ///<Only the individual ADC channels enabled by ADINTEN7:0 will generate interrupts.
            global=0x00000001,     ///<The global DONE flag in ADDR is enabled to generate an interrupt in addition to any individual ADC channels that are enabled to generate interrupts.
        };
        namespace adgintenValC{
            constexpr MPL::Value<adgintenVal,adgintenVal::channels> channels{};
            constexpr MPL::Value<adgintenVal,adgintenVal::global> global{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,adgintenVal> adginten{}; 
    }
    namespace Nonedr0{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034010,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr1{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034014,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr2{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034018,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr3{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4003401c,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr4{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034020,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr5{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034024,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr6{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034028,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr7{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4003402c,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonestat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt/DMA flag.
        using Addr = Register::Address<0x40034030,0xfffe0000,0,unsigned>;
        ///This bit mirrors the DONE status flag from the result register for A/D channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done0{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> done1{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> done2{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> done3{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> done4{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done5{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> done6{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 7.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done7{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> overrun1{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> overrun2{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> overrun3{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> overrun4{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> overrun5{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> overrun6{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 7.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> overrun7{}; 
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
    }
    namespace Nonetrm{    ///<ADC trim register.
        using Addr = Register::Address<0x40034034,0xfffff00f,0,unsigned>;
        ///Offset trim bits for ADC operation. Initialized by the boot code. Can be overwritten by the user.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adcoffs{}; 
        ///written-to by boot code. Can not be overwritten by the user. These bits are locked after boot code write.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trim{}; 
    }
}
