#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB Device Charger Detection module
    namespace UsbdcdControl{    ///<Control register
        using Addr = Register::Address<0x40035000,0xfcfefefe,0,unsigned>;
        ///Interrupt Acknowledge
        enum class IackVal {
            v0=0x00000000,     ///<Do not clear the interrupt.
            v1=0x00000001,     ///<Clear the IF bit (interrupt flag).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IackVal> iack{}; 
        namespace IackValC{
            constexpr Register::FieldValue<decltype(iack),IackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iack),IackVal::v1> v1{};
        }
        ///Interrupt Flag
        enum class If_Val {
            v0=0x00000000,     ///<No interrupt is pending.
            v1=0x00000001,     ///<An interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,If_Val> if_{}; 
        namespace If_ValC{
            constexpr Register::FieldValue<decltype(if_),If_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(if_),If_Val::v1> v1{};
        }
        ///Interrupt Enable
        enum class IeVal {
            v0=0x00000000,     ///<Disable interrupts to the system.
            v1=0x00000001,     ///<Enable interrupts to the system.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IeVal> ie{}; 
        namespace IeValC{
            constexpr Register::FieldValue<decltype(ie),IeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie),IeVal::v1> v1{};
        }
        ///Start Change Detection Sequence
        enum class StartVal {
            v0=0x00000000,     ///<Do not start the sequence. Writes of this value have no effect.
            v1=0x00000001,     ///<Initiate the charger detection sequence. If the sequence is already running, writes of this value have no effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start),StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start),StartVal::v1> v1{};
        }
        ///Software Reset
        enum class SrVal {
            v0=0x00000000,     ///<Do not perform a software reset.
            v1=0x00000001,     ///<Perform a software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sr),SrVal::v1> v1{};
        }
    }
    namespace UsbdcdClock{    ///<Clock register
        using Addr = Register::Address<0x40035004,0xfffff002,0,unsigned>;
        ///Unit of Measurement Encoding for Clock Speed
        enum class ClockunitVal {
            v0=0x00000000,     ///<kHz Speed (between 1 kHz and 1023 kHz)
            v1=0x00000001,     ///<MHz Speed (between 1 MHz and 1023 MHz)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClockunitVal> clockUnit{}; 
        namespace ClockunitValC{
            constexpr Register::FieldValue<decltype(clockUnit),ClockunitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clockUnit),ClockunitVal::v1> v1{};
        }
        ///Numerical Value of Clock Speed in Binary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> clockSpeed{}; 
        namespace ClockspeedValC{
        }
    }
    namespace UsbdcdStatus{    ///<Status register
        using Addr = Register::Address<0x40035008,0xff80ffff,0,unsigned>;
        ///Charger Detection Sequence Results
        enum class SeqresVal {
            v00=0x00000000,     ///<No results to report.
            v01=0x00000001,     ///<Attached to a standard host. Must comply with USB 2.0 by drawing only 2.5 mA (max) until connected.
            v10=0x00000002,     ///<Attached to a charging port. The exact meaning depends on bit 18: 0: Attached to either a charging host or a dedicated charger. The charger type detection has not completed. 1: Attached to a charging host. The charger type detection has completed.
            v11=0x00000003,     ///<Attached to a dedicated charger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SeqresVal> seqRes{}; 
        namespace SeqresValC{
            constexpr Register::FieldValue<decltype(seqRes),SeqresVal::v00> v00{};
            constexpr Register::FieldValue<decltype(seqRes),SeqresVal::v01> v01{};
            constexpr Register::FieldValue<decltype(seqRes),SeqresVal::v10> v10{};
            constexpr Register::FieldValue<decltype(seqRes),SeqresVal::v11> v11{};
        }
        ///Charger Detection Sequence Status
        enum class SeqstatVal {
            v00=0x00000000,     ///<The module is either not enabled, or the module is enabled but the data pins have not yet been detected.
            v01=0x00000001,     ///<Data pin contact detection is complete.
            v10=0x00000002,     ///<Charging port detection is complete.
            v11=0x00000003,     ///<Charger type detection is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,SeqstatVal> seqStat{}; 
        namespace SeqstatValC{
            constexpr Register::FieldValue<decltype(seqStat),SeqstatVal::v00> v00{};
            constexpr Register::FieldValue<decltype(seqStat),SeqstatVal::v01> v01{};
            constexpr Register::FieldValue<decltype(seqStat),SeqstatVal::v10> v10{};
            constexpr Register::FieldValue<decltype(seqStat),SeqstatVal::v11> v11{};
        }
        ///Error Flag
        enum class ErrVal {
            v0=0x00000000,     ///<No sequence errors.
            v1=0x00000001,     ///<Error in the detection sequence. See the SEQ_STAT field to determine the phase in which the error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ErrVal> err{}; 
        namespace ErrValC{
            constexpr Register::FieldValue<decltype(err),ErrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(err),ErrVal::v1> v1{};
        }
        ///Timeout Flag
        enum class ToVal {
            v0=0x00000000,     ///<The detection sequence has not been running for over 1 s.
            v1=0x00000001,     ///<It has been over 1 s since the data pin contact was detected and debounced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ToVal> to{}; 
        namespace ToValC{
            constexpr Register::FieldValue<decltype(to),ToVal::v0> v0{};
            constexpr Register::FieldValue<decltype(to),ToVal::v1> v1{};
        }
        ///Active Status Indicator
        enum class ActiveVal {
            v0=0x00000000,     ///<The sequence is not running.
            v1=0x00000001,     ///<The sequence is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ActiveVal> active{}; 
        namespace ActiveValC{
            constexpr Register::FieldValue<decltype(active),ActiveVal::v0> v0{};
            constexpr Register::FieldValue<decltype(active),ActiveVal::v1> v1{};
        }
    }
    namespace UsbdcdTimer0{    ///<TIMER0 register
        using Addr = Register::Address<0x40035010,0xfc00f000,0,unsigned>;
        ///Unit Connection Timer Elapse (in ms)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> tunitcon{}; 
        namespace TunitconValC{
        }
        ///Sequence Initiation Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tseqInit{}; 
        namespace TseqinitValC{
        }
    }
    namespace UsbdcdTimer1{    ///<TIMER1 register
        using Addr = Register::Address<0x40035014,0xfc00fc00,0,unsigned>;
        ///Time Period Comparator Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tvdpsrcOn{}; 
        namespace TvdpsrconValC{
        }
        ///Time Period to Debounce D+ Signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tdcdDbnc{}; 
        namespace TdcddbncValC{
        }
    }
    namespace UsbdcdTimer2{    ///<TIMER2 register
        using Addr = Register::Address<0x40035018,0xfc00fff0,0,unsigned>;
        ///Time Before Check of D- Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> checkDm{}; 
        namespace CheckdmValC{
        }
        ///Time Period Before Enabling D+ Pullup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tvdpsrcCon{}; 
        namespace TvdpsrcconValC{
        }
    }
}
