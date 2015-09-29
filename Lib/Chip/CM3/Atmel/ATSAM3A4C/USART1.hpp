#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Synchronous Asynchronous Receiver Transmitter 1
    namespace Usart1Cr{    ///<Control Register
        using Addr = Register::Address<0x4009c000,0xffc30003,0,unsigned>;
        ///Reset Receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstrx{}; 
        ///Reset Transmitter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsttx{}; 
        ///Receiver Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Receiver Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///Transmitter Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Transmitter Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///Reset Status Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rststa{}; 
        ///Start Break
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sttbrk{}; 
        ///Stop Break
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> stpbrk{}; 
        ///Start Time-out
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sttto{}; 
        ///Send Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> senda{}; 
        ///Reset Iterations
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstit{}; 
        ///Reset Non Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rstnack{}; 
        ///Rearm Time-out
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> retto{}; 
        ///Request to Send Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rtsen{}; 
        ///Request to Send Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rtsdis{}; 
        ///Abort LIN Transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> linabt{}; 
        ///Send LIN Wakeup Signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> linwkup{}; 
    }
    namespace Usart1CrSpiMode{    ///<Control Register
        using Addr = Register::Address<0x4009c000,0xfff3fe03,0,unsigned>;
        ///Reset Receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstrx{}; 
        ///Reset Transmitter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsttx{}; 
        ///Receiver Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Receiver Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///Transmitter Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Transmitter Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///Reset Status Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rststa{}; 
        ///Force SPI Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fcs{}; 
        ///Release SPI Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rcs{}; 
    }
    namespace Usart1Mr{    ///<Mode Register
        using Addr = Register::Address<0x4009c004,0x08000000,0,unsigned>;
        ///USART Mode of Operation
        enum class usartModeVal {
            normal=0x00000000,     ///<Normal mode
            rs485=0x00000001,     ///<RS485
            hwHandshaking=0x00000002,     ///<Hardware Handshaking
            is07816T0=0x00000004,     ///<IS07816 Protocol: T = 0
            is07816T1=0x00000006,     ///<IS07816 Protocol: T = 1
            irda=0x00000008,     ///<IrDA
            linMaster=0x0000000a,     ///<LIN Master
            linSlave=0x0000000b,     ///<LIN Slave
            spiMaster=0x0000000e,     ///<SPI Master
            spiSlave=0x0000000f,     ///<SPI Slave
        };
        namespace usartModeValC{
            constexpr MPL::Value<usartModeVal,usartModeVal::normal> normal{};
            constexpr MPL::Value<usartModeVal,usartModeVal::rs485> rs485{};
            constexpr MPL::Value<usartModeVal,usartModeVal::hwHandshaking> hwHandshaking{};
            constexpr MPL::Value<usartModeVal,usartModeVal::is07816T0> is07816T0{};
            constexpr MPL::Value<usartModeVal,usartModeVal::is07816T1> is07816T1{};
            constexpr MPL::Value<usartModeVal,usartModeVal::irda> irda{};
            constexpr MPL::Value<usartModeVal,usartModeVal::linMaster> linMaster{};
            constexpr MPL::Value<usartModeVal,usartModeVal::linSlave> linSlave{};
            constexpr MPL::Value<usartModeVal,usartModeVal::spiMaster> spiMaster{};
            constexpr MPL::Value<usartModeVal,usartModeVal::spiSlave> spiSlave{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,usartModeVal> usartMode{}; 
        ///Clock Selection
        enum class usclksVal {
            mck=0x00000000,     ///<Master Clock MCK is selected
            div=0x00000001,     ///<Internal Clock Divided MCK/DIV (DIV=8) is selected
            sck=0x00000003,     ///<Serial Clock SLK is selected
        };
        namespace usclksValC{
            constexpr MPL::Value<usclksVal,usclksVal::mck> mck{};
            constexpr MPL::Value<usclksVal,usclksVal::div> div{};
            constexpr MPL::Value<usclksVal,usclksVal::sck> sck{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,usclksVal> usclks{}; 
        ///Character Length.
        enum class chrlVal {
            v5Bit=0x00000000,     ///<Character length is 5 bits
            v6Bit=0x00000001,     ///<Character length is 6 bits
            v7Bit=0x00000002,     ///<Character length is 7 bits
            v8Bit=0x00000003,     ///<Character length is 8 bits
        };
        namespace chrlValC{
            constexpr MPL::Value<chrlVal,chrlVal::v5Bit> v5Bit{};
            constexpr MPL::Value<chrlVal,chrlVal::v6Bit> v6Bit{};
            constexpr MPL::Value<chrlVal,chrlVal::v7Bit> v7Bit{};
            constexpr MPL::Value<chrlVal,chrlVal::v8Bit> v8Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,chrlVal> chrl{}; 
        ///Synchronous Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sync{}; 
        ///Parity Type
        enum class parVal {
            even=0x00000000,     ///<Even parity
            odd=0x00000001,     ///<Odd parity
            space=0x00000002,     ///<Parity forced to 0 (Space)
            mark=0x00000003,     ///<Parity forced to 1 (Mark)
            no=0x00000004,     ///<No parity
            multidrop=0x00000006,     ///<Multidrop mode
        };
        namespace parValC{
            constexpr MPL::Value<parVal,parVal::even> even{};
            constexpr MPL::Value<parVal,parVal::odd> odd{};
            constexpr MPL::Value<parVal,parVal::space> space{};
            constexpr MPL::Value<parVal,parVal::mark> mark{};
            constexpr MPL::Value<parVal,parVal::no> no{};
            constexpr MPL::Value<parVal,parVal::multidrop> multidrop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,parVal> par{}; 
        ///Number of Stop Bits
        enum class nbstopVal {
            v1Bit=0x00000000,     ///<1 stop bit
            v15Bit=0x00000001,     ///<1.5 stop bit (SYNC = 0) or reserved (SYNC = 1)
            v2Bit=0x00000002,     ///<2 stop bits
        };
        namespace nbstopValC{
            constexpr MPL::Value<nbstopVal,nbstopVal::v1Bit> v1Bit{};
            constexpr MPL::Value<nbstopVal,nbstopVal::v15Bit> v15Bit{};
            constexpr MPL::Value<nbstopVal,nbstopVal::v2Bit> v2Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,nbstopVal> nbstop{}; 
        ///Channel Mode
        enum class chmodeVal {
            normal=0x00000000,     ///<Normal Mode
            automatic=0x00000001,     ///<Automatic Echo. Receiver input is connected to the TXD pin.
            localLoopback=0x00000002,     ///<Local Loopback. Transmitter output is connected to the Receiver Input.
            remoteLoopback=0x00000003,     ///<Remote Loopback. RXD pin is internally connected to the TXD pin.
        };
        namespace chmodeValC{
            constexpr MPL::Value<chmodeVal,chmodeVal::normal> normal{};
            constexpr MPL::Value<chmodeVal,chmodeVal::automatic> automatic{};
            constexpr MPL::Value<chmodeVal,chmodeVal::localLoopback> localLoopback{};
            constexpr MPL::Value<chmodeVal,chmodeVal::remoteLoopback> remoteLoopback{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,chmodeVal> chmode{}; 
        ///Bit Order
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> msbf{}; 
        ///9-bit Character Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mode9{}; 
        ///Clock Output Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clko{}; 
        ///Oversampling Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> over{}; 
        ///Inhibit Non Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inack{}; 
        ///Disable Successive NACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dsnack{}; 
        ///Variable Synchronization of Command/Data Sync Start Frame Delimiter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> varSync{}; 
        ///INverted Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> invdata{}; 
        ///Maximum Number of Automatic Iteration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> maxIteration{}; 
        ///Infrared Receive Line Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> filter{}; 
        ///Manchester Encoder/Decoder Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> man{}; 
        ///Manchester Synchronization Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> modsync{}; 
        ///Start Frame Delimiter Selector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> onebit{}; 
    }
    namespace Usart1MrSpiMode{    ///<Mode Register
        using Addr = Register::Address<0x4009c004,0xffeefe00,0,unsigned>;
        ///USART Mode of Operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usartMode{}; 
        ///Clock Selection
        enum class usclksVal {
            mck=0x00000000,     ///<Master Clock MCK is selected
            div=0x00000001,     ///<Internal Clock Divided MCK/DIV (DIV=8) is selected
            sck=0x00000003,     ///<Serial Clock SLK is selected
        };
        namespace usclksValC{
            constexpr MPL::Value<usclksVal,usclksVal::mck> mck{};
            constexpr MPL::Value<usclksVal,usclksVal::div> div{};
            constexpr MPL::Value<usclksVal,usclksVal::sck> sck{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,usclksVal> usclks{}; 
        ///Character Length.
        enum class chrlVal {
            v8Bit=0x00000003,     ///<Character length is 8 bits
        };
        namespace chrlValC{
            constexpr MPL::Value<chrlVal,chrlVal::v8Bit> v8Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,chrlVal> chrl{}; 
        ///SPI Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///SPI Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Wait Read Data Before Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wrdbt{}; 
    }
    namespace Usart1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4009c008,0xfef7c000,0,unsigned>;
        ///RXRDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Break Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receive Transfer Interrupt Enable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Interrupt Enable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max number of Repetitions Reached Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Buffer Empty Interrupt Enable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Buffer Full Interrupt Enable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non Acknowledge Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Manchester Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mane{}; 
    }
    namespace Usart1IerSpiMode{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4009c008,0xfffff9dc,0,unsigned>;
        ///RXRDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///TXEMPTY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///SPI Underrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace Usart1IerLinMode{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4009c008,0xc1ff1c1c,0,unsigned>;
        ///RXRDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///LIN Break Sent or LIN Break Received Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> linbk{}; 
        ///LIN Identifier Sent or LIN Identifier Received Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linid{}; 
        ///LIN Transfer Completed Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lintc{}; 
        ///LIN Bus Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> linbe{}; 
        ///LIN Inconsistent Synch Field Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> linisfe{}; 
        ///LIN Identifier Parity Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> linipe{}; 
        ///LIN Checksum Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> lince{}; 
        ///LIN Slave Not Responding Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> linsnre{}; 
    }
    namespace Usart1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4009c00c,0xfef7c000,0,unsigned>;
        ///RXRDY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Break Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receive Transfer Interrupt Disable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Interrupt Disable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max number of Repetitions Reached Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Buffer Empty Interrupt Disable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Buffer Full Interrupt Disable (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non Acknowledge Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Manchester Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mane{}; 
    }
    namespace Usart1IdrSpiMode{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4009c00c,0xfffff9dc,0,unsigned>;
        ///RXRDY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///TXEMPTY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///SPI Underrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace Usart1IdrLinMode{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4009c00c,0xc1ff1c1c,0,unsigned>;
        ///RXRDY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///LIN Break Sent or LIN Break Received Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> linbk{}; 
        ///LIN Identifier Sent or LIN Identifier Received Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linid{}; 
        ///LIN Transfer Completed Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lintc{}; 
        ///LIN Bus Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> linbe{}; 
        ///LIN Inconsistent Synch Field Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> linisfe{}; 
        ///LIN Identifier Parity Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> linipe{}; 
        ///LIN Checksum Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> lince{}; 
        ///LIN Slave Not Responding Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> linsnre{}; 
    }
    namespace Usart1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4009c010,0xfef7c000,0,unsigned>;
        ///RXRDY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Break Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receive Transfer Interrupt Mask (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Interrupt Mask (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max number of Repetitions Reached Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Buffer Empty Interrupt Mask (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Buffer Full Interrupt Mask (available in all USART modes of operation)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non Acknowledge Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Manchester Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mane{}; 
    }
    namespace Usart1ImrSpiMode{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4009c010,0xfffff9dc,0,unsigned>;
        ///RXRDY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///TXEMPTY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///SPI Underrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace Usart1ImrLinMode{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4009c010,0xc1ff1c1c,0,unsigned>;
        ///RXRDY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///LIN Break Sent or LIN Break Received Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> linbk{}; 
        ///LIN Identifier Sent or LIN Identifier Received Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linid{}; 
        ///LIN Transfer Completed Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lintc{}; 
        ///LIN Bus Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> linbe{}; 
        ///LIN Inconsistent Synch Field Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> linisfe{}; 
        ///LIN Identifier Parity Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> linipe{}; 
        ///LIN Checksum Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> lince{}; 
        ///LIN Slave Not Responding Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> linsnre{}; 
    }
    namespace Usart1Csr{    ///<Channel Status Register
        using Addr = Register::Address<0x4009c014,0xfe77c000,0,unsigned>;
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Break Received/End of Break
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receiver Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmitter Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Receiver Time-out
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Transmitter Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max number of Repetitions Reached
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Transmission Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Reception Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non Acknowledge Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Image of CTS Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cts{}; 
        ///Manchester Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> manerr{}; 
    }
    namespace Usart1CsrSpiMode{    ///<Channel Status Register
        using Addr = Register::Address<0x4009c014,0xfffff9dc,0,unsigned>;
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Transmitter Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Underrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace Usart1CsrLinMode{    ///<Channel Status Register
        using Addr = Register::Address<0x4009c014,0xc17f1c1c,0,unsigned>;
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Overrun Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Receiver Time-out
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Transmitter Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///LIN Break Sent or LIN Break Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> linbk{}; 
        ///LIN Identifier Sent or LIN Identifier Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linid{}; 
        ///LIN Transfer Completed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lintc{}; 
        ///LIN Bus Line Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> linbls{}; 
        ///LIN Bit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> linbe{}; 
        ///LIN Inconsistent Synch Field Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> linisfe{}; 
        ///LIN Identifier Parity Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> linipe{}; 
        ///LIN Checksum Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> lince{}; 
        ///LIN Slave Not Responding Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> linsnre{}; 
    }
    namespace Usart1Rhr{    ///<Receiver Holding Register
        using Addr = Register::Address<0x4009c018,0xffff7e00,0,unsigned>;
        ///Received Character
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxchr{}; 
        ///Received Sync
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxsynh{}; 
    }
    namespace Usart1Thr{    ///<Transmitter Holding Register
        using Addr = Register::Address<0x4009c01c,0xffff7e00,0,unsigned>;
        ///Character to be Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txchr{}; 
        ///Sync Field to be transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txsynh{}; 
    }
    namespace Usart1Brgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0x4009c020,0xfff80000,0,unsigned>;
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
        ///Fractional Part
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> fp{}; 
    }
    namespace Usart1Rtor{    ///<Receiver Time-out Register
        using Addr = Register::Address<0x4009c024,0xfffe0000,0,unsigned>;
        ///Time-out Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> to{}; 
    }
    namespace Usart1Ttgr{    ///<Transmitter Timeguard Register
        using Addr = Register::Address<0x4009c028,0xffffff00,0,unsigned>;
        ///Timeguard Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tg{}; 
    }
    namespace Usart1Fidi{    ///<FI DI Ratio Register
        using Addr = Register::Address<0x4009c040,0xfffff800,0,unsigned>;
        ///FI Over DI Ratio Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fiDiRatio{}; 
    }
    namespace Usart1Ner{    ///<Number of Errors Register
        using Addr = Register::Address<0x4009c044,0xffffff00,0,unsigned>;
        ///Number of Errors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nbErrors{}; 
    }
    namespace Usart1If{    ///<IrDA Filter Register
        using Addr = Register::Address<0x4009c04c,0xffffff00,0,unsigned>;
        ///IrDA Filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> irdaFilter{}; 
    }
    namespace Usart1Man{    ///<Manchester Encoder Decoder Register
        using Addr = Register::Address<0x4009c050,0x8cf0ecf0,0,unsigned>;
        ///Transmitter Preamble Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txPl{}; 
        ///Transmitter Preamble Pattern
        enum class txPpVal {
            allOne=0x00000000,     ///<The preamble is composed of '1's
            allZero=0x00000001,     ///<The preamble is composed of '0's
            zeroOne=0x00000002,     ///<The preamble is composed of '01's
            oneZero=0x00000003,     ///<The preamble is composed of '10's
        };
        namespace txPpValC{
            constexpr MPL::Value<txPpVal,txPpVal::allOne> allOne{};
            constexpr MPL::Value<txPpVal,txPpVal::allZero> allZero{};
            constexpr MPL::Value<txPpVal,txPpVal::zeroOne> zeroOne{};
            constexpr MPL::Value<txPpVal,txPpVal::oneZero> oneZero{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,txPpVal> txPp{}; 
        ///Transmitter Manchester Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txMpol{}; 
        ///Receiver Preamble Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rxPl{}; 
        ///Receiver Preamble Pattern detected
        enum class rxPpVal {
            allOne=0x00000000,     ///<The preamble is composed of '1's
            allZero=0x00000001,     ///<The preamble is composed of '0's
            zeroOne=0x00000002,     ///<The preamble is composed of '01's
            oneZero=0x00000003,     ///<The preamble is composed of '10's
        };
        namespace rxPpValC{
            constexpr MPL::Value<rxPpVal,rxPpVal::allOne> allOne{};
            constexpr MPL::Value<rxPpVal,rxPpVal::allZero> allZero{};
            constexpr MPL::Value<rxPpVal,rxPpVal::zeroOne> zeroOne{};
            constexpr MPL::Value<rxPpVal,rxPpVal::oneZero> oneZero{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,rxPpVal> rxPp{}; 
        ///Receiver Manchester Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxMpol{}; 
        ///Must Be Set to 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> one{}; 
        ///Drift compensation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drift{}; 
    }
    namespace Usart1Linmr{    ///<LIN Mode Register
        using Addr = Register::Address<0x4009c054,0xfffe0000,0,unsigned>;
        ///LIN Node Action
        enum class nactVal {
            publish=0x00000000,     ///<The USART transmits the response.
            subscribe=0x00000001,     ///<The USART receives the response.
            ignore=0x00000002,     ///<The USART does not transmit and does not receive the response.
        };
        namespace nactValC{
            constexpr MPL::Value<nactVal,nactVal::publish> publish{};
            constexpr MPL::Value<nactVal,nactVal::subscribe> subscribe{};
            constexpr MPL::Value<nactVal,nactVal::ignore> ignore{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,nactVal> nact{}; 
        ///Parity Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pardis{}; 
        ///Checksum Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chkdis{}; 
        ///Checksum Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chktyp{}; 
        ///Data Length Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlm{}; 
        ///Frame Slot Mode Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fsdis{}; 
        ///Wakeup Signal Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wkuptyp{}; 
        ///Data Length Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///PDC Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdcm{}; 
    }
    namespace Usart1Linir{    ///<LIN Identifier Register
        using Addr = Register::Address<0x4009c058,0xffffff00,0,unsigned>;
        ///Identifier Character
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idchr{}; 
    }
    namespace Usart1Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x4009c0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Usart1Wpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x4009c0e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace Usart1Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x4009c100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Usart1Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x4009c104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Usart1Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x4009c108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Usart1Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4009c10c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Usart1Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x4009c110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Usart1Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x4009c114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Usart1Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x4009c118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Usart1Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4009c11c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Usart1Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x4009c120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace Usart1Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x4009c124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
