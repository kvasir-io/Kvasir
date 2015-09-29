#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal synchronous asynchronous receiver       transmitter
    namespace Nonecr1{    ///<Control register 1
        using Addr = Register::Address<0x40013800,0xf0000000,0,unsigned>;
        ///End of Block interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eobie{}; 
        ///Receiver timeout interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rtoie{}; 
        ///Driver Enable assertion               time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> deat{}; 
        ///Driver Enable deassertion               time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dedt{}; 
        ///Oversampling mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> over8{}; 
        ///Character match interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmie{}; 
        ///Mute mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mme{}; 
        ///Word length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> m{}; 
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
        ///Transmission complete interrupt               enable
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
        using Addr = Register::Address<0x40013804,0x0000008f,0,unsigned>;
        ///Address of the USART node
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> add4{}; 
        ///Address of the USART node
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> add0{}; 
        ///Receiver timeout enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtoen{}; 
        ///Auto baud rate mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> abrmod{}; 
        ///Auto baud rate enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> abren{}; 
        ///Most significant bit first
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> msbfirst{}; 
        ///Binary data inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> datainv{}; 
        ///TX pin active level               inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txinv{}; 
        ///RX pin active level               inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxinv{}; 
        ///Swap TX/RX pins
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swap{}; 
        ///LIN mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linen{}; 
        ///STOP bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Clock polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///Last bit clock pulse
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbcl{}; 
        ///LIN break detection interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lbdie{}; 
        ///LIN break detection length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbdl{}; 
        ///7-bit Address Detection/4-bit Address               Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addm7{}; 
    }
    namespace Nonecr3{    ///<Control register 3
        using Addr = Register::Address<0x40013808,0xff810000,0,unsigned>;
        ///Wakeup from Stop mode interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wufie{}; 
        ///Wakeup from Stop mode interrupt flag               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> wus{}; 
        ///Smartcard auto-retry count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> scarcnt{}; 
        ///Driver enable polarity               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dep{}; 
        ///Driver enable mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dem{}; 
        ///DMA Disable on Reception               Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ddre{}; 
        ///Overrun Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrdis{}; 
        ///One sample bit method               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> onebit{}; 
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
        ///Smartcard mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scen{}; 
        ///Smartcard NACK enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Half-duplex selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hdsel{}; 
        ///IrDA low-power
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irlp{}; 
        ///IrDA mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iren{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eie{}; 
    }
    namespace Nonebrr{    ///<Baud rate register
        using Addr = Register::Address<0x4001380c,0xffff0000,0,unsigned>;
        ///mantissa of USARTDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> divMantissa{}; 
        ///fraction of USARTDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divFraction{}; 
    }
    namespace Nonegtpr{    ///<Guard time and prescaler           register
        using Addr = Register::Address<0x40013810,0xffff0000,0,unsigned>;
        ///Guard time value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gt{}; 
        ///Prescaler value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonertor{    ///<Receiver timeout register
        using Addr = Register::Address<0x40013814,0x00000000,0,unsigned>;
        ///Block Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> blen{}; 
        ///Receiver timeout value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rto{}; 
    }
    namespace Nonerqr{    ///<Request register
        using Addr = Register::Address<0x40013818,0xffffffe0,0,unsigned>;
        ///Transmit data flush               request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txfrq{}; 
        ///Receive data flush request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxfrq{}; 
        ///Mute mode request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mmrq{}; 
        ///Send break request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbkrq{}; 
        ///Auto baud rate request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> abrrq{}; 
    }
    namespace Noneisr{    ///<Interrupt & status           register
        using Addr = Register::Address<0x4001381c,0xff802000,0,unsigned>;
        ///Receive enable acknowledge               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> reack{}; 
        ///Transmit enable acknowledge               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> teack{}; 
        ///Wakeup from Stop mode flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///Receiver wakeup from Mute               mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rwu{}; 
        ///Send break flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sbkf{}; 
        ///character match flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmf{}; 
        ///Busy flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Auto baud rate flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abrf{}; 
        ///Auto baud rate error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> abre{}; 
        ///End of block flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eobf{}; 
        ///Receiver timeout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtof{}; 
        ///CTS flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cts{}; 
        ///CTS interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctsif{}; 
        ///LIN break detection flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbdf{}; 
        ///Transmit data register               empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        ///Transmission complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Read data register not               empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Idle line detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idle{}; 
        ///Overrun error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///Noise detected flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nf{}; 
        ///Framing error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe{}; 
        ///Parity error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
    }
    namespace Noneicr{    ///<Interrupt flag clear register
        using Addr = Register::Address<0x40013820,0xffede4a0,0,unsigned>;
        ///Wakeup from Stop mode clear               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wucf{}; 
        ///Character match clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmcf{}; 
        ///End of timeout clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eobcf{}; 
        ///Receiver timeout clear               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtocf{}; 
        ///CTS clear flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctscf{}; 
        ///LIN break detection clear               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbdcf{}; 
        ///Transmission complete clear               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tccf{}; 
        ///Idle line detected clear               flag
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
        using Addr = Register::Address<0x40013824,0xfffffe00,0,unsigned>;
        ///Receive data value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rdr{}; 
    }
    namespace Nonetdr{    ///<Transmit data register
        using Addr = Register::Address<0x40013828,0xfffffe00,0,unsigned>;
        ///Transmit data value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tdr{}; 
    }
}
