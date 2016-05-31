#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CAN FD Registers
    namespace CanfdCrel{    ///<Core Release Register
        using Addr = Register::Address<0x40070000,0x00000000,0x00000000,unsigned>;
        ///Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rel{}; 
        ///Step of Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> step{}; 
        ///Sub-step of Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> substep{}; 
        ///Time Stamp Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> year{}; 
        ///Time Stamp Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mon{}; 
        ///Time Stamp Day
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> day{}; 
    }
    namespace CanfdEndn{    ///<Endian Register
        using Addr = Register::Address<0x40070004,0x00000000,0x00000000,unsigned>;
        ///Endianness Test Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etv{}; 
    }
    namespace CanfdFbtp{    ///<Fast Bit Timing and Prescaler Register
        using Addr = Register::Address<0x4007000c,0xe060f08c,0x00000000,unsigned>;
        ///Transceiver Delay Compensation Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tdco{}; 
        ///Transceiver Delay Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tdc{}; 
        ///Fast Baud Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> fbrp{}; 
        ///Fast time segment before sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ftseg1{}; 
        ///Fast time segment after sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ftseg2{}; 
        ///Fast (Re) Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fsjw{}; 
    }
    namespace CanfdTest{    ///<Test Register
        using Addr = Register::Address<0x40070010,0xffffc00f,0x00000000,unsigned>;
        ///Transceiver Delay Compensation Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdcv{}; 
        ///Receive Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
        ///Control of Transmit Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        ///Loop Back Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbck{}; 
    }
    namespace CanfdRwd{    ///<RAM Watchdog
        using Addr = Register::Address<0x40070014,0xffff0000,0x00000000,unsigned>;
        ///Watchdog Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdv{}; 
        ///Watchdog Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wdc{}; 
    }
    namespace CanfdCccr{    ///<CC Control Register
        using Addr = Register::Address<0x40070018,0xffff8000,0x00000000,unsigned>;
        ///Transmit Pause
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txp{}; 
        ///CAN FD Bit Rate Switching
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fdbs{}; 
        ///CAN FD Operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fdo{}; 
        ///CAN Mode Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cmr{}; 
        ///CAN Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cme{}; 
        ///Test Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        ///Disable Automatic Retransmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dar{}; 
        ///Bus Monitoring Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mon{}; 
        ///Clock Stop Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csr{}; 
        ///Clock Stop Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csa{}; 
        ///Restricted Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> asm_{}; 
        ///Configuration Change Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cce{}; 
        ///Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace CanfdBtp{    ///<Bit Timing and Prescaler Register
        using Addr = Register::Address<0x4007001c,0xfc00c000,0x00000000,unsigned>;
        ///Baud Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> brp{}; 
        ///Time segment before sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        ///Time segment after sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tseg2{}; 
        ///(Re) Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sjw{}; 
    }
    namespace CanfdTscc{    ///<Timestamp Counter Configuration
        using Addr = Register::Address<0x40070020,0xfff0fffc,0x00000000,unsigned>;
        ///Timestamp Counter Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tcp{}; 
        ///Timestamp Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tss{}; 
    }
    namespace CanfdTscv{    ///<Timestamp Counter Value
        using Addr = Register::Address<0x40070024,0xffff0000,0x00000000,unsigned>;
        ///Timestamp Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsc{}; 
    }
    namespace CanfdTocc{    ///<Timeout Counter Configuration
        using Addr = Register::Address<0x40070028,0x0000fff8,0x00000000,unsigned>;
        ///Timeout Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> top{}; 
        ///Timeout Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> tos{}; 
        ///Enable Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> etoc{}; 
    }
    namespace CanfdTocv{    ///<Timeout Counter Value
        using Addr = Register::Address<0x4007002c,0xffff0000,0x00000000,unsigned>;
        ///Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toc{}; 
    }
    namespace CanfdEcr{    ///<Error Counter Register
        using Addr = Register::Address<0x40070040,0xff000000,0x00000000,unsigned>;
        ///CAN Error Logging
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cel{}; 
        ///Receive Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rp{}; 
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rec{}; 
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tec{}; 
    }
    namespace CanfdPsr{    ///<Protocol Status Register
        using Addr = Register::Address<0x40070044,0xffffc000,0x00000000,unsigned>;
        ///Received a CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> redl{}; 
        ///BRS flag of last received CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbrs{}; 
        ///ESI flag of last received CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> resi{}; 
        ///Fast Last Error Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flec{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bo{}; 
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ew{}; 
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep{}; 
        ///Activity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> act{}; 
        ///Last Error Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lec{}; 
    }
    namespace CanfdIr{    ///<Interrupt Register
        using Addr = Register::Address<0x40070050,0x00000000,0x00000000,unsigned>;
        ///Stuff Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ste{}; 
        ///Format Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> foe{}; 
        ///Acknowledge Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> acke{}; 
        ///Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> be{}; 
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crce{}; 
        ///Watchdog Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdi{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bo{}; 
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ew{}; 
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ep{}; 
        ///Error Logging Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elo{}; 
        ///Bit Error Uncorrected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beu{}; 
        ///Bit Error Corrected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bec{}; 
        ///Message stored to Dedicated Rx Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drx{}; 
        ///Timeout Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> too{}; 
        ///Message RAM Access Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mraf{}; 
        ///Timestamp Wraparound
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsw{}; 
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefl{}; 
        ///Tx Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teff{}; 
        ///Tx Event FIFO Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefw{}; 
        ///Tx Event FIFO New Entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefn{}; 
        ///Tx FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Transmission Cancellation Finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcf{}; 
        ///Transmission Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc{}; 
        ///High Priority Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpm{}; 
        ///Rx FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1l{}; 
        ///Rx FIFO 1 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1f{}; 
        ///Rx FIFO 1 Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1w{}; 
        ///Rx FIFO 1 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1n{}; 
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0l{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0f{}; 
        ///Rx FIFO 0 Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0w{}; 
        ///Rx FIFO 0 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0n{}; 
    }
    namespace CanfdIe{    ///<Interrupt Enable
        using Addr = Register::Address<0x40070054,0x00000000,0x00000000,unsigned>;
        ///Stuff Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stee{}; 
        ///Format Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> foee{}; 
        ///Acknowledge Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackee{}; 
        ///Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bee{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcee{}; 
        ///Watchdog Interrupt Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdie{}; 
        ///Bus_Off Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> boe{}; 
        ///Warning Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewe{}; 
        ///Error Passive Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epe{}; 
        ///Error Logging Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eloe{}; 
        ///Bit Error Uncorrected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beue{}; 
        ///Bit Error Corrected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bece{}; 
        ///Message stored to Dedicated Rx Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxe{}; 
        ///Timeout Occurred Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tooe{}; 
        ///Message RAM Access Failure Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafe{}; 
        ///Timestamp Wraparound Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswe{}; 
        ///Tx Event FIFO Element Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefle{}; 
        ///Tx Event FIFO Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffe{}; 
        ///Tx Event FIFO Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwe{}; 
        ///Tx Event FIFO New Entry Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefne{}; 
        ///Tx FIFO Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfee{}; 
        ///Transmission Cancellation Finished Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfe{}; 
        ///Transmission Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tce{}; 
        ///High Priority Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpme{}; 
        ///Rx FIFO 1 Message Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1le{}; 
        ///Rx FIFO 1 Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fe{}; 
        ///Rx FIFO 1 Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1we{}; 
        ///Rx FIFO 1 New Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1ne{}; 
        ///Rx FIFO 0 Message Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0le{}; 
        ///Rx FIFO 0 Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fe{}; 
        ///Rx FIFO 0 Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0we{}; 
        ///Rx FIFO 0 New Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0ne{}; 
    }
    namespace CanfdIls{    ///<Interrupt Line Select
        using Addr = Register::Address<0x40070058,0x00000000,0x00000000,unsigned>;
        ///Stuff Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stel{}; 
        ///Format Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> foel{}; 
        ///Acknowledge Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackel{}; 
        ///Bit Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bel{}; 
        ///CRC Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcel{}; 
        ///Watchdog Interrupt Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdil{}; 
        ///Bus_Off Status Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bol{}; 
        ///Warning Status Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewl{}; 
        ///Error Passive Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epl{}; 
        ///Error Logging Overflow Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elol{}; 
        ///Bit Error Uncorrected Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beul{}; 
        ///Bit Error Corrected Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> becl{}; 
        ///Message stored to Dedicated Rx Buffer Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxl{}; 
        ///Timeout Occurred Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tool{}; 
        ///Message RAM Access Failure Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafl{}; 
        ///Timestamp Wraparound Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswl{}; 
        ///Tx Event FIFO Element Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefll{}; 
        ///Tx Event FIFO Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffl{}; 
        ///Tx Event FIFO Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwl{}; 
        ///Tx Event FIFO New Entry Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefnl{}; 
        ///Tx FIFO Empty Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfel{}; 
        ///Transmission Cancellation Finished Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfl{}; 
        ///Transmission Completed Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcl{}; 
        ///High Priority Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpml{}; 
        ///Rx FIFO 1 Message Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1ll{}; 
        ///Rx FIFO 1 Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fl{}; 
        ///Rx FIFO 1 Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1wl{}; 
        ///Rx FIFO 1 New Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1nl{}; 
        ///Rx FIFO 0 Message Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0ll{}; 
        ///Rx FIFO 0 Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fl{}; 
        ///Rx FIFO 0 Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0wl{}; 
        ///Rx FIFO 0 New Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0nl{}; 
    }
    namespace CanfdIle{    ///<Interrupt Line Enable
        using Addr = Register::Address<0x4007005c,0xfffffffc,0x00000000,unsigned>;
        ///Enable Interrupt Line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eint1{}; 
        ///Enable Interrupt Line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eint0{}; 
    }
    namespace CanfdGfc{    ///<Global Filter Configuration
        using Addr = Register::Address<0x40070080,0xffffffc0,0x00000000,unsigned>;
        ///Accept Non-matching Frames Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> anfs{}; 
        ///Accept Non-matching Frames Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> anfe{}; 
        ///Reject Remote Frames Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rrfs{}; 
        ///Reject Remote Frames Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rrfe{}; 
    }
    namespace CanfdSidfc{    ///<Standard ID Filter Configuration
        using Addr = Register::Address<0x40070084,0xff000003,0x00000000,unsigned>;
        ///List Size Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lss{}; 
        ///Filter List Standard Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> flssa{}; 
    }
    namespace CanfdXidfc{    ///<Extended ID Filter Configuration
        using Addr = Register::Address<0x40070088,0xff800003,0x00000000,unsigned>;
        ///List Size Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> lse{}; 
        ///Filter List Extended Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> flesa{}; 
    }
    namespace CanfdXidam{    ///<Extended ID AND Mask
        using Addr = Register::Address<0x40070090,0xe0000000,0x00000000,unsigned>;
        ///Extended ID Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> eidm{}; 
    }
    namespace CanfdHpms{    ///<High Priority Message Status
        using Addr = Register::Address<0x40070094,0xffff0000,0x00000000,unsigned>;
        ///Filter List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        ///Filter Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fidx{}; 
        ///Message Storage Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msi{}; 
        ///Buffer Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bidx{}; 
    }
    namespace CanfdNdat1{    ///<New Data 1
        using Addr = Register::Address<0x40070098,0x00000000,0x00000000,unsigned>;
        ///New Data flag of Rx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd31{}; 
        ///New Data flag of Rx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd30{}; 
        ///New Data flag of Rx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd29{}; 
        ///New Data flag of Rx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd28{}; 
        ///New Data flag of Rx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd27{}; 
        ///New Data flag of Rx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd26{}; 
        ///New Data flag of Rx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd25{}; 
        ///New Data flag of Rx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd24{}; 
        ///New Data flag of Rx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd23{}; 
        ///New Data flag of Rx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd22{}; 
        ///New Data flag of Rx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd21{}; 
        ///New Data flag of Rx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd20{}; 
        ///New Data flag of Rx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd19{}; 
        ///New Data flag of Rx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd18{}; 
        ///New Data flag of Rx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd17{}; 
        ///New Data flag of Rx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd16{}; 
        ///New Data flag of Rx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd15{}; 
        ///New Data flag of Rx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd14{}; 
        ///New Data flag of Rx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd13{}; 
        ///New Data flag of Rx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd12{}; 
        ///New Data flag of Rx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd11{}; 
        ///New Data flag of Rx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd10{}; 
        ///New Data flag of Rx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd9{}; 
        ///New Data flag of Rx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd8{}; 
        ///New Data flag of Rx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd7{}; 
        ///New Data flag of Rx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd6{}; 
        ///New Data flag of Rx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd5{}; 
        ///New Data flag of Rx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd4{}; 
        ///New Data flag of Rx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd3{}; 
        ///New Data flag of Rx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd2{}; 
        ///New Data flag of Rx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd1{}; 
        ///New Data flag of Rx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd0{}; 
    }
    namespace CanfdNdat2{    ///<New Data 2
        using Addr = Register::Address<0x4007009c,0x00000000,0x00000000,unsigned>;
        ///New Data flag of Rx Buffer 63
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd63{}; 
        ///New Data flag of Rx Buffer 62
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd62{}; 
        ///New Data flag of Rx Buffer 61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd61{}; 
        ///New Data flag of Rx Buffer 60
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd60{}; 
        ///New Data flag of Rx Buffer 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd59{}; 
        ///New Data flag of Rx Buffer 58
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd58{}; 
        ///New Data flag of Rx Buffer 57
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd57{}; 
        ///New Data flag of Rx Buffer 56
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd56{}; 
        ///New Data flag of Rx Buffer 55
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd55{}; 
        ///New Data flag of Rx Buffer 54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd54{}; 
        ///New Data flag of Rx Buffer 53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd53{}; 
        ///New Data flag of Rx Buffer 52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd52{}; 
        ///New Data flag of Rx Buffer 51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd51{}; 
        ///New Data flag of Rx Buffer 50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd50{}; 
        ///New Data flag of Rx Buffer 49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd49{}; 
        ///New Data flag of Rx Buffer 48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd48{}; 
        ///New Data flag of Rx Buffer 47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd47{}; 
        ///New Data flag of Rx Buffer 46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd46{}; 
        ///New Data flag of Rx Buffer 45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd45{}; 
        ///New Data flag of Rx Buffer 44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd44{}; 
        ///New Data flag of Rx Buffer 43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd43{}; 
        ///New Data flag of Rx Buffer 42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd42{}; 
        ///New Data flag of Rx Buffer 41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd41{}; 
        ///New Data flag of Rx Buffer 40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd40{}; 
        ///New Data flag of Rx Buffer 39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd39{}; 
        ///New Data flag of Rx Buffer 38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd38{}; 
        ///New Data flag of Rx Buffer 37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd37{}; 
        ///New Data flag of Rx Buffer 36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd36{}; 
        ///New Data flag of Rx Buffer 35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd35{}; 
        ///New Data flag of Rx Buffer 34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd34{}; 
        ///New Data flag of Rx Buffer 33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd33{}; 
        ///New Data flag of Rx Buffer 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd32{}; 
    }
    namespace CanfdRxf0c{    ///<Rx FIFO 0 Configuration
        using Addr = Register::Address<0x400700a0,0x00800003,0x00000000,unsigned>;
        ///FIFO 0 Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> f0om{}; 
        ///Rx FIFO 0 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f0wm{}; 
        ///Rx FIFO 0 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f0s{}; 
        ///Rx FIFO 0 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> f0sa{}; 
    }
    namespace CanfdRxf0s{    ///<Rx FIFO 0 Status
        using Addr = Register::Address<0x400700a4,0xfcc0c080,0x00000000,unsigned>;
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rf0l{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0f{}; 
        ///Rx FIFO 0 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0pi{}; 
        ///Rx FIFO 0 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0gi{}; 
        ///Rx FIFO 0 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0fl{}; 
    }
    namespace CanfdRxf0a{    ///<Rx FIFO 0 Acknowledge
        using Addr = Register::Address<0x400700a8,0xffffffc0,0x00000000,unsigned>;
        ///Rx FIFO 0 Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f0ai{}; 
    }
    namespace CanfdRxbc{    ///<Rx Buffer Configuration
        using Addr = Register::Address<0x400700ac,0xffff0003,0x00000000,unsigned>;
        ///2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> rbsa{}; 
    }
    namespace CanfdRxf1c{    ///<Rx FIFO 1 Configuration
        using Addr = Register::Address<0x400700b0,0x00800003,0x00000000,unsigned>;
        ///FIFO 1 Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> f1om{}; 
        ///Rx FIFO 1 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f1wm{}; 
        ///Rx FIFO 1 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f1s{}; 
        ///Rx FIFO 1 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> f1sa{}; 
    }
    namespace CanfdRxf1s{    ///<Rx FIFO 1 Status
        using Addr = Register::Address<0x400700b4,0x3cc0c080,0x00000000,unsigned>;
        ///Debug Message Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dms{}; 
        ///FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rf1l{}; 
        ///Rx FIFO 1 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1f{}; 
        ///Rx FIFO 1 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1pi{}; 
        ///Rx FIFO 1 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1gi{}; 
        ///Rx FIFO 1 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1fl{}; 
    }
    namespace CanfdRxf1a{    ///<Rx FIFO 1 Acknowledge
        using Addr = Register::Address<0x400700b8,0xffffffc0,0x00000000,unsigned>;
        ///Rx FIFO 1 Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f1ai{}; 
    }
    namespace CanfdRxesc{    ///<Rx Buffer/FIFO Element Size Configuration
        using Addr = Register::Address<0x400700bc,0xfffff888,0x00000000,unsigned>;
        ///Rx Buffer Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rbds{}; 
        ///Rx FIFO 1 Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> f1ds{}; 
        ///Rx FIFO 0 Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> f0ds{}; 
    }
    namespace CanfdTxbc{    ///<Tx Buffer Configuration
        using Addr = Register::Address<0x400700c0,0x80c00003,0x00000000,unsigned>;
        ///Tx FIFO/Queue Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tfqm{}; 
        ///Transmit FIFO/Queue Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> tfqs{}; 
        ///Number of Dedicated Transmit Buffers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> ndtb{}; 
        ///Tx Buffers Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> tbsa{}; 
    }
    namespace CanfdTxfqs{    ///<Tx FIFO/Queue Status
        using Addr = Register::Address<0x400700c4,0xffc0e0c0,0x00000000,unsigned>;
        ///Tx FIFO/Queue Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfqf{}; 
        ///Tx FIFO/Queue Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfqpi{}; 
        ///Tx FIFO Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfgi{}; 
        ///Tx FIFO Free Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tffl{}; 
    }
    namespace CanfdTxesc{    ///<Tx Buffer Element Size Configuration
        using Addr = Register::Address<0x400700c8,0xfffffff8,0x00000000,unsigned>;
        ///Tx Buffer Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbds{}; 
    }
    namespace CanfdTxbrp{    ///<Tx Buffer Request Pending
        using Addr = Register::Address<0x400700cc,0x00000000,0x00000000,unsigned>;
        ///Transmission Request Pending of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp31{}; 
        ///Transmission Request Pending of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp30{}; 
        ///Transmission Request Pending of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp29{}; 
        ///Transmission Request Pending of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp28{}; 
        ///Transmission Request Pending of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp27{}; 
        ///Transmission Request Pending of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp26{}; 
        ///Transmission Request Pending of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp25{}; 
        ///Transmission Request Pending of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp24{}; 
        ///Transmission Request Pending of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp23{}; 
        ///Transmission Request Pending of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp22{}; 
        ///Transmission Request Pending of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp21{}; 
        ///Transmission Request Pending of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp20{}; 
        ///Transmission Request Pending of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp19{}; 
        ///Transmission Request Pending of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp18{}; 
        ///Transmission Request Pending of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp17{}; 
        ///Transmission Request Pending of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp16{}; 
        ///Transmission Request Pending of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp15{}; 
        ///Transmission Request Pending of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp14{}; 
        ///Transmission Request Pending of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp13{}; 
        ///Transmission Request Pending of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp12{}; 
        ///Transmission Request Pending of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp11{}; 
        ///Transmission Request Pending of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp10{}; 
        ///Transmission Request Pending of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp9{}; 
        ///Transmission Request Pending of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp8{}; 
        ///Transmission Request Pending of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp7{}; 
        ///Transmission Request Pending of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp6{}; 
        ///Transmission Request Pending of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp5{}; 
        ///Transmission Request Pending of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp4{}; 
        ///Transmission Request Pending of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp3{}; 
        ///Transmission Request Pending of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp2{}; 
        ///Transmission Request Pending of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp1{}; 
        ///Transmission Request Pending of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp0{}; 
    }
    namespace CanfdTxbar{    ///<Tx Buffer Add Request
        using Addr = Register::Address<0x400700d0,0x00000000,0x00000000,unsigned>;
        ///Add Request of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ar31{}; 
        ///Add Request of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ar30{}; 
        ///Add Request of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ar29{}; 
        ///Add Request of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ar28{}; 
        ///Add Request of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ar27{}; 
        ///Add Request of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ar26{}; 
        ///Add Request of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ar25{}; 
        ///Add Request of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ar24{}; 
        ///Add Request of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ar23{}; 
        ///Add Request of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ar22{}; 
        ///Add Request of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ar21{}; 
        ///Add Request of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ar20{}; 
        ///Add Request of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ar19{}; 
        ///Add Request of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ar18{}; 
        ///Add Request of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ar17{}; 
        ///Add Request of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ar16{}; 
        ///Add Request of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ar15{}; 
        ///Add Request of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ar14{}; 
        ///Add Request of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ar13{}; 
        ///Add Request of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ar12{}; 
        ///Add Request of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ar11{}; 
        ///Add Request of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ar10{}; 
        ///Add Request of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ar9{}; 
        ///Add Request of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ar8{}; 
        ///Add Request of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ar7{}; 
        ///Add Request of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ar6{}; 
        ///Add Request of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ar5{}; 
        ///Add Request of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ar4{}; 
        ///Add Request of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ar3{}; 
        ///Add Request of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ar2{}; 
        ///Add Request of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ar1{}; 
        ///Add Request of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ar0{}; 
    }
    namespace CanfdTxbcr{    ///<Tx Buffer Cancellation Request
        using Addr = Register::Address<0x400700d4,0x00000000,0x00000000,unsigned>;
        ///Cancellation Request of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cr31{}; 
        ///Cancellation Request of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cr30{}; 
        ///Cancellation Request of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cr29{}; 
        ///Cancellation Request of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cr28{}; 
        ///Cancellation Request of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cr27{}; 
        ///Cancellation Request of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cr26{}; 
        ///Cancellation Request of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cr25{}; 
        ///Cancellation Request of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cr24{}; 
        ///Cancellation Request of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cr23{}; 
        ///Cancellation Request of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cr22{}; 
        ///Cancellation Request of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cr21{}; 
        ///Cancellation Request of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cr20{}; 
        ///Cancellation Request of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cr19{}; 
        ///Cancellation Request of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cr18{}; 
        ///Cancellation Request of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cr17{}; 
        ///Cancellation Request of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cr16{}; 
        ///Cancellation Request of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cr15{}; 
        ///Cancellation Request of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cr14{}; 
        ///Cancellation Request of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cr13{}; 
        ///Cancellation Request of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cr12{}; 
        ///Cancellation Request of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cr11{}; 
        ///Cancellation Request of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cr10{}; 
        ///Cancellation Request of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cr9{}; 
        ///Cancellation Request of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cr8{}; 
        ///Cancellation Request of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cr7{}; 
        ///Cancellation Request of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cr6{}; 
        ///Cancellation Request of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cr5{}; 
        ///Cancellation Request of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cr4{}; 
        ///Cancellation Request of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cr3{}; 
        ///Cancellation Request of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cr2{}; 
        ///Cancellation Request of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1{}; 
        ///Cancellation Request of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr0{}; 
    }
    namespace CanfdTxbto{    ///<Tx Buffer Transmission Occurred
        using Addr = Register::Address<0x400700d8,0x00000000,0x00000000,unsigned>;
        ///Transmission Occurred of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to31{}; 
        ///Transmission Occurred of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to30{}; 
        ///Transmission Occurred of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to29{}; 
        ///Transmission Occurred of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to28{}; 
        ///Transmission Occurred of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to27{}; 
        ///Transmission Occurred of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to26{}; 
        ///Transmission Occurred of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to25{}; 
        ///Transmission Occurred of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to24{}; 
        ///Transmission Occurred of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to23{}; 
        ///Transmission Occurred of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to22{}; 
        ///Transmission Occurred of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to21{}; 
        ///Transmission Occurred of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to20{}; 
        ///Transmission Occurred of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to19{}; 
        ///Transmission Occurred of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to18{}; 
        ///Transmission Occurred of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to17{}; 
        ///Transmission Occurred of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to16{}; 
        ///Transmission Occurred of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to15{}; 
        ///Transmission Occurred of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to14{}; 
        ///Transmission Occurred of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to13{}; 
        ///Transmission Occurred of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to12{}; 
        ///Transmission Occurred of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to11{}; 
        ///Transmission Occurred of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to10{}; 
        ///Transmission Occurred of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to9{}; 
        ///Transmission Occurred of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to8{}; 
        ///Transmission Occurred of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to7{}; 
        ///Transmission Occurred of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to6{}; 
        ///Transmission Occurred of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to5{}; 
        ///Transmission Occurred of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to4{}; 
        ///Transmission Occurred of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to3{}; 
        ///Transmission Occurred of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to2{}; 
        ///Transmission Occurred of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to1{}; 
        ///Transmission Occurred of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to0{}; 
    }
    namespace CanfdTxbcf{    ///<Tx Buffer Cancellation Finished
        using Addr = Register::Address<0x400700dc,0x00000000,0x00000000,unsigned>;
        ///Cancellation Finished of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf31{}; 
        ///Cancellation Finished of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf30{}; 
        ///Cancellation Finished of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf29{}; 
        ///Cancellation Finished of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf28{}; 
        ///Cancellation Finished of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf27{}; 
        ///Cancellation Finished of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf26{}; 
        ///Cancellation Finished of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf25{}; 
        ///Cancellation Finished of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf24{}; 
        ///Cancellation Finished of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf23{}; 
        ///Cancellation Finished of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf22{}; 
        ///Cancellation Finished of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf21{}; 
        ///Cancellation Finished of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf20{}; 
        ///Cancellation Finished of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf19{}; 
        ///Cancellation Finished of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf18{}; 
        ///Cancellation Finished of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf17{}; 
        ///Cancellation Finished of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf16{}; 
        ///Cancellation Finished of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf15{}; 
        ///Cancellation Finished of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf14{}; 
        ///Cancellation Finished of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf13{}; 
        ///Cancellation Finished of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf12{}; 
        ///Cancellation Finished of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf11{}; 
        ///Cancellation Finished of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf10{}; 
        ///Cancellation Finished of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf9{}; 
        ///Cancellation Finished of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf8{}; 
        ///Cancellation Finished of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf7{}; 
        ///Cancellation Finished of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf6{}; 
        ///Cancellation Finished of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf5{}; 
        ///Cancellation Finished of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf4{}; 
        ///Cancellation Finished of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf3{}; 
        ///Cancellation Finished of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf2{}; 
        ///Cancellation Finished of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf1{}; 
        ///Cancellation Finished of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf0{}; 
    }
    namespace CanfdTxbtie{    ///<Tx Buffer Transmission Interrupt Enable
        using Addr = Register::Address<0x400700e0,0x00000000,0x00000000,unsigned>;
        ///Transmission Interrupt Enable of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tie31{}; 
        ///Transmission Interrupt Enable of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tie30{}; 
        ///Transmission Interrupt Enable of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tie29{}; 
        ///Transmission Interrupt Enable of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tie28{}; 
        ///Transmission Interrupt Enable of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tie27{}; 
        ///Transmission Interrupt Enable of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tie26{}; 
        ///Transmission Interrupt Enable of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tie25{}; 
        ///Transmission Interrupt Enable of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tie24{}; 
        ///Transmission Interrupt Enable of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tie23{}; 
        ///Transmission Interrupt Enable of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tie22{}; 
        ///Transmission Interrupt Enable of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tie21{}; 
        ///Transmission Interrupt Enable of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tie20{}; 
        ///Transmission Interrupt Enable of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tie19{}; 
        ///Transmission Interrupt Enable of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tie18{}; 
        ///Transmission Interrupt Enable of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tie17{}; 
        ///Transmission Interrupt Enable of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tie16{}; 
        ///Transmission Interrupt Enable of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tie15{}; 
        ///Transmission Interrupt Enable of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tie14{}; 
        ///Transmission Interrupt Enable of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tie13{}; 
        ///Transmission Interrupt Enable of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tie12{}; 
        ///Transmission Interrupt Enable of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tie11{}; 
        ///Transmission Interrupt Enable of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tie10{}; 
        ///Transmission Interrupt Enable of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tie9{}; 
        ///Transmission Interrupt Enable of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tie8{}; 
        ///Transmission Interrupt Enable of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tie7{}; 
        ///Transmission Interrupt Enable of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie6{}; 
        ///Transmission Interrupt Enable of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tie5{}; 
        ///Transmission Interrupt Enable of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tie4{}; 
        ///Transmission Interrupt Enable of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie3{}; 
        ///Transmission Interrupt Enable of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie2{}; 
        ///Transmission Interrupt Enable of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tie1{}; 
        ///Transmission Interrupt Enable of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie0{}; 
    }
    namespace CanfdTxbcie{    ///<Tx Buffer Cancellation Finished Interrupt Enable
        using Addr = Register::Address<0x400700e4,0x00000000,0x00000000,unsigned>;
        ///Cancellation Finished Interrupt Enable of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cfie31{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cfie30{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cfie29{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cfie28{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cfie27{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cfie26{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cfie25{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cfie24{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cfie23{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfie22{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cfie21{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cfie20{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cfie19{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfie18{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cfie17{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfie16{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cfie15{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cfie14{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cfie13{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cfie12{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfie11{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfie10{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfie9{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfie8{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfie7{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfie6{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cfie5{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cfie4{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cfie3{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cfie2{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfie1{}; 
        ///Cancellation Finished Interrupt Enable of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfie0{}; 
    }
    namespace CanfdTxefc{    ///<Tx Event FIFO Configuration
        using Addr = Register::Address<0x400700f0,0xc0c00003,0x00000000,unsigned>;
        ///Event FIFO Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> efwm{}; 
        ///Event FIFO Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> efs{}; 
        ///Event FIFO Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> efsa{}; 
    }
    namespace CanfdTxfs{    ///<Tx Event FIFO Status
        using Addr = Register::Address<0x400700f4,0xfce0e0c0,0x00000000,unsigned>;
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tefl{}; 
        ///Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eff{}; 
        ///Event FIFO Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> efpi{}; 
        ///Event FIFO Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> efgi{}; 
        ///Event FIFO Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> effl{}; 
    }
    namespace CanfdTxfa{    ///<Tx Event FIFO Acknowledge
        using Addr = Register::Address<0x400700f8,0xffffffe0,0x00000000,unsigned>;
        ///Event FIFO Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> efai{}; 
    }
    namespace CanfdFdecr{    ///<CAN FD ECC Error Control Register
        using Addr = Register::Address<0x40070200,0xfffffff0,0x00000000,unsigned char>;
        ///ECC check disable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ceiv{}; 
        ///ECC error response enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ceren{}; 
        ///Double-bit error factor interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> deie{}; 
        ///Single-bit error factor interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> seie{}; 
    }
    namespace CanfdFdesr{    ///<CAN FD ECC Error Status Register
        using Addr = Register::Address<0x40070201,0xfffffffc,0x00000000,unsigned char>;
        ///Double-bit error occurrence bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dei{}; 
        ///Single-bit error occurrence bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sei{}; 
    }
    namespace CanfdFdsear{    ///<CAN FD ECC Single-bit Error Address Register
        using Addr = Register::Address<0x40070202,0xffff0000,0x00000000,unsigned>;
        ///Single-bit error Message RAM address bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sra{}; 
    }
    namespace CanfdFdescr{    ///<CAN FD ECC Error Status Clear Register
        using Addr = Register::Address<0x40070205,0xfffffffc,0x00000000,unsigned char>;
        ///Double-bit error clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> deic{}; 
        ///Sngle-bit error clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> seic{}; 
    }
    namespace CanfdFddear{    ///<CAN FD ECC Double-bit Error Address Register
        using Addr = Register::Address<0x40070206,0xffff0000,0x00000000,unsigned>;
        ///Double-bit error Message RAM address bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dra{}; 
    }
    namespace CanfdTscntr{    ///<Time Stamp Control Register
        using Addr = Register::Address<0x40070210,0xfffffffe,0x00000000,unsigned>;
        ///Counter clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cclr{}; 
    }
    namespace CanfdTsmdr{    ///<Time Stamp Mode Register
        using Addr = Register::Address<0x40070212,0xfffffffe,0x00000000,unsigned>;
        ///Counter enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cnten{}; 
    }
    namespace CanfdTsdivr{    ///<Time Stamp Divider Register
        using Addr = Register::Address<0x40070214,0xffff0000,0x00000000,unsigned>;
        ///Counter clock division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdiv{}; 
    }
    namespace CanfdTscdtr{    ///<Time Stamp Counter Data Register
        using Addr = Register::Address<0x40070218,0xffff0000,0x00000000,unsigned>;
        ///Counter value bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnt{}; 
    }
    namespace CanfdTscpclr{    ///<Time Stamp Compare Clear Register
        using Addr = Register::Address<0x4007021a,0xffff0000,0x00000000,unsigned>;
        ///Compare clear setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
