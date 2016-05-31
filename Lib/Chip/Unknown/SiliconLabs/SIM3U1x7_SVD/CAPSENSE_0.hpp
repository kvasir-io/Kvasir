#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Capsense0Control{    ///<Module Control
        using Addr = Register::Address<0x40023000,0xf8880000,0x00000000,unsigned>;
        ///Start and Busy Flag. 
        enum class BusyfVal {
            idle=0x00000000,     ///<Read: A capacitive sensing conversion is complete or a conversion is not currently in progress. Write: No effect.
            busy=0x00000001,     ///<Read: A capacitive sensing conversion is in progress. Write: Initiate a capacitive sensing conversion if BUSYF is selected as the start of conversion source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BusyfVal> busyf{}; 
        namespace BusyfValC{
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::idle> idle{};
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::busy> busy{};
        }
        ///Module Enable. 
        enum class CsenVal {
            disabled=0x00000000,     ///<Disable the capacitive sensing module.
            enabled=0x00000001,     ///<Enable the capacitive sensing module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsenVal> csen{}; 
        namespace CsenValC{
            constexpr Register::FieldValue<decltype(csen)::Type,CsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(csen)::Type,CsenVal::enabled> enabled{};
        }
        ///Bias Enable. 
        enum class BiasenVal {
            disabled=0x00000000,     ///<Disable the bias.
            enabled=0x00000001,     ///<Enable the bias.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BiasenVal> biasen{}; 
        namespace BiasenValC{
            constexpr Register::FieldValue<decltype(biasen)::Type,BiasenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(biasen)::Type,BiasenVal::enabled> enabled{};
        }
        ///Digital Comparator Polarity Select. 
        enum class CmppolVal {
            gt=0x00000000,     ///<The digital comparator generates an interrupt if the conversion is greater than the CSTH threshold.
            lte=0x00000001,     ///<The digital comparator generates an interrupt if the conversion is less than or equal to the CSTH threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmppolVal> cmppol{}; 
        namespace CmppolValC{
            constexpr Register::FieldValue<decltype(cmppol)::Type,CmppolVal::gt> gt{};
            constexpr Register::FieldValue<decltype(cmppol)::Type,CmppolVal::lte> lte{};
        }
        ///Conversion Mode Select. 
        enum class CmdVal {
            single=0x00000000,     ///<Single Conversion Mode: One conversion occurs on a single channel.
            scan=0x00000001,     ///<Single Scan Mode: One conversion on each channel selected by SCANEN occurs. An end-of-scan interrupt indicates all channels have been measured.
            contSingle=0x00000002,     ///<Continuous Single Conversion Mode: Continuously converts on a single channel. This operation ends only if the module is disabled (CSEN = 0) or if a compare threshold event occurs (CMPI = 1).
            contScan=0x00000003,     ///<Continuous Scan Mode: Continuously loops through and converts on all the channels selected by SCANEN. This operation ends only if the module is disabled (CSEN = 0) or if a compare threshold event occurs (CMPI = 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::single> single{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::scan> scan{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::contSingle> contSingle{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::contScan> contScan{};
        }
        ///Conversion Rate. 
        enum class CnvrVal {
            v12bit=0x00000000,     ///<Conversions last 12 internal CAPSENSE clocks and results are 12 bits in length.
            v13bit=0x00000001,     ///<Conversions last 13 internal CAPSENSE clocks and results are 13 bits in length.
            v14bit=0x00000002,     ///<Conversions last 14 internal CAPSENSE clocks and results are 14 bits in length.
            v16bit=0x00000003,     ///<Conversions last 16 internal CAPSENSE clocks and results are 16 bits in length.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CnvrVal> cnvr{}; 
        namespace CnvrValC{
            constexpr Register::FieldValue<decltype(cnvr)::Type,CnvrVal::v12bit> v12bit{};
            constexpr Register::FieldValue<decltype(cnvr)::Type,CnvrVal::v13bit> v13bit{};
            constexpr Register::FieldValue<decltype(cnvr)::Type,CnvrVal::v14bit> v14bit{};
            constexpr Register::FieldValue<decltype(cnvr)::Type,CnvrVal::v16bit> v16bit{};
        }
        ///Accumulator Mode Select. 
        enum class AccmdVal {
            acc1=0x00000000,     ///<Accumulate 1 sample.
            acc4=0x00000001,     ///<Accumulate 4 samples.
            acc8=0x00000002,     ///<Accumulate 8 samples.
            acc16=0x00000003,     ///<Accumulate 16 samples.
            acc32=0x00000004,     ///<Accumulate 32 samples.
            acc64=0x00000005,     ///<Accumulate 64 samples.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,AccmdVal> accmd{}; 
        namespace AccmdValC{
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::acc1> acc1{};
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::acc4> acc4{};
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::acc8> acc8{};
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::acc16> acc16{};
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::acc32> acc32{};
            constexpr Register::FieldValue<decltype(accmd)::Type,AccmdVal::acc64> acc64{};
        }
        ///Multiple Channel Enable. 
        enum class McenVal {
            disabled=0x00000000,     ///<Disable the multiple channel measurement feature.
            enabled=0x00000001,     ///<Enable the multiple channel measurement feature.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,McenVal> mcen{}; 
        namespace McenValC{
            constexpr Register::FieldValue<decltype(mcen)::Type,McenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mcen)::Type,McenVal::enabled> enabled{};
        }
        ///Start of Conversion Mode Select. 
        enum class CscmVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,CscmVal> cscm{}; 
        namespace CscmValC{
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt0> csnt0{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt1> csnt1{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt2> csnt2{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt3> csnt3{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt4> csnt4{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt5> csnt5{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt6> csnt6{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt7> csnt7{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt8> csnt8{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt9> csnt9{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt10> csnt10{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt11> csnt11{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt12> csnt12{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt13> csnt13{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt14> csnt14{};
            constexpr Register::FieldValue<decltype(cscm)::Type,CscmVal::csnt15> csnt15{};
        }
        ///Pin Monitor Mode. 
        enum class PmmdVal {
            alwaysRetry=0x00000000,     ///<Always retry on a pin state change.
            retryTwice=0x00000001,     ///<Retry up to twice on consecutive bit cycles.
            retryFourTimes=0x00000002,     ///<Retry up to four times on consecutive bit cycles.
            doNotRetry=0x00000003,     ///<Ignore monitored signal state change.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PmmdVal> pmmd{}; 
        namespace PmmdValC{
            constexpr Register::FieldValue<decltype(pmmd)::Type,PmmdVal::alwaysRetry> alwaysRetry{};
            constexpr Register::FieldValue<decltype(pmmd)::Type,PmmdVal::retryTwice> retryTwice{};
            constexpr Register::FieldValue<decltype(pmmd)::Type,PmmdVal::retryFourTimes> retryFourTimes{};
            constexpr Register::FieldValue<decltype(pmmd)::Type,PmmdVal::doNotRetry> doNotRetry{};
        }
        ///Pin Monitor Event Flag. 
        enum class PmefVal {
            notSet=0x00000000,     ///<A retry did not occur due to a pin monitor event during the last conversion.
            set=0x00000001,     ///<A retry occurred due to a pin monitor event during the last conversion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,PmefVal> pmef{}; 
        namespace PmefValC{
            constexpr Register::FieldValue<decltype(pmef)::Type,PmefVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(pmef)::Type,PmefVal::set> set{};
        }
        ///Threshold Comparator Enable. 
        enum class CmpenVal {
            disabled=0x00000000,     ///<Disable the threshold comparator.
            enabled=0x00000001,     ///<Enable the threshold comparator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,CmpenVal> cmpen{}; 
        namespace CmpenValC{
            constexpr Register::FieldValue<decltype(cmpen)::Type,CmpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpen)::Type,CmpenVal::enabled> enabled{};
        }
        ///Conversion Done Interrupt Enable. 
        enum class CdienVal {
            disabled=0x00000000,     ///<Disable the single conversion done interrupt.
            enabled=0x00000001,     ///<Enable the single conversion done interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,CdienVal> cdien{}; 
        namespace CdienValC{
            constexpr Register::FieldValue<decltype(cdien)::Type,CdienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cdien)::Type,CdienVal::enabled> enabled{};
        }
        ///End-of-Scan Interrupt Enable. 
        enum class EosienVal {
            disabled=0x00000000,     ///<Disable the single scan end-of-scan interrupt.
            enabled=0x00000001,     ///<Enable the single scan end-of-scan interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,EosienVal> eosien{}; 
        namespace EosienValC{
            constexpr Register::FieldValue<decltype(eosien)::Type,EosienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eosien)::Type,EosienVal::enabled> enabled{};
        }
        ///Threshold Comparator Interrupt Flag. 
        enum class CmpiVal {
            notSet=0x00000000,     ///<The capacitive sensing result did not cause a compare threshold interrupt.
            set=0x00000001,     ///<The capacitive sensing result caused a compare threshold interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CmpiVal> cmpi{}; 
        namespace CmpiValC{
            constexpr Register::FieldValue<decltype(cmpi)::Type,CmpiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmpi)::Type,CmpiVal::set> set{};
        }
        ///Conversion Done Interrupt Flag. 
        enum class CdiVal {
            notSet=0x00000000,     ///<Read: The CAPSENSEn module has not completed a data conversion since the last time CDI was cleared. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: The CAPSENSEn module completed a data conversion. Write: Force a conversion complete interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,CdiVal> cdi{}; 
        namespace CdiValC{
            constexpr Register::FieldValue<decltype(cdi)::Type,CdiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cdi)::Type,CdiVal::set> set{};
        }
        ///End-of-Scan Interrupt Flag. 
        enum class EosiVal {
            notSet=0x00000000,     ///<The CAPSENSEn module has not completed a scan since the last time EOSI was cleared.
            set=0x00000001,     ///<The CAPSENSEn module completed a scan.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,EosiVal> eosi{}; 
        namespace EosiValC{
            constexpr Register::FieldValue<decltype(eosi)::Type,EosiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(eosi)::Type,EosiVal::set> set{};
        }
    }
    namespace Capsense0Mode{    ///<Measurement Mode
        using Addr = Register::Address<0x40023010,0xfff88808,0x00000000,unsigned>;
        ///Capacitance Gain Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cgsel{}; 
        ///Double Reset Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> drsel{}; 
        ///Ramp Selection. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rampsel{}; 
        ///Output Current Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> iasel{}; 
        ///Discharge Time Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> dtsel{}; 
        ///Low Pass Filter Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> lpfsel{}; 
    }
    namespace Capsense0Data{    ///<Measurement Data
        using Addr = Register::Address<0x40023020,0xffff0000,0x00000000,unsigned>;
        ///Capacitive Sensing Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Capsense0Scan{    ///<Channel Scan Enable
        using Addr = Register::Address<0x40023030,0xffff0000,0x00000000,unsigned>;
        ///Channel Scan Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> scanen{}; 
    }
    namespace Capsense0Csth{    ///<Compare Threshold
        using Addr = Register::Address<0x40023040,0xffff0000,0x00000000,unsigned>;
        ///Compare Threshold. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csth{}; 
    }
    namespace Capsense0Mux{    ///<Mux Channel Select
        using Addr = Register::Address<0x40023050,0xffffff70,0x00000000,unsigned>;
        ///Mux Channel Select. 
        enum class CsmxVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CsmxVal> csmx{}; 
        namespace CsmxValC{
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn0> csn0{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn1> csn1{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn2> csn2{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn3> csn3{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn4> csn4{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn5> csn5{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn6> csn6{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn7> csn7{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn8> csn8{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn9> csn9{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn10> csn10{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn11> csn11{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn12> csn12{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn13> csn13{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn14> csn14{};
            constexpr Register::FieldValue<decltype(csmx)::Type,CsmxVal::csn15> csn15{};
        }
        ///Channel Disconnect. 
        enum class CsdiscVal {
            connect=0x00000000,     ///<Connect the capacitive sensing circuit to the selected channel.
            disconnect=0x00000001,     ///<Disconnect the capacitive sensing input channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CsdiscVal> csdisc{}; 
        namespace CsdiscValC{
            constexpr Register::FieldValue<decltype(csdisc)::Type,CsdiscVal::connect> connect{};
            constexpr Register::FieldValue<decltype(csdisc)::Type,CsdiscVal::disconnect> disconnect{};
        }
    }
}
