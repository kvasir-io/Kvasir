#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Synchronous Asynchronous Receiver Transmitter 3
    namespace Usart3Cr{    ///<Control Register
        using Addr = Register::Address<0x4009c000,0xfff00003,0,unsigned>;
        ///Reset Receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstrx{}; 
        namespace RstrxValC{
        }
        ///Reset Transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsttx{}; 
        namespace RsttxValC{
        }
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxen{}; 
        namespace RxenValC{
        }
        ///Receiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        namespace RxdisValC{
        }
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
        ///Transmitter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdis{}; 
        namespace TxdisValC{
        }
        ///Reset Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rststa{}; 
        namespace RststaValC{
        }
        ///Start Break
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sttbrk{}; 
        namespace SttbrkValC{
        }
        ///Stop Break
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> stpbrk{}; 
        namespace StpbrkValC{
        }
        ///Start Time-out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sttto{}; 
        namespace StttoValC{
        }
        ///Send Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> senda{}; 
        namespace SendaValC{
        }
        ///Reset Iterations
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstit{}; 
        namespace RstitValC{
        }
        ///Reset Non Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rstnack{}; 
        namespace RstnackValC{
        }
        ///Rearm Time-out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> retto{}; 
        namespace RettoValC{
        }
        ///Data Terminal Ready Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dtren{}; 
        namespace DtrenValC{
        }
        ///Data Terminal Ready Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dtrdis{}; 
        namespace DtrdisValC{
        }
        ///Request to Send Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rtsen{}; 
        namespace RtsenValC{
        }
        ///Request to Send Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rtsdis{}; 
        namespace RtsdisValC{
        }
    }
    namespace Usart3CrSpiMode{    ///<Control Register
        using Addr = Register::Address<0x4009c000,0xfff3fe03,0,unsigned>;
        ///Reset Receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstrx{}; 
        namespace RstrxValC{
        }
        ///Reset Transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsttx{}; 
        namespace RsttxValC{
        }
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxen{}; 
        namespace RxenValC{
        }
        ///Receiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        namespace RxdisValC{
        }
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
        ///Transmitter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdis{}; 
        namespace TxdisValC{
        }
        ///Reset Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rststa{}; 
        namespace RststaValC{
        }
        ///Force SPI Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fcs{}; 
        namespace FcsValC{
        }
        ///Release SPI Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rcs{}; 
        namespace RcsValC{
        }
    }
    namespace Usart3Mr{    ///<Mode Register
        using Addr = Register::Address<0x4009c004,0x08000000,0,unsigned>;
        ///USART Mode of Operation
        enum class UsartmodeVal {
            normal=0x00000000,     ///<Normal mode
            rs485=0x00000001,     ///<RS485
            hwHandshaking=0x00000002,     ///<Hardware Handshaking
            modem=0x00000003,     ///<Modem
            is07816T0=0x00000004,     ///<IS07816 Protocol: T = 0
            is07816T1=0x00000006,     ///<IS07816 Protocol: T = 1
            irda=0x00000008,     ///<IrDA
            spiMaster=0x0000000e,     ///<SPI Master
            spiSlave=0x0000000f,     ///<SPI Slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,UsartmodeVal> usartMode{}; 
        namespace UsartmodeValC{
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::normal> normal{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::rs485> rs485{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::hwHandshaking> hwHandshaking{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::modem> modem{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::is07816T0> is07816T0{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::is07816T1> is07816T1{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::irda> irda{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::spiMaster> spiMaster{};
            constexpr Register::FieldValue<decltype(usartMode),UsartmodeVal::spiSlave> spiSlave{};
        }
        ///Clock Selection
        enum class UsclksVal {
            mck=0x00000000,     ///<Master Clock MCK is selected
            div=0x00000001,     ///<Internal Clock Divided MCK/DIV (DIV=8) is selected
            sck=0x00000003,     ///<Serial Clock SLK is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,UsclksVal> usclks{}; 
        namespace UsclksValC{
            constexpr Register::FieldValue<decltype(usclks),UsclksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(usclks),UsclksVal::div> div{};
            constexpr Register::FieldValue<decltype(usclks),UsclksVal::sck> sck{};
        }
        ///Character Length.
        enum class ChrlVal {
            v5Bit=0x00000000,     ///<Character length is 5 bits
            v6Bit=0x00000001,     ///<Character length is 6 bits
            v7Bit=0x00000002,     ///<Character length is 7 bits
            v8Bit=0x00000003,     ///<Character length is 8 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ChrlVal> chrl{}; 
        namespace ChrlValC{
            constexpr Register::FieldValue<decltype(chrl),ChrlVal::v5Bit> v5Bit{};
            constexpr Register::FieldValue<decltype(chrl),ChrlVal::v6Bit> v6Bit{};
            constexpr Register::FieldValue<decltype(chrl),ChrlVal::v7Bit> v7Bit{};
            constexpr Register::FieldValue<decltype(chrl),ChrlVal::v8Bit> v8Bit{};
        }
        ///Synchronous Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sync{}; 
        namespace SyncValC{
        }
        ///Parity Type
        enum class ParVal {
            even=0x00000000,     ///<Even parity
            odd=0x00000001,     ///<Odd parity
            space=0x00000002,     ///<Parity forced to 0 (Space)
            mark=0x00000003,     ///<Parity forced to 1 (Mark)
            no=0x00000004,     ///<No parity
            multidrop=0x00000006,     ///<Multidrop mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,ParVal> par{}; 
        namespace ParValC{
            constexpr Register::FieldValue<decltype(par),ParVal::even> even{};
            constexpr Register::FieldValue<decltype(par),ParVal::odd> odd{};
            constexpr Register::FieldValue<decltype(par),ParVal::space> space{};
            constexpr Register::FieldValue<decltype(par),ParVal::mark> mark{};
            constexpr Register::FieldValue<decltype(par),ParVal::no> no{};
            constexpr Register::FieldValue<decltype(par),ParVal::multidrop> multidrop{};
        }
        ///Number of Stop Bits
        enum class NbstopVal {
            v1Bit=0x00000000,     ///<1 stop bit
            v15Bit=0x00000001,     ///<1.5 stop bit (SYNC = 0) or reserved (SYNC = 1)
            v2Bit=0x00000002,     ///<2 stop bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbstopVal> nbstop{}; 
        namespace NbstopValC{
            constexpr Register::FieldValue<decltype(nbstop),NbstopVal::v1Bit> v1Bit{};
            constexpr Register::FieldValue<decltype(nbstop),NbstopVal::v15Bit> v15Bit{};
            constexpr Register::FieldValue<decltype(nbstop),NbstopVal::v2Bit> v2Bit{};
        }
        ///Channel Mode
        enum class ChmodeVal {
            normal=0x00000000,     ///<Normal Mode
            automatic=0x00000001,     ///<Automatic Echo. Receiver input is connected to the TXD pin.
            localLoopback=0x00000002,     ///<Local Loopback. Transmitter output is connected to the Receiver Input.
            remoteLoopback=0x00000003,     ///<Remote Loopback. RXD pin is internally connected to the TXD pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,ChmodeVal> chmode{}; 
        namespace ChmodeValC{
            constexpr Register::FieldValue<decltype(chmode),ChmodeVal::normal> normal{};
            constexpr Register::FieldValue<decltype(chmode),ChmodeVal::automatic> automatic{};
            constexpr Register::FieldValue<decltype(chmode),ChmodeVal::localLoopback> localLoopback{};
            constexpr Register::FieldValue<decltype(chmode),ChmodeVal::remoteLoopback> remoteLoopback{};
        }
        ///Bit Order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> msbf{}; 
        namespace MsbfValC{
        }
        ///9-bit Character Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mode9{}; 
        namespace Mode9ValC{
        }
        ///Clock Output Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clko{}; 
        namespace ClkoValC{
        }
        ///Oversampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> over{}; 
        namespace OverValC{
        }
        ///Inhibit Non Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inack{}; 
        namespace InackValC{
        }
        ///Disable Successive NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dsnack{}; 
        namespace DsnackValC{
        }
        ///Variable Synchronization of Command/Data Sync Start Frame Delimiter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> varSync{}; 
        namespace VarsyncValC{
        }
        ///INverted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> invdata{}; 
        namespace InvdataValC{
        }
        ///Maximum Number of Automatic Iteration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> maxIteration{}; 
        namespace MaxiterationValC{
        }
        ///Infrared Receive Line Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> filter{}; 
        namespace FilterValC{
        }
        ///Manchester Encoder/Decoder Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> man{}; 
        namespace ManValC{
        }
        ///Manchester Synchronization Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> modsync{}; 
        namespace ModsyncValC{
        }
        ///Start Frame Delimiter Selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> onebit{}; 
        namespace OnebitValC{
        }
    }
    namespace Usart3MrSpiMode{    ///<Mode Register
        using Addr = Register::Address<0x4009c004,0xffeefe00,0,unsigned>;
        ///USART Mode of Operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usartMode{}; 
        namespace UsartmodeValC{
        }
        ///Clock Selection
        enum class UsclksVal {
            mck=0x00000000,     ///<Master Clock MCK is selected
            div=0x00000001,     ///<Internal Clock Divided MCK/DIV (DIV=8) is selected
            sck=0x00000003,     ///<Serial Clock SLK is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,UsclksVal> usclks{}; 
        namespace UsclksValC{
            constexpr Register::FieldValue<decltype(usclks),UsclksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(usclks),UsclksVal::div> div{};
            constexpr Register::FieldValue<decltype(usclks),UsclksVal::sck> sck{};
        }
        ///Character Length.
        enum class ChrlVal {
            v8Bit=0x00000003,     ///<Character length is 8 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ChrlVal> chrl{}; 
        namespace ChrlValC{
            constexpr Register::FieldValue<decltype(chrl),ChrlVal::v8Bit> v8Bit{};
        }
        ///SPI Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpha{}; 
        namespace CphaValC{
        }
        ///SPI Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Wait Read Data Before Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wrdbt{}; 
        namespace WrdbtValC{
        }
    }
    namespace Usart3Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4009c008,0xfef0c000,0,unsigned>;
        ///RXRDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///TXRDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Receiver Break Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        namespace RxbrkValC{
        }
        ///End of Receive Transfer Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmit Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Framing Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///Parity Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        namespace PareValC{
        }
        ///Time-out Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///TXEMPTY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Max number of Repetitions Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        namespace IterValC{
        }
        ///Buffer Empty Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Buffer Full Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Non AcknowledgeInterrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Ring Indicator Input Change Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> riic{}; 
        namespace RiicValC{
        }
        ///Data Set Ready Input Change Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsric{}; 
        namespace DsricValC{
        }
        ///Data Carrier Detect Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dcdic{}; 
        namespace DcdicValC{
        }
        ///Clear to Send Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        namespace CtsicValC{
        }
        ///Manchester Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mane{}; 
        namespace ManeValC{
        }
    }
    namespace Usart3IerSpiMode{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4009c008,0xfffff9dc,0,unsigned>;
        ///RXRDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///TXRDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///TXEMPTY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///SPI Underrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Usart3Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4009c00c,0xfef0c000,0,unsigned>;
        ///RXRDY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///TXRDY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Receiver Break Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        namespace RxbrkValC{
        }
        ///End of Receive Transfer Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmit Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Framing Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///Parity Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        namespace PareValC{
        }
        ///Time-out Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///TXEMPTY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Max number of Repetitions Reached Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        namespace IterValC{
        }
        ///Buffer Empty Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Buffer Full Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Non AcknowledgeInterrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Ring Indicator Input Change Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> riic{}; 
        namespace RiicValC{
        }
        ///Data Set Ready Input Change Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsric{}; 
        namespace DsricValC{
        }
        ///Data Carrier Detect Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dcdic{}; 
        namespace DcdicValC{
        }
        ///Clear to Send Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        namespace CtsicValC{
        }
        ///Manchester Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mane{}; 
        namespace ManeValC{
        }
    }
    namespace Usart3IdrSpiMode{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4009c00c,0xfffff9dc,0,unsigned>;
        ///RXRDY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///TXRDY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///TXEMPTY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///SPI Underrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Usart3Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4009c010,0xfef0c000,0,unsigned>;
        ///RXRDY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///TXRDY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Receiver Break Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        namespace RxbrkValC{
        }
        ///End of Receive Transfer Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmit Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Framing Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///Parity Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        namespace PareValC{
        }
        ///Time-out Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///TXEMPTY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Max number of Repetitions Reached Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        namespace IterValC{
        }
        ///Buffer Empty Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Buffer Full Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Non AcknowledgeInterrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Ring Indicator Input Change Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> riic{}; 
        namespace RiicValC{
        }
        ///Data Set Ready Input Change Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsric{}; 
        namespace DsricValC{
        }
        ///Data Carrier Detect Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dcdic{}; 
        namespace DcdicValC{
        }
        ///Clear to Send Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        namespace CtsicValC{
        }
        ///Manchester Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mane{}; 
        namespace ManeValC{
        }
    }
    namespace Usart3ImrSpiMode{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4009c010,0xfffff9dc,0,unsigned>;
        ///RXRDY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///TXRDY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///TXEMPTY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///SPI Underrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Usart3Csr{    ///<Channel Status Register
        using Addr = Register::Address<0x4009c014,0xfe00c000,0,unsigned>;
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmitter Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Break Received/End of Break
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        namespace RxbrkValC{
        }
        ///End of Receiver Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmitter Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Framing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///Parity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        namespace PareValC{
        }
        ///Receiver Time-out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Max number of Repetitions Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        namespace IterValC{
        }
        ///Transmission Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Reception Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Non AcknowledgeInterrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Ring Indicator Input Change Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> riic{}; 
        namespace RiicValC{
        }
        ///Data Set Ready Input Change Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsric{}; 
        namespace DsricValC{
        }
        ///Data Carrier Detect Input Change Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dcdic{}; 
        namespace DcdicValC{
        }
        ///Clear to Send Input Change Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        namespace CtsicValC{
        }
        ///Image of RI Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ri{}; 
        namespace RiValC{
        }
        ///Image of DSR Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dsr{}; 
        namespace DsrValC{
        }
        ///Image of DCD Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dcd{}; 
        namespace DcdValC{
        }
        ///Image of CTS Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cts{}; 
        namespace CtsValC{
        }
        ///Manchester Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> manerr{}; 
        namespace ManerrValC{
        }
    }
    namespace Usart3CsrSpiMode{    ///<Channel Status Register
        using Addr = Register::Address<0x4009c014,0xfffff9dc,0,unsigned>;
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmitter Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Underrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Usart3Rhr{    ///<Receiver Holding Register
        using Addr = Register::Address<0x4009c018,0xffff7e00,0,unsigned>;
        ///Received Character
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxchr{}; 
        namespace RxchrValC{
        }
        ///Received Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxsynh{}; 
        namespace RxsynhValC{
        }
    }
    namespace Usart3Thr{    ///<Transmitter Holding Register
        using Addr = Register::Address<0x4009c01c,0xffff7e00,0,unsigned>;
        ///Character to be Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txchr{}; 
        namespace TxchrValC{
        }
        ///Sync Field to be transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txsynh{}; 
        namespace TxsynhValC{
        }
    }
    namespace Usart3Brgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0x4009c020,0xfff80000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
        namespace CdValC{
        }
        ///Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> fp{}; 
        namespace FpValC{
        }
    }
    namespace Usart3Rtor{    ///<Receiver Time-out Register
        using Addr = Register::Address<0x4009c024,0xffff0000,0,unsigned>;
        ///Time-out Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> to{}; 
        namespace ToValC{
        }
    }
    namespace Usart3Ttgr{    ///<Transmitter Timeguard Register
        using Addr = Register::Address<0x4009c028,0xffffff00,0,unsigned>;
        ///Timeguard Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tg{}; 
        namespace TgValC{
        }
    }
    namespace Usart3Fidi{    ///<FI DI Ratio Register
        using Addr = Register::Address<0x4009c040,0xfffff800,0,unsigned>;
        ///FI Over DI Ratio Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fiDiRatio{}; 
        namespace FidiratioValC{
        }
    }
    namespace Usart3Ner{    ///<Number of Errors Register
        using Addr = Register::Address<0x4009c044,0xffffff00,0,unsigned>;
        ///Number of Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nbErrors{}; 
        namespace NberrorsValC{
        }
    }
    namespace Usart3If{    ///<IrDA Filter Register
        using Addr = Register::Address<0x4009c04c,0xffffff00,0,unsigned>;
        ///IrDA Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> irdaFilter{}; 
        namespace IrdafilterValC{
        }
    }
    namespace Usart3Man{    ///<Manchester Encoder Decoder Register
        using Addr = Register::Address<0x4009c050,0x8cf0ecf0,0,unsigned>;
        ///Transmitter Preamble Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txPl{}; 
        namespace TxplValC{
        }
        ///Transmitter Preamble Pattern
        enum class TxppVal {
            allOne=0x00000000,     ///<The preamble is composed of '1's
            allZero=0x00000001,     ///<The preamble is composed of '0's
            zeroOne=0x00000002,     ///<The preamble is composed of '01's
            oneZero=0x00000003,     ///<The preamble is composed of '10's
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,TxppVal> txPp{}; 
        namespace TxppValC{
            constexpr Register::FieldValue<decltype(txPp),TxppVal::allOne> allOne{};
            constexpr Register::FieldValue<decltype(txPp),TxppVal::allZero> allZero{};
            constexpr Register::FieldValue<decltype(txPp),TxppVal::zeroOne> zeroOne{};
            constexpr Register::FieldValue<decltype(txPp),TxppVal::oneZero> oneZero{};
        }
        ///Transmitter Manchester Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txMpol{}; 
        namespace TxmpolValC{
        }
        ///Receiver Preamble Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rxPl{}; 
        namespace RxplValC{
        }
        ///Receiver Preamble Pattern detected
        enum class RxppVal {
            allOne=0x00000000,     ///<The preamble is composed of '1's
            allZero=0x00000001,     ///<The preamble is composed of '0's
            zeroOne=0x00000002,     ///<The preamble is composed of '01's
            oneZero=0x00000003,     ///<The preamble is composed of '10's
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,RxppVal> rxPp{}; 
        namespace RxppValC{
            constexpr Register::FieldValue<decltype(rxPp),RxppVal::allOne> allOne{};
            constexpr Register::FieldValue<decltype(rxPp),RxppVal::allZero> allZero{};
            constexpr Register::FieldValue<decltype(rxPp),RxppVal::zeroOne> zeroOne{};
            constexpr Register::FieldValue<decltype(rxPp),RxppVal::oneZero> oneZero{};
        }
        ///Receiver Manchester Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxMpol{}; 
        namespace RxmpolValC{
        }
        ///Must Be Set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> one{}; 
        namespace OneValC{
        }
        ///Drift compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drift{}; 
        namespace DriftValC{
        }
    }
    namespace Usart3Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x4009c0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace Usart3Wpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x4009c0e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
    namespace Usart3Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x4009c100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
        namespace RxptrValC{
        }
    }
    namespace Usart3Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x4009c104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
        namespace RxctrValC{
        }
    }
    namespace Usart3Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x4009c108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
        namespace TxptrValC{
        }
    }
    namespace Usart3Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4009c10c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
        namespace TxctrValC{
        }
    }
    namespace Usart3Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x4009c110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
        namespace RxnptrValC{
        }
    }
    namespace Usart3Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x4009c114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
        namespace RxnctrValC{
        }
    }
    namespace Usart3Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x4009c118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
        namespace TxnptrValC{
        }
    }
    namespace Usart3Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4009c11c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
        namespace TxnctrValC{
        }
    }
    namespace Usart3Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x4009c120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        namespace RxtdisValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
        namespace TxtdisValC{
        }
    }
    namespace Usart3Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x4009c124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
    }
}
