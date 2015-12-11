#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace AdcCr{    ///<Control Register
        using Addr = Register::Address<0x40038000,0xfffffff4,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        ///Automatic Calibration of ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> autocal{}; 
    }
    namespace AdcMr{    ///<Mode Register
        using Addr = Register::Address<0x40038004,0x40400000,0,unsigned>;
        ///Trigger Enable
        enum class TrgenVal {
            dis=0x00000000,     ///<Hardware triggers are disabled. Starting a conversion is only possible by software.
            en=0x00000001,     ///<Hardware trigger selected by TRGSEL field is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TrgenVal> trgen{}; 
        namespace TrgenValC{
            constexpr Register::FieldValue<decltype(trgen)::Type,TrgenVal::dis> dis{};
            constexpr Register::FieldValue<decltype(trgen)::Type,TrgenVal::en> en{};
        }
        ///Trigger Selection
        enum class TrgselVal {
            adcTrig0=0x00000000,     ///<External trigger
            adcTrig1=0x00000001,     ///<TIO Output of the Timer Counter Channel 0
            adcTrig2=0x00000002,     ///<TIO Output of the Timer Counter Channel 1
            adcTrig3=0x00000003,     ///<TIO Output of the Timer Counter Channel 2
            adcTrig4=0x00000004,     ///<PWM Event Line 0
            adcTrig5=0x00000005,     ///<PWM Event Line 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,TrgselVal> trgsel{}; 
        namespace TrgselValC{
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::adcTrig0> adcTrig0{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::adcTrig1> adcTrig1{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::adcTrig2> adcTrig2{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::adcTrig3> adcTrig3{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::adcTrig4> adcTrig4{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::adcTrig5> adcTrig5{};
        }
        ///Resolution
        enum class LowresVal {
            bits12=0x00000000,     ///<12-bit resolution
            bits10=0x00000001,     ///<10-bit resolution
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LowresVal> lowres{}; 
        namespace LowresValC{
            constexpr Register::FieldValue<decltype(lowres)::Type,LowresVal::bits12> bits12{};
            constexpr Register::FieldValue<decltype(lowres)::Type,LowresVal::bits10> bits10{};
        }
        ///Sleep Mode
        enum class SleepVal {
            normal=0x00000000,     ///<Normal Mode: The ADC Core and reference voltage circuitry are kept ON between conversions
            sleep=0x00000001,     ///<Sleep Mode: The ADC Core and reference voltage circuitry are OFF between conversions
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SleepVal> sleep{}; 
        namespace SleepValC{
            constexpr Register::FieldValue<decltype(sleep)::Type,SleepVal::normal> normal{};
            constexpr Register::FieldValue<decltype(sleep)::Type,SleepVal::sleep> sleep{};
        }
        ///Fast Wake Up
        enum class FwupVal {
            off=0x00000000,     ///<Normal Sleep Mode: The sleep mode is defined by the SLEEP bit
            on=0x00000001,     ///<Fast Wake Up Sleep Mode: The Voltage reference is ON between conversions and ADC Core is OFF
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FwupVal> fwup{}; 
        namespace FwupValC{
            constexpr Register::FieldValue<decltype(fwup)::Type,FwupVal::off> off{};
            constexpr Register::FieldValue<decltype(fwup)::Type,FwupVal::on> on{};
        }
        ///Free Run Mode
        enum class FreerunVal {
            off=0x00000000,     ///<Normal Mode
            on=0x00000001,     ///<Free Run Mode: Never wait for any trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FreerunVal> freerun{}; 
        namespace FreerunValC{
            constexpr Register::FieldValue<decltype(freerun)::Type,FreerunVal::off> off{};
            constexpr Register::FieldValue<decltype(freerun)::Type,FreerunVal::on> on{};
        }
        ///Prescaler Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
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
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut0> sut0{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut8> sut8{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut16> sut16{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut24> sut24{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut64> sut64{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut80> sut80{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut96> sut96{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut112> sut112{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut512> sut512{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut576> sut576{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut640> sut640{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut704> sut704{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut768> sut768{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut832> sut832{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut896> sut896{};
            constexpr Register::FieldValue<decltype(startup)::Type,StartupVal::sut960> sut960{};
        }
        ///Analog Settling Time
        enum class SettlingVal {
            ast3=0x00000000,     ///<3 periods of ADCClock
            ast5=0x00000001,     ///<5 periods of ADCClock
            ast9=0x00000002,     ///<9 periods of ADCClock
            ast17=0x00000003,     ///<17 periods of ADCClock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,SettlingVal> settling{}; 
        namespace SettlingValC{
            constexpr Register::FieldValue<decltype(settling)::Type,SettlingVal::ast3> ast3{};
            constexpr Register::FieldValue<decltype(settling)::Type,SettlingVal::ast5> ast5{};
            constexpr Register::FieldValue<decltype(settling)::Type,SettlingVal::ast9> ast9{};
            constexpr Register::FieldValue<decltype(settling)::Type,SettlingVal::ast17> ast17{};
        }
        ///Analog Change
        enum class AnachVal {
            none=0x00000000,     ///<No analog change on channel switching: DIFF0, GAIN0 and OFF0 are used for all channels
            allowed=0x00000001,     ///<Allows different analog settings for each channel. See ADC_CGR and ADC_COR Registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,AnachVal> anach{}; 
        namespace AnachValC{
            constexpr Register::FieldValue<decltype(anach)::Type,AnachVal::none> none{};
            constexpr Register::FieldValue<decltype(anach)::Type,AnachVal::allowed> allowed{};
        }
        ///Tracking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tracktim{}; 
        ///Transfer Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> transfer{}; 
        ///Use Sequence Enable
        enum class UseqVal {
            numOrder=0x00000000,     ///<Normal Mode: The controller converts channels in a simple numeric order.
            regOrder=0x00000001,     ///<User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UseqVal> useq{}; 
        namespace UseqValC{
            constexpr Register::FieldValue<decltype(useq)::Type,UseqVal::numOrder> numOrder{};
            constexpr Register::FieldValue<decltype(useq)::Type,UseqVal::regOrder> regOrder{};
        }
    }
    namespace AdcSeqr1{    ///<Channel Sequence Register 1
        using Addr = Register::Address<0x40038008,0x88888888,0,unsigned>;
        ///User Sequence Number 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> usch1{}; 
        ///User Sequence Number 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> usch2{}; 
        ///User Sequence Number 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> usch3{}; 
        ///User Sequence Number 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> usch4{}; 
        ///User Sequence Number 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> usch5{}; 
        ///User Sequence Number 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> usch6{}; 
        ///User Sequence Number 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> usch7{}; 
        ///User Sequence Number 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> usch8{}; 
    }
    namespace AdcSeqr2{    ///<Channel Sequence Register 2
        using Addr = Register::Address<0x4003800c,0x88888888,0,unsigned>;
        ///User Sequence Number 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> usch9{}; 
        ///User Sequence Number 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> usch10{}; 
        ///User Sequence Number 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> usch11{}; 
        ///User Sequence Number 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> usch12{}; 
        ///User Sequence Number 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> usch13{}; 
        ///User Sequence Number 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> usch14{}; 
        ///User Sequence Number 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> usch15{}; 
        ///User Sequence Number 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> usch16{}; 
    }
    namespace AdcCher{    ///<Channel Enable Register
        using Addr = Register::Address<0x40038010,0xffff0000,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        ///Channel 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        ///Channel 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        ///Channel 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        ///Channel 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        ///Channel 12 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ch12{}; 
        ///Channel 13 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ch13{}; 
        ///Channel 14 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ch14{}; 
        ///Channel 15 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ch15{}; 
    }
    namespace AdcChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0x40038014,0xffff0000,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        ///Channel 8 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        ///Channel 9 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        ///Channel 10 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        ///Channel 11 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        ///Channel 12 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ch12{}; 
        ///Channel 13 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ch13{}; 
        ///Channel 14 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ch14{}; 
        ///Channel 15 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ch15{}; 
    }
    namespace AdcChsr{    ///<Channel Status Register
        using Addr = Register::Address<0x40038018,0xffff0000,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        ///Channel 8 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        ///Channel 9 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        ///Channel 10 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        ///Channel 11 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        ///Channel 12 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ch12{}; 
        ///Channel 13 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ch13{}; 
        ///Channel 14 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ch14{}; 
        ///Channel 15 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ch15{}; 
    }
    namespace AdcLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0x40038020,0xffff0000,0,unsigned>;
        ///Last Data Converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldata{}; 
        ///Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> chnb{}; 
    }
    namespace AdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40038024,0xe07f0000,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion Interrupt Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion Interrupt Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion Interrupt Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion Interrupt Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///End of Conversion Interrupt Enable 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eoc12{}; 
        ///End of Conversion Interrupt Enable 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eoc13{}; 
        ///End of Conversion Interrupt Enable 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eoc14{}; 
        ///End of Conversion Interrupt Enable 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eoc15{}; 
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40038028,0xe07f0000,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion Interrupt Disable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion Interrupt Disable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion Interrupt Disable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion Interrupt Disable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///End of Conversion Interrupt Disable 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eoc12{}; 
        ///End of Conversion Interrupt Disable 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eoc13{}; 
        ///End of Conversion Interrupt Disable 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eoc14{}; 
        ///End of Conversion Interrupt Disable 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eoc15{}; 
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4003802c,0xe07f0000,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion Interrupt Mask 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion Interrupt Mask 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion Interrupt Mask 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion Interrupt Mask 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///End of Conversion Interrupt Mask 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eoc12{}; 
        ///End of Conversion Interrupt Mask 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eoc13{}; 
        ///End of Conversion Interrupt Mask 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eoc14{}; 
        ///End of Conversion Interrupt Mask 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eoc15{}; 
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40038030,0xe07f0000,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///End of Conversion 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eoc12{}; 
        ///End of Conversion 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eoc13{}; 
        ///End of Conversion 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> eoc14{}; 
        ///End of Conversion 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eoc15{}; 
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of RX Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///RX Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcOver{    ///<Overrun Status Register
        using Addr = Register::Address<0x4003803c,0xffff0000,0,unsigned>;
        ///Overrun Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovre3{}; 
        ///Overrun Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovre4{}; 
        ///Overrun Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre5{}; 
        ///Overrun Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre6{}; 
        ///Overrun Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovre7{}; 
        ///Overrun Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre8{}; 
        ///Overrun Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre9{}; 
        ///Overrun Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre10{}; 
        ///Overrun Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre11{}; 
        ///Overrun Error 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre12{}; 
        ///Overrun Error 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre13{}; 
        ///Overrun Error 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre14{}; 
        ///Overrun Error 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre15{}; 
    }
    namespace AdcEmr{    ///<Extended Mode Register
        using Addr = Register::Address<0x40038040,0xfeffcd0c,0,unsigned>;
        ///Comparison Mode
        enum class CmpmodeVal {
            low=0x00000000,     ///<Generates an event when the converted data is lower than the low threshold of the window.
            high=0x00000001,     ///<Generates an event when the converted data is higher than the high threshold of the window.
            in=0x00000002,     ///<Generates an event when the converted data is in the comparison window.
            out=0x00000003,     ///<Generates an event when the converted data is out of the comparison window.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmpmodeVal> cmpmode{}; 
        namespace CmpmodeValC{
            constexpr Register::FieldValue<decltype(cmpmode)::Type,CmpmodeVal::low> low{};
            constexpr Register::FieldValue<decltype(cmpmode)::Type,CmpmodeVal::high> high{};
            constexpr Register::FieldValue<decltype(cmpmode)::Type,CmpmodeVal::in> in{};
            constexpr Register::FieldValue<decltype(cmpmode)::Type,CmpmodeVal::out> out{};
        }
        ///Comparison Selected Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cmpsel{}; 
        ///Compare All Channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpall{}; 
        ///Compare Event Filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> cmpfilter{}; 
        ///TAG of ADC_LDCR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace AdcCwr{    ///<Compare Window Register
        using Addr = Register::Address<0x40038044,0xf000f000,0,unsigned>;
        ///Low Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lowthres{}; 
        ///High Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> highthres{}; 
    }
    namespace AdcCgr{    ///<Channel Gain Register
        using Addr = Register::Address<0x40038048,0x00000000,0,unsigned>;
        ///Gain for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> gain0{}; 
        ///Gain for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> gain1{}; 
        ///Gain for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> gain2{}; 
        ///Gain for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gain3{}; 
        ///Gain for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> gain4{}; 
        ///Gain for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> gain5{}; 
        ///Gain for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> gain6{}; 
        ///Gain for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> gain7{}; 
        ///Gain for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> gain8{}; 
        ///Gain for channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> gain9{}; 
        ///Gain for channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> gain10{}; 
        ///Gain for channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> gain11{}; 
        ///Gain for channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> gain12{}; 
        ///Gain for channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> gain13{}; 
        ///Gain for channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> gain14{}; 
        ///Gain for channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> gain15{}; 
    }
    namespace AdcCor{    ///<Channel Offset Register
        using Addr = Register::Address<0x4003804c,0x00000000,0,unsigned>;
        ///Offset for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> off0{}; 
        ///Offset for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> off1{}; 
        ///Offset for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> off2{}; 
        ///Offset for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> off3{}; 
        ///Offset for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> off4{}; 
        ///Offset for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> off5{}; 
        ///Offset for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> off6{}; 
        ///Offset for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> off7{}; 
        ///Offset for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> off8{}; 
        ///Offset for channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> off9{}; 
        ///Offset for channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> off10{}; 
        ///Offset for channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> off11{}; 
        ///Offset for channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> off12{}; 
        ///Offset for channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> off13{}; 
        ///Offset for channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> off14{}; 
        ///Offset for channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> off15{}; 
        ///Differential inputs for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> diff0{}; 
        ///Differential inputs for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> diff1{}; 
        ///Differential inputs for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> diff2{}; 
        ///Differential inputs for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> diff3{}; 
        ///Differential inputs for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> diff4{}; 
        ///Differential inputs for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> diff5{}; 
        ///Differential inputs for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> diff6{}; 
        ///Differential inputs for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> diff7{}; 
        ///Differential inputs for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> diff8{}; 
        ///Differential inputs for channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> diff9{}; 
        ///Differential inputs for channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> diff10{}; 
        ///Differential inputs for channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> diff11{}; 
        ///Differential inputs for channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> diff12{}; 
        ///Differential inputs for channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> diff13{}; 
        ///Differential inputs for channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> diff14{}; 
        ///Differential inputs for channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> diff15{}; 
    }
    namespace AdcCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0x40038050,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0x40038054,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0x40038058,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0x4003805c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0x40038060,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0x40038064,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0x40038068,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0x4003806c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr8{    ///<Channel Data Register
        using Addr = Register::Address<0x40038070,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr9{    ///<Channel Data Register
        using Addr = Register::Address<0x40038074,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr10{    ///<Channel Data Register
        using Addr = Register::Address<0x40038078,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr11{    ///<Channel Data Register
        using Addr = Register::Address<0x4003807c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr12{    ///<Channel Data Register
        using Addr = Register::Address<0x40038080,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr13{    ///<Channel Data Register
        using Addr = Register::Address<0x40038084,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr14{    ///<Channel Data Register
        using Addr = Register::Address<0x40038088,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcAcr{    ///<Analog Control Register
        using Addr = Register::Address<0x40038094,0xfffffcef,0,unsigned>;
        ///Temperature Sensor On
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tson{}; 
        ///ADC Bias Current Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ibctl{}; 
    }
    namespace AdcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400380e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace AdcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400380e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace AdcRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x40038100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace AdcRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x40038104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace AdcRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x40038110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace AdcRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x40038114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace AdcPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x40038120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace AdcPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x40038124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
