#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB Device Charger Detection module
    namespace UsbdcdControl{    ///<Control register
        using Addr = Register::Address<0x40035000,0x00000000,0x00000000,unsigned>;
        ///Interrupt Acknowledge
        enum class IackVal {
            v0=0x00000000,     ///<Do not clear the interrupt.
            v1=0x00000001,     ///<Clear the IF bit (interrupt flag).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IackVal> iack{}; 
        namespace IackValC{
            constexpr Register::FieldValue<decltype(iack)::Type,IackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iack)::Type,IackVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Flag
        enum class If_Val {
            v0=0x00000000,     ///<No interrupt is pending.
            v1=0x00000001,     ///<An interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,If_Val> if_{}; 
        namespace If_ValC{
            constexpr Register::FieldValue<decltype(if_)::Type,If_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(if_)::Type,If_Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Interrupt Enable
        enum class IeVal {
            v0=0x00000000,     ///<Disable interrupts to the system.
            v1=0x00000001,     ///<Enable interrupts to the system.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IeVal> ie{}; 
        namespace IeValC{
            constexpr Register::FieldValue<decltype(ie)::Type,IeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie)::Type,IeVal::v1> v1{};
        }
        ///no description available
        enum class Bc12Val {
            v0=0x00000000,     ///<Compatible with BC1.1 (default)
            v1=0x00000001,     ///<Compatible with BC1.2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Bc12Val> bc12{}; 
        namespace Bc12ValC{
            constexpr Register::FieldValue<decltype(bc12)::Type,Bc12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bc12)::Type,Bc12Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Start Change Detection Sequence
        enum class StartVal {
            v0=0x00000000,     ///<Do not start the sequence. Writes of this value have no effect.
            v1=0x00000001,     ///<Initiate the charger detection sequence. If the sequence is already running, writes of this value have no effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Software Reset
        enum class SrVal {
            v0=0x00000000,     ///<Do not perform a software reset.
            v1=0x00000001,     ///<Perform a software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr)::Type,SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr)::Type,SrVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbdcdClock{    ///<Clock register
        using Addr = Register::Address<0x40035004,0x00000000,0x00000000,unsigned>;
        ///Unit of Measurement Encoding for Clock Speed
        enum class ClockunitVal {
            v0=0x00000000,     ///<kHz Speed (between 1 kHz and 1023 kHz)
            v1=0x00000001,     ///<MHz Speed (between 1 MHz and 1023 MHz)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClockunitVal> clockUnit{}; 
        namespace ClockunitValC{
            constexpr Register::FieldValue<decltype(clockUnit)::Type,ClockunitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clockUnit)::Type,ClockunitVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Numerical Value of Clock Speed in Binary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> clockSpeed{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbdcdStatus{    ///<Status register
        using Addr = Register::Address<0x40035008,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Charger Detection Sequence Results
        enum class SeqresVal {
            v00=0x00000000,     ///<No results to report.
            v01=0x00000001,     ///<Attached to a standard host. Must comply with USB 2.0 by drawing only 2.5 mA (max) until connected.
            v10=0x00000002,     ///<Attached to a charging port. The exact meaning depends on bit 18: 0: Attached to either a charging host or a dedicated charger. The charger type detection has not completed. 1: Attached to a charging host. The charger type detection has completed.
            v11=0x00000003,     ///<Attached to a dedicated charger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SeqresVal> seqRes{}; 
        namespace SeqresValC{
            constexpr Register::FieldValue<decltype(seqRes)::Type,SeqresVal::v00> v00{};
            constexpr Register::FieldValue<decltype(seqRes)::Type,SeqresVal::v01> v01{};
            constexpr Register::FieldValue<decltype(seqRes)::Type,SeqresVal::v10> v10{};
            constexpr Register::FieldValue<decltype(seqRes)::Type,SeqresVal::v11> v11{};
        }
        ///Charger Detection Sequence Status
        enum class SeqstatVal {
            v00=0x00000000,     ///<The module is either not enabled, or the module is enabled but the data pins have not yet been detected.
            v01=0x00000001,     ///<Data pin contact detection is complete.
            v10=0x00000002,     ///<Charging port detection is complete.
            v11=0x00000003,     ///<Charger type detection is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SeqstatVal> seqStat{}; 
        namespace SeqstatValC{
            constexpr Register::FieldValue<decltype(seqStat)::Type,SeqstatVal::v00> v00{};
            constexpr Register::FieldValue<decltype(seqStat)::Type,SeqstatVal::v01> v01{};
            constexpr Register::FieldValue<decltype(seqStat)::Type,SeqstatVal::v10> v10{};
            constexpr Register::FieldValue<decltype(seqStat)::Type,SeqstatVal::v11> v11{};
        }
        ///Error Flag
        enum class ErrVal {
            v0=0x00000000,     ///<No sequence errors.
            v1=0x00000001,     ///<Error in the detection sequence. See the SEQ_STAT field to determine the phase in which the error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err)::Type,ErrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(err)::Type,ErrVal::v1> v1{};
        }
        ///Timeout Flag
        enum class ToVal {
            v0=0x00000000,     ///<The detection sequence has not been running for over 1 s.
            v1=0x00000001,     ///<It has been over 1 s since the data pin contact was detected and debounced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ToVal> to{}; 
        namespace ToValC{
            constexpr Register::FieldValue<decltype(to)::Type,ToVal::v0> v0{};
            constexpr Register::FieldValue<decltype(to)::Type,ToVal::v1> v1{};
        }
        ///Active Status Indicator
        enum class ActiveVal {
            v0=0x00000000,     ///<The sequence is not running.
            v1=0x00000001,     ///<The sequence is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ActiveVal> active{}; 
        namespace ActiveValC{
            constexpr Register::FieldValue<decltype(active)::Type,ActiveVal::v0> v0{};
            constexpr Register::FieldValue<decltype(active)::Type,ActiveVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbdcdTimer0{    ///<TIMER0 register
        using Addr = Register::Address<0x40035010,0x00000000,0x00000000,unsigned>;
        ///Unit Connection Timer Elapse (in ms)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tunitcon{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Sequence Initiation Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tseqInit{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbdcdTimer1{    ///<TIMER1 register
        using Addr = Register::Address<0x40035014,0x00000000,0x00000000,unsigned>;
        ///Time Period Comparator Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tvdpsrcOn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time Period to Debounce D+ Signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tdcdDbnc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbdcdTimer2Bc11{    ///<TIMER2_BC11 register
        using Addr = Register::Address<0x40035018,0x00000000,0x00000000,unsigned>;
        ///Time Before Check of D- Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> checkDm{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time Period Before Enabling D+ Pullup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tvdpsrcCon{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace UsbdcdTimer2Bc12{    ///<TIMER2_BC12 register
        using Addr = Register::Address<0x40035018,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tvdmsrcOn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> twaitAfterPrd{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
