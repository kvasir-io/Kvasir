#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (ADC)
    namespace Nonecr{    ///<A/D Control Register. The ADCR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x40034000,0xf0de0000,0,unsigned>;
        ///Selects which of the AD0[7:0] pins is (are) to be sampled and converted. For AD0, bit 0 selects Pin AD0[0], and bit 7 selects pin AD0[7]. In software-controlled mode, only one of these bits should be 1. In hardware scan mode, any value containing 1 to 8 ones is allowed. All zeroes is equivalent to 0x01.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///The APB clock (PCLK) is divided by (this value plus one) to produce the clock for the A/D converter, which should be less than or equal to 12.4 MHz. Typically, software should program the smallest value in this field that yields a clock of 12.4 MHz or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Burst mode
        enum class BurstVal {
            burst=0x00000001,     ///<The AD converter does repeated conversions at up to 400 kHz, scanning (if necessary) through the pins selected by bits set to ones in the SEL field. The first conversion after the start corresponds to the least-significant 1 in the SEL field, then higher numbered 1-bits (pins) if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion that's in progress when this bit is cleared will be completed. START bits must be 000 when BURST = 1 or conversions will not start.
            sw=0x00000000,     ///<Conversions are software controlled and require 31 clocks.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::burst> burst{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::sw> sw{};
        }
        ///Power down mode
        enum class PdnVal {
            powered=0x00000001,     ///<The A/D converter is operational.
            powerdown=0x00000000,     ///<The A/D converter is in power-down mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,PdnVal> pdn{}; 
        namespace PdnValC{
            constexpr Register::FieldValue<decltype(pdn)::Type,PdnVal::powered> powered{};
            constexpr Register::FieldValue<decltype(pdn)::Type,PdnVal::powerdown> powerdown{};
        }
        ///When the BURST bit is 0, these bits control whether and when an A/D conversion is started:
        enum class StartVal {
            noStartThisValue=0x00000000,     ///<No start (this value should be used when clearing PDN to 0).
            startConversionNow=0x00000001,     ///<Start conversion now.
            p210=0x00000002,     ///<Start conversion when the edge selected by bit 27 occurs on the P2[10] pin.
            p127=0x00000003,     ///<Start conversion when the edge selected by bit 27 occurs on the P1[27] pin.
            mat01=0x00000004,     ///<Start conversion when the edge selected by bit 27 occurs on MAT0.1. Note that this does not require that the MAT0.1 function appear on a device pin.
            mat03=0x00000005,     ///<Start conversion when the edge selected by bit 27 occurs on MAT0.3. Note that it is not possible to cause the MAT0.3 function to appear on a device pin.
            mat10=0x00000006,     ///<Start conversion when the edge selected by bit 27 occurs on MAT1.0. Note that this does not require that the MAT1.0 function appear on a device pin.
            mat11=0x00000007,     ///<Start conversion when the edge selected by bit 27 occurs on MAT1.1. Note that this does not require that the MAT1.1 function appear on a device pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::noStartThisValue> noStartThisValue{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionNow> startConversionNow{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::p210> p210{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::p127> p127{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::mat01> mat01{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::mat03> mat03{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::mat10> mat10{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::mat11> mat11{};
        }
        ///This bit is significant only when the START field contains 010-111. In these cases:
        enum class EdgeVal {
            fallling=0x00000001,     ///<Start conversion on a falling edge on the selected CAP/MAT signal.
            rising=0x00000000,     ///<Start conversion on a rising edge on the selected CAP/MAT signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::fallling> fallling{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::rising> rising{};
        }
    }
    namespace Nonegdr{    ///<A/D Global Data Register. This register contains the ADC's DONE bit and the result of the most recent A/D conversion.
        using Addr = Register::Address<0x40034004,0x38ff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin selected by the SEL field, as it falls within the range of VREFP to VSS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///These bits contain the channel from which the RESULT bits were converted (e.g. 000 identifies channel 0, 001 channel 1...).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits. This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read and when the ADCR is written. If the ADCR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x4003400c,0xfffffe00,0,unsigned>;
        ///Interrupt enable
        enum class Adinten0Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 0 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 0 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adinten0Val> adinten0{}; 
        namespace Adinten0ValC{
            constexpr Register::FieldValue<decltype(adinten0)::Type,Adinten0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten0)::Type,Adinten0Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten1Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 1 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 1 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adinten1Val> adinten1{}; 
        namespace Adinten1ValC{
            constexpr Register::FieldValue<decltype(adinten1)::Type,Adinten1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten1)::Type,Adinten1Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten2Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 2 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 2 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adinten2Val> adinten2{}; 
        namespace Adinten2ValC{
            constexpr Register::FieldValue<decltype(adinten2)::Type,Adinten2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten2)::Type,Adinten2Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten3Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 3 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 3 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adinten3Val> adinten3{}; 
        namespace Adinten3ValC{
            constexpr Register::FieldValue<decltype(adinten3)::Type,Adinten3Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten3)::Type,Adinten3Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten4Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 4 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 4 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adinten4Val> adinten4{}; 
        namespace Adinten4ValC{
            constexpr Register::FieldValue<decltype(adinten4)::Type,Adinten4Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten4)::Type,Adinten4Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten5Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 5 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 5 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adinten5Val> adinten5{}; 
        namespace Adinten5ValC{
            constexpr Register::FieldValue<decltype(adinten5)::Type,Adinten5Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten5)::Type,Adinten5Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten6Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 6 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 6 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adinten6Val> adinten6{}; 
        namespace Adinten6ValC{
            constexpr Register::FieldValue<decltype(adinten6)::Type,Adinten6Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten6)::Type,Adinten6Val::enable> enable{};
        }
        ///Interrupt enable
        enum class Adinten7Val {
            disable=0x00000000,     ///<Completion of a conversion on ADC channel 7 will not generate an interrupt.
            enable=0x00000001,     ///<Completion of a conversion on ADC channel 7 will generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adinten7Val> adinten7{}; 
        namespace Adinten7ValC{
            constexpr Register::FieldValue<decltype(adinten7)::Type,Adinten7Val::disable> disable{};
            constexpr Register::FieldValue<decltype(adinten7)::Type,Adinten7Val::enable> enable{};
        }
        ///Interrupt enable
        enum class AdgintenVal {
            channels=0x00000000,     ///<Only the individual ADC channels enabled by ADINTEN7:0 will generate interrupts.
            global=0x00000001,     ///<The global DONE flag in ADDR is enabled to generate an interrupt in addition to any individual ADC channels that are enabled to generate interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AdgintenVal> adginten{}; 
        namespace AdgintenValC{
            constexpr Register::FieldValue<decltype(adginten)::Type,AdgintenVal::channels> channels{};
            constexpr Register::FieldValue<decltype(adginten)::Type,AdgintenVal::global> global{};
        }
    }
    namespace Nonedr0{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034010,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr1{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034014,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr2{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034018,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr3{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4003401c,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr4{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034020,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr5{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034024,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr6{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x40034028,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr7{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0.
        using Addr = Register::Address<0x4003402c,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the AD0[n] pin, as it falls within the range of VREFP to V SS. Zero in the field indicates that the voltage on the input pin was less than, equal to, or close to that on VSS, while 0xFFF indicates that the voltage on the input was close to, equal to, or greater than that on VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> result{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the RESULT bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonestat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt/DMA flag.
        using Addr = Register::Address<0x40034030,0xfffe0000,0,unsigned>;
        ///This bit mirrors the DONE status flag from the result register for A/D channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done0{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> done1{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> done2{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> done3{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> done4{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done5{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> done6{}; 
        ///This bit mirrors the DONE status flag from the result register for A/D channel 7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done7{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> overrun1{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> overrun2{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> overrun3{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> overrun4{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> overrun5{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> overrun6{}; 
        ///This bit mirrors the OVERRRUN status flag from the result register for A/D channel 7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> overrun7{}; 
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
    }
    namespace Nonetrm{    ///<ADC trim register.
        using Addr = Register::Address<0x40034034,0xfffff00f,0,unsigned>;
        ///Offset trim bits for ADC operation. Initialized by the boot code. Can be overwritten by the user.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adcoffs{}; 
        ///written-to by boot code. Can not be overwritten by the user. These bits are locked after boot code write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trim{}; 
    }
}
