#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Controller Area Network 1
    namespace Can1Mr{    ///<Mode Register
        using Addr = Register::Address<0xf8010000,0xffffff00,0,unsigned>;
        ///CAN Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canen{}; 
        namespace CanenValC{
        }
        ///Disable/Enable Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpm{}; 
        namespace LpmValC{
        }
        ///Disable/Enable Autobaud/Listen mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> abm{}; 
        namespace AbmValC{
        }
        ///Disable/Enable Overload Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovl{}; 
        namespace OvlValC{
        }
        ///Timestamp messages at each end of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teof{}; 
        namespace TeofValC{
        }
        ///Disable/Enable Time Triggered Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttm{}; 
        namespace TtmValC{
        }
        ///Enable Timer Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timfrz{}; 
        namespace TimfrzValC{
        }
        ///Disable Repeat
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> drpt{}; 
        namespace DrptValC{
        }
    }
    namespace Can1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8010004,0xe000ff00,0,unsigned>;
        ///Mailbox 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        namespace Mb0ValC{
        }
        ///Mailbox 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        namespace Mb1ValC{
        }
        ///Mailbox 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        namespace Mb2ValC{
        }
        ///Mailbox 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        namespace Mb3ValC{
        }
        ///Mailbox 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        namespace Mb4ValC{
        }
        ///Mailbox 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        namespace Mb5ValC{
        }
        ///Mailbox 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        namespace Mb6ValC{
        }
        ///Mailbox 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        namespace Mb7ValC{
        }
        ///Error Active Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        namespace ErraValC{
        }
        ///Warning Limit Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        namespace WarnValC{
        }
        ///Error Passive Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        namespace ErrpValC{
        }
        ///Bus Off Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
        ///Sleep Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///Wakeup Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///Timer Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        namespace TovfValC{
        }
        ///TimeStamp Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        namespace TstpValC{
        }
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        namespace CerrValC{
        }
        ///Stuffing Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        namespace SerrValC{
        }
        ///Acknowledgment Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        namespace AerrValC{
        }
        ///Form Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
    }
    namespace Can1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8010008,0xe000ff00,0,unsigned>;
        ///Mailbox 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        namespace Mb0ValC{
        }
        ///Mailbox 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        namespace Mb1ValC{
        }
        ///Mailbox 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        namespace Mb2ValC{
        }
        ///Mailbox 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        namespace Mb3ValC{
        }
        ///Mailbox 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        namespace Mb4ValC{
        }
        ///Mailbox 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        namespace Mb5ValC{
        }
        ///Mailbox 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        namespace Mb6ValC{
        }
        ///Mailbox 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        namespace Mb7ValC{
        }
        ///Error Active Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        namespace ErraValC{
        }
        ///Warning Limit Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        namespace WarnValC{
        }
        ///Error Passive Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        namespace ErrpValC{
        }
        ///Bus Off Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
        ///Sleep Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///Wakeup Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///Timer Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        namespace TovfValC{
        }
        ///TimeStamp Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        namespace TstpValC{
        }
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        namespace CerrValC{
        }
        ///Stuffing Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        namespace SerrValC{
        }
        ///Acknowledgment Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        namespace AerrValC{
        }
        ///Form Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
    }
    namespace Can1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf801000c,0xe000ff00,0,unsigned>;
        ///Mailbox 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        namespace Mb0ValC{
        }
        ///Mailbox 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        namespace Mb1ValC{
        }
        ///Mailbox 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        namespace Mb2ValC{
        }
        ///Mailbox 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        namespace Mb3ValC{
        }
        ///Mailbox 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        namespace Mb4ValC{
        }
        ///Mailbox 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        namespace Mb5ValC{
        }
        ///Mailbox 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        namespace Mb6ValC{
        }
        ///Mailbox 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        namespace Mb7ValC{
        }
        ///Error Active Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        namespace ErraValC{
        }
        ///Warning Limit Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        namespace WarnValC{
        }
        ///Error Passive Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        namespace ErrpValC{
        }
        ///Bus Off Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
        ///Sleep Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///Wakeup Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///Timer Overflow Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        namespace TovfValC{
        }
        ///Timestamp Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        namespace TstpValC{
        }
        ///CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        namespace CerrValC{
        }
        ///Stuffing Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        namespace SerrValC{
        }
        ///Acknowledgment Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        namespace AerrValC{
        }
        ///Form Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
    }
    namespace Can1Sr{    ///<Status Register
        using Addr = Register::Address<0xf8010010,0x0000ff00,0,unsigned>;
        ///Mailbox 0 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        namespace Mb0ValC{
        }
        ///Mailbox 1 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        namespace Mb1ValC{
        }
        ///Mailbox 2 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        namespace Mb2ValC{
        }
        ///Mailbox 3 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        namespace Mb3ValC{
        }
        ///Mailbox 4 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        namespace Mb4ValC{
        }
        ///Mailbox 5 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        namespace Mb5ValC{
        }
        ///Mailbox 6 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        namespace Mb6ValC{
        }
        ///Mailbox 7 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        namespace Mb7ValC{
        }
        ///Error Active Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        namespace ErraValC{
        }
        ///Warning Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        namespace WarnValC{
        }
        ///Error Passive Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        namespace ErrpValC{
        }
        ///Bus Off Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
        ///CAN controller in Low power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///CAN controller is not in Low power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///Timer Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        namespace TovfValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        namespace TstpValC{
        }
        ///Mailbox CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        namespace CerrValC{
        }
        ///Mailbox Stuffing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        namespace SerrValC{
        }
        ///Acknowledgment Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        namespace AerrValC{
        }
        ///Form Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///Receiver busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rbsy{}; 
        namespace RbsyValC{
        }
        ///Transmitter busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tbsy{}; 
        namespace TbsyValC{
        }
        ///Overload busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ovlsy{}; 
        namespace OvlsyValC{
        }
    }
    namespace Can1Br{    ///<Baudrate Register
        using Addr = Register::Address<0xf8010014,0xfe80c888,0,unsigned>;
        ///Phase 2 segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> phase2{}; 
        namespace Phase2ValC{
        }
        ///Phase 1 segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> phase1{}; 
        namespace Phase1ValC{
        }
        ///Programming time segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> propag{}; 
        namespace PropagValC{
        }
        ///Re-synchronization jump width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
        ///Baudrate Prescaler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
        ///Sampling Mode
        enum class SmpVal {
            once=0x00000000,     ///<The incoming bit stream is sampled once at sample point.
            three=0x00000001,     ///<The incoming bit stream is sampled three times with a period of a MCK clock period, centered on sample point.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SmpVal> smp{}; 
        namespace SmpValC{
            constexpr Register::FieldValue<decltype(smp),SmpVal::once> once{};
            constexpr Register::FieldValue<decltype(smp),SmpVal::three> three{};
        }
    }
    namespace Can1Tim{    ///<Timer Register
        using Addr = Register::Address<0xf8010018,0xffff0000,0,unsigned>;
        ///Timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
        namespace TimerValC{
        }
    }
    namespace Can1Timestp{    ///<Timestamp Register
        using Addr = Register::Address<0xf801001c,0xffff0000,0,unsigned>;
        ///Timestamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
    }
    namespace Can1Ecr{    ///<Error Counter Register
        using Addr = Register::Address<0xf8010020,0xfe00ff00,0,unsigned>;
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> tec{}; 
        namespace TecValC{
        }
    }
    namespace Can1Tcr{    ///<Transfer Command Register
        using Addr = Register::Address<0xf8010024,0x7fffff00,0,unsigned>;
        ///Transfer Request for Mailbox 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        namespace Mb0ValC{
        }
        ///Transfer Request for Mailbox 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        namespace Mb1ValC{
        }
        ///Transfer Request for Mailbox 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        namespace Mb2ValC{
        }
        ///Transfer Request for Mailbox 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        namespace Mb3ValC{
        }
        ///Transfer Request for Mailbox 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        namespace Mb4ValC{
        }
        ///Transfer Request for Mailbox 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        namespace Mb5ValC{
        }
        ///Transfer Request for Mailbox 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        namespace Mb6ValC{
        }
        ///Transfer Request for Mailbox 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        namespace Mb7ValC{
        }
        ///Timer Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> timrst{}; 
        namespace TimrstValC{
        }
    }
    namespace Can1Acr{    ///<Abort Command Register
        using Addr = Register::Address<0xf8010028,0xffffff00,0,unsigned>;
        ///Abort Request for Mailbox 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        namespace Mb0ValC{
        }
        ///Abort Request for Mailbox 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        namespace Mb1ValC{
        }
        ///Abort Request for Mailbox 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        namespace Mb2ValC{
        }
        ///Abort Request for Mailbox 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        namespace Mb3ValC{
        }
        ///Abort Request for Mailbox 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        namespace Mb4ValC{
        }
        ///Abort Request for Mailbox 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        namespace Mb5ValC{
        }
        ///Abort Request for Mailbox 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        namespace Mb6ValC{
        }
        ///Abort Request for Mailbox 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        namespace Mb7ValC{
        }
    }
    namespace Can1Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xf80100e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///SPI Write Protection Key Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace Can1Wpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xf80100e8,0xffff00fe,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
    namespace Can1Mmr0{    ///<Mailbox Mode Register (MB = 0)
        using Addr = Register::Address<0xf8010200,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam0{    ///<Mailbox Acceptance Mask Register (MB = 0)
        using Addr = Register::Address<0xf8010204,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid0{    ///<Mailbox ID Register (MB = 0)
        using Addr = Register::Address<0xf8010208,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid0{    ///<Mailbox Family ID Register (MB = 0)
        using Addr = Register::Address<0xf801020c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr0{    ///<Mailbox Status Register (MB = 0)
        using Addr = Register::Address<0xf8010210,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl0{    ///<Mailbox Data Low Register (MB = 0)
        using Addr = Register::Address<0xf8010214,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh0{    ///<Mailbox Data High Register (MB = 0)
        using Addr = Register::Address<0xf8010218,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr0{    ///<Mailbox Control Register (MB = 0)
        using Addr = Register::Address<0xf801021c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr1{    ///<Mailbox Mode Register (MB = 1)
        using Addr = Register::Address<0xf8010220,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam1{    ///<Mailbox Acceptance Mask Register (MB = 1)
        using Addr = Register::Address<0xf8010224,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid1{    ///<Mailbox ID Register (MB = 1)
        using Addr = Register::Address<0xf8010228,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid1{    ///<Mailbox Family ID Register (MB = 1)
        using Addr = Register::Address<0xf801022c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr1{    ///<Mailbox Status Register (MB = 1)
        using Addr = Register::Address<0xf8010230,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl1{    ///<Mailbox Data Low Register (MB = 1)
        using Addr = Register::Address<0xf8010234,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh1{    ///<Mailbox Data High Register (MB = 1)
        using Addr = Register::Address<0xf8010238,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr1{    ///<Mailbox Control Register (MB = 1)
        using Addr = Register::Address<0xf801023c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr2{    ///<Mailbox Mode Register (MB = 2)
        using Addr = Register::Address<0xf8010240,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam2{    ///<Mailbox Acceptance Mask Register (MB = 2)
        using Addr = Register::Address<0xf8010244,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid2{    ///<Mailbox ID Register (MB = 2)
        using Addr = Register::Address<0xf8010248,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid2{    ///<Mailbox Family ID Register (MB = 2)
        using Addr = Register::Address<0xf801024c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr2{    ///<Mailbox Status Register (MB = 2)
        using Addr = Register::Address<0xf8010250,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl2{    ///<Mailbox Data Low Register (MB = 2)
        using Addr = Register::Address<0xf8010254,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh2{    ///<Mailbox Data High Register (MB = 2)
        using Addr = Register::Address<0xf8010258,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr2{    ///<Mailbox Control Register (MB = 2)
        using Addr = Register::Address<0xf801025c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr3{    ///<Mailbox Mode Register (MB = 3)
        using Addr = Register::Address<0xf8010260,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam3{    ///<Mailbox Acceptance Mask Register (MB = 3)
        using Addr = Register::Address<0xf8010264,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid3{    ///<Mailbox ID Register (MB = 3)
        using Addr = Register::Address<0xf8010268,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid3{    ///<Mailbox Family ID Register (MB = 3)
        using Addr = Register::Address<0xf801026c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr3{    ///<Mailbox Status Register (MB = 3)
        using Addr = Register::Address<0xf8010270,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl3{    ///<Mailbox Data Low Register (MB = 3)
        using Addr = Register::Address<0xf8010274,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh3{    ///<Mailbox Data High Register (MB = 3)
        using Addr = Register::Address<0xf8010278,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr3{    ///<Mailbox Control Register (MB = 3)
        using Addr = Register::Address<0xf801027c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr4{    ///<Mailbox Mode Register (MB = 4)
        using Addr = Register::Address<0xf8010280,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam4{    ///<Mailbox Acceptance Mask Register (MB = 4)
        using Addr = Register::Address<0xf8010284,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid4{    ///<Mailbox ID Register (MB = 4)
        using Addr = Register::Address<0xf8010288,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid4{    ///<Mailbox Family ID Register (MB = 4)
        using Addr = Register::Address<0xf801028c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr4{    ///<Mailbox Status Register (MB = 4)
        using Addr = Register::Address<0xf8010290,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl4{    ///<Mailbox Data Low Register (MB = 4)
        using Addr = Register::Address<0xf8010294,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh4{    ///<Mailbox Data High Register (MB = 4)
        using Addr = Register::Address<0xf8010298,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr4{    ///<Mailbox Control Register (MB = 4)
        using Addr = Register::Address<0xf801029c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr5{    ///<Mailbox Mode Register (MB = 5)
        using Addr = Register::Address<0xf80102a0,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam5{    ///<Mailbox Acceptance Mask Register (MB = 5)
        using Addr = Register::Address<0xf80102a4,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid5{    ///<Mailbox ID Register (MB = 5)
        using Addr = Register::Address<0xf80102a8,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid5{    ///<Mailbox Family ID Register (MB = 5)
        using Addr = Register::Address<0xf80102ac,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr5{    ///<Mailbox Status Register (MB = 5)
        using Addr = Register::Address<0xf80102b0,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl5{    ///<Mailbox Data Low Register (MB = 5)
        using Addr = Register::Address<0xf80102b4,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh5{    ///<Mailbox Data High Register (MB = 5)
        using Addr = Register::Address<0xf80102b8,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr5{    ///<Mailbox Control Register (MB = 5)
        using Addr = Register::Address<0xf80102bc,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr6{    ///<Mailbox Mode Register (MB = 6)
        using Addr = Register::Address<0xf80102c0,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam6{    ///<Mailbox Acceptance Mask Register (MB = 6)
        using Addr = Register::Address<0xf80102c4,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid6{    ///<Mailbox ID Register (MB = 6)
        using Addr = Register::Address<0xf80102c8,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid6{    ///<Mailbox Family ID Register (MB = 6)
        using Addr = Register::Address<0xf80102cc,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr6{    ///<Mailbox Status Register (MB = 6)
        using Addr = Register::Address<0xf80102d0,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl6{    ///<Mailbox Data Low Register (MB = 6)
        using Addr = Register::Address<0xf80102d4,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh6{    ///<Mailbox Data High Register (MB = 6)
        using Addr = Register::Address<0xf80102d8,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr6{    ///<Mailbox Control Register (MB = 6)
        using Addr = Register::Address<0xf80102dc,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
    namespace Can1Mmr7{    ///<Mailbox Mode Register (MB = 7)
        using Addr = Register::Address<0xf80102e0,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        namespace MtimemarkValC{
        }
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot),MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot),MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can1Mam7{    ///<Mailbox Acceptance Mask Register (MB = 7)
        using Addr = Register::Address<0xf80102e4,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mid7{    ///<Mailbox ID Register (MB = 7)
        using Addr = Register::Address<0xf80102e8,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        namespace MidvbValC{
        }
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        namespace MidvaValC{
        }
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
        namespace MideValC{
        }
    }
    namespace Can1Mfid7{    ///<Mailbox Family ID Register (MB = 7)
        using Addr = Register::Address<0xf80102ec,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
        namespace MfidValC{
        }
    }
    namespace Can1Msr7{    ///<Mailbox Status Register (MB = 7)
        using Addr = Register::Address<0xf80102f0,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        namespace MtimestampValC{
        }
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        namespace MabtValC{
        }
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        namespace MrdyValC{
        }
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
        namespace MmiValC{
        }
    }
    namespace Can1Mdl7{    ///<Mailbox Data Low Register (MB = 7)
        using Addr = Register::Address<0xf80102f4,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
        namespace MdlValC{
        }
    }
    namespace Can1Mdh7{    ///<Mailbox Data High Register (MB = 7)
        using Addr = Register::Address<0xf80102f8,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
        namespace MdhValC{
        }
    }
    namespace Can1Mcr7{    ///<Mailbox Control Register (MB = 7)
        using Addr = Register::Address<0xf80102fc,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        namespace MdlcValC{
        }
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        namespace MrtrValC{
        }
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        namespace MacrValC{
        }
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
        namespace MtcrValC{
        }
    }
}
