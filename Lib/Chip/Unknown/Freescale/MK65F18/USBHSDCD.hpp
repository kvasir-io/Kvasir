#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB Device Charger Detection module
    namespace UsbhsdcdControl{    ///<Control register
        using Addr = Register::Address<0x400a3000,0xfcfcfefe,0,unsigned>;
        ///Interrupt Acknowledge
        enum class iackVal {
            v0=0x00000000,     ///<Do not clear the interrupt.
            v1=0x00000001,     ///<Clear the IF bit (interrupt flag).
        };
        namespace iackValC{
            constexpr MPL::Value<iackVal,iackVal::v0> v0{};
            constexpr MPL::Value<iackVal,iackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iackVal> iack{}; 
        ///Interrupt Flag
        enum class if_Val {
            v0=0x00000000,     ///<No interrupt is pending.
            v1=0x00000001,     ///<An interrupt is pending.
        };
        namespace if_ValC{
            constexpr MPL::Value<if_Val,if_Val::v0> v0{};
            constexpr MPL::Value<if_Val,if_Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,if_Val> if_{}; 
        ///Interrupt Enable
        enum class ieVal {
            v0=0x00000000,     ///<Disable interrupts to the system.
            v1=0x00000001,     ///<Enable interrupts to the system.
        };
        namespace ieValC{
            constexpr MPL::Value<ieVal,ieVal::v0> v0{};
            constexpr MPL::Value<ieVal,ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ieVal> ie{}; 
        ///no description available
        enum class bc12Val {
            v0=0x00000000,     ///<Compatible with BC1.1 (default)
            v1=0x00000001,     ///<Compatible with BC1.2
        };
        namespace bc12ValC{
            constexpr MPL::Value<bc12Val,bc12Val::v0> v0{};
            constexpr MPL::Value<bc12Val,bc12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,bc12Val> bc12{}; 
        ///Start Change Detection Sequence
        enum class startVal {
            v0=0x00000000,     ///<Do not start the sequence. Writes of this value have no effect.
            v1=0x00000001,     ///<Initiate the charger detection sequence. If the sequence is already running, writes of this value have no effect.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,startVal> start{}; 
        ///Software Reset
        enum class srVal {
            v0=0x00000000,     ///<Do not perform a software reset.
            v1=0x00000001,     ///<Perform a software reset.
        };
        namespace srValC{
            constexpr MPL::Value<srVal,srVal::v0> v0{};
            constexpr MPL::Value<srVal,srVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,srVal> sr{}; 
    }
    namespace UsbhsdcdClock{    ///<Clock register
        using Addr = Register::Address<0x400a3004,0xfffff002,0,unsigned>;
        ///Unit of Measurement Encoding for Clock Speed
        enum class clockUnitVal {
            v0=0x00000000,     ///<kHz Speed (between 1 kHz and 1023 kHz)
            v1=0x00000001,     ///<MHz Speed (between 1 MHz and 1023 MHz)
        };
        namespace clockUnitValC{
            constexpr MPL::Value<clockUnitVal,clockUnitVal::v0> v0{};
            constexpr MPL::Value<clockUnitVal,clockUnitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,clockUnitVal> clockUnit{}; 
        ///Numerical Value of Clock Speed in Binary
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> clockSpeed{}; 
    }
    namespace UsbhsdcdStatus{    ///<Status register
        using Addr = Register::Address<0x400a3008,0xff80ffff,0,unsigned>;
        ///Charger Detection Sequence Results
        enum class seqResVal {
            v00=0x00000000,     ///<No results to report.
            v01=0x00000001,     ///<Attached to a standard host. Must comply with USB 2.0 by drawing only 2.5 mA (max) until connected.
            v10=0x00000002,     ///<Attached to a charging port. The exact meaning depends on bit 18: 0: Attached to either a charging host or a dedicated charger. The charger type detection has not completed. 1: Attached to a charging host. The charger type detection has completed.
            v11=0x00000003,     ///<Attached to a dedicated charger.
        };
        namespace seqResValC{
            constexpr MPL::Value<seqResVal,seqResVal::v00> v00{};
            constexpr MPL::Value<seqResVal,seqResVal::v01> v01{};
            constexpr MPL::Value<seqResVal,seqResVal::v10> v10{};
            constexpr MPL::Value<seqResVal,seqResVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,seqResVal> seqRes{}; 
        ///Charger Detection Sequence Status
        enum class seqStatVal {
            v00=0x00000000,     ///<The module is either not enabled, or the module is enabled but the data pins have not yet been detected.
            v01=0x00000001,     ///<Data pin contact detection is complete.
            v10=0x00000002,     ///<Charging port detection is complete.
            v11=0x00000003,     ///<Charger type detection is complete.
        };
        namespace seqStatValC{
            constexpr MPL::Value<seqStatVal,seqStatVal::v00> v00{};
            constexpr MPL::Value<seqStatVal,seqStatVal::v01> v01{};
            constexpr MPL::Value<seqStatVal,seqStatVal::v10> v10{};
            constexpr MPL::Value<seqStatVal,seqStatVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,seqStatVal> seqStat{}; 
        ///Error Flag
        enum class errVal {
            v0=0x00000000,     ///<No sequence errors.
            v1=0x00000001,     ///<Error in the detection sequence. See the SEQ_STAT field to determine the phase in which the error occurred.
        };
        namespace errValC{
            constexpr MPL::Value<errVal,errVal::v0> v0{};
            constexpr MPL::Value<errVal,errVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,errVal> err{}; 
        ///Timeout Flag
        enum class toVal {
            v0=0x00000000,     ///<The detection sequence has not been running for over 1 s.
            v1=0x00000001,     ///<It has been over 1 s since the data pin contact was detected and debounced.
        };
        namespace toValC{
            constexpr MPL::Value<toVal,toVal::v0> v0{};
            constexpr MPL::Value<toVal,toVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,toVal> to{}; 
        ///Active Status Indicator
        enum class activeVal {
            v0=0x00000000,     ///<The sequence is not running.
            v1=0x00000001,     ///<The sequence is running.
        };
        namespace activeValC{
            constexpr MPL::Value<activeVal,activeVal::v0> v0{};
            constexpr MPL::Value<activeVal,activeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,activeVal> active{}; 
    }
    namespace UsbhsdcdTimer0{    ///<TIMER0 register
        using Addr = Register::Address<0x400a3010,0xfc00f000,0,unsigned>;
        ///Unit Connection Timer Elapse (in ms)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> tunitcon{}; 
        ///Sequence Initiation Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tseqInit{}; 
    }
    namespace UsbhsdcdTimer1{    ///<TIMER1 register
        using Addr = Register::Address<0x400a3014,0xfc00fc00,0,unsigned>;
        ///Time Period Comparator Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tvdpsrcOn{}; 
        ///Time Period to Debounce D+ Signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tdcdDbnc{}; 
    }
    namespace UsbhsdcdTimer2Bc11{    ///<TIMER2_BC11 register
        using Addr = Register::Address<0x400a3018,0xfc00fff0,0,unsigned>;
        ///Time Before Check of D- Line
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> checkDm{}; 
        ///Time Period Before Enabling D+ Pullup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> tvdpsrcCon{}; 
    }
    namespace UsbhsdcdTimer2Bc12{    ///<TIMER2_BC12 register
        using Addr = Register::Address<0x400a3018,0xfc00fc00,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tvdmsrcOn{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> twaitAfterPrd{}; 
    }
}
