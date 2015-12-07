#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal synchronous asynchronous receiver
      transmitter
    namespace Nonecr1{    ///<Control register 1
        using Addr = Register::Address<0x40013800,0xe0000000,0,unsigned>;
        ///Word length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> m1{}; 
        namespace M1ValC{
        }
        ///End of Block interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> eobie{}; 
        namespace EobieValC{
        }
        ///Receiver timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rtoie{}; 
        namespace RtoieValC{
        }
        ///Driver Enable assertion
              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> deat4{}; 
        namespace Deat4ValC{
        }
        ///DEAT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> deat3{}; 
        namespace Deat3ValC{
        }
        ///DEAT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> deat2{}; 
        namespace Deat2ValC{
        }
        ///DEAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> deat1{}; 
        namespace Deat1ValC{
        }
        ///DEAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> deat0{}; 
        namespace Deat0ValC{
        }
        ///Driver Enable de-assertion
              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dedt4{}; 
        namespace Dedt4ValC{
        }
        ///DEDT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dedt3{}; 
        namespace Dedt3ValC{
        }
        ///DEDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dedt2{}; 
        namespace Dedt2ValC{
        }
        ///DEDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dedt1{}; 
        namespace Dedt1ValC{
        }
        ///DEDT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dedt0{}; 
        namespace Dedt0ValC{
        }
        ///Oversampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> over8{}; 
        namespace Over8ValC{
        }
        ///Character match interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmie{}; 
        namespace CmieValC{
        }
        ///Mute mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mme{}; 
        namespace MmeValC{
        }
        ///Word length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> m0{}; 
        namespace M0ValC{
        }
        ///Receiver wakeup method
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wake{}; 
        namespace WakeValC{
        }
        ///Parity control enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pce{}; 
        namespace PceValC{
        }
        ///Parity selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
        ///PE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peie{}; 
        namespace PeieValC{
        }
        ///interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        namespace TxeieValC{
        }
        ///Transmission complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///RXNE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxneie{}; 
        namespace RxneieValC{
        }
        ///IDLE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idleie{}; 
        namespace IdleieValC{
        }
        ///Transmitter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        namespace TeValC{
        }
        ///Receiver enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        namespace ReValC{
        }
        ///USART enable in Stop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uesm{}; 
        namespace UesmValC{
        }
        ///USART enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ue{}; 
        namespace UeValC{
        }
    }
    namespace Nonecr2{    ///<Control register 2
        using Addr = Register::Address<0x40013804,0x0000008f,0,unsigned>;
        ///Address of the USART node
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> add47{}; 
        namespace Add47ValC{
        }
        ///Address of the USART node
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> add03{}; 
        namespace Add03ValC{
        }
        ///Receiver timeout enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtoen{}; 
        namespace RtoenValC{
        }
        ///Auto baud rate mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> abrmod1{}; 
        namespace Abrmod1ValC{
        }
        ///ABRMOD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> abrmod0{}; 
        namespace Abrmod0ValC{
        }
        ///Auto baud rate enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> abren{}; 
        namespace AbrenValC{
        }
        ///Most significant bit first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> msbfirst{}; 
        namespace MsbfirstValC{
        }
        ///Binary data inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tainv{}; 
        namespace TainvValC{
        }
        ///TX pin active level
              inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txinv{}; 
        namespace TxinvValC{
        }
        ///RX pin active level
              inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxinv{}; 
        namespace RxinvValC{
        }
        ///Swap TX/RX pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swap{}; 
        namespace SwapValC{
        }
        ///LIN mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> linen{}; 
        namespace LinenValC{
        }
        ///STOP bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Clock phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpha{}; 
        namespace CphaValC{
        }
        ///Last bit clock pulse
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbcl{}; 
        namespace LbclValC{
        }
        ///LIN break detection interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lbdie{}; 
        namespace LbdieValC{
        }
        ///LIN break detection length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbdl{}; 
        namespace LbdlValC{
        }
        ///7-bit Address Detection/4-bit Address
              Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addm7{}; 
        namespace Addm7ValC{
        }
    }
    namespace Nonecr3{    ///<Control register 3
        using Addr = Register::Address<0x40013808,0xff810000,0,unsigned>;
        ///Wakeup from Stop mode interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wufie{}; 
        namespace WufieValC{
        }
        ///Wakeup from Stop mode interrupt flag
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> wus{}; 
        namespace WusValC{
        }
        ///Smartcard auto-retry count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> scarcnt{}; 
        namespace ScarcntValC{
        }
        ///Driver enable polarity
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dep{}; 
        namespace DepValC{
        }
        ///Driver enable mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dem{}; 
        namespace DemValC{
        }
        ///DMA Disable on Reception
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ddre{}; 
        namespace DdreValC{
        }
        ///Overrun Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrdis{}; 
        namespace OvrdisValC{
        }
        ///One sample bit method
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> onebit{}; 
        namespace OnebitValC{
        }
        ///CTS interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctsie{}; 
        namespace CtsieValC{
        }
        ///CTS enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctse{}; 
        namespace CtseValC{
        }
        ///RTS enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rtse{}; 
        namespace RtseValC{
        }
        ///DMA enable transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmat{}; 
        namespace DmatValC{
        }
        ///DMA enable receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmar{}; 
        namespace DmarValC{
        }
        ///Smartcard mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scen{}; 
        namespace ScenValC{
        }
        ///Smartcard NACK enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Half-duplex selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hdsel{}; 
        namespace HdselValC{
        }
        ///Ir low-power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irlp{}; 
        namespace IrlpValC{
        }
        ///Ir mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iren{}; 
        namespace IrenValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eie{}; 
        namespace EieValC{
        }
    }
    namespace Nonebrr{    ///<Baud rate register
        using Addr = Register::Address<0x4001380c,0xffff0000,0,unsigned>;
        ///DIV_Mantissa
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> divMantissa{}; 
        namespace DivmantissaValC{
        }
        ///DIV_Fraction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divFraction{}; 
        namespace DivfractionValC{
        }
    }
    namespace Nonegtpr{    ///<Guard time and prescaler
          register
        using Addr = Register::Address<0x40013810,0xffff0000,0,unsigned>;
        ///Guard time value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gt{}; 
        namespace GtValC{
        }
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
    }
    namespace Nonertor{    ///<Receiver timeout register
        using Addr = Register::Address<0x40013814,0x00000000,0,unsigned>;
        ///Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> blen{}; 
        namespace BlenValC{
        }
        ///Receiver timeout value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rto{}; 
        namespace RtoValC{
        }
    }
    namespace Nonerqr{    ///<Request register
        using Addr = Register::Address<0x40013818,0xffffffe0,0,unsigned>;
        ///Transmit data flush
              request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txfrq{}; 
        namespace TxfrqValC{
        }
        ///Receive data flush request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxfrq{}; 
        namespace RxfrqValC{
        }
        ///Mute mode request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mmrq{}; 
        namespace MmrqValC{
        }
        ///Send break request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbkrq{}; 
        namespace SbkrqValC{
        }
        ///Auto baud rate request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> abrrq{}; 
        namespace AbrrqValC{
        }
    }
    namespace Noneisr{    ///<Interrupt & status
          register
        using Addr = Register::Address<0x4001381c,0xff802000,0,unsigned>;
        ///REACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> reack{}; 
        namespace ReackValC{
        }
        ///TEACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> teack{}; 
        namespace TeackValC{
        }
        ///WUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wuf{}; 
        namespace WufValC{
        }
        ///RWU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rwu{}; 
        namespace RwuValC{
        }
        ///SBKF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sbkf{}; 
        namespace SbkfValC{
        }
        ///CMF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmf{}; 
        namespace CmfValC{
        }
        ///BUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///ABRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abrf{}; 
        namespace AbrfValC{
        }
        ///ABRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> abre{}; 
        namespace AbreValC{
        }
        ///EOBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eobf{}; 
        namespace EobfValC{
        }
        ///RTOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtof{}; 
        namespace RtofValC{
        }
        ///CTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cts{}; 
        namespace CtsValC{
        }
        ///CTSIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctsif{}; 
        namespace CtsifValC{
        }
        ///LBDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbdf{}; 
        namespace LbdfValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///TC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        namespace TcValC{
        }
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idle{}; 
        namespace IdleValC{
        }
        ///ORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        ///NF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nf{}; 
        namespace NfValC{
        }
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe{}; 
        namespace FeValC{
        }
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
    }
    namespace Noneicr{    ///<Interrupt flag clear register
        using Addr = Register::Address<0x40013820,0xffede4a0,0,unsigned>;
        ///Wakeup from Stop mode clear
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wucf{}; 
        namespace WucfValC{
        }
        ///Character match clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmcf{}; 
        namespace CmcfValC{
        }
        ///End of block clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eobcf{}; 
        namespace EobcfValC{
        }
        ///Receiver timeout clear
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtocf{}; 
        namespace RtocfValC{
        }
        ///CTS clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctscf{}; 
        namespace CtscfValC{
        }
        ///LIN break detection clear
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lbdcf{}; 
        namespace LbdcfValC{
        }
        ///Transmission complete clear
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tccf{}; 
        namespace TccfValC{
        }
        ///Idle line detected clear
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idlecf{}; 
        namespace IdlecfValC{
        }
        ///Overrun error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orecf{}; 
        namespace OrecfValC{
        }
        ///Noise detected clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ncf{}; 
        namespace NcfValC{
        }
        ///Framing error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fecf{}; 
        namespace FecfValC{
        }
        ///Parity error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pecf{}; 
        namespace PecfValC{
        }
    }
    namespace Nonerdr{    ///<Receive data register
        using Addr = Register::Address<0x40013824,0xfffffe00,0,unsigned>;
        ///Receive data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rdr{}; 
        namespace RdrValC{
        }
    }
    namespace Nonetdr{    ///<Transmit data register
        using Addr = Register::Address<0x40013828,0xfffffe00,0,unsigned>;
        ///Transmit data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tdr{}; 
        namespace TdrValC{
        }
    }
}
