#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal asynchronous receiver
      transmitter
    namespace Nonesr{    ///<UART4_SR
        using Addr = Register::Address<0x40004c00,0xfffffe00,0,unsigned>;
        ///Parity error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Framing error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe{}; 
        ///Noise error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ne{}; 
        ///Overrun error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///IDLE line detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idle{}; 
        ///Read data register not
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Transmission complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Transmit data register
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        ///LIN break detection flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbd{}; 
    }
    namespace Nonedr{    ///<UART4_DR
        using Addr = Register::Address<0x40004c04,0xfffffe00,0,unsigned>;
        ///DR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Nonebrr{    ///<UART4_BRR
        using Addr = Register::Address<0x40004c08,0xffff0000,0,unsigned>;
        ///DIV_Fraction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divFraction{}; 
        ///DIV_Mantissa
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> divMantissa{}; 
    }
    namespace Nonecr1{    ///<UART4_CR1
        using Addr = Register::Address<0x40004c0c,0xffffc000,0,unsigned>;
        ///Send break
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sbk{}; 
        ///Receiver wakeup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rwu{}; 
        ///Receiver enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        ///Transmitter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///IDLE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idleie{}; 
        ///RXNE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///Transmission complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///TXE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///PE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peie{}; 
        ///Parity selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ps{}; 
        ///Parity control enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pce{}; 
        ///Wakeup method
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wake{}; 
        ///Word length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> m{}; 
        ///USART enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ue{}; 
    }
    namespace Nonecr2{    ///<UART4_CR2
        using Addr = Register::Address<0x40004c10,0xffff8f90,0,unsigned>;
        ///Address of the USART node
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> add{}; 
        ///lin break detection length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbdl{}; 
        ///LIN break detection interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lbdie{}; 
        ///STOP bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> stop{}; 
        ///LIN mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linen{}; 
    }
    namespace Nonecr3{    ///<UART4_CR3
        using Addr = Register::Address<0x40004c14,0xffffff30,0,unsigned>;
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eie{}; 
        ///IrDA mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iren{}; 
        ///IrDA low-power
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irlp{}; 
        ///Half-duplex selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hdsel{}; 
        ///DMA enable receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmar{}; 
        ///DMA enable transmitter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmat{}; 
    }
}
