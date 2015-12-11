#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC
    namespace Nonecr{    ///<A/D Control Register. The CR register must be written to select the operating mode before A/D conversion can occur.
        using Addr = Register::Address<0x4001c000,0xf03e0000,0,unsigned>;
        ///Selects which of the AD7:0 pins is (are) to be sampled and converted. Bit 0 selects Pin AD0, bit 1 selects pin AD1,..., and bit 7 selects pin AD7.  In software-controlled mode (BURST = 0), only one channel can be selected, i.e. only one of these bits should be 1.  In hardware scan mode (BURST = 1), any numbers of channels can be selected, i.e any or all bits can be set to 1. If all bits are set to 0, channel 0 is selected automatically (SEL = 0x01).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///The main clock (PCLK_ADC) is divided by (this value plus one) to produce the clock for  the A/D converter. The clock should be less than or equal to 15.5 MHz(12-bit mode) or 31 MHz (10-bit mode) in software-controlled mode (BURST bit = 0).. Typically, software should program the smallest value in this field that yields a clock of 15.5 MHz or slightly less, but in certain cases (such as a high-impedance analog  source) a slower clock may be desirable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Burst mode If BURST is set to 1, the ADGINTEN bit in the INTEN register (Table 327) must be set to 0.
        enum class BurstVal {
            softwareControlled=0x00000000,     ///<Software-controlled mode: Conversions are software-controlled and require 31 clocks.
            hardwareScanMode=0x00000001,     ///<Hardware scan mode: The AD converter does repeated conversions at the rate selected by the CLKS field, scanning (if necessary) through the pins selected by ones in the SEL field. The first conversion after the start corresponds to the least-significant bit set to 1 in the SEL field, then the next higher  bits (pins) set to one are scanned if applicable. Repeated conversions can be terminated by clearing this bit, but the conversion in progress when this bit is cleared will be completed. Important: START bits must be 000 when BURST = 1, or conversions will not start.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::softwareControlled> softwareControlled{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::hardwareScanMode> hardwareScanMode{};
        }
        ///Low-power mode
        enum class LpwrmodeVal {
            disableTheLowPowe=0x00000000,     ///<Disable the low-power ADC mode. The analog circuitry remains activated when no conversions are requested.
            enableTheLowPower=0x00000001,     ///<Enable the low-power ADC mode.  The analog circuitry is automatically powered-down when no conversions are taking  place. When any (hardware or software) triggering event is detected, the analog circuitry  is enabled. After the required start-up time, the requested conversion will be launched.  Once the conversion completes, the analog-circuitry will again be powered-down provided  no further conversions are pending.  This mode will NOT power-up the A/D if the ADC is powered down (ADC_PD bit in the PDRUNCFG register is HIGH) or if the part is in Deep-sleep, Power-down, or Deep power-down mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LpwrmodeVal> lpwrmode{}; 
        namespace LpwrmodeValC{
            constexpr Register::FieldValue<decltype(lpwrmode)::Type,LpwrmodeVal::disableTheLowPowe> disableTheLowPowe{};
            constexpr Register::FieldValue<decltype(lpwrmode)::Type,LpwrmodeVal::enableTheLowPower> enableTheLowPower{};
        }
        ///10-bit conversion rate mode
        enum class Mode10bitVal {
            disableThe10BitC=0x00000000,     ///<Disable the 10-bit conversion rate mode.
            enableThe10BitCo=0x00000001,     ///<Enable the 10-bit conversion rate mode with high conversion rate.The A/D resolution is reduced to 10 bits (the two LSB of the conversion result will be forced  to 0). The clock rate (set via the CLKDIV field) can be doubled to up to 31 MHz to  achieve a conversion rate of up to one million samples per second.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Mode10bitVal> mode10bit{}; 
        namespace Mode10bitValC{
            constexpr Register::FieldValue<decltype(mode10bit)::Type,Mode10bitVal::disableThe10BitC> disableThe10BitC{};
            constexpr Register::FieldValue<decltype(mode10bit)::Type,Mode10bitVal::enableThe10BitCo> enableThe10BitCo{};
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
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::noStartThisValue> noStartThisValue{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::startConversionNow> startConversionNow{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::pio02> pio02{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::pio15> pio15{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::ct32b0Mat0> ct32b0Mat0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::ct32b0Mat1> ct32b0Mat1{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::ct16b0Mat0> ct16b0Mat0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::ct16b0Mat1> ct16b0Mat1{};
        }
        ///Edge control. This bit is significant only when the START field contains 010-111.
        enum class EdgeVal {
            rising=0x00000000,     ///<Start conversion on a rising edge on the selected CAP/MAT signal.
            falling=0x00000001,     ///<Start conversion on a falling edge on the selected CAP/MAT signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::falling> falling{};
        }
    }
    namespace Nonegdr{    ///<A/D Global Data Register. Contains the result of the most recent A/D conversion.
        using Addr = Register::Address<0x4001c004,0x38ff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin selected by the SEL field, divided by the voltage on the VDD pin or as it falls within the range of VREFP to  VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VSS/VREFN, while 0xFFF indicates that the voltage on ADn was close to, equal to, or greater than that on VDD/VREFP.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///These bits contain the channel from which the result bits V_VREF were converted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> chn{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read and when the ADCR is written. If the ADCR is written while a conversion is still in progress, this bit is set and a new conversion is started.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Noneinten{    ///<A/D Interrupt Enable Register. This register contains enable bits that allow the DONE flag of each A/D channel to be included or excluded from contributing to the generation of an A/D interrupt.
        using Addr = Register::Address<0x4001c00c,0xfffffe00,0,unsigned>;
        ///These bits allow control over which A/D channels generate interrupts for conversion completion. When bit 0 is one, completion of a conversion on A/D channel 0 will generate an interrupt, when bit 1 is one, completion of a conversion on A/D channel 1 will generate an interrupt, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adinten{}; 
        ///When 1, enables the global DONE flag in ADDR to generate an interrupt. When 0, only the individual A/D channels enabled by ADINTEN 7:0 will generate interrupts. This bit must be set to 0 in burst mode (BURST = 1 in the CR register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adginten{}; 
    }
    namespace Nonedr0{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c010,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr1{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c014,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr2{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c018,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr3{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c01c,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr4{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c020,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr5{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c024,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr6{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c028,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonedr7{    ///<A/D Channel N Data
Register. This register contains the result of the most recent conversion
completed on channel n
        using Addr = Register::Address<0x4001c02c,0x3fff000f,0,unsigned>;
        ///When DONE is 1, this field contains a binary fraction representing the voltage on the ADn pin as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on the ADn pin was less than, equal to, or close to that on VREFN/VSS, while 0xFFF indicates that the voltage on AD input was close to, equal to, or greater than that on VREFP/VDD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> vVref{}; 
        ///This bit is 1 in burst mode if the results of one or more conversions was (were) lost and overwritten before the conversion that produced the result in the V_VREF bits.This bit is cleared by reading this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is set to 1 when an A/D conversion completes. It is cleared when this register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Nonestat{    ///<A/D Status Register. This register contains DONE and OVERRUN flags for all of the A/D channels, as well as the A/D interrupt flag.
        using Addr = Register::Address<0x4001c030,0xfffe0000,0,unsigned>;
        ///These bits mirror the DONE status flags that appear in the result register for each A/D channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///These bits mirror the OVERRRUN status flags that appear in the result register for each A/D channel n. Reading ADSTAT allows checking the status of all A/D channels simultaneously.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///This bit is the A/D interrupt flag. It is one when any of the individual A/D channel Done flags is asserted and enabled to contribute to the A/D interrupt via the ADINTEN register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adint{}; 
    }
    namespace Nonetrm{    ///<A/D trim register
        using Addr = Register::Address<0x4001c034,0xfffff00f,0,unsigned>;
        ///Offset trim bits for ADC operation. Initialized by the boot code. Can be overwritten by the user.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adcoffs{}; 
        ///Written-to by boot code. Can not be overwritten by the user. These bits are locked after boot code write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trim{}; 
    }
}
