#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Asynchronous Receiver Transmitter 0
    namespace Uart0Cr{    ///<Control Register
        using Addr = Register::Address<0xf8040000,0xfffffe03,0,unsigned>;
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
    namespace Uart0Mr{    ///<Mode Register
        using Addr = Register::Address<0xf8040004,0xffff31ff,0,unsigned>;
        ///Parity Type
        enum class parVal {
            even=0x00000000,     ///<Even Parity
            odd=0x00000001,     ///<Odd Parity
            space=0x00000002,     ///<Space: parity forced to 0
            mark=0x00000003,     ///<Mark: parity forced to 1
            no=0x00000004,     ///<No Parity
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
    namespace Uart0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8040008,0xfffffd1c,0,unsigned>;
        ///Enable RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Enable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Enable Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Enable Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Enable Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Enable TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Uart0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf804000c,0xfffffd1c,0,unsigned>;
        ///Disable RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Disable Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Disable Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Disable Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Disable TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Uart0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf8040010,0xfffffd1c,0,unsigned>;
        ///Mask RXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Mask Overrun Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Mask Framing Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Mask Parity Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Mask TXEMPTY Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Uart0Sr{    ///<Status Register
        using Addr = Register::Address<0xf8040014,0xfffffd1c,0,unsigned>;
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
        ///Transmitter Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Uart0Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xf8040018,0xffffff00,0,unsigned>;
        ///Received Character
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxchr{}; 
    }
    namespace Uart0Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xf804001c,0xffffff00,0,unsigned>;
        ///Character to be Transmitted
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txchr{}; 
    }
    namespace Uart0Brgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0xf8040020,0xffff0000,0,unsigned>;
        ///Clock Divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
    }
}
