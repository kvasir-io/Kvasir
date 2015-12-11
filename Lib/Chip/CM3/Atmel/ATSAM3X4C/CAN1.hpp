#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Controller Area Network 1
    namespace Can1Mr{    ///<Mode Register
        using Addr = Register::Address<0x400b8000,0xf8ffff00,0,unsigned>;
        ///CAN Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canen{}; 
        ///Disable/Enable Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpm{}; 
        ///Disable/Enable Autobaud/Listen mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> abm{}; 
        ///Disable/Enable Overload Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovl{}; 
        ///Timestamp messages at each end of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teof{}; 
        ///Disable/Enable Time Triggered Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttm{}; 
        ///Enable Timer Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timfrz{}; 
        ///Disable Repeat
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> drpt{}; 
        ///Reception Synchronization Stage (not readable)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rxsync{}; 
    }
    namespace Can1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400b8004,0xe000ff00,0,unsigned>;
        ///Mailbox 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        ///Mailbox 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        ///Mailbox 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        ///Mailbox 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        ///Mailbox 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        ///Mailbox 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        ///Mailbox 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        ///Mailbox 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        ///Error Active Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        ///Warning Limit Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        ///Error Passive Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        ///Bus Off Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        ///Sleep Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///Wakeup Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Timer Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        ///TimeStamp Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        ///Stuffing Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        ///Acknowledgment Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        ///Form Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
    }
    namespace Can1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400b8008,0xe000ff00,0,unsigned>;
        ///Mailbox 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        ///Mailbox 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        ///Mailbox 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        ///Mailbox 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        ///Mailbox 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        ///Mailbox 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        ///Mailbox 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        ///Mailbox 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        ///Error Active Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        ///Warning Limit Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        ///Error Passive Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        ///Bus Off Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        ///Sleep Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///Wakeup Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Timer Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        ///TimeStamp Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        ///Stuffing Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        ///Acknowledgment Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        ///Form Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
    }
    namespace Can1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400b800c,0xe000ff00,0,unsigned>;
        ///Mailbox 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        ///Mailbox 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        ///Mailbox 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        ///Mailbox 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        ///Mailbox 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        ///Mailbox 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        ///Mailbox 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        ///Mailbox 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        ///Error Active Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        ///Warning Limit Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        ///Error Passive Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        ///Bus Off Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        ///Sleep Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///Wakeup Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Timer Overflow Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        ///Timestamp Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        ///CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        ///Stuffing Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        ///Acknowledgment Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        ///Form Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
    }
    namespace Can1Sr{    ///<Status Register
        using Addr = Register::Address<0x400b8010,0x0000ff00,0,unsigned>;
        ///Mailbox 0 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        ///Mailbox 1 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        ///Mailbox 2 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        ///Mailbox 3 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        ///Mailbox 4 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        ///Mailbox 5 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        ///Mailbox 6 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        ///Mailbox 7 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        ///Error Active Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> erra{}; 
        ///Warning Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> warn{}; 
        ///Error Passive Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> errp{}; 
        ///Bus Off Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> boff{}; 
        ///CAN controller in Low power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///CAN controller is not in Low power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Timer Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tovf{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tstp{}; 
        ///Mailbox CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cerr{}; 
        ///Mailbox Stuffing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> serr{}; 
        ///Acknowledgment Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> aerr{}; 
        ///Form Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Receiver busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rbsy{}; 
        ///Transmitter busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tbsy{}; 
        ///Overload busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ovlsy{}; 
    }
    namespace Can1Br{    ///<Baudrate Register
        using Addr = Register::Address<0x400b8014,0xfe80c888,0,unsigned>;
        ///Phase 2 segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> phase2{}; 
        ///Phase 1 segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> phase1{}; 
        ///Programming time segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> propag{}; 
        ///Re-synchronization jump width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///Baudrate Prescaler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> brp{}; 
        ///Sampling Mode
        enum class SmpVal {
            once=0x00000000,     ///<The incoming bit stream is sampled once at sample point.
            three=0x00000001,     ///<The incoming bit stream is sampled three times with a period of a MCK clock period, centered on sample point.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SmpVal> smp{}; 
        namespace SmpValC{
            constexpr Register::FieldValue<decltype(smp)::Type,SmpVal::once> once{};
            constexpr Register::FieldValue<decltype(smp)::Type,SmpVal::three> three{};
        }
        }
    }
    namespace Can1Tim{    ///<Timer Register
        using Addr = Register::Address<0x400b8018,0xffff0000,0,unsigned>;
        ///Timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timer{}; 
    }
    namespace Can1Timestp{    ///<Timestamp Register
        using Addr = Register::Address<0x400b801c,0xffff0000,0,unsigned>;
        ///Timestamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
    }
    namespace Can1Ecr{    ///<Error Counter Register
        using Addr = Register::Address<0x400b8020,0xff00ff00,0,unsigned>;
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tec{}; 
    }
    namespace Can1Tcr{    ///<Transfer Command Register
        using Addr = Register::Address<0x400b8024,0x7fffff00,0,unsigned>;
        ///Transfer Request for Mailbox 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        ///Transfer Request for Mailbox 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        ///Transfer Request for Mailbox 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        ///Transfer Request for Mailbox 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        ///Transfer Request for Mailbox 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        ///Transfer Request for Mailbox 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        ///Transfer Request for Mailbox 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        ///Transfer Request for Mailbox 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
        ///Timer Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> timrst{}; 
    }
    namespace Can1Acr{    ///<Abort Command Register
        using Addr = Register::Address<0x400b8028,0xffffff00,0,unsigned>;
        ///Abort Request for Mailbox 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb0{}; 
        ///Abort Request for Mailbox 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mb1{}; 
        ///Abort Request for Mailbox 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mb2{}; 
        ///Abort Request for Mailbox 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mb3{}; 
        ///Abort Request for Mailbox 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mb4{}; 
        ///Abort Request for Mailbox 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mb5{}; 
        ///Abort Request for Mailbox 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mb6{}; 
        ///Abort Request for Mailbox 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mb7{}; 
    }
    namespace Can1Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400b80e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///SPI Write Protection Key Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Can1Wpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400b80e8,0xffff00fe,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace Can1Mmr0{    ///<Mailbox Mode Register (MB = 0)
        using Addr = Register::Address<0x400b8200,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam0{    ///<Mailbox Acceptance Mask Register (MB = 0)
        using Addr = Register::Address<0x400b8204,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid0{    ///<Mailbox ID Register (MB = 0)
        using Addr = Register::Address<0x400b8208,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid0{    ///<Mailbox Family ID Register (MB = 0)
        using Addr = Register::Address<0x400b820c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr0{    ///<Mailbox Status Register (MB = 0)
        using Addr = Register::Address<0x400b8210,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl0{    ///<Mailbox Data Low Register (MB = 0)
        using Addr = Register::Address<0x400b8214,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh0{    ///<Mailbox Data High Register (MB = 0)
        using Addr = Register::Address<0x400b8218,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr0{    ///<Mailbox Control Register (MB = 0)
        using Addr = Register::Address<0x400b821c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr1{    ///<Mailbox Mode Register (MB = 1)
        using Addr = Register::Address<0x400b8220,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam1{    ///<Mailbox Acceptance Mask Register (MB = 1)
        using Addr = Register::Address<0x400b8224,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid1{    ///<Mailbox ID Register (MB = 1)
        using Addr = Register::Address<0x400b8228,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid1{    ///<Mailbox Family ID Register (MB = 1)
        using Addr = Register::Address<0x400b822c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr1{    ///<Mailbox Status Register (MB = 1)
        using Addr = Register::Address<0x400b8230,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl1{    ///<Mailbox Data Low Register (MB = 1)
        using Addr = Register::Address<0x400b8234,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh1{    ///<Mailbox Data High Register (MB = 1)
        using Addr = Register::Address<0x400b8238,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr1{    ///<Mailbox Control Register (MB = 1)
        using Addr = Register::Address<0x400b823c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr2{    ///<Mailbox Mode Register (MB = 2)
        using Addr = Register::Address<0x400b8240,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam2{    ///<Mailbox Acceptance Mask Register (MB = 2)
        using Addr = Register::Address<0x400b8244,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid2{    ///<Mailbox ID Register (MB = 2)
        using Addr = Register::Address<0x400b8248,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid2{    ///<Mailbox Family ID Register (MB = 2)
        using Addr = Register::Address<0x400b824c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr2{    ///<Mailbox Status Register (MB = 2)
        using Addr = Register::Address<0x400b8250,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl2{    ///<Mailbox Data Low Register (MB = 2)
        using Addr = Register::Address<0x400b8254,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh2{    ///<Mailbox Data High Register (MB = 2)
        using Addr = Register::Address<0x400b8258,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr2{    ///<Mailbox Control Register (MB = 2)
        using Addr = Register::Address<0x400b825c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr3{    ///<Mailbox Mode Register (MB = 3)
        using Addr = Register::Address<0x400b8260,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam3{    ///<Mailbox Acceptance Mask Register (MB = 3)
        using Addr = Register::Address<0x400b8264,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid3{    ///<Mailbox ID Register (MB = 3)
        using Addr = Register::Address<0x400b8268,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid3{    ///<Mailbox Family ID Register (MB = 3)
        using Addr = Register::Address<0x400b826c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr3{    ///<Mailbox Status Register (MB = 3)
        using Addr = Register::Address<0x400b8270,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl3{    ///<Mailbox Data Low Register (MB = 3)
        using Addr = Register::Address<0x400b8274,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh3{    ///<Mailbox Data High Register (MB = 3)
        using Addr = Register::Address<0x400b8278,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr3{    ///<Mailbox Control Register (MB = 3)
        using Addr = Register::Address<0x400b827c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr4{    ///<Mailbox Mode Register (MB = 4)
        using Addr = Register::Address<0x400b8280,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam4{    ///<Mailbox Acceptance Mask Register (MB = 4)
        using Addr = Register::Address<0x400b8284,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid4{    ///<Mailbox ID Register (MB = 4)
        using Addr = Register::Address<0x400b8288,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid4{    ///<Mailbox Family ID Register (MB = 4)
        using Addr = Register::Address<0x400b828c,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr4{    ///<Mailbox Status Register (MB = 4)
        using Addr = Register::Address<0x400b8290,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl4{    ///<Mailbox Data Low Register (MB = 4)
        using Addr = Register::Address<0x400b8294,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh4{    ///<Mailbox Data High Register (MB = 4)
        using Addr = Register::Address<0x400b8298,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr4{    ///<Mailbox Control Register (MB = 4)
        using Addr = Register::Address<0x400b829c,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr5{    ///<Mailbox Mode Register (MB = 5)
        using Addr = Register::Address<0x400b82a0,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam5{    ///<Mailbox Acceptance Mask Register (MB = 5)
        using Addr = Register::Address<0x400b82a4,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid5{    ///<Mailbox ID Register (MB = 5)
        using Addr = Register::Address<0x400b82a8,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid5{    ///<Mailbox Family ID Register (MB = 5)
        using Addr = Register::Address<0x400b82ac,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr5{    ///<Mailbox Status Register (MB = 5)
        using Addr = Register::Address<0x400b82b0,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl5{    ///<Mailbox Data Low Register (MB = 5)
        using Addr = Register::Address<0x400b82b4,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh5{    ///<Mailbox Data High Register (MB = 5)
        using Addr = Register::Address<0x400b82b8,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr5{    ///<Mailbox Control Register (MB = 5)
        using Addr = Register::Address<0x400b82bc,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr6{    ///<Mailbox Mode Register (MB = 6)
        using Addr = Register::Address<0x400b82c0,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam6{    ///<Mailbox Acceptance Mask Register (MB = 6)
        using Addr = Register::Address<0x400b82c4,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid6{    ///<Mailbox ID Register (MB = 6)
        using Addr = Register::Address<0x400b82c8,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid6{    ///<Mailbox Family ID Register (MB = 6)
        using Addr = Register::Address<0x400b82cc,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr6{    ///<Mailbox Status Register (MB = 6)
        using Addr = Register::Address<0x400b82d0,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl6{    ///<Mailbox Data Low Register (MB = 6)
        using Addr = Register::Address<0x400b82d4,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh6{    ///<Mailbox Data High Register (MB = 6)
        using Addr = Register::Address<0x400b82d8,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr6{    ///<Mailbox Control Register (MB = 6)
        using Addr = Register::Address<0x400b82dc,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
    namespace Can1Mmr7{    ///<Mailbox Mode Register (MB = 7)
        using Addr = Register::Address<0x400b82e0,0xf8f00000,0,unsigned>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
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
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
        }
    }
    namespace Can1Mam7{    ///<Mailbox Acceptance Mask Register (MB = 7)
        using Addr = Register::Address<0x400b82e4,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mid7{    ///<Mailbox ID Register (MB = 7)
        using Addr = Register::Address<0x400b82e8,0xc0000000,0,unsigned>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can1Mfid7{    ///<Mailbox Family ID Register (MB = 7)
        using Addr = Register::Address<0x400b82ec,0xe0000000,0,unsigned>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> mfid{}; 
    }
    namespace Can1Msr7{    ///<Mailbox Status Register (MB = 7)
        using Addr = Register::Address<0x400b82f0,0xfe200000,0,unsigned>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mmi{}; 
    }
    namespace Can1Mdl7{    ///<Mailbox Data Low Register (MB = 7)
        using Addr = Register::Address<0x400b82f4,0x00000000,0,unsigned>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can1Mdh7{    ///<Mailbox Data High Register (MB = 7)
        using Addr = Register::Address<0x400b82f8,0x00000000,0,unsigned>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can1Mcr7{    ///<Mailbox Control Register (MB = 7)
        using Addr = Register::Address<0x400b82fc,0xff20ffff,0,unsigned>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mtcr{}; 
    }
}
