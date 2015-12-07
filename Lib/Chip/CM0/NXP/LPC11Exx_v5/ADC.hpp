#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC  
    namespace Nonecr{    ///<A/D Control Register. The CR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x4001c000,0xf0f00000,0,unsigned>;
        ///Selects which of the AD7:0 pins is (are) to be sampled and converted. Bit 0 selects Pin AD0, bit 1 selects pin AD1,..., and bit 7 selects pin AD7.  In software-controlled mode (BURST = 0), only one channel can be selected, i.e. only one of these bits should be 1.  In hardware scan mode (BURST = 1), any numbers of channels can be selected, i.e any or all bits can be set to 1. If all bits are set to 0, channel 0 is selected automatically (SEL = 0x01).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        namespace SelValC{
        }
        ///The APB clock (PCLK) is divided by CLKDIV +1 to produce the clock for the ADC, which should be less than or equal to 4.5 MHz. Typically, software should program the smallest value in this field that yields a clock of 4.5 MHz or slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///Burst mode If BURST is set to 1, the ADGINTEN bit in the INTEN register (Table 276) must be set to 0.
        enum class BurstVal {
            softwareControlled=0x00000000,     ///<Software-controlled mode: Conversions are software-controlled and require 11 clocks.
            hardwareScanMode=0x00000001,     ///<Hardware scan mode: The AD converter does repeated conversions at the rate selected by the CLKS field, scanning (if necessary) through the pins selected by 1s in the SEL field. The first conversion after the start corresponds to the least-significant bit set to 1 in the SEL field, then the next higher  bits (pins) set to 1 are scanned if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion in progress when this bit is cleared will be completed. Important: START bits must be 000 when BURST = 1 or conversions will not start.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::softwareControlled> softwareControlled{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::hardwareScanMode> hardwareScanMode{};
        }
        ///This field selects the number of clocks used for each conversion in Burst mode, and the number of bits of accuracy of the result in the LS bits of ADDR, between 11 clocks (10 bits) and 4 clocks (3 bits).
        enum class ClksVal {
            v11Clocks=0x00000000,     ///<11 clocks / 10 bits
            v10Clocks=0x00000001,     ///<10 clocks / 9 bits
            v9Clocks=0x00000002,     ///<9 clocks / 8 bits
            v8Clocks=0x00000003,     ///<8 clocks / 7 bits
            v7Clocks=0x00000004,     ///<7 clocks / 6 bits
            v6Clocks=0x00000005,     ///<6 clocks / 5 bits
            v5Clocks=0x00000006,     ///<5 clocks / 4 bits
            v4Clocks=0x00000007,     ///<4 clocks / 3 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks),ClksVal::v11Clocks> v11Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v10Clocks> v10Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v9Clocks> v9Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v8Clocks> v8Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v7Clocks> v7Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v6Clocks> v6Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v5Clocks> v5Clocks{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v4Clocks> v4Clocks{};
        }
        ///When the BURST bit is 0, these bits control whether and when an A/D conversion is started:
        enum class StartVal {
            noStartThisValue=0x00000000,     ///<No start (this value should be used when clearing PDN to 0).
            startConversionNow=0x00000001,     ///<Start conversion now.
            pio02=0x00000002,     ///<Start conversion when the edge selected by bit 27 occurs on PIO0_2/SSEL/CT16B0_CAP0.
            pio15=0x00000003,     ///<Start conversion when the edge selected by bit 27 occurs on PIO1_5/DIR/CT32B0_CAP0.
            ct32b0Mat0=0x00000004,     ///<Start conversion when the edge selected by bit 27 occurs on CT32B0_MAT0[1].
            ct32b0Mat1=0x00000005,     ///<Start conversion when the edge selected by bit 27 occurs on CT32B0_MAT1[1].
            ct16b0Mat0=0x00000006,     ///<Start conversion when the edge selected by bit 27 occurs on CT16B0_MAT0[1].
            ct16b0Mat1=0x00000007,     ///<Start conversion when the edge selected by bit 27 occurs on CT16B0_MAT1[1].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start),StartVal::noStartThisValue> noStartThisValue{};
            constexpr Register::FieldValue<decltype(start),StartVal::startConversionNow> startConversionNow{};
            constexpr Register::FieldValue<decltype(start),StartVal::pio02> pio02{};
            constexpr Register::FieldValue<decltype(start),StartVal::pio15> pio15{};
            constexpr Register::FieldValue<decltype(start),StartVal::ct32b0Mat0> ct32b0Mat0{};
            constexpr Register::FieldValue<decltype(start),StartVal::ct32b0Mat1> ct32b0Mat1{};
            constexpr Register::FieldValue<decltype(start),StartVal::ct16b0Mat0> ct16b0Mat0{};
            constexpr Register::FieldValue<decltype(start),StartVal::ct16b0Mat1> ct16b0Mat1{};
        }
        ///This bit is significant only when the START field contains 010-111. In these cases:
        enum class EdgeVal {
            rising=0x00000000,     ///<Start conversion on a rising edge on the selected CAP/MAT signal.
            falling=0x00000001,     ///<Start conversion on a falling edge on the selected CAP/MAT signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge),EdgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(edge),EdgeVal::falling> falling{};
        }
    }
    namespace Nonegdr{    ///<A/D Global Data Register. Contains the result of the most recent A/D conversion.
        using Addr = Register::Address<0x4001c004,0x38ff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin selected by the SEL field, divided by the voltage on the VDD pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VSS, while 0x3FF indicates that the voltage on ADn was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///These bits contain the channel from which the result bits V_VREF were converted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        namespace ChnValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read and when the ADCR is written. If the ADCR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x4001c00c,0xfffffe00,0,unsigned>;
        ///These bits allow control over which A/D channels generate interrupts for conversion completion. When bit 0 is one, completion of a conversion on A/D channel 0 will generate an interrupt, when bit 1 is one, completion of a conversion on A/D channel 1 will generate an interrupt, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adinten{}; 
        namespace AdintenValC{
        }
        ///When 1, enables the global DONE flag in ADDR to generate an interrupt. When 0, only the individual A/D channels enabled by ADINTEN 7:0 will generate interrupts. This bit must be set to 0 in burst mode (BURST = 1 in the CR register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adginten{}; 
        namespace AdgintenValC{
        }
    }
    namespace Nonedr0{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c010,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr1{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c014,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr2{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c018,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr3{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c01c,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr4{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c020,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr5{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c024,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr6{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c028,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonedr7{    ///<A/D Channel Data Register. This register contains the result of the most recent conversion completed on channel N
        using Addr = Register::Address<0x4001c02c,0x3fff003f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin, divided by the voltage on the VREF pin. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREF, while 0x3FF indicates that the voltage on AD input was close to, equal to, or greater than that on VREF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> vVref{}; 
        namespace VvrefValC{
        }
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace Nonestat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt flag.
        using Addr = Register::Address<0x4001c030,0xfffe0000,0,unsigned>;
        ///These bits mirror the DONE status flags that appear in the result register for each A/D channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
        ///These bits mirror the OVERRRUN status flags that appear in the result register for each A/D channel n. Reading ADSTAT allows checking the status of all A/D channels simultaneously.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> overrun{}; 
        namespace OverrunValC{
        }
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
        namespace AdintValC{
        }
    }
}
