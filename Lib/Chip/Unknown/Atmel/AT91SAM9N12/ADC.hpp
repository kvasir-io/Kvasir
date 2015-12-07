#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace AdcCr{    ///<Control Register
        using Addr = Register::Address<0xf804c000,0xfffffff8,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Touchscreen Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tscalib{}; 
        namespace TscalibValC{
        }
    }
    namespace AdcMr{    ///<Mode Register
        using Addr = Register::Address<0xf804c004,0x70f0008f,0,unsigned>;
        ///Resolution
        enum class LowresVal {
            bits10=0x00000000,     ///<10-bit resolution
            bits8=0x00000001,     ///<8-bit resolution
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LowresVal> lowres{}; 
        namespace LowresValC{
            constexpr Register::FieldValue<decltype(lowres),LowresVal::bits10> bits10{};
            constexpr Register::FieldValue<decltype(lowres),LowresVal::bits8> bits8{};
        }
        ///Sleep Mode
        enum class SleepVal {
            normal=0x00000000,     ///<Normal Mode: The ADC Core and reference voltage circuitry are kept ON between conversions
            sleep=0x00000001,     ///<Sleep Mode: The ADC Core and reference voltage circuitry are OFF between conversions
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SleepVal> sleep{}; 
        namespace SleepValC{
            constexpr Register::FieldValue<decltype(sleep),SleepVal::normal> normal{};
            constexpr Register::FieldValue<decltype(sleep),SleepVal::sleep> sleep{};
        }
        ///Fast Wake Up
        enum class FwupVal {
            off=0x00000000,     ///<Normal Sleep Mode: The sleep mode is defined by the SLEEP bit
            on=0x00000001,     ///<Fast Wake Up Sleep Mode: The Voltage reference is ON between conversions and ADC Core is OFF
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FwupVal> fwup{}; 
        namespace FwupValC{
            constexpr Register::FieldValue<decltype(fwup),FwupVal::off> off{};
            constexpr Register::FieldValue<decltype(fwup),FwupVal::on> on{};
        }
        ///Prescaler Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
        namespace PrescalValC{
        }
        ///Start Up Time
        enum class StartupVal {
            sut0=0x00000000,     ///<0 periods of ADCClock
            sut8=0x00000001,     ///<8 periods of ADCClock
            sut16=0x00000002,     ///<16 periods of ADCClock
            sut24=0x00000003,     ///<24 periods of ADCClock
            sut64=0x00000004,     ///<64 periods of ADCClock
            sut80=0x00000005,     ///<80 periods of ADCClock
            sut96=0x00000006,     ///<96 periods of ADCClock
            sut112=0x00000007,     ///<112 periods of ADCClock
            sut512=0x00000008,     ///<512 periods of ADCClock
            sut576=0x00000009,     ///<576 periods of ADCClock
            sut640=0x0000000a,     ///<640 periods of ADCClock
            sut704=0x0000000b,     ///<704 periods of ADCClock
            sut768=0x0000000c,     ///<768 periods of ADCClock
            sut832=0x0000000d,     ///<832 periods of ADCClock
            sut896=0x0000000e,     ///<896 periods of ADCClock
            sut960=0x0000000f,     ///<960 periods of ADCClock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,StartupVal> startup{}; 
        namespace StartupValC{
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut0> sut0{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut8> sut8{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut16> sut16{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut24> sut24{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut64> sut64{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut80> sut80{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut96> sut96{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut112> sut112{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut512> sut512{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut576> sut576{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut640> sut640{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut704> sut704{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut768> sut768{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut832> sut832{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut896> sut896{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut960> sut960{};
        }
        ///Tracking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tracktim{}; 
        namespace TracktimValC{
        }
        ///Use Sequence Enable
        enum class UseqVal {
            numOrder=0x00000000,     ///<Normal Mode: The controller converts channels in a simple numeric order.
            regOrder=0x00000001,     ///<User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UseqVal> useq{}; 
        namespace UseqValC{
            constexpr Register::FieldValue<decltype(useq),UseqVal::numOrder> numOrder{};
            constexpr Register::FieldValue<decltype(useq),UseqVal::regOrder> regOrder{};
        }
    }
    namespace AdcSeqr1{    ///<Channel Sequence Register 1
        using Addr = Register::Address<0xf804c008,0x00000000,0,unsigned>;
        ///User Sequence Number 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usch1{}; 
        namespace Usch1ValC{
        }
        ///User Sequence Number 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usch2{}; 
        namespace Usch2ValC{
        }
        ///User Sequence Number 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usch3{}; 
        namespace Usch3ValC{
        }
        ///User Sequence Number 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> usch4{}; 
        namespace Usch4ValC{
        }
        ///User Sequence Number 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> usch5{}; 
        namespace Usch5ValC{
        }
        ///User Sequence Number 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> usch6{}; 
        namespace Usch6ValC{
        }
        ///User Sequence Number 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> usch7{}; 
        namespace Usch7ValC{
        }
        ///User Sequence Number 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> usch8{}; 
        namespace Usch8ValC{
        }
    }
    namespace AdcSeqr2{    ///<Channel Sequence Register 2
        using Addr = Register::Address<0xf804c00c,0x00000000,0,unsigned>;
        ///User Sequence Number 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usch9{}; 
        namespace Usch9ValC{
        }
        ///User Sequence Number 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usch10{}; 
        namespace Usch10ValC{
        }
        ///User Sequence Number 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usch11{}; 
        namespace Usch11ValC{
        }
        ///User Sequence Number 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> usch12{}; 
        namespace Usch12ValC{
        }
        ///User Sequence Number 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> usch13{}; 
        namespace Usch13ValC{
        }
        ///User Sequence Number 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> usch14{}; 
        namespace Usch14ValC{
        }
        ///User Sequence Number 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> usch15{}; 
        namespace Usch15ValC{
        }
        ///User Sequence Number 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> usch16{}; 
        namespace Usch16ValC{
        }
    }
    namespace AdcCher{    ///<Channel Enable Register
        using Addr = Register::Address<0xf804c010,0xfffff000,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
        ///Channel 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        namespace Ch8ValC{
        }
        ///Channel 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        namespace Ch9ValC{
        }
        ///Channel 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        namespace Ch10ValC{
        }
        ///Channel 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        namespace Ch11ValC{
        }
    }
    namespace AdcChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0xf804c014,0xfffff000,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
        ///Channel 8 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        namespace Ch8ValC{
        }
        ///Channel 9 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        namespace Ch9ValC{
        }
        ///Channel 10 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        namespace Ch10ValC{
        }
        ///Channel 11 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        namespace Ch11ValC{
        }
    }
    namespace AdcChsr{    ///<Channel Status Register
        using Addr = Register::Address<0xf804c018,0xfffff000,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
        ///Channel 8 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        namespace Ch8ValC{
        }
        ///Channel 9 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        namespace Ch9ValC{
        }
        ///Channel 10 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        namespace Ch10ValC{
        }
        ///Channel 11 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        namespace Ch11ValC{
        }
    }
    namespace AdcLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0xf804c020,0xffff0000,0,unsigned>;
        ///Last Data Converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldata{}; 
        namespace LdataValC{
        }
        ///Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> chnb{}; 
        namespace ChnbValC{
        }
    }
    namespace AdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf804c024,0x988ff000,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion Interrupt Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion Interrupt Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion Interrupt Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion Interrupt Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen Measure XPOS Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen Measure YPOS Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Measure Pressure Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen Contact Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen Contact Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
    }
    namespace AdcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf804c028,0x988ff000,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion Interrupt Disable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion Interrupt Disable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion Interrupt Disable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion Interrupt Disable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen Measure XPOS Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen Measure YPOS Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Measure Pressure Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen Contact Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen Contact Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
    }
    namespace AdcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf804c02c,0x988ff000,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion Interrupt Mask 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion Interrupt Mask 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion Interrupt Mask 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion Interrupt Mask 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen Measure XPOS Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen Measure YPOS Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Measure Pressure Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen Contact Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen Contact Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
    }
    namespace AdcIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf804c030,0x188ff000,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen XPOS Measure Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen YPOS Measure Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Pressure Measure Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
        ///Pen detect Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pens{}; 
        namespace PensValC{
        }
    }
    namespace AdcOver{    ///<Overrun Status Register
        using Addr = Register::Address<0xf804c03c,0xfffff000,0,unsigned>;
        ///Overrun Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovre0{}; 
        namespace Ovre0ValC{
        }
        ///Overrun Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre1{}; 
        namespace Ovre1ValC{
        }
        ///Overrun Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovre2{}; 
        namespace Ovre2ValC{
        }
        ///Overrun Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovre3{}; 
        namespace Ovre3ValC{
        }
        ///Overrun Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovre4{}; 
        namespace Ovre4ValC{
        }
        ///Overrun Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre5{}; 
        namespace Ovre5ValC{
        }
        ///Overrun Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre6{}; 
        namespace Ovre6ValC{
        }
        ///Overrun Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovre7{}; 
        namespace Ovre7ValC{
        }
        ///Overrun Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre8{}; 
        namespace Ovre8ValC{
        }
        ///Overrun Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre9{}; 
        namespace Ovre9ValC{
        }
        ///Overrun Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre10{}; 
        namespace Ovre10ValC{
        }
        ///Overrun Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre11{}; 
        namespace Ovre11ValC{
        }
    }
    namespace AdcEmr{    ///<Extended Mode Register
        using Addr = Register::Address<0xf804c040,0xfefffd0c,0,unsigned>;
        ///Comparison Mode
        enum class CmpmodeVal {
            low=0x00000000,     ///<Generates an event when the converted data is lower than the low threshold of the window.
            high=0x00000001,     ///<Generates an event when the converted data is higher than the high threshold of the window.
            in=0x00000002,     ///<Generates an event when the converted data is in the comparison window.
            out=0x00000003,     ///<Generates an event when the converted data is out of the comparison window.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmpmodeVal> cmpmode{}; 
        namespace CmpmodeValC{
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::low> low{};
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::high> high{};
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::in> in{};
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::out> out{};
        }
        ///Comparison Selected Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cmpsel{}; 
        namespace CmpselValC{
        }
        ///Compare All Channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpall{}; 
        namespace CmpallValC{
        }
        ///TAG of ADC_LDCR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace AdcCwr{    ///<Compare Window Register
        using Addr = Register::Address<0xf804c044,0xf000f000,0,unsigned>;
        ///Low Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lowthres{}; 
        namespace LowthresValC{
        }
        ///High Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> highthres{}; 
        namespace HighthresValC{
        }
    }
    namespace AdcCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c050,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c054,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c058,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c05c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c060,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c064,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c068,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c06c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr8{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c070,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr9{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c074,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr10{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c078,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr11{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c07c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcAcr{    ///<Analog Control Register
        using Addr = Register::Address<0xf804c094,0xfffffffc,0,unsigned>;
        ///Pen Detection Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pendetsens{}; 
        namespace PendetsensValC{
        }
    }
    namespace AdcTsmr{    ///<Touchscreen Mode Register
        using Addr = Register::Address<0xf804c0b0,0x0eb0f0cc,0,unsigned>;
        ///Touchscreen Mode
        enum class TsmodeVal {
            none=0x00000000,     ///<No Touchscreen
            v4WireNoPm=0x00000001,     ///<4-wire Touchscreen without pressure measurement
            v4Wire=0x00000002,     ///<4-wire Touchscreen with pressure measurement
            v5Wire=0x00000003,     ///<5-wire Touchscreen
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TsmodeVal> tsmode{}; 
        namespace TsmodeValC{
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::none> none{};
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::v4WireNoPm> v4WireNoPm{};
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::v4Wire> v4Wire{};
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::v5Wire> v5Wire{};
        }
        ///Touchscreen Average
        enum class TsavVal {
            noFilter=0x00000000,     ///<No Filtering. Only one ADC conversion per measure
            avg2conv=0x00000001,     ///<Averages 2 ADC conversions
            avg4conv=0x00000002,     ///<Averages 4 ADC conversions
            avg8conv=0x00000003,     ///<Averages 8 ADC conversions
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TsavVal> tsav{}; 
        namespace TsavValC{
            constexpr Register::FieldValue<decltype(tsav),TsavVal::noFilter> noFilter{};
            constexpr Register::FieldValue<decltype(tsav),TsavVal::avg2conv> avg2conv{};
            constexpr Register::FieldValue<decltype(tsav),TsavVal::avg4conv> avg4conv{};
            constexpr Register::FieldValue<decltype(tsav),TsavVal::avg8conv> avg8conv{};
        }
        ///Touchscreen Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tsfreq{}; 
        namespace TsfreqValC{
        }
        ///Touchscreen Switches Closure Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tssctim{}; 
        namespace TssctimValC{
        }
        ///No TouchScreen DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notsdma{}; 
        namespace NotsdmaValC{
        }
        ///Pen Contact Detection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pendet{}; 
        namespace PendetValC{
        }
        ///Pen Detect Debouncing Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> pendbc{}; 
        namespace PendbcValC{
        }
    }
    namespace AdcXposr{    ///<Touchscreen X Position Register
        using Addr = Register::Address<0xf804c0b4,0xfc00fc00,0,unsigned>;
        ///X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> xpos{}; 
        namespace XposValC{
        }
        ///Scale of XPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xscale{}; 
        namespace XscaleValC{
        }
    }
    namespace AdcYposr{    ///<Touchscreen Y Position Register
        using Addr = Register::Address<0xf804c0b8,0xfc00fc00,0,unsigned>;
        ///Y Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ypos{}; 
        namespace YposValC{
        }
        ///Scale of YPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> yscale{}; 
        namespace YscaleValC{
        }
    }
    namespace AdcPressr{    ///<Touchscreen Pressure Register
        using Addr = Register::Address<0xf804c0bc,0xfc00fc00,0,unsigned>;
        ///Data of Z1 Measurement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> z1{}; 
        namespace Z1ValC{
        }
        ///Data of Z2 Measurement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> z2{}; 
        namespace Z2ValC{
        }
    }
    namespace AdcTrgr{    ///<Trigger Register
        using Addr = Register::Address<0xf804c0c0,0x0000fff8,0,unsigned>;
        ///Trigger Mode
        enum class TrgmodVal {
            noTrigger=0x00000000,     ///<No trigger, only software trigger can start conversions
            extTrigRise=0x00000001,     ///<External Trigger Rising Edge
            extTrigFall=0x00000002,     ///<External Trigger Falling Edge
            extTrigAny=0x00000003,     ///<External Trigger Any Edge
            penTrig=0x00000004,     ///<Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode)
            periodTrig=0x00000005,     ///<Periodic Trigger (TRGPER shall be initiated appropriately)
            continuous=0x00000006,     ///<Continuous Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TrgmodVal> trgmod{}; 
        namespace TrgmodValC{
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::noTrigger> noTrigger{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::extTrigRise> extTrigRise{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::extTrigFall> extTrigFall{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::extTrigAny> extTrigAny{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::penTrig> penTrig{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::periodTrig> periodTrig{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::continuous> continuous{};
        }
        ///Trigger Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> trgper{}; 
        namespace TrgperValC{
        }
    }
    namespace AdcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xf804c0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace AdcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xf804c0e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
