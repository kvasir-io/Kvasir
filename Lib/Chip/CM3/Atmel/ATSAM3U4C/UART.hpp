#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver Transmitter
    namespace UartCr{    ///<Control Register
        using Addr = Register::Address<0x400e0600,0xfffffe03,0,unsigned>;
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
    }
    namespace UartMr{    ///<Mode Register
        using Addr = Register::Address<0x400e0604,0xffff31ff,0,unsigned>;
        ///Parity Type
        enum class parVal {
            even=0x00000000,     ///<Even parity
            odd=0x00000001,     ///<Odd parity
            space=0x00000002,     ///<Space: parity forced to 0
            mark=0x00000003,     ///<Mark: parity forced to 1
            no=0x00000004,     ///<No parity
        };
        namespace parValC{
            constexpr MPL::Value<parVal,parVal::even> even{};
            constexpr MPL::Value<parVal,parVal::odd> odd{};
            constexpr MPL::Value<parVal,parVal::space> space{};
            constexpr MPL::Value<parVal,parVal::mark> mark{};
            constexpr MPL::Value<parVal,parVal::no> no{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,parVal> par{}; 
        ///Channel Mode
        enum class chmodeVal {
            normal=0x00000000,     ///<Normal Mode
            automatic=0x00000001,     ///<Automatic Echo
            localLoopback=0x00000002,     ///<Local Loopback
            remoteLoopback=0x00000003,     ///<Remote Loopback
        };
        namespace chmodeValC{
            constexpr MPL::Value<chmodeVal,chmodeVal::normal> normal{};
            constexpr MPL::Value<chmodeVal,chmodeVal::automatic> automatic{};
            constexpr MPL::Value<chmodeVal,chmodeVal::localLoopback> localLoopback{};
            constexpr MPL::Value<chmodeVal,chmodeVal::remoteLoopback> remoteLoopback{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,chmodeVal> chmode{}; 
    }
    namespace UartIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e0608,0xffffe504,0,unsigned>;
        ///Enable RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Enable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Enable End of Receive Transfer Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Enable End of Transmit Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Enable Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Enable Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Enable Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Enable TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Enable Buffer Empty Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Enable Buffer Full Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace UartIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e060c,0xffffe504,0,unsigned>;
        ///Disable RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Disable End of Receive Transfer Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Disable End of Transmit Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Disable Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Disable Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Disable Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Disable TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Disable Buffer Empty Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Disable Buffer Full Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace UartImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e0610,0xffffe504,0,unsigned>;
        ///Mask RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Mask End of Receive Transfer Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Mask End of Transmit Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Mask Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Mask Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Mask Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Mask TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Mask TXBUFE Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Mask RXBUFF Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace UartSr{    ///<Status Register
        using Addr = Register::Address<0x400e0614,0xffffe504,0,unsigned>;
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
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
        ///Transmitter Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Transmission Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Receive Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace UartRhr{    ///<Receive Holding Register
        using Addr = Register::Address<0x400e0618,0xffffff00,0,unsigned>;
        ///Received Character
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxchr{}; 
    }
    namespace UartThr{    ///<Transmit Holding Register
        using Addr = Register::Address<0x400e061c,0xffffff00,0,unsigned>;
        ///Character to be Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txchr{}; 
    }
    namespace UartBrgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0x400e0620,0xffff0000,0,unsigned>;
        ///Clock Divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
    }
    namespace UartRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x400e0700,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace UartRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x400e0704,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace UartTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x400e0708,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace UartTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x400e070c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace UartRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x400e0710,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace UartRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x400e0714,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace UartTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x400e0718,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace UartTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x400e071c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace UartPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x400e0720,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace UartPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x400e0724,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
