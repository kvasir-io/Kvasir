#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40023000,0xf8880000,0,unsigned>;
        ///Start and Busy Flag. 
        enum class busyfVal {
            idle=0x00000000,     ///<Read: A capacitive sensing conversion is complete or a conversion is not currently in progress. Write: No effect.
            busy=0x00000001,     ///<Read: A capacitive sensing conversion is in progress. Write: Initiate a capacitive sensing conversion if BUSYF is selected as the start of conversion source.
        };
        namespace busyfValC{
            constexpr MPL::Value<busyfVal,busyfVal::idle> idle{};
            constexpr MPL::Value<busyfVal,busyfVal::busy> busy{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,busyfVal> busyf{}; 
        ///Module Enable. 
        enum class csenVal {
            disabled=0x00000000,     ///<Disable the capacitive sensing module.
            enabled=0x00000001,     ///<Enable the capacitive sensing module.
        };
        namespace csenValC{
            constexpr MPL::Value<csenVal,csenVal::disabled> disabled{};
            constexpr MPL::Value<csenVal,csenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,csenVal> csen{}; 
        ///Bias Enable. 
        enum class biasenVal {
            disabled=0x00000000,     ///<Disable the bias.
            enabled=0x00000001,     ///<Enable the bias.
        };
        namespace biasenValC{
            constexpr MPL::Value<biasenVal,biasenVal::disabled> disabled{};
            constexpr MPL::Value<biasenVal,biasenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,biasenVal> biasen{}; 
        ///Digital Comparator Polarity Select. 
        enum class cmppolVal {
            gt=0x00000000,     ///<The digital comparator generates an interrupt if the conversion is greater than the CSTH threshold.
            lte=0x00000001,     ///<The digital comparator generates an interrupt if the conversion is less than or equal to the CSTH threshold.
        };
        namespace cmppolValC{
            constexpr MPL::Value<cmppolVal,cmppolVal::gt> gt{};
            constexpr MPL::Value<cmppolVal,cmppolVal::lte> lte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cmppolVal> cmppol{}; 
        ///Conversion Mode Select. 
        enum class cmdVal {
            single=0x00000000,     ///<Single Conversion Mode: One conversion occurs on a single channel.
            scan=0x00000001,     ///<Single Scan Mode: One conversion on each channel selected by SCANEN occurs. An end-of-scan interrupt indicates all channels have been measured.
            contSingle=0x00000002,     ///<Continuous Single Conversion Mode: Continuously converts on a single channel. This operation ends only if the module is disabled (CSEN = 0) or if a compare threshold event occurs (CMPI = 1).
            contScan=0x00000003,     ///<Continuous Scan Mode: Continuously loops through and converts on all the channels selected by SCANEN. This operation ends only if the module is disabled (CSEN = 0) or if a compare threshold event occurs (CMPI = 1).
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::single> single{};
            constexpr MPL::Value<cmdVal,cmdVal::scan> scan{};
            constexpr MPL::Value<cmdVal,cmdVal::contSingle> contSingle{};
            constexpr MPL::Value<cmdVal,cmdVal::contScan> contScan{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,cmdVal> cmd{}; 
        ///Conversion Rate. 
        enum class cnvrVal {
            v12bit=0x00000000,     ///<Conversions last 12 internal CAPSENSE clocks and results are 12 bits in length.
            v13bit=0x00000001,     ///<Conversions last 13 internal CAPSENSE clocks and results are 13 bits in length.
            v14bit=0x00000002,     ///<Conversions last 14 internal CAPSENSE clocks and results are 14 bits in length.
            v16bit=0x00000003,     ///<Conversions last 16 internal CAPSENSE clocks and results are 16 bits in length.
        };
        namespace cnvrValC{
            constexpr MPL::Value<cnvrVal,cnvrVal::v12bit> v12bit{};
            constexpr MPL::Value<cnvrVal,cnvrVal::v13bit> v13bit{};
            constexpr MPL::Value<cnvrVal,cnvrVal::v14bit> v14bit{};
            constexpr MPL::Value<cnvrVal,cnvrVal::v16bit> v16bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,cnvrVal> cnvr{}; 
        ///Accumulator Mode Select. 
        enum class accmdVal {
            acc1=0x00000000,     ///<Accumulate 1 sample.
            acc4=0x00000001,     ///<Accumulate 4 samples.
            acc8=0x00000002,     ///<Accumulate 8 samples.
            acc16=0x00000003,     ///<Accumulate 16 samples.
            acc32=0x00000004,     ///<Accumulate 32 samples.
            acc64=0x00000005,     ///<Accumulate 64 samples.
        };
        namespace accmdValC{
            constexpr MPL::Value<accmdVal,accmdVal::acc1> acc1{};
            constexpr MPL::Value<accmdVal,accmdVal::acc4> acc4{};
            constexpr MPL::Value<accmdVal,accmdVal::acc8> acc8{};
            constexpr MPL::Value<accmdVal,accmdVal::acc16> acc16{};
            constexpr MPL::Value<accmdVal,accmdVal::acc32> acc32{};
            constexpr MPL::Value<accmdVal,accmdVal::acc64> acc64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,accmdVal> accmd{}; 
        ///Multiple Channel Enable. 
        enum class mcenVal {
            disabled=0x00000000,     ///<Disable the multiple channel measurement feature.
            enabled=0x00000001,     ///<Enable the multiple channel measurement feature.
        };
        namespace mcenValC{
            constexpr MPL::Value<mcenVal,mcenVal::disabled> disabled{};
            constexpr MPL::Value<mcenVal,mcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mcenVal> mcen{}; 
        ///Start of Conversion Mode Select. 
        enum class cscmVal {
            csnt0=0x00000000,     ///<The CSnT0 ("On Demand" by writing 1 to CSBUSY) trigger source starts conversions.
            csnt1=0x00000001,     ///<The CSnT1 (Timer 0 Low Overflow) trigger source starts conversions.
            csnt2=0x00000002,     ///<The CSnT2 (Timer 0 High Overflow) trigger source starts conversions.
            csnt3=0x00000003,     ///<The CSnT3 (Timer 1 Low Overflow) trigger source starts conversions.
            csnt4=0x00000004,     ///<The CSnT4 (Timer 1 High Overflow) trigger source starts conversions.
            csnt5=0x00000005,     ///<The CSnT5 (I2C0 Timer Byte 1 Overflow) trigger source starts conversions.
            csnt6=0x00000006,     ///<The CSnT6 (I2C0 Timer Byte 3 Overflow) trigger source starts conversions.
            csnt7=0x00000007,     ///<The CSnT7 (I2C1 Timer Byte 1 Overflow) trigger source starts conversions.
            csnt8=0x00000008,     ///<The CSnT8 (I2C1 Timer Byte 3 Overflow) trigger source starts conversions.
            csnt9=0x00000009,     ///<The CSnT9 (RESERVED) trigger source starts conversions.
            csnt10=0x0000000a,     ///<The CSnT10 (RESERVED) trigger source starts conversions.
            csnt11=0x0000000b,     ///<The CSnT11 (RESERVED) trigger source starts conversions.
            csnt12=0x0000000c,     ///<The CSnT12 (RESERVED) trigger source starts conversions.
            csnt13=0x0000000d,     ///<The CSnT13 (RESERVED) trigger source starts conversions.
            csnt14=0x0000000e,     ///<The CSnT14 (RESERVED) trigger source starts conversions.
            csnt15=0x0000000f,     ///<The CSnT15 (RESERVED) trigger source starts conversions.
        };
        namespace cscmValC{
            constexpr MPL::Value<cscmVal,cscmVal::csnt0> csnt0{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt1> csnt1{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt2> csnt2{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt3> csnt3{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt4> csnt4{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt5> csnt5{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt6> csnt6{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt7> csnt7{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt8> csnt8{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt9> csnt9{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt10> csnt10{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt11> csnt11{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt12> csnt12{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt13> csnt13{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt14> csnt14{};
            constexpr MPL::Value<cscmVal,cscmVal::csnt15> csnt15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,cscmVal> cscm{}; 
        ///Pin Monitor Mode. 
        enum class pmmdVal {
            alwaysRetry=0x00000000,     ///<Always retry on a pin state change.
            retryTwice=0x00000001,     ///<Retry up to twice on consecutive bit cycles.
            retryFourTimes=0x00000002,     ///<Retry up to four times on consecutive bit cycles.
            doNotRetry=0x00000003,     ///<Ignore monitored signal state change.
        };
        namespace pmmdValC{
            constexpr MPL::Value<pmmdVal,pmmdVal::alwaysRetry> alwaysRetry{};
            constexpr MPL::Value<pmmdVal,pmmdVal::retryTwice> retryTwice{};
            constexpr MPL::Value<pmmdVal,pmmdVal::retryFourTimes> retryFourTimes{};
            constexpr MPL::Value<pmmdVal,pmmdVal::doNotRetry> doNotRetry{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pmmdVal> pmmd{}; 
        ///Pin Monitor Event Flag. 
        enum class pmefVal {
            notSet=0x00000000,     ///<A retry did not occur due to a pin monitor event during the last conversion.
            set=0x00000001,     ///<A retry occurred due to a pin monitor event during the last conversion.
        };
        namespace pmefValC{
            constexpr MPL::Value<pmefVal,pmefVal::notSet> notSet{};
            constexpr MPL::Value<pmefVal,pmefVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pmefVal> pmef{}; 
        ///Threshold Comparator Enable. 
        enum class cmpenVal {
            disabled=0x00000000,     ///<Disable the threshold comparator.
            enabled=0x00000001,     ///<Enable the threshold comparator.
        };
        namespace cmpenValC{
            constexpr MPL::Value<cmpenVal,cmpenVal::disabled> disabled{};
            constexpr MPL::Value<cmpenVal,cmpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,cmpenVal> cmpen{}; 
        ///Conversion Done Interrupt Enable. 
        enum class cdienVal {
            disabled=0x00000000,     ///<Disable the single conversion done interrupt.
            enabled=0x00000001,     ///<Enable the single conversion done interrupt.
        };
        namespace cdienValC{
            constexpr MPL::Value<cdienVal,cdienVal::disabled> disabled{};
            constexpr MPL::Value<cdienVal,cdienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,cdienVal> cdien{}; 
        ///End-of-Scan Interrupt Enable. 
        enum class eosienVal {
            disabled=0x00000000,     ///<Disable the single scan end-of-scan interrupt.
            enabled=0x00000001,     ///<Enable the single scan end-of-scan interrupt.
        };
        namespace eosienValC{
            constexpr MPL::Value<eosienVal,eosienVal::disabled> disabled{};
            constexpr MPL::Value<eosienVal,eosienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,eosienVal> eosien{}; 
        ///Threshold Comparator Interrupt Flag. 
        enum class cmpiVal {
            notSet=0x00000000,     ///<The capacitive sensing result did not cause a compare threshold interrupt.
            set=0x00000001,     ///<The capacitive sensing result caused a compare threshold interrupt.
        };
        namespace cmpiValC{
            constexpr MPL::Value<cmpiVal,cmpiVal::notSet> notSet{};
            constexpr MPL::Value<cmpiVal,cmpiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,cmpiVal> cmpi{}; 
        ///Conversion Done Interrupt Flag. 
        enum class cdiVal {
            notSet=0x00000000,     ///<Read: The CAPSENSEn module has not completed a data conversion since the last time CDI was cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: The CAPSENSEn module completed a data conversion. Write: Force a conversion complete interrupt.
        };
        namespace cdiValC{
            constexpr MPL::Value<cdiVal,cdiVal::notSet> notSet{};
            constexpr MPL::Value<cdiVal,cdiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,cdiVal> cdi{}; 
        ///End-of-Scan Interrupt Flag. 
        enum class eosiVal {
            notSet=0x00000000,     ///<The CAPSENSEn module has not completed a scan since the last time EOSI was cleared.
            set=0x00000001,     ///<The CAPSENSEn module completed a scan.
        };
        namespace eosiValC{
            constexpr MPL::Value<eosiVal,eosiVal::notSet> notSet{};
            constexpr MPL::Value<eosiVal,eosiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,eosiVal> eosi{}; 
    }
    namespace Nonemode{    ///<Measurement Mode
        using Addr = Register::Address<0x40023010,0xfff88808,0,unsigned>;
        ///Capacitance Gain Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cgsel{}; 
        ///Double Reset Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> drsel{}; 
        ///Ramp Selection. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rampsel{}; 
        ///Output Current Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> iasel{}; 
        ///Discharge Time Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> dtsel{}; 
        ///Low Pass Filter Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> lpfsel{}; 
    }
    namespace Nonedata{    ///<Measurement Data
        using Addr = Register::Address<0x40023020,0xffff0000,0,unsigned>;
        ///Capacitive Sensing Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonescan{    ///<Channel Scan Enable
        using Addr = Register::Address<0x40023030,0xffff0000,0,unsigned>;
        ///Channel Scan Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> scanen{}; 
    }
    namespace Nonecsth{    ///<Compare Threshold
        using Addr = Register::Address<0x40023040,0xffff0000,0,unsigned>;
        ///Compare Threshold. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csth{}; 
    }
    namespace Nonemux{    ///<Mux Channel Select
        using Addr = Register::Address<0x40023050,0xffffff70,0,unsigned>;
        ///Mux Channel Select. 
        enum class csmxVal {
            csn0=0x00000000,     ///<Select CSn.0 (PB0.1).
            csn1=0x00000001,     ///<Select CSn.1 (PB0.2).
            csn2=0x00000002,     ///<Select CSn.2 (PB0.3).
            csn3=0x00000003,     ///<Select CSn.3 (PB0.4).
            csn4=0x00000004,     ///<Select CSn.4 (PB0.5).
            csn5=0x00000005,     ///<Select CSn.5 (PB0.6).
            csn6=0x00000006,     ///<Select CSn.6 (PB0.7).
            csn7=0x00000007,     ///<Select CSn.7 (PB0.8).
            csn8=0x00000008,     ///<Select CSn.8 (PB1.7).
            csn9=0x00000009,     ///<Select CSn.9 (PB1.8).
            csn10=0x0000000a,     ///<Select CSn.10 (PB1.13).
            csn11=0x0000000b,     ///<Select CSn.11 (PB1.14).
            csn12=0x0000000c,     ///<Select CSn.12 (PB1.15).
            csn13=0x0000000d,     ///<Select CSn.13 (PB2.0).
            csn14=0x0000000e,     ///<Select CSn.14 (PB2.1).
            csn15=0x0000000f,     ///<Select CSn.15 (PB2.2).
        };
        namespace csmxValC{
            constexpr MPL::Value<csmxVal,csmxVal::csn0> csn0{};
            constexpr MPL::Value<csmxVal,csmxVal::csn1> csn1{};
            constexpr MPL::Value<csmxVal,csmxVal::csn2> csn2{};
            constexpr MPL::Value<csmxVal,csmxVal::csn3> csn3{};
            constexpr MPL::Value<csmxVal,csmxVal::csn4> csn4{};
            constexpr MPL::Value<csmxVal,csmxVal::csn5> csn5{};
            constexpr MPL::Value<csmxVal,csmxVal::csn6> csn6{};
            constexpr MPL::Value<csmxVal,csmxVal::csn7> csn7{};
            constexpr MPL::Value<csmxVal,csmxVal::csn8> csn8{};
            constexpr MPL::Value<csmxVal,csmxVal::csn9> csn9{};
            constexpr MPL::Value<csmxVal,csmxVal::csn10> csn10{};
            constexpr MPL::Value<csmxVal,csmxVal::csn11> csn11{};
            constexpr MPL::Value<csmxVal,csmxVal::csn12> csn12{};
            constexpr MPL::Value<csmxVal,csmxVal::csn13> csn13{};
            constexpr MPL::Value<csmxVal,csmxVal::csn14> csn14{};
            constexpr MPL::Value<csmxVal,csmxVal::csn15> csn15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,csmxVal> csmx{}; 
        ///Channel Disconnect. 
        enum class csdiscVal {
            connect=0x00000000,     ///<Connect the capacitive sensing circuit to the selected channel.
            disconnect=0x00000001,     ///<Disconnect the capacitive sensing input channel.
        };
        namespace csdiscValC{
            constexpr MPL::Value<csdiscVal,csdiscVal::connect> connect{};
            constexpr MPL::Value<csdiscVal,csdiscVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,csdiscVal> csdisc{}; 
    }
}
