#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN FD Registers
    namespace Nonecrel{    ///<Core Release Register
        using Addr = Register::Address<0x40070000,0x00000000,0,unsigned>;
        ///Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> rel{}; 
        namespace RelValC{
        }
        ///Step of Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> step{}; 
        namespace StepValC{
        }
        ///Sub-step of Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> substep{}; 
        namespace SubstepValC{
        }
        ///Time Stamp Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> year{}; 
        namespace YearValC{
        }
        ///Time Stamp Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mon{}; 
        namespace MonValC{
        }
        ///Time Stamp Day
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> day{}; 
        namespace DayValC{
        }
    }
    namespace Noneendn{    ///<Endian Register
        using Addr = Register::Address<0x40070004,0x00000000,0,unsigned>;
        ///Endianness Test Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> etv{}; 
        namespace EtvValC{
        }
    }
    namespace Nonefbtp{    ///<Fast Bit Timing and Prescaler Register
        using Addr = Register::Address<0x4007000c,0xe060f08c,0,unsigned>;
        ///Transceiver Delay Compensation Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tdco{}; 
        namespace TdcoValC{
        }
        ///Transceiver Delay Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tdc{}; 
        namespace TdcValC{
        }
        ///Fast Baud Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> fbrp{}; 
        namespace FbrpValC{
        }
        ///Fast time segment before sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ftseg1{}; 
        namespace Ftseg1ValC{
        }
        ///Fast time segment after sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ftseg2{}; 
        namespace Ftseg2ValC{
        }
        ///Fast (Re) Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fsjw{}; 
        namespace FsjwValC{
        }
    }
    namespace Nonetest{    ///<Test Register
        using Addr = Register::Address<0x40070010,0xffffc00f,0,unsigned>;
        ///Transceiver Delay Compensation Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> tdcv{}; 
        namespace TdcvValC{
        }
        ///Receive Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
        namespace RxValC{
        }
        ///Control of Transmit Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        namespace TxValC{
        }
        ///Loop Back Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbck{}; 
        namespace LbckValC{
        }
    }
    namespace Nonerwd{    ///<RAM Watchdog
        using Addr = Register::Address<0x40070014,0xffff0000,0,unsigned>;
        ///Watchdog Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wdv{}; 
        namespace WdvValC{
        }
        ///Watchdog Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wdc{}; 
        namespace WdcValC{
        }
    }
    namespace Nonecccr{    ///<CC Control Register
        using Addr = Register::Address<0x40070018,0xffff8000,0,unsigned>;
        ///Transmit Pause
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txp{}; 
        namespace TxpValC{
        }
        ///CAN FD Bit Rate Switching
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fdbs{}; 
        namespace FdbsValC{
        }
        ///CAN FD Operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fdo{}; 
        namespace FdoValC{
        }
        ///CAN Mode Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cmr{}; 
        namespace CmrValC{
        }
        ///CAN Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cme{}; 
        namespace CmeValC{
        }
        ///Test Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
        ///Disable Automatic Retransmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dar{}; 
        namespace DarValC{
        }
        ///Bus Monitoring Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mon{}; 
        namespace MonValC{
        }
        ///Clock Stop Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csr{}; 
        namespace CsrValC{
        }
        ///Clock Stop Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csa{}; 
        namespace CsaValC{
        }
        ///Restricted Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> asm_{}; 
        namespace Asm_ValC{
        }
        ///Configuration Change Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cce{}; 
        namespace CceValC{
        }
        ///Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace Nonebtp{    ///<Bit Timing and Prescaler Register
        using Addr = Register::Address<0x4007001c,0xfc00c000,0,unsigned>;
        ///Baud Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
        ///Time segment before sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        ///Time segment after sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
        ///(Re) Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
    }
    namespace Nonetscc{    ///<Timestamp Counter Configuration
        using Addr = Register::Address<0x40070020,0xfff0fffc,0,unsigned>;
        ///Timestamp Counter Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tcp{}; 
        namespace TcpValC{
        }
        ///Timestamp Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tss{}; 
        namespace TssValC{
        }
    }
    namespace Nonetscv{    ///<Timestamp Counter Value
        using Addr = Register::Address<0x40070024,0xffff0000,0,unsigned>;
        ///Timestamp Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsc{}; 
        namespace TscValC{
        }
    }
    namespace Nonetocc{    ///<Timeout Counter Configuration
        using Addr = Register::Address<0x40070028,0x0000fff8,0,unsigned>;
        ///Timeout Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> top{}; 
        namespace TopValC{
        }
        ///Timeout Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> tos{}; 
        namespace TosValC{
        }
        ///Enable Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> etoc{}; 
        namespace EtocValC{
        }
    }
    namespace Nonetocv{    ///<Timeout Counter Value
        using Addr = Register::Address<0x4007002c,0xffff0000,0,unsigned>;
        ///Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
    }
    namespace Noneecr{    ///<Error Counter Register
        using Addr = Register::Address<0x40070040,0xff000000,0,unsigned>;
        ///CAN Error Logging
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cel{}; 
        namespace CelValC{
        }
        ///Receive Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rp{}; 
        namespace RpValC{
        }
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec{}; 
        namespace TecValC{
        }
    }
    namespace Nonepsr{    ///<Protocol Status Register
        using Addr = Register::Address<0x40070044,0xffffc000,0,unsigned>;
        ///Received a CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> redl{}; 
        namespace RedlValC{
        }
        ///BRS flag of last received CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rbrs{}; 
        namespace RbrsValC{
        }
        ///ESI flag of last received CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> resi{}; 
        namespace ResiValC{
        }
        ///Fast Last Error Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> flec{}; 
        namespace FlecValC{
        }
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bo{}; 
        namespace BoValC{
        }
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ew{}; 
        namespace EwValC{
        }
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep{}; 
        namespace EpValC{
        }
        ///Activity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> act{}; 
        namespace ActValC{
        }
        ///Last Error Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lec{}; 
        namespace LecValC{
        }
    }
    namespace Noneir{    ///<Interrupt Register
        using Addr = Register::Address<0x40070050,0x00000000,0,unsigned>;
        ///Stuff Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ste{}; 
        namespace SteValC{
        }
        ///Format Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> foe{}; 
        namespace FoeValC{
        }
        ///Acknowledge Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> acke{}; 
        namespace AckeValC{
        }
        ///Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crce{}; 
        namespace CrceValC{
        }
        ///Watchdog Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdi{}; 
        namespace WdiValC{
        }
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bo{}; 
        namespace BoValC{
        }
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ew{}; 
        namespace EwValC{
        }
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ep{}; 
        namespace EpValC{
        }
        ///Error Logging Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elo{}; 
        namespace EloValC{
        }
        ///Bit Error Uncorrected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beu{}; 
        namespace BeuValC{
        }
        ///Bit Error Corrected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bec{}; 
        namespace BecValC{
        }
        ///Message stored to Dedicated Rx Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drx{}; 
        namespace DrxValC{
        }
        ///Timeout Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> too{}; 
        namespace TooValC{
        }
        ///Message RAM Access Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mraf{}; 
        namespace MrafValC{
        }
        ///Timestamp Wraparound
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsw{}; 
        namespace TswValC{
        }
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefl{}; 
        namespace TeflValC{
        }
        ///Tx Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teff{}; 
        namespace TeffValC{
        }
        ///Tx Event FIFO Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefw{}; 
        namespace TefwValC{
        }
        ///Tx Event FIFO New Entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefn{}; 
        namespace TefnValC{
        }
        ///Tx FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfe{}; 
        namespace TfeValC{
        }
        ///Transmission Cancellation Finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcf{}; 
        namespace TcfValC{
        }
        ///Transmission Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc{}; 
        namespace TcValC{
        }
        ///High Priority Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpm{}; 
        namespace HpmValC{
        }
        ///Rx FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1l{}; 
        namespace Rf1lValC{
        }
        ///Rx FIFO 1 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1f{}; 
        namespace Rf1fValC{
        }
        ///Rx FIFO 1 Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1w{}; 
        namespace Rf1wValC{
        }
        ///Rx FIFO 1 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1n{}; 
        namespace Rf1nValC{
        }
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0l{}; 
        namespace Rf0lValC{
        }
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0f{}; 
        namespace Rf0fValC{
        }
        ///Rx FIFO 0 Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0w{}; 
        namespace Rf0wValC{
        }
        ///Rx FIFO 0 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0n{}; 
        namespace Rf0nValC{
        }
    }
    namespace Noneie{    ///<Interrupt Enable
        using Addr = Register::Address<0x40070054,0x00000000,0,unsigned>;
        ///Stuff Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stee{}; 
        namespace SteeValC{
        }
        ///Format Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> foee{}; 
        namespace FoeeValC{
        }
        ///Acknowledge Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackee{}; 
        namespace AckeeValC{
        }
        ///Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bee{}; 
        namespace BeeValC{
        }
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcee{}; 
        namespace CrceeValC{
        }
        ///Watchdog Interrupt Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdie{}; 
        namespace WdieValC{
        }
        ///Bus_Off Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> boe{}; 
        namespace BoeValC{
        }
        ///Warning Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewe{}; 
        namespace EweValC{
        }
        ///Error Passive Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epe{}; 
        namespace EpeValC{
        }
        ///Error Logging Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eloe{}; 
        namespace EloeValC{
        }
        ///Bit Error Uncorrected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beue{}; 
        namespace BeueValC{
        }
        ///Bit Error Corrected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bece{}; 
        namespace BeceValC{
        }
        ///Message stored to Dedicated Rx Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxe{}; 
        namespace DrxeValC{
        }
        ///Timeout Occurred Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tooe{}; 
        namespace TooeValC{
        }
        ///Message RAM Access Failure Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafe{}; 
        namespace MrafeValC{
        }
        ///Timestamp Wraparound Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswe{}; 
        namespace TsweValC{
        }
        ///Tx Event FIFO Element Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefle{}; 
        namespace TefleValC{
        }
        ///Tx Event FIFO Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffe{}; 
        namespace TeffeValC{
        }
        ///Tx Event FIFO Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwe{}; 
        namespace TefweValC{
        }
        ///Tx Event FIFO New Entry Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefne{}; 
        namespace TefneValC{
        }
        ///Tx FIFO Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfee{}; 
        namespace TfeeValC{
        }
        ///Transmission Cancellation Finished Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfe{}; 
        namespace TcfeValC{
        }
        ///Transmission Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tce{}; 
        namespace TceValC{
        }
        ///High Priority Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpme{}; 
        namespace HpmeValC{
        }
        ///Rx FIFO 1 Message Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1le{}; 
        namespace Rf1leValC{
        }
        ///Rx FIFO 1 Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fe{}; 
        namespace Rf1feValC{
        }
        ///Rx FIFO 1 Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1we{}; 
        namespace Rf1weValC{
        }
        ///Rx FIFO 1 New Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1ne{}; 
        namespace Rf1neValC{
        }
        ///Rx FIFO 0 Message Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0le{}; 
        namespace Rf0leValC{
        }
        ///Rx FIFO 0 Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fe{}; 
        namespace Rf0feValC{
        }
        ///Rx FIFO 0 Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0we{}; 
        namespace Rf0weValC{
        }
        ///Rx FIFO 0 New Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0ne{}; 
        namespace Rf0neValC{
        }
    }
    namespace Noneils{    ///<Interrupt Line Select
        using Addr = Register::Address<0x40070058,0x00000000,0,unsigned>;
        ///Stuff Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stel{}; 
        namespace StelValC{
        }
        ///Format Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> foel{}; 
        namespace FoelValC{
        }
        ///Acknowledge Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackel{}; 
        namespace AckelValC{
        }
        ///Bit Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bel{}; 
        namespace BelValC{
        }
        ///CRC Error Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcel{}; 
        namespace CrcelValC{
        }
        ///Watchdog Interrupt Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdil{}; 
        namespace WdilValC{
        }
        ///Bus_Off Status Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bol{}; 
        namespace BolValC{
        }
        ///Warning Status Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewl{}; 
        namespace EwlValC{
        }
        ///Error Passive Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epl{}; 
        namespace EplValC{
        }
        ///Error Logging Overflow Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elol{}; 
        namespace ElolValC{
        }
        ///Bit Error Uncorrected Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beul{}; 
        namespace BeulValC{
        }
        ///Bit Error Corrected Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> becl{}; 
        namespace BeclValC{
        }
        ///Message stored to Dedicated Rx Buffer Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxl{}; 
        namespace DrxlValC{
        }
        ///Timeout Occurred Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tool{}; 
        namespace ToolValC{
        }
        ///Message RAM Access Failure Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafl{}; 
        namespace MraflValC{
        }
        ///Timestamp Wraparound Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswl{}; 
        namespace TswlValC{
        }
        ///Tx Event FIFO Element Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefll{}; 
        namespace TefllValC{
        }
        ///Tx Event FIFO Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffl{}; 
        namespace TefflValC{
        }
        ///Tx Event FIFO Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwl{}; 
        namespace TefwlValC{
        }
        ///Tx Event FIFO New Entry Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefnl{}; 
        namespace TefnlValC{
        }
        ///Tx FIFO Empty Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfel{}; 
        namespace TfelValC{
        }
        ///Transmission Cancellation Finished Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfl{}; 
        namespace TcflValC{
        }
        ///Transmission Completed Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcl{}; 
        namespace TclValC{
        }
        ///High Priority Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpml{}; 
        namespace HpmlValC{
        }
        ///Rx FIFO 1 Message Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1ll{}; 
        namespace Rf1llValC{
        }
        ///Rx FIFO 1 Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fl{}; 
        namespace Rf1flValC{
        }
        ///Rx FIFO 1 Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1wl{}; 
        namespace Rf1wlValC{
        }
        ///Rx FIFO 1 New Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1nl{}; 
        namespace Rf1nlValC{
        }
        ///Rx FIFO 0 Message Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0ll{}; 
        namespace Rf0llValC{
        }
        ///Rx FIFO 0 Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fl{}; 
        namespace Rf0flValC{
        }
        ///Rx FIFO 0 Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0wl{}; 
        namespace Rf0wlValC{
        }
        ///Rx FIFO 0 New Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0nl{}; 
        namespace Rf0nlValC{
        }
    }
    namespace Noneile{    ///<Interrupt Line Enable
        using Addr = Register::Address<0x4007005c,0xfffffffc,0,unsigned>;
        ///Enable Interrupt Line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eint1{}; 
        namespace Eint1ValC{
        }
        ///Enable Interrupt Line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eint0{}; 
        namespace Eint0ValC{
        }
    }
    namespace Nonegfc{    ///<Global Filter Configuration
        using Addr = Register::Address<0x40070080,0xffffffc0,0,unsigned>;
        ///Accept Non-matching Frames Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> anfs{}; 
        namespace AnfsValC{
        }
        ///Accept Non-matching Frames Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> anfe{}; 
        namespace AnfeValC{
        }
        ///Reject Remote Frames Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rrfs{}; 
        namespace RrfsValC{
        }
        ///Reject Remote Frames Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rrfe{}; 
        namespace RrfeValC{
        }
    }
    namespace Nonesidfc{    ///<Standard ID Filter Configuration
        using Addr = Register::Address<0x40070084,0xff000003,0,unsigned>;
        ///List Size Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lss{}; 
        namespace LssValC{
        }
        ///Filter List Standard Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> flssa{}; 
        namespace FlssaValC{
        }
    }
    namespace Nonexidfc{    ///<Extended ID Filter Configuration
        using Addr = Register::Address<0x40070088,0xff800003,0,unsigned>;
        ///List Size Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> lse{}; 
        namespace LseValC{
        }
        ///Filter List Extended Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> flesa{}; 
        namespace FlesaValC{
        }
    }
    namespace Nonexidam{    ///<Extended ID AND Mask
        using Addr = Register::Address<0x40070090,0xe0000000,0,unsigned>;
        ///Extended ID Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> eidm{}; 
        namespace EidmValC{
        }
    }
    namespace Nonehpms{    ///<High Priority Message Status
        using Addr = Register::Address<0x40070094,0xffff0000,0,unsigned>;
        ///Filter List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        ///Filter Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fidx{}; 
        namespace FidxValC{
        }
        ///Message Storage Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> msi{}; 
        namespace MsiValC{
        }
        ///Buffer Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> bidx{}; 
        namespace BidxValC{
        }
    }
    namespace Nonendat1{    ///<New Data 1
        using Addr = Register::Address<0x40070098,0x00000000,0,unsigned>;
        ///New Data flag of Rx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd31{}; 
        namespace Nd31ValC{
        }
        ///New Data flag of Rx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd30{}; 
        namespace Nd30ValC{
        }
        ///New Data flag of Rx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd29{}; 
        namespace Nd29ValC{
        }
        ///New Data flag of Rx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd28{}; 
        namespace Nd28ValC{
        }
        ///New Data flag of Rx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd27{}; 
        namespace Nd27ValC{
        }
        ///New Data flag of Rx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd26{}; 
        namespace Nd26ValC{
        }
        ///New Data flag of Rx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd25{}; 
        namespace Nd25ValC{
        }
        ///New Data flag of Rx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd24{}; 
        namespace Nd24ValC{
        }
        ///New Data flag of Rx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd23{}; 
        namespace Nd23ValC{
        }
        ///New Data flag of Rx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd22{}; 
        namespace Nd22ValC{
        }
        ///New Data flag of Rx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd21{}; 
        namespace Nd21ValC{
        }
        ///New Data flag of Rx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd20{}; 
        namespace Nd20ValC{
        }
        ///New Data flag of Rx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd19{}; 
        namespace Nd19ValC{
        }
        ///New Data flag of Rx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd18{}; 
        namespace Nd18ValC{
        }
        ///New Data flag of Rx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd17{}; 
        namespace Nd17ValC{
        }
        ///New Data flag of Rx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd16{}; 
        namespace Nd16ValC{
        }
        ///New Data flag of Rx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd15{}; 
        namespace Nd15ValC{
        }
        ///New Data flag of Rx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd14{}; 
        namespace Nd14ValC{
        }
        ///New Data flag of Rx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd13{}; 
        namespace Nd13ValC{
        }
        ///New Data flag of Rx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd12{}; 
        namespace Nd12ValC{
        }
        ///New Data flag of Rx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd11{}; 
        namespace Nd11ValC{
        }
        ///New Data flag of Rx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd10{}; 
        namespace Nd10ValC{
        }
        ///New Data flag of Rx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd9{}; 
        namespace Nd9ValC{
        }
        ///New Data flag of Rx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd8{}; 
        namespace Nd8ValC{
        }
        ///New Data flag of Rx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd7{}; 
        namespace Nd7ValC{
        }
        ///New Data flag of Rx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd6{}; 
        namespace Nd6ValC{
        }
        ///New Data flag of Rx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd5{}; 
        namespace Nd5ValC{
        }
        ///New Data flag of Rx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd4{}; 
        namespace Nd4ValC{
        }
        ///New Data flag of Rx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd3{}; 
        namespace Nd3ValC{
        }
        ///New Data flag of Rx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd2{}; 
        namespace Nd2ValC{
        }
        ///New Data flag of Rx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd1{}; 
        namespace Nd1ValC{
        }
        ///New Data flag of Rx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd0{}; 
        namespace Nd0ValC{
        }
    }
    namespace Nonendat2{    ///<New Data 2
        using Addr = Register::Address<0x4007009c,0x00000000,0,unsigned>;
        ///New Data flag of Rx Buffer 63
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd63{}; 
        namespace Nd63ValC{
        }
        ///New Data flag of Rx Buffer 62
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd62{}; 
        namespace Nd62ValC{
        }
        ///New Data flag of Rx Buffer 61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd61{}; 
        namespace Nd61ValC{
        }
        ///New Data flag of Rx Buffer 60
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd60{}; 
        namespace Nd60ValC{
        }
        ///New Data flag of Rx Buffer 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd59{}; 
        namespace Nd59ValC{
        }
        ///New Data flag of Rx Buffer 58
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd58{}; 
        namespace Nd58ValC{
        }
        ///New Data flag of Rx Buffer 57
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd57{}; 
        namespace Nd57ValC{
        }
        ///New Data flag of Rx Buffer 56
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd56{}; 
        namespace Nd56ValC{
        }
        ///New Data flag of Rx Buffer 55
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd55{}; 
        namespace Nd55ValC{
        }
        ///New Data flag of Rx Buffer 54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd54{}; 
        namespace Nd54ValC{
        }
        ///New Data flag of Rx Buffer 53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd53{}; 
        namespace Nd53ValC{
        }
        ///New Data flag of Rx Buffer 52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd52{}; 
        namespace Nd52ValC{
        }
        ///New Data flag of Rx Buffer 51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd51{}; 
        namespace Nd51ValC{
        }
        ///New Data flag of Rx Buffer 50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd50{}; 
        namespace Nd50ValC{
        }
        ///New Data flag of Rx Buffer 49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd49{}; 
        namespace Nd49ValC{
        }
        ///New Data flag of Rx Buffer 48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd48{}; 
        namespace Nd48ValC{
        }
        ///New Data flag of Rx Buffer 47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd47{}; 
        namespace Nd47ValC{
        }
        ///New Data flag of Rx Buffer 46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd46{}; 
        namespace Nd46ValC{
        }
        ///New Data flag of Rx Buffer 45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd45{}; 
        namespace Nd45ValC{
        }
        ///New Data flag of Rx Buffer 44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd44{}; 
        namespace Nd44ValC{
        }
        ///New Data flag of Rx Buffer 43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd43{}; 
        namespace Nd43ValC{
        }
        ///New Data flag of Rx Buffer 42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd42{}; 
        namespace Nd42ValC{
        }
        ///New Data flag of Rx Buffer 41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd41{}; 
        namespace Nd41ValC{
        }
        ///New Data flag of Rx Buffer 40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd40{}; 
        namespace Nd40ValC{
        }
        ///New Data flag of Rx Buffer 39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd39{}; 
        namespace Nd39ValC{
        }
        ///New Data flag of Rx Buffer 38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd38{}; 
        namespace Nd38ValC{
        }
        ///New Data flag of Rx Buffer 37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd37{}; 
        namespace Nd37ValC{
        }
        ///New Data flag of Rx Buffer 36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd36{}; 
        namespace Nd36ValC{
        }
        ///New Data flag of Rx Buffer 35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd35{}; 
        namespace Nd35ValC{
        }
        ///New Data flag of Rx Buffer 34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd34{}; 
        namespace Nd34ValC{
        }
        ///New Data flag of Rx Buffer 33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd33{}; 
        namespace Nd33ValC{
        }
        ///New Data flag of Rx Buffer 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd32{}; 
        namespace Nd32ValC{
        }
    }
    namespace Nonerxf0c{    ///<Rx FIFO 0 Configuration
        using Addr = Register::Address<0x400700a0,0x00800003,0,unsigned>;
        ///FIFO 0 Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> f0om{}; 
        namespace F0omValC{
        }
        ///Rx FIFO 0 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f0wm{}; 
        namespace F0wmValC{
        }
        ///Rx FIFO 0 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f0s{}; 
        namespace F0sValC{
        }
        ///Rx FIFO 0 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> f0sa{}; 
        namespace F0saValC{
        }
    }
    namespace Nonerxf0s{    ///<Rx FIFO 0 Status
        using Addr = Register::Address<0x400700a4,0xfcc0c080,0,unsigned>;
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rf0l{}; 
        namespace Rf0lValC{
        }
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> f0f{}; 
        namespace F0fValC{
        }
        ///Rx FIFO 0 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> f0pi{}; 
        namespace F0piValC{
        }
        ///Rx FIFO 0 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> f0gi{}; 
        namespace F0giValC{
        }
        ///Rx FIFO 0 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> f0fl{}; 
        namespace F0flValC{
        }
    }
    namespace Nonerxf0a{    ///<Rx FIFO 0 Acknowledge
        using Addr = Register::Address<0x400700a8,0xffffffc0,0,unsigned>;
        ///Rx FIFO 0 Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f0ai{}; 
        namespace F0aiValC{
        }
    }
    namespace Nonerxbc{    ///<Rx Buffer Configuration
        using Addr = Register::Address<0x400700ac,0xffff0003,0,unsigned>;
        ///2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> rbsa{}; 
        namespace RbsaValC{
        }
    }
    namespace Nonerxf1c{    ///<Rx FIFO 1 Configuration
        using Addr = Register::Address<0x400700b0,0x00800003,0,unsigned>;
        ///FIFO 1 Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> f1om{}; 
        namespace F1omValC{
        }
        ///Rx FIFO 1 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f1wm{}; 
        namespace F1wmValC{
        }
        ///Rx FIFO 1 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f1s{}; 
        namespace F1sValC{
        }
        ///Rx FIFO 1 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> f1sa{}; 
        namespace F1saValC{
        }
    }
    namespace Nonerxf1s{    ///<Rx FIFO 1 Status
        using Addr = Register::Address<0x400700b4,0x3cc0c080,0,unsigned>;
        ///Debug Message Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> dms{}; 
        namespace DmsValC{
        }
        ///FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rf1l{}; 
        namespace Rf1lValC{
        }
        ///Rx FIFO 1 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> f1f{}; 
        namespace F1fValC{
        }
        ///Rx FIFO 1 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> f1pi{}; 
        namespace F1piValC{
        }
        ///Rx FIFO 1 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> f1gi{}; 
        namespace F1giValC{
        }
        ///Rx FIFO 1 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> f1fl{}; 
        namespace F1flValC{
        }
    }
    namespace Nonerxf1a{    ///<Rx FIFO 1 Acknowledge
        using Addr = Register::Address<0x400700b8,0xffffffc0,0,unsigned>;
        ///Rx FIFO 1 Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f1ai{}; 
        namespace F1aiValC{
        }
    }
    namespace Nonerxesc{    ///<Rx Buffer/FIFO Element Size Configuration
        using Addr = Register::Address<0x400700bc,0xfffff888,0,unsigned>;
        ///Rx Buffer Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rbds{}; 
        namespace RbdsValC{
        }
        ///Rx FIFO 1 Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> f1ds{}; 
        namespace F1dsValC{
        }
        ///Rx FIFO 0 Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> f0ds{}; 
        namespace F0dsValC{
        }
    }
    namespace Nonetxbc{    ///<Tx Buffer Configuration
        using Addr = Register::Address<0x400700c0,0x80c00003,0,unsigned>;
        ///Tx FIFO/Queue Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tfqm{}; 
        namespace TfqmValC{
        }
        ///Transmit FIFO/Queue Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> tfqs{}; 
        namespace TfqsValC{
        }
        ///Number of Dedicated Transmit Buffers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> ndtb{}; 
        namespace NdtbValC{
        }
        ///Tx Buffers Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> tbsa{}; 
        namespace TbsaValC{
        }
    }
    namespace Nonetxfqs{    ///<Tx FIFO/Queue Status
        using Addr = Register::Address<0x400700c4,0xffc0e0c0,0,unsigned>;
        ///Tx FIFO/Queue Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tfqf{}; 
        namespace TfqfValC{
        }
        ///Tx FIFO/Queue Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> tfqpi{}; 
        namespace TfqpiValC{
        }
        ///Tx FIFO Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> tfgi{}; 
        namespace TfgiValC{
        }
        ///Tx FIFO Free Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tffl{}; 
        namespace TfflValC{
        }
    }
    namespace Nonetxesc{    ///<Tx Buffer Element Size Configuration
        using Addr = Register::Address<0x400700c8,0xfffffff8,0,unsigned>;
        ///Tx Buffer Data Field Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbds{}; 
        namespace TbdsValC{
        }
    }
    namespace Nonetxbrp{    ///<Tx Buffer Request Pending
        using Addr = Register::Address<0x400700cc,0x00000000,0,unsigned>;
        ///Transmission Request Pending of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> trp31{}; 
        namespace Trp31ValC{
        }
        ///Transmission Request Pending of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> trp30{}; 
        namespace Trp30ValC{
        }
        ///Transmission Request Pending of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> trp29{}; 
        namespace Trp29ValC{
        }
        ///Transmission Request Pending of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> trp28{}; 
        namespace Trp28ValC{
        }
        ///Transmission Request Pending of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> trp27{}; 
        namespace Trp27ValC{
        }
        ///Transmission Request Pending of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> trp26{}; 
        namespace Trp26ValC{
        }
        ///Transmission Request Pending of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trp25{}; 
        namespace Trp25ValC{
        }
        ///Transmission Request Pending of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trp24{}; 
        namespace Trp24ValC{
        }
        ///Transmission Request Pending of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> trp23{}; 
        namespace Trp23ValC{
        }
        ///Transmission Request Pending of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> trp22{}; 
        namespace Trp22ValC{
        }
        ///Transmission Request Pending of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> trp21{}; 
        namespace Trp21ValC{
        }
        ///Transmission Request Pending of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> trp20{}; 
        namespace Trp20ValC{
        }
        ///Transmission Request Pending of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> trp19{}; 
        namespace Trp19ValC{
        }
        ///Transmission Request Pending of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> trp18{}; 
        namespace Trp18ValC{
        }
        ///Transmission Request Pending of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> trp17{}; 
        namespace Trp17ValC{
        }
        ///Transmission Request Pending of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> trp16{}; 
        namespace Trp16ValC{
        }
        ///Transmission Request Pending of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trp15{}; 
        namespace Trp15ValC{
        }
        ///Transmission Request Pending of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trp14{}; 
        namespace Trp14ValC{
        }
        ///Transmission Request Pending of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trp13{}; 
        namespace Trp13ValC{
        }
        ///Transmission Request Pending of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trp12{}; 
        namespace Trp12ValC{
        }
        ///Transmission Request Pending of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> trp11{}; 
        namespace Trp11ValC{
        }
        ///Transmission Request Pending of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> trp10{}; 
        namespace Trp10ValC{
        }
        ///Transmission Request Pending of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> trp9{}; 
        namespace Trp9ValC{
        }
        ///Transmission Request Pending of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> trp8{}; 
        namespace Trp8ValC{
        }
        ///Transmission Request Pending of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> trp7{}; 
        namespace Trp7ValC{
        }
        ///Transmission Request Pending of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> trp6{}; 
        namespace Trp6ValC{
        }
        ///Transmission Request Pending of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> trp5{}; 
        namespace Trp5ValC{
        }
        ///Transmission Request Pending of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trp4{}; 
        namespace Trp4ValC{
        }
        ///Transmission Request Pending of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trp3{}; 
        namespace Trp3ValC{
        }
        ///Transmission Request Pending of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trp2{}; 
        namespace Trp2ValC{
        }
        ///Transmission Request Pending of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trp1{}; 
        namespace Trp1ValC{
        }
        ///Transmission Request Pending of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trp0{}; 
        namespace Trp0ValC{
        }
    }
    namespace Nonetxbar{    ///<Tx Buffer Add Request
        using Addr = Register::Address<0x400700d0,0x00000000,0,unsigned>;
        ///Add Request of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ar31{}; 
        namespace Ar31ValC{
        }
        ///Add Request of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ar30{}; 
        namespace Ar30ValC{
        }
        ///Add Request of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ar29{}; 
        namespace Ar29ValC{
        }
        ///Add Request of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ar28{}; 
        namespace Ar28ValC{
        }
        ///Add Request of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ar27{}; 
        namespace Ar27ValC{
        }
        ///Add Request of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ar26{}; 
        namespace Ar26ValC{
        }
        ///Add Request of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ar25{}; 
        namespace Ar25ValC{
        }
        ///Add Request of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ar24{}; 
        namespace Ar24ValC{
        }
        ///Add Request of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ar23{}; 
        namespace Ar23ValC{
        }
        ///Add Request of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ar22{}; 
        namespace Ar22ValC{
        }
        ///Add Request of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ar21{}; 
        namespace Ar21ValC{
        }
        ///Add Request of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ar20{}; 
        namespace Ar20ValC{
        }
        ///Add Request of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ar19{}; 
        namespace Ar19ValC{
        }
        ///Add Request of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ar18{}; 
        namespace Ar18ValC{
        }
        ///Add Request of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ar17{}; 
        namespace Ar17ValC{
        }
        ///Add Request of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ar16{}; 
        namespace Ar16ValC{
        }
        ///Add Request of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ar15{}; 
        namespace Ar15ValC{
        }
        ///Add Request of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ar14{}; 
        namespace Ar14ValC{
        }
        ///Add Request of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ar13{}; 
        namespace Ar13ValC{
        }
        ///Add Request of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ar12{}; 
        namespace Ar12ValC{
        }
        ///Add Request of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ar11{}; 
        namespace Ar11ValC{
        }
        ///Add Request of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ar10{}; 
        namespace Ar10ValC{
        }
        ///Add Request of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ar9{}; 
        namespace Ar9ValC{
        }
        ///Add Request of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ar8{}; 
        namespace Ar8ValC{
        }
        ///Add Request of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ar7{}; 
        namespace Ar7ValC{
        }
        ///Add Request of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ar6{}; 
        namespace Ar6ValC{
        }
        ///Add Request of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ar5{}; 
        namespace Ar5ValC{
        }
        ///Add Request of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ar4{}; 
        namespace Ar4ValC{
        }
        ///Add Request of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ar3{}; 
        namespace Ar3ValC{
        }
        ///Add Request of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ar2{}; 
        namespace Ar2ValC{
        }
        ///Add Request of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ar1{}; 
        namespace Ar1ValC{
        }
        ///Add Request of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ar0{}; 
        namespace Ar0ValC{
        }
    }
    namespace Nonetxbcr{    ///<Tx Buffer Cancellation Request
        using Addr = Register::Address<0x400700d4,0x00000000,0,unsigned>;
        ///Cancellation Request of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cr31{}; 
        namespace Cr31ValC{
        }
        ///Cancellation Request of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cr30{}; 
        namespace Cr30ValC{
        }
        ///Cancellation Request of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cr29{}; 
        namespace Cr29ValC{
        }
        ///Cancellation Request of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cr28{}; 
        namespace Cr28ValC{
        }
        ///Cancellation Request of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cr27{}; 
        namespace Cr27ValC{
        }
        ///Cancellation Request of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cr26{}; 
        namespace Cr26ValC{
        }
        ///Cancellation Request of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cr25{}; 
        namespace Cr25ValC{
        }
        ///Cancellation Request of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cr24{}; 
        namespace Cr24ValC{
        }
        ///Cancellation Request of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cr23{}; 
        namespace Cr23ValC{
        }
        ///Cancellation Request of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cr22{}; 
        namespace Cr22ValC{
        }
        ///Cancellation Request of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cr21{}; 
        namespace Cr21ValC{
        }
        ///Cancellation Request of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cr20{}; 
        namespace Cr20ValC{
        }
        ///Cancellation Request of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cr19{}; 
        namespace Cr19ValC{
        }
        ///Cancellation Request of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cr18{}; 
        namespace Cr18ValC{
        }
        ///Cancellation Request of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cr17{}; 
        namespace Cr17ValC{
        }
        ///Cancellation Request of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cr16{}; 
        namespace Cr16ValC{
        }
        ///Cancellation Request of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cr15{}; 
        namespace Cr15ValC{
        }
        ///Cancellation Request of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cr14{}; 
        namespace Cr14ValC{
        }
        ///Cancellation Request of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cr13{}; 
        namespace Cr13ValC{
        }
        ///Cancellation Request of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cr12{}; 
        namespace Cr12ValC{
        }
        ///Cancellation Request of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cr11{}; 
        namespace Cr11ValC{
        }
        ///Cancellation Request of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cr10{}; 
        namespace Cr10ValC{
        }
        ///Cancellation Request of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cr9{}; 
        namespace Cr9ValC{
        }
        ///Cancellation Request of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cr8{}; 
        namespace Cr8ValC{
        }
        ///Cancellation Request of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cr7{}; 
        namespace Cr7ValC{
        }
        ///Cancellation Request of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cr6{}; 
        namespace Cr6ValC{
        }
        ///Cancellation Request of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cr5{}; 
        namespace Cr5ValC{
        }
        ///Cancellation Request of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cr4{}; 
        namespace Cr4ValC{
        }
        ///Cancellation Request of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cr3{}; 
        namespace Cr3ValC{
        }
        ///Cancellation Request of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cr2{}; 
        namespace Cr2ValC{
        }
        ///Cancellation Request of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1{}; 
        namespace Cr1ValC{
        }
        ///Cancellation Request of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr0{}; 
        namespace Cr0ValC{
        }
    }
    namespace Nonetxbto{    ///<Tx Buffer Transmission Occurred
        using Addr = Register::Address<0x400700d8,0x00000000,0,unsigned>;
        ///Transmission Occurred of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> to31{}; 
        namespace To31ValC{
        }
        ///Transmission Occurred of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> to30{}; 
        namespace To30ValC{
        }
        ///Transmission Occurred of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> to29{}; 
        namespace To29ValC{
        }
        ///Transmission Occurred of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> to28{}; 
        namespace To28ValC{
        }
        ///Transmission Occurred of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> to27{}; 
        namespace To27ValC{
        }
        ///Transmission Occurred of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> to26{}; 
        namespace To26ValC{
        }
        ///Transmission Occurred of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> to25{}; 
        namespace To25ValC{
        }
        ///Transmission Occurred of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> to24{}; 
        namespace To24ValC{
        }
        ///Transmission Occurred of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> to23{}; 
        namespace To23ValC{
        }
        ///Transmission Occurred of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> to22{}; 
        namespace To22ValC{
        }
        ///Transmission Occurred of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> to21{}; 
        namespace To21ValC{
        }
        ///Transmission Occurred of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> to20{}; 
        namespace To20ValC{
        }
        ///Transmission Occurred of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> to19{}; 
        namespace To19ValC{
        }
        ///Transmission Occurred of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> to18{}; 
        namespace To18ValC{
        }
        ///Transmission Occurred of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> to17{}; 
        namespace To17ValC{
        }
        ///Transmission Occurred of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> to16{}; 
        namespace To16ValC{
        }
        ///Transmission Occurred of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> to15{}; 
        namespace To15ValC{
        }
        ///Transmission Occurred of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> to14{}; 
        namespace To14ValC{
        }
        ///Transmission Occurred of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> to13{}; 
        namespace To13ValC{
        }
        ///Transmission Occurred of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> to12{}; 
        namespace To12ValC{
        }
        ///Transmission Occurred of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> to11{}; 
        namespace To11ValC{
        }
        ///Transmission Occurred of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> to10{}; 
        namespace To10ValC{
        }
        ///Transmission Occurred of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> to9{}; 
        namespace To9ValC{
        }
        ///Transmission Occurred of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> to8{}; 
        namespace To8ValC{
        }
        ///Transmission Occurred of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> to7{}; 
        namespace To7ValC{
        }
        ///Transmission Occurred of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> to6{}; 
        namespace To6ValC{
        }
        ///Transmission Occurred of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> to5{}; 
        namespace To5ValC{
        }
        ///Transmission Occurred of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> to4{}; 
        namespace To4ValC{
        }
        ///Transmission Occurred of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> to3{}; 
        namespace To3ValC{
        }
        ///Transmission Occurred of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> to2{}; 
        namespace To2ValC{
        }
        ///Transmission Occurred of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> to1{}; 
        namespace To1ValC{
        }
        ///Transmission Occurred of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> to0{}; 
        namespace To0ValC{
        }
    }
    namespace Nonetxbcf{    ///<Tx Buffer Cancellation Finished
        using Addr = Register::Address<0x400700dc,0x00000000,0,unsigned>;
        ///Cancellation Finished of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cf31{}; 
        namespace Cf31ValC{
        }
        ///Cancellation Finished of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cf30{}; 
        namespace Cf30ValC{
        }
        ///Cancellation Finished of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cf29{}; 
        namespace Cf29ValC{
        }
        ///Cancellation Finished of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cf28{}; 
        namespace Cf28ValC{
        }
        ///Cancellation Finished of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cf27{}; 
        namespace Cf27ValC{
        }
        ///Cancellation Finished of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cf26{}; 
        namespace Cf26ValC{
        }
        ///Cancellation Finished of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cf25{}; 
        namespace Cf25ValC{
        }
        ///Cancellation Finished of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cf24{}; 
        namespace Cf24ValC{
        }
        ///Cancellation Finished of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cf23{}; 
        namespace Cf23ValC{
        }
        ///Cancellation Finished of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cf22{}; 
        namespace Cf22ValC{
        }
        ///Cancellation Finished of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cf21{}; 
        namespace Cf21ValC{
        }
        ///Cancellation Finished of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cf20{}; 
        namespace Cf20ValC{
        }
        ///Cancellation Finished of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cf19{}; 
        namespace Cf19ValC{
        }
        ///Cancellation Finished of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cf18{}; 
        namespace Cf18ValC{
        }
        ///Cancellation Finished of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cf17{}; 
        namespace Cf17ValC{
        }
        ///Cancellation Finished of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cf16{}; 
        namespace Cf16ValC{
        }
        ///Cancellation Finished of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cf15{}; 
        namespace Cf15ValC{
        }
        ///Cancellation Finished of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cf14{}; 
        namespace Cf14ValC{
        }
        ///Cancellation Finished of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cf13{}; 
        namespace Cf13ValC{
        }
        ///Cancellation Finished of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cf12{}; 
        namespace Cf12ValC{
        }
        ///Cancellation Finished of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cf11{}; 
        namespace Cf11ValC{
        }
        ///Cancellation Finished of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cf10{}; 
        namespace Cf10ValC{
        }
        ///Cancellation Finished of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cf9{}; 
        namespace Cf9ValC{
        }
        ///Cancellation Finished of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cf8{}; 
        namespace Cf8ValC{
        }
        ///Cancellation Finished of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cf7{}; 
        namespace Cf7ValC{
        }
        ///Cancellation Finished of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cf6{}; 
        namespace Cf6ValC{
        }
        ///Cancellation Finished of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cf5{}; 
        namespace Cf5ValC{
        }
        ///Cancellation Finished of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cf4{}; 
        namespace Cf4ValC{
        }
        ///Cancellation Finished of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cf3{}; 
        namespace Cf3ValC{
        }
        ///Cancellation Finished of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cf2{}; 
        namespace Cf2ValC{
        }
        ///Cancellation Finished of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cf1{}; 
        namespace Cf1ValC{
        }
        ///Cancellation Finished of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0{}; 
        namespace Cf0ValC{
        }
    }
    namespace Nonetxbtie{    ///<Tx Buffer Transmission Interrupt Enable
        using Addr = Register::Address<0x400700e0,0x00000000,0,unsigned>;
        ///Transmission Interrupt Enable of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tie31{}; 
        namespace Tie31ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tie30{}; 
        namespace Tie30ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tie29{}; 
        namespace Tie29ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tie28{}; 
        namespace Tie28ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tie27{}; 
        namespace Tie27ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tie26{}; 
        namespace Tie26ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tie25{}; 
        namespace Tie25ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tie24{}; 
        namespace Tie24ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tie23{}; 
        namespace Tie23ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tie22{}; 
        namespace Tie22ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tie21{}; 
        namespace Tie21ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tie20{}; 
        namespace Tie20ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tie19{}; 
        namespace Tie19ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tie18{}; 
        namespace Tie18ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tie17{}; 
        namespace Tie17ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tie16{}; 
        namespace Tie16ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tie15{}; 
        namespace Tie15ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tie14{}; 
        namespace Tie14ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tie13{}; 
        namespace Tie13ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tie12{}; 
        namespace Tie12ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tie11{}; 
        namespace Tie11ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tie10{}; 
        namespace Tie10ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tie9{}; 
        namespace Tie9ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tie8{}; 
        namespace Tie8ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tie7{}; 
        namespace Tie7ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie6{}; 
        namespace Tie6ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tie5{}; 
        namespace Tie5ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tie4{}; 
        namespace Tie4ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie3{}; 
        namespace Tie3ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie2{}; 
        namespace Tie2ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tie1{}; 
        namespace Tie1ValC{
        }
        ///Transmission Interrupt Enable of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie0{}; 
        namespace Tie0ValC{
        }
    }
    namespace Nonetxbcie{    ///<Tx Buffer Cancellation Finished Interrupt Enable
        using Addr = Register::Address<0x400700e4,0x00000000,0,unsigned>;
        ///Cancellation Finished Interrupt Enable of Tx Buffer 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cfie31{}; 
        namespace Cfie31ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cfie30{}; 
        namespace Cfie30ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cfie29{}; 
        namespace Cfie29ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cfie28{}; 
        namespace Cfie28ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cfie27{}; 
        namespace Cfie27ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cfie26{}; 
        namespace Cfie26ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cfie25{}; 
        namespace Cfie25ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cfie24{}; 
        namespace Cfie24ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cfie23{}; 
        namespace Cfie23ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfie22{}; 
        namespace Cfie22ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cfie21{}; 
        namespace Cfie21ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cfie20{}; 
        namespace Cfie20ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cfie19{}; 
        namespace Cfie19ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfie18{}; 
        namespace Cfie18ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cfie17{}; 
        namespace Cfie17ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfie16{}; 
        namespace Cfie16ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cfie15{}; 
        namespace Cfie15ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cfie14{}; 
        namespace Cfie14ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cfie13{}; 
        namespace Cfie13ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cfie12{}; 
        namespace Cfie12ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfie11{}; 
        namespace Cfie11ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfie10{}; 
        namespace Cfie10ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfie9{}; 
        namespace Cfie9ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfie8{}; 
        namespace Cfie8ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfie7{}; 
        namespace Cfie7ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfie6{}; 
        namespace Cfie6ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cfie5{}; 
        namespace Cfie5ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cfie4{}; 
        namespace Cfie4ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cfie3{}; 
        namespace Cfie3ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cfie2{}; 
        namespace Cfie2ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfie1{}; 
        namespace Cfie1ValC{
        }
        ///Cancellation Finished Interrupt Enable of Tx Buffer 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfie0{}; 
        namespace Cfie0ValC{
        }
    }
    namespace Nonetxefc{    ///<Tx Event FIFO Configuration
        using Addr = Register::Address<0x400700f0,0xc0c00003,0,unsigned>;
        ///Event FIFO Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> efwm{}; 
        namespace EfwmValC{
        }
        ///Event FIFO Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> efs{}; 
        namespace EfsValC{
        }
        ///Event FIFO Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> efsa{}; 
        namespace EfsaValC{
        }
    }
    namespace Nonetxfs{    ///<Tx Event FIFO Status
        using Addr = Register::Address<0x400700f4,0xfce0e0c0,0,unsigned>;
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tefl{}; 
        namespace TeflValC{
        }
        ///Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eff{}; 
        namespace EffValC{
        }
        ///Event FIFO Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> efpi{}; 
        namespace EfpiValC{
        }
        ///Event FIFO Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> efgi{}; 
        namespace EfgiValC{
        }
        ///Event FIFO Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> effl{}; 
        namespace EfflValC{
        }
    }
    namespace Nonetxfa{    ///<Tx Event FIFO Acknowledge
        using Addr = Register::Address<0x400700f8,0xffffffe0,0,unsigned>;
        ///Event FIFO Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> efai{}; 
        namespace EfaiValC{
        }
    }
    namespace Nonefdecr{    ///<CAN FD ECC Error Control Register
        using Addr = Register::Address<0x40070200,0xfffffff0,0,unsigned char>;
        ///ECC check disable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ceiv{}; 
        namespace CeivValC{
        }
        ///ECC error response enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ceren{}; 
        namespace CerenValC{
        }
        ///Double-bit error factor interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> deie{}; 
        namespace DeieValC{
        }
        ///Single-bit error factor interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> seie{}; 
        namespace SeieValC{
        }
    }
    namespace Nonefdesr{    ///<CAN FD ECC Error Status Register
        using Addr = Register::Address<0x40070201,0xfffffffc,0,unsigned char>;
        ///Double-bit error occurrence bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dei{}; 
        namespace DeiValC{
        }
        ///Single-bit error occurrence bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sei{}; 
        namespace SeiValC{
        }
    }
    namespace Nonefdsear{    ///<CAN FD ECC Single-bit Error Address Register
        using Addr = Register::Address<0x40070202,0xffff0000,0,unsigned>;
        ///Single-bit error Message RAM address bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sra{}; 
        namespace SraValC{
        }
    }
    namespace Nonefdescr{    ///<CAN FD ECC Error Status Clear Register
        using Addr = Register::Address<0x40070205,0xfffffffc,0,unsigned char>;
        ///Double-bit error clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> deic{}; 
        namespace DeicValC{
        }
        ///Sngle-bit error clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> seic{}; 
        namespace SeicValC{
        }
    }
    namespace Nonefddear{    ///<CAN FD ECC Double-bit Error Address Register
        using Addr = Register::Address<0x40070206,0xffff0000,0,unsigned>;
        ///Double-bit error Message RAM address bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dra{}; 
        namespace DraValC{
        }
    }
    namespace Nonetscntr{    ///<Time Stamp Control Register
        using Addr = Register::Address<0x40070210,0xfffffffe,0,unsigned>;
        ///Counter clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cclr{}; 
        namespace CclrValC{
        }
    }
    namespace Nonetsmdr{    ///<Time Stamp Mode Register
        using Addr = Register::Address<0x40070212,0xfffffffe,0,unsigned>;
        ///Counter enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cnten{}; 
        namespace CntenValC{
        }
    }
    namespace Nonetsdivr{    ///<Time Stamp Divider Register
        using Addr = Register::Address<0x40070214,0xffff0000,0,unsigned>;
        ///Counter clock division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdiv{}; 
        namespace CdivValC{
        }
    }
    namespace Nonetscdtr{    ///<Time Stamp Counter Data Register
        using Addr = Register::Address<0x40070218,0xffff0000,0,unsigned>;
        ///Counter value bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonetscpclr{    ///<Time Stamp Compare Clear Register
        using Addr = Register::Address<0x4007021a,0xffff0000,0,unsigned>;
        ///Compare clear setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
        namespace CmpValC{
        }
    }
}
