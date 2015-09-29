#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace AdcCr{    ///<Control Register
        using Addr = Register::Address<0xfffe0000,0xfffffffc,0,unsigned>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Start Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace AdcMr{    ///<Mode Register
        using Addr = Register::Address<0xfffe0004,0x70f00000,0,unsigned>;
        ///Trigger Enable
        enum class trgenVal {
            dis=0x00000000,     ///<Hardware triggers are disabled. Starting a conversion is only possible by software.
            en=0x00000001,     ///<Hardware trigger selected by TRGSEL field is enabled.
        };
        namespace trgenValC{
            constexpr MPL::Value<trgenVal,trgenVal::dis> dis{};
            constexpr MPL::Value<trgenVal,trgenVal::en> en{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,trgenVal> trgen{}; 
        ///Trigger Selection
        enum class trgselVal {
            adcTrig0=0x00000000,     ///<ADC_TRIG0
            adcTrig1=0x00000001,     ///<ADC_TRIG1
            adcTrig2=0x00000002,     ///<ADC_TRIG2
            adcTrig3=0x00000003,     ///<ADC_TRIG3
            adcTrig4=0x00000004,     ///<ADC_TRIG4
            adcTrig5=0x00000005,     ///<ADC_TRIG5
            adcTrig6=0x00000006,     ///<ADC_TRIG6
        };
        namespace trgselValC{
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig0> adcTrig0{};
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig1> adcTrig1{};
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig2> adcTrig2{};
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig3> adcTrig3{};
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig4> adcTrig4{};
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig5> adcTrig5{};
            constexpr MPL::Value<trgselVal,trgselVal::adcTrig6> adcTrig6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,trgselVal> trgsel{}; 
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
        ///Free Run Mode
        enum class freerunVal {
            off=0x00000000,     ///<Normal Mode
            on=0x00000001,     ///<Free Run Mode: Never wait for any trigger.
        };
        namespace freerunValC{
            constexpr MPL::Value<freerunVal,freerunVal::off> off{};
            constexpr MPL::Value<freerunVal,freerunVal::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,freerunVal> freerun{}; 
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
        using Addr = Register::Address<0xfffe0008,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0xfffe000c,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0xfffe0010,0xfffffff0,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
    }
    namespace AdcChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0xfffe0014,0xfffffff0,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
    }
    namespace AdcChsr{    ///<Channel Status Register
        using Addr = Register::Address<0xfffe0018,0xfffffff0,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
    }
    namespace AdcLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0xfffe0020,0xffff0000,0,unsigned>;
        ///Last Data Converted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldata{}; 
        ///Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> chnb{}; 
    }
    namespace AdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffe0024,0xe0fffff0,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Enable 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Enable 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Enable 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///Data Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffe0028,0xe0fffff0,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Disable 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Disable 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Disable 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///Data Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffe002c,0xe0fffff0,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Mask 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Mask 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Mask 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///Data Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Event Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffe0030,0xe0fffff0,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///Data Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        ///Comparison Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        ///End of RX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///RX Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcOver{    ///<Overrun Status Register
        using Addr = Register::Address<0xfffe003c,0xfffffff0,0,unsigned>;
        ///Overrun Error 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovre3{}; 
    }
    namespace AdcEmr{    ///<Extended Mode Register
        using Addr = Register::Address<0xfffe0040,0xfefffd0c,0,unsigned>;
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
        using Addr = Register::Address<0xfffe0044,0xf000f000,0,unsigned>;
        ///Low Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lowthres{}; 
        ///High Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> highthres{}; 
    }
    namespace AdcCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0xfffe0050,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0xfffe0054,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0xfffe0058,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0xfffe005c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xfffe00e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace AdcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xfffe00e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace AdcRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffe0100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace AdcRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffe0104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace AdcRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffe0110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace AdcRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffe0114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace AdcPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffe0120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace AdcPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffe0124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
