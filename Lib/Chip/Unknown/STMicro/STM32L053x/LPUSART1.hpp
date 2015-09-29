#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal synchronous asynchronous receiver
      transmitter
    namespace Nonecr1{    ///<Control register 1
        using Addr = Register::Address<0x40004800,0xec008000,0,unsigned>;
        ///Word length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> m1{}; 
        ///Driver Enable assertion
              time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> deat4{}; 
        ///DEAT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> deat3{}; 
        ///DEAT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> deat2{}; 
        ///DEAT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> deat1{}; 
        ///DEAT0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> deat0{}; 
        ///Driver Enable de-assertion
              time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dedt4{}; 
        ///DEDT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dedt3{}; 
        ///DEDT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dedt2{}; 
        ///DEDT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dedt1{}; 
        ///DEDT0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dedt0{}; 
        ///Character match interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmie{}; 
        ///Mute mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mme{}; 
        ///Word length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> m0{}; 
        ///Receiver wakeup method
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wake{}; 
        ///Parity control enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pce{}; 
        ///Parity selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ps{}; 
        ///PE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peie{}; 
        ///interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///Transmission complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///RXNE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///IDLE interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idleie{}; 
        ///Transmitter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Receiver enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        ///USART enable in Stop mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uesm{}; 
        ///USART enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ue{}; 
    }
    namespace Nonecr2{    ///<Control register 2
        using Addr = Register::Address<0x40004804,0x00f047ef,0,unsigned>;
        ///Address of the USART node
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> add47{}; 
        ///Address of the USART node
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> add03{}; 
        ///Most significant bit first
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> msbfirst{}; 
        ///Binary data inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tainv{}; 
        ///TX pin active level
              inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txinv{}; 
        ///RX pin active level
              inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxinv{}; 
        ///Swap TX/RX pins
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swap{}; 
        ///STOP bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clken{}; 
        ///7-bit Address Detection/4-bit Address
              Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addm7{}; 
    }
    namespace Nonecr3{    ///<Control register 3
        using Addr = Register::Address<0x40004808,0xff8f0836,0,unsigned>;
        ///Wakeup from Stop mode interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wufie{}; 
        ///Wakeup from Stop mode interrupt flag
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> wus{}; 
        ///Driver enable polarity
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dep{}; 
        ///Driver enable mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dem{}; 
        ///DMA Disable on Reception
              Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ddre{}; 
        ///Overrun Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrdis{}; 
        ///CTS interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctsie{}; 
        ///CTS enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctse{}; 
        ///RTS enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rtse{}; 
        ///DMA enable transmitter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmat{}; 
        ///DMA enable receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmar{}; 
        ///Half-duplex selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hdsel{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eie{}; 
    }
    namespace Nonebrr{    ///<Baud rate register
        using Addr = Register::Address<0x4000480c,0xfff00000,0,unsigned>;
        ///BRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> brr{}; 
    }
    namespace Nonerqr{    ///<Request register
        using Addr = Register::Address<0x40004818,0xfffffff1,0,unsigned>;
        ///Receive data flush request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxfrq{}; 
        ///Mute mode request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mmrq{}; 
        ///Send break request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbkrq{}; 
    }
    namespace Noneisr{    ///<Interrupt & status
          register
        using Addr = Register::Address<0x4000481c,0xff80f900,0,unsigned>;
        ///REACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> reack{}; 
        ///TEACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> teack{}; 
        ///WUF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///RWU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rwu{}; 
        ///SBKF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sbkf{}; 
        ///CMF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmf{}; 
        ///BUSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> busy{}; 
        ///CTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cts{}; 
        ///CTSIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctsif{}; 
        ///TXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        ///TC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        ///RXNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///IDLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idle{}; 
        ///ORE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///NF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nf{}; 
        ///FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe{}; 
        ///PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
    }
    namespace Noneicr{    ///<Interrupt flag clear register
        using Addr = Register::Address<0x40004820,0xffedfda0,0,unsigned>;
        ///Wakeup from Stop mode clear
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wucf{}; 
        ///Character match clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmcf{}; 
        ///CTS clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctscf{}; 
        ///Transmission complete clear
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tccf{}; 
        ///Idle line detected clear
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idlecf{}; 
        ///Overrun error clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orecf{}; 
        ///Noise detected clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ncf{}; 
        ///Framing error clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fecf{}; 
        ///Parity error clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pecf{}; 
    }
    namespace Nonerdr{    ///<Receive data register
        using Addr = Register::Address<0x40004824,0xfffffe00,0,unsigned>;
        ///Receive data value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rdr{}; 
    }
    namespace Nonetdr{    ///<Transmit data register
        using Addr = Register::Address<0x40004828,0xfffffe00,0,unsigned>;
        ///Transmit data value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tdr{}; 
    }
}
