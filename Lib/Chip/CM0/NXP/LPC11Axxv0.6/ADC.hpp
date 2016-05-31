#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//ADC 
    namespace AdcCr{    ///<A/D Control Register. The CR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x4001c000,0x00000000,0x00000000,unsigned>;
        ///Selects which of the AD7:0 pins is (are) to be sampled and converted. Bit 0 selects Pin AD0, bit 1 selects pin AD1,..., and bit 7 selects pin AD7.  In software-controlled mode (BURST = 0), only one channel can be selected, i.e. only one of these bits should be 1.  In hardware scan mode (BURST = 1), any numbers of channels can be selected, i.e any or all bits can be set to 1. If all bits are 0 (as after Reset) channel 0 is selected automatically.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///The APB clock (PCLK) is divided by CLKDIV +1 to produce the clock for the ADC, which should be less than or equal to 4.5 MHz. Typically, software should program the smallest value in this field that yields a clock of 4.5 MHz or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Burst mode
        enum class BurstVal {
            softwareControlled=0x00000000,     ///<Software-controlled mode: Conversions are software-controlled and require 11 clocks.
            hardwareScanMode=0x00000001,     ///<Hardware scan mode: The AD converter does repeated conversions at the rate selected by the CLKS field, scanning (if necessary) through the pins selected by 1s in the SEL field. The first conversion after the start corresponds to the least-significant bit set to 1 in the SEL field, then the next higher  bits (pins) set to 1 are scanned if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion in progress when this bit is cleared will be completed. If bit 20 in this register is set (single-burst mode), hardware clears this bit automatically after one set of conversions on all of the selected channels.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::softwareControlled> softwareControlled{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::hardwareScanMode> hardwareScanMode{};
        }
        ///This field selects the number of clocks used for each conversion in Burst mode, and the number of bits of accuracy of the result in the LS bits of ADDR, between 11 clocks (10 bits) and 4 clocks (3 bits).
        enum class ClksVal {
            v11Clocks=0x00000000,     ///<11 clocks / 10 bits
            v10Clocks=0x00000001,     ///<10 clocks / 9 bits
            v9Clocks=0x00000002,     ///<9 clocks / 8 bits
            v8Clocks=0x00000003,     ///<8 clocks / 7 bits
            v7Clocks=0x00000004,     ///<7 clocks / 6 bits
            v6Clock=0x00000005,     ///<6 clocks / 5 bits
            v5Clocks=0x00000006,     ///<5 clocks / 4 bits
            v4Clocks=0x00000007,     ///<4 clocks / 3 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11Clocks> v11Clocks{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10Clocks> v10Clocks{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v9Clocks> v9Clocks{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v8Clocks> v8Clocks{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v7Clocks> v7Clocks{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v6Clock> v6Clock{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v5Clocks> v5Clocks{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v4Clocks> v4Clocks{};
        }
        ///Single-burst mode
        enum class SingleburstVal {
            continuousBurst=0x00000000,     ///<Continuous. Burst mode can only be terminated via a software write to clear bit 16 in this register.
            singleBurst=0x00000001,     ///<Single-burst. When the burst mode is selected by writing a 1 to bit 16 in this register, the ADC cycles through a single set of conversions on the selection of channels specified in the SEL field. Once the conversion has been completed on each selected channel, bit 16 is automatically cleared and the conversions stop until a new trigger event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,SingleburstVal> singleburst{}; 
        namespace SingleburstValC{
            constexpr Register::FieldValue<decltype(singleburst)::Type,SingleburstVal::continuousBurst> continuousBurst{};
            constexpr Register::FieldValue<decltype(singleburst)::Type,SingleburstVal::singleBurst> singleBurst{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When the BURST bit is 0, these bits control whether/when an A/D conversion is started. All other values are reserved.
        enum class StartVal {
            noStartThisValue=0x00000000,     ///<No start (this value should be used when clearing PDN to 0).
            startConversionNow=0x00000002,     ///<Start conversion now.
            startConversionWhe=0x00000004,     ///<Start conversion when the edge selected by bit 27 occurs on ATRG0.
            startConversionWhe=0x00000005,     ///<Start conversion when the edge selected by bit 27 occurs on the analog comparator output.
            startConversionWhe=0x00000006,     ///<Start conversion when the edge selected by bit 27 occurs on ATRG1.
            startConversionWhe=0x00000008,     ///<Start conversion when the edge selected by bit 27 occurs on CT32B0_MAT0[1].
            startConversionWhe=0x0000000a,     ///<Start conversion when the edge selected by bit 27 occurs on CT32B0_MAT1[1].
            startConversionWhe=0x0000000c,     ///<Start conversion when the edge selected by bit 27 occurs on CT16B0_MAT0[1].
            startConversionWhe=0x0000000e,     ///<Start conversion when the edge selected by bit 27 occurs on CT16B0_MAT1[1].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,23),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::noStartThisValue> noStartThisValue{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionNow> startConversionNow{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionWhe> startConversionWhe{};
        }
        ///This bit is significant only when the START field contains 0100-1110. In these cases:
        enum class EdgeVal {
            startConversionOn=0x00000000,     ///<Start conversion on a rising edge on the selected signal.
            startConversionOn=0x00000001,     ///<Start conversion on a falling edge on the selected signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::startConversionOn> startConversionOn{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::startConversionOn> startConversionOn{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcGdr{    ///<A/D Global Data Register. Contains the result of the most recent A/D conversion.
        using Addr = Register::Address<0x4001c004,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin selected by the SEL field, divided by the voltage on the VDD pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VSS, while 0x3FF indicates that the voltage on ADn was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking, for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///These bits contain the channel from which the LS bits were converted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits. In non-FIFO operation, this bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read and when the ADCR is written. If the ADCR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcSel{    ///<A/D Select Register. Selects between external pins and internal sources.
        using Addr = Register::Address<0x4001c008,0x00000000,0x00000000,unsigned>;
        ///Reserved. Always write zeroes to these bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This field selects the source signal for channel 5.
        enum class Ad5selVal {
            ad5Pin=0x00000000,     ///<AD5 pin
            noConnectionOrLoa=0x00000001,     ///<No connection or load
            coreVoltageRegulat=0x00000002,     ///<Core voltage regulator output (1.2 to 1.8V)
            reservedDoNotPro=0x00000003,     ///<Reserved. Do not program this value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Ad5selVal> ad5sel{}; 
        namespace Ad5selValC{
            constexpr Register::FieldValue<decltype(ad5sel)::Type,Ad5selVal::ad5Pin> ad5Pin{};
            constexpr Register::FieldValue<decltype(ad5sel)::Type,Ad5selVal::noConnectionOrLoa> noConnectionOrLoa{};
            constexpr Register::FieldValue<decltype(ad5sel)::Type,Ad5selVal::coreVoltageRegulat> coreVoltageRegulat{};
            constexpr Register::FieldValue<decltype(ad5sel)::Type,Ad5selVal::reservedDoNotPro> reservedDoNotPro{};
        }
        ///This field selects the source signal for channel 6.
        enum class Ad6selVal {
            ad6Pin=0x00000000,     ///<AD6 pin
            noConnectionOrLoa=0x00000001,     ///<No connection or load
            internalVoltageRef=0x00000002,     ///<Internal voltage reference
            reservedDoNotPro=0x00000003,     ///<Reserved. Do not program this value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Ad6selVal> ad6sel{}; 
        namespace Ad6selValC{
            constexpr Register::FieldValue<decltype(ad6sel)::Type,Ad6selVal::ad6Pin> ad6Pin{};
            constexpr Register::FieldValue<decltype(ad6sel)::Type,Ad6selVal::noConnectionOrLoa> noConnectionOrLoa{};
            constexpr Register::FieldValue<decltype(ad6sel)::Type,Ad6selVal::internalVoltageRef> internalVoltageRef{};
            constexpr Register::FieldValue<decltype(ad6sel)::Type,Ad6selVal::reservedDoNotPro> reservedDoNotPro{};
        }
        ///This field selects the source signal for channel 7.
        enum class Ad7selVal {
            ad7Pin=0x00000000,     ///<AD7 pin
            noConnectionOrLoa=0x00000001,     ///<No connection or load
            temperatureSensor=0x00000002,     ///<Temperature sensor
            reservedDoNotPro=0x00000003,     ///<Reserved. Do not program this value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Ad7selVal> ad7sel{}; 
        namespace Ad7selValC{
            constexpr Register::FieldValue<decltype(ad7sel)::Type,Ad7selVal::ad7Pin> ad7Pin{};
            constexpr Register::FieldValue<decltype(ad7sel)::Type,Ad7selVal::noConnectionOrLoa> noConnectionOrLoa{};
            constexpr Register::FieldValue<decltype(ad7sel)::Type,Ad7selVal::temperatureSensor> temperatureSensor{};
            constexpr Register::FieldValue<decltype(ad7sel)::Type,Ad7selVal::reservedDoNotPro> reservedDoNotPro{};
        }
        ///Reserved. Always write zeroes to these bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcStat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt flag.
        using Addr = Register::Address<0x4001c030,0x00000000,0x00000000,unsigned>;
        ///These bits mirror the DONE status flags that appear in the result register for each A/D channel.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///These bits mirror the OVERRUN status flags that appear in the result register for each A/D channel. Reading ADSTAT allows checking the status of all A/D channels simultaneously.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcInten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x4001c00c,0x00000000,0x00000000,unsigned>;
        ///These bits allow control over which A/D channels generate interrupts for conversion completion. When bit 0 is one, completion of a conversion on A/D channel 0 will generate an interrupt, when bit 1 is one, completion of a conversion on A/D channel 1 will generate an interrupt, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adinten{}; 
        ///When 1, enables the global DONE flag in ADDR to generate an interrupt. When 0, only the individual A/D channels enabled by ADINTEN 7:0 will generate interrupts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adginten{}; 
        ///Reserved. Always 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcDr0{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c010,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr1{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c014,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr2{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c018,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr3{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c01c,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr4{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c020,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr5{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c024,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr6{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c028,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace AdcDr7{    ///<A/D Channel 0 Data Register. This register contains the result of the most recent conversion completed on channel 0
        using Addr = Register::Address<0x4001c02c,0x00000000,0x00000000,unsigned>;
        ///Reserved. These bits always read as zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///Reserved. These bits always read as zeroes. They allow accumulation of successive A/D values without AND-masking for at least 256 values without overflow into the CHN field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the LS bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
}
