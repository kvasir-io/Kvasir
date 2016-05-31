#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx 10-bit ADC0/1 Modification date=1/18/2011 Major revision=0 Minor revision=7 
    namespace Adc1Cr{    ///<A/D Control Register. The AD0CR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x400e4000,0x00000000,0x00000000,unsigned>;
        ///Selects which of the ADC[7:0] pins are to be sampled and converted. Bit 0 selects Pin ADC0, bit 1 selects pin AD1,..., and bit 7 selects pin ADC7. In software-controlled mode, only one of these bits should be 1. In hardware scan mode, any value containing 1 to 8 ones. All zeroes is equivalent to 0x01.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///The ADC clock is divided by the CLKDIV value plus one to produce the clock for the A/D converter, which should be less than or equal to 4.5 MHz. Typically, software should program the smallest value in this field that yields a clock of 4.5 MHz or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Burst mode
        enum class BurstVal {
            software=0x00000000,     ///<Conversions are software controlled and require 11 clocks.
            burst=0x00000001,     ///<The AD converter does repeated conversions at the rate selected by the CLKS field, scanning (if necessary) through the pins selected by 1s in the SEL field. The first conversion after the start corresponds to the least-significant 1 in the SEL field, then higher numbered 1 bits (pins) if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion that is  in progress when this bit is cleared will be completed. Important: START bits must be 000 when BURST = 1 or conversions will not start.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::software> software{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::burst> burst{};
        }
        ///This field selects the number of clocks used for each conversion in Burst mode, and the number of bits of accuracy of the result in the LS bits of ADDR, between 11 clocks (10 bits) and 4 clocks (3 bits).
        enum class ClksVal {
            v11Clocks10Bits=0x00000000,     ///<11 clocks / 10 bits
            v10Clocks9Bits=0x00000001,     ///<10 clocks / 9 bits
            v9Clocks8Bits=0x00000002,     ///<9 clocks / 8 bits
            v8Clocks7Bits=0x00000003,     ///<8 clocks / 7 bits
            v7Clocks6Bits=0x00000004,     ///<7 clocks / 6 bits
            v6Clocks5Bits=0x00000005,     ///<6 clocks / 5 bits
            v5Clocks4Bits=0x00000006,     ///<5 clocks / 4 bits
            v4Clocks3Bits=0x00000007,     ///<4 clocks / 3 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11Clocks10Bits> v11Clocks10Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10Clocks9Bits> v10Clocks9Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v9Clocks8Bits> v9Clocks8Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v8Clocks7Bits> v8Clocks7Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v7Clocks6Bits> v7Clocks6Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v6Clocks5Bits> v6Clocks5Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v5Clocks4Bits> v5Clocks4Bits{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v4Clocks3Bits> v4Clocks3Bits{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Power mode
        enum class PdnVal {
            powerdown=0x00000000,     ///<The A/D converter is in Power-down mode.
            running=0x00000001,     ///<The A/D converter is operational.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,PdnVal> pdn{}; 
        namespace PdnValC{
            constexpr Register::FieldValue<decltype(pdn)::Type,PdnVal::powerdown> powerdown{};
            constexpr Register::FieldValue<decltype(pdn)::Type,PdnVal::running> running{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When the BURST bit is 0, these bits control whether and when an A/D conversion is started (also see Figure 56):
        enum class StartVal {
            noStartThisValue=0x00000000,     ///<No start (this value should be used when clearing PDN to 0).
            startConversionNow=0x00000001,     ///<Start conversion now.
            ctout15=0x00000002,     ///<Start conversion when the edge selected by bit 27 occurs on CTOUT_15 (combined timer output 15).
            ctout8=0x00000003,     ///<Start conversion when the edge selected by bit 27 occurs on CTOUT_8 (combined timer output 8).
            adctrig0=0x00000004,     ///<Start conversion when the edge selected by bit 27 occurs on ADCTRIG0 input.
            adctrig1=0x00000005,     ///<Start conversion when the edge selected by bit 27 occurs on ADCTRIG1 input.
            mcoa2=0x00000006,     ///<Start conversion when the edge selected by bit 27 occurs on Motocon PWM output MCOA2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::noStartThisValue> noStartThisValue{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionNow> startConversionNow{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::ctout15> ctout15{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::ctout8> ctout8{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::adctrig0> adctrig0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::adctrig1> adctrig1{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::mcoa2> mcoa2{};
        }
        ///This bit is significant only when the START field contains 0x2 -0x6. In these cases:
        enum class EdgeVal {
            rising=0x00000000,     ///<Start conversion on a rising edge on the selected signal.
            falling=0x00000001,     ///<Start conversion on a falling edge on the selected signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::falling> falling{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Adc1Gdr{    ///<A/D Global Data Register. Contains the result of the most recent A/D conversion.
        using Addr = Register::Address<0x400e4004,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn pin selected by the SEL field, divided by the reference voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VSSA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///These bits contain the channel from which the LS bits were converted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an analog-to-digital conversion completes. It is cleared when this register is read and when the AD0/1CR register is written. If the AD0/1CR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Inten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x400e400c,0x00000000,0x00000000,unsigned>;
        ///These bits allow control over which A/D channels generate interrupts for conversion completion. When bit 0 is one, completion of a conversion on A/D channel 0 will generate an interrupt, when bit 1 is one, completion of a conversion on A/D channel 1 will generate an interrupt, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adinten{}; 
        ///When 1, enables the global DONE flag in ADDR to generate an interrupt. When 0, only the individual A/D channels enabled by ADINTEN 7:0 will generate interrupts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adginten{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Adc1Stat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt flag.
        using Addr = Register::Address<0x400e4030,0x00000000,0x00000000,unsigned>;
        ///These bits mirror the DONE status flags that appear in the result register for each A/D channel.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///These bits mirror the OVERRRUN status flags that appear in the result register for each A/D channel. Reading ADSTAT allows checking the status of all A/D channels simultaneously.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> overun{}; 
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Adc1Dr0{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4010,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr1{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4014,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr2{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4018,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr3{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e401c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr4{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4020,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr5{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4024,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr6{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4028,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr7{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e402c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr0{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4010,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr1{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4014,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr2{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4018,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr3{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e401c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr4{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4020,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr5{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4024,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr6{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e4028,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Adc1Dr7{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel n.
        using Addr = Register::Address<0x400e402c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADCn input pin selected in Table 727, divided by the voltage on the VDDA pin. Zero in the field indicates that the voltage on the ADCn input pin was less than, equal to, or close to that on VDDA, while 0x3FF indicates that the voltage on ADCn input pin was close to, equal to, or greater than that on VDDA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits in this register.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
}
