#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace AdcCr{    ///<Control Register
        using Addr = Register::Address<0xf804c000,0xfffffff8,0,unsigned>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Start Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        ///Touchscreen Calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tscalib{}; 
    }
    namespace AdcMr{    ///<Mode Register
        using Addr = Register::Address<0xf804c004,0x70f0008f,0,unsigned>;
        ///Resolution
        enum class lowresVal {
            bits10=0x00000000,     ///<10-bit resolution
            bits8=0x00000001,     ///<8-bit resolution
        };
        namespace lowresValC{
            constexpr MPL::Value<lowresVal,lowresVal::bits10> bits10{};
            constexpr MPL::Value<lowresVal,lowresVal::bits8> bits8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lowresVal> lowres{}; 
        ///Sleep Mode
        enum class sleepVal {
            normal=0x00000000,     ///<Normal Mode: The ADC Core and reference voltage circuitry are kept ON between conversions
            sleep=0x00000001,     ///<Sleep Mode: The ADC Core and reference voltage circuitry are OFF between conversions
        };
        namespace sleepValC{
            constexpr MPL::Value<sleepVal,sleepVal::normal> normal{};
            constexpr MPL::Value<sleepVal,sleepVal::sleep> sleep{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sleepVal> sleep{}; 
        ///Fast Wake Up
        enum class fwupVal {
            off=0x00000000,     ///<Normal Sleep Mode: The sleep mode is defined by the SLEEP bit
            on=0x00000001,     ///<Fast Wake Up Sleep Mode: The Voltage reference is ON between conversions and ADC Core is OFF
        };
        namespace fwupValC{
            constexpr MPL::Value<fwupVal,fwupVal::off> off{};
            constexpr MPL::Value<fwupVal,fwupVal::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,fwupVal> fwup{}; 
        ///Prescaler Rate Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
        ///Start Up Time
        enum class startupVal {
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
        namespace startupValC{
            constexpr MPL::Value<startupVal,startupVal::sut0> sut0{};
            constexpr MPL::Value<startupVal,startupVal::sut8> sut8{};
            constexpr MPL::Value<startupVal,startupVal::sut16> sut16{};
            constexpr MPL::Value<startupVal,startupVal::sut24> sut24{};
            constexpr MPL::Value<startupVal,startupVal::sut64> sut64{};
            constexpr MPL::Value<startupVal,startupVal::sut80> sut80{};
            constexpr MPL::Value<startupVal,startupVal::sut96> sut96{};
            constexpr MPL::Value<startupVal,startupVal::sut112> sut112{};
            constexpr MPL::Value<startupVal,startupVal::sut512> sut512{};
            constexpr MPL::Value<startupVal,startupVal::sut576> sut576{};
            constexpr MPL::Value<startupVal,startupVal::sut640> sut640{};
            constexpr MPL::Value<startupVal,startupVal::sut704> sut704{};
            constexpr MPL::Value<startupVal,startupVal::sut768> sut768{};
            constexpr MPL::Value<startupVal,startupVal::sut832> sut832{};
            constexpr MPL::Value<startupVal,startupVal::sut896> sut896{};
            constexpr MPL::Value<startupVal,startupVal::sut960> sut960{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,startupVal> startup{}; 
        ///Tracking Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tracktim{}; 
        ///Use Sequence Enable
        enum class useqVal {
            numOrder=0x00000000,     ///<Normal Mode: The controller converts channels in a simple numeric order depending only on the channel index.
            regOrder=0x00000001,     ///<User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers and can be used to convert several times the same channel.
        };
        namespace useqValC{
            constexpr MPL::Value<useqVal,useqVal::numOrder> numOrder{};
            constexpr MPL::Value<useqVal,useqVal::regOrder> regOrder{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,useqVal> useq{}; 
    }
    namespace AdcSeqr1{    ///<Channel Sequence Register 1
        using Addr = Register::Address<0xf804c008,0x00000000,0,unsigned>;
        ///User Sequence Number 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usch1{}; 
        ///User Sequence Number 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usch2{}; 
        ///User Sequence Number 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usch3{}; 
        ///User Sequence Number 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> usch4{}; 
        ///User Sequence Number 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> usch5{}; 
        ///User Sequence Number 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> usch6{}; 
        ///User Sequence Number 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> usch7{}; 
        ///User Sequence Number 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> usch8{}; 
    }
    namespace AdcSeqr2{    ///<Channel Sequence Register 2
        using Addr = Register::Address<0xf804c00c,0x00000000,0,unsigned>;
        ///User Sequence Number 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usch9{}; 
        ///User Sequence Number 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usch10{}; 
        ///User Sequence Number 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usch11{}; 
        ///User Sequence Number 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> usch12{}; 
        ///User Sequence Number 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> usch13{}; 
        ///User Sequence Number 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> usch14{}; 
        ///User Sequence Number 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> usch15{}; 
        ///User Sequence Number 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> usch16{}; 
    }
    namespace AdcCher{    ///<Channel Enable Register
        using Addr = Register::Address<0xf804c010,0xfffff000,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        ///Channel 8 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        ///Channel 9 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        ///Channel 10 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        ///Channel 11 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
    }
    namespace AdcChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0xf804c014,0xfffff000,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        ///Channel 8 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        ///Channel 9 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        ///Channel 10 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        ///Channel 11 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
    }
    namespace AdcChsr{    ///<Channel Status Register
        using Addr = Register::Address<0xf804c018,0xfffff000,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        ///Channel 8 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        ///Channel 9 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        ///Channel 10 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        ///Channel 11 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
    }
    namespace AdcLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0xf804c020,0xffff0000,0,unsigned>;
        ///Last Data Converted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldata{}; 
        ///Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> chnb{}; 
    }
    namespace AdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf804c024,0x988ff000,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Enable 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Enable 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Enable 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Enable 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Enable 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Enable 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Enable 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion Interrupt Enable 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion Interrupt Enable 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion Interrupt Enable 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion Interrupt Enable 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///Touchscreen Measure XPOS Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        ///Touchscreen Measure YPOS Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        ///Touchscreen Measure Pressure Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        ///Data Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///Pen Contact Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        ///No Pen Contact Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
    }
    namespace AdcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf804c028,0x988ff000,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Disable 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Disable 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Disable 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Disable 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Disable 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Disable 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Disable 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion Interrupt Disable 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion Interrupt Disable 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion Interrupt Disable 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion Interrupt Disable 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///Touchscreen Measure XPOS Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        ///Touchscreen Measure YPOS Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        ///Touchscreen Measure Pressure Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        ///Data Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///Pen Contact Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        ///No Pen Contact Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
    }
    namespace AdcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf804c02c,0x988ff000,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Mask 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Mask 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Mask 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Mask 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Mask 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Mask 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Mask 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion Interrupt Mask 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion Interrupt Mask 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion Interrupt Mask 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion Interrupt Mask 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///Touchscreen Measure XPOS Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        ///Touchscreen Measure YPOS Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        ///Touchscreen Measure Pressure Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        ///Data Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///Pen Contact Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        ///No Pen Contact Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
    }
    namespace AdcIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf804c030,0x188ff000,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///End of Conversion 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        ///End of Conversion 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        ///End of Conversion 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        ///End of Conversion 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        ///Touchscreen XPOS Measure Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        ///Touchscreen YPOS Measure Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        ///Touchscreen Pressure Measure Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        ///Data Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///Pen contact
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        ///No Pen contact
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        ///Pen detect Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pens{}; 
    }
    namespace AdcOver{    ///<Overrun Status Register
        using Addr = Register::Address<0xf804c03c,0xfffff000,0,unsigned>;
        ///Overrun Error 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovre3{}; 
        ///Overrun Error 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovre4{}; 
        ///Overrun Error 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre5{}; 
        ///Overrun Error 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre6{}; 
        ///Overrun Error 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovre7{}; 
        ///Overrun Error 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre8{}; 
        ///Overrun Error 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre9{}; 
        ///Overrun Error 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre10{}; 
        ///Overrun Error 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre11{}; 
    }
    namespace AdcEmr{    ///<Extended Mode Register
        using Addr = Register::Address<0xf804c040,0xfefffd0c,0,unsigned>;
        ///Comparison Mode
        enum class cmpmodeVal {
            low=0x00000000,     ///<Generates an event when the converted data is lower than the low threshold of the window.
            high=0x00000001,     ///<Generates an event when the converted data is higher than the high threshold of the window.
            in=0x00000002,     ///<Generates an event when the converted data is in the comparison window.
            out=0x00000003,     ///<Generates an event when the converted data is out of the comparison window.
        };
        namespace cmpmodeValC{
            constexpr MPL::Value<cmpmodeVal,cmpmodeVal::low> low{};
            constexpr MPL::Value<cmpmodeVal,cmpmodeVal::high> high{};
            constexpr MPL::Value<cmpmodeVal,cmpmodeVal::in> in{};
            constexpr MPL::Value<cmpmodeVal,cmpmodeVal::out> out{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cmpmodeVal> cmpmode{}; 
        ///Comparison Selected Channel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cmpsel{}; 
        ///Compare All Channels
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpall{}; 
        ///TAG of the ADC_LDCR register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace AdcCwr{    ///<Compare Window Register
        using Addr = Register::Address<0xf804c044,0xf000f000,0,unsigned>;
        ///Low Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lowthres{}; 
        ///High Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> highthres{}; 
    }
    namespace AdcCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c050,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c054,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c058,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c05c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c060,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c064,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c068,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c06c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr8{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c070,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr9{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c074,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr10{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c078,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr11{    ///<Channel Data Register
        using Addr = Register::Address<0xf804c07c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcAcr{    ///<Analog Control Register
        using Addr = Register::Address<0xf804c094,0xfffffffc,0,unsigned>;
        ///Pen Detection Sensitivity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pendetsens{}; 
    }
    namespace AdcTsmr{    ///<Touchscreen Mode Register
        using Addr = Register::Address<0xf804c0b0,0x0eb0f0cc,0,unsigned>;
        ///Touchscreen Mode
        enum class tsmodeVal {
            none=0x00000000,     ///<No Touchscreen
            v4WireNoPm=0x00000001,     ///<4-wire Touchscreen without pressure measurement
            v4Wire=0x00000002,     ///<4-wire Touchscreen with pressure measurement
            v5Wire=0x00000003,     ///<5-wire Touchscreen
        };
        namespace tsmodeValC{
            constexpr MPL::Value<tsmodeVal,tsmodeVal::none> none{};
            constexpr MPL::Value<tsmodeVal,tsmodeVal::v4WireNoPm> v4WireNoPm{};
            constexpr MPL::Value<tsmodeVal,tsmodeVal::v4Wire> v4Wire{};
            constexpr MPL::Value<tsmodeVal,tsmodeVal::v5Wire> v5Wire{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,tsmodeVal> tsmode{}; 
        ///Touchscreen Average
        enum class tsavVal {
            noFilter=0x00000000,     ///<No Filtering. Only one ADC conversion per measure
            avg2conv=0x00000001,     ///<Averages 2 ADC conversions
            avg4conv=0x00000002,     ///<Averages 4 ADC conversions
            avg8conv=0x00000003,     ///<Averages 8 ADC conversions
        };
        namespace tsavValC{
            constexpr MPL::Value<tsavVal,tsavVal::noFilter> noFilter{};
            constexpr MPL::Value<tsavVal,tsavVal::avg2conv> avg2conv{};
            constexpr MPL::Value<tsavVal,tsavVal::avg4conv> avg4conv{};
            constexpr MPL::Value<tsavVal,tsavVal::avg8conv> avg8conv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,tsavVal> tsav{}; 
        ///Touchscreen Frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tsfreq{}; 
        ///Touchscreen Switches Closure Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tssctim{}; 
        ///No TouchScreen DMA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notsdma{}; 
        ///Pen Contact Detection Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pendet{}; 
        ///Pen Detect Debouncing Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> pendbc{}; 
    }
    namespace AdcXposr{    ///<Touchscreen X Position Register
        using Addr = Register::Address<0xf804c0b4,0xf000f000,0,unsigned>;
        ///X Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> xpos{}; 
        ///Scale of XPOS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> xscale{}; 
    }
    namespace AdcYposr{    ///<Touchscreen Y Position Register
        using Addr = Register::Address<0xf804c0b8,0xf000f000,0,unsigned>;
        ///Y Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ypos{}; 
        ///Scale of YPOS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> yscale{}; 
    }
    namespace AdcPressr{    ///<Touchscreen Pressure Register
        using Addr = Register::Address<0xf804c0bc,0xf000f000,0,unsigned>;
        ///Data of Z1 Measurement
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> z1{}; 
        ///Data of Z2 Measurement
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> z2{}; 
    }
    namespace AdcTrgr{    ///<Trigger Register
        using Addr = Register::Address<0xf804c0c0,0x0000fff8,0,unsigned>;
        ///Trigger Mode
        enum class trgmodVal {
            noTrigger=0x00000000,     ///<No trigger, only software trigger can start conversions
            extTrigRise=0x00000001,     ///<External Trigger Rising Edge
            extTrigFall=0x00000002,     ///<External Trigger Falling Edge
            extTrigAny=0x00000003,     ///<External Trigger Any Edge
            penTrig=0x00000004,     ///<Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode)
            periodTrig=0x00000005,     ///<Periodic Trigger (TRGPER shall be initiated appropriately)
            continuous=0x00000006,     ///<Continuous Mode
        };
        namespace trgmodValC{
            constexpr MPL::Value<trgmodVal,trgmodVal::noTrigger> noTrigger{};
            constexpr MPL::Value<trgmodVal,trgmodVal::extTrigRise> extTrigRise{};
            constexpr MPL::Value<trgmodVal,trgmodVal::extTrigFall> extTrigFall{};
            constexpr MPL::Value<trgmodVal,trgmodVal::extTrigAny> extTrigAny{};
            constexpr MPL::Value<trgmodVal,trgmodVal::penTrig> penTrig{};
            constexpr MPL::Value<trgmodVal,trgmodVal::periodTrig> periodTrig{};
            constexpr MPL::Value<trgmodVal,trgmodVal::continuous> continuous{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,trgmodVal> trgmod{}; 
        ///Trigger Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> trgper{}; 
    }
    namespace AdcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xf804c0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace AdcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xf804c0e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
