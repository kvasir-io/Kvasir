#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ARM Prime Cell PL011
    namespace Nonedr{    ///<Data Register
        using Addr = Register::Address<0x40048000,0xfffff000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fe{}; 
        namespace FeValC{
        }
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///BE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
        ///OE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        namespace OeValC{
        }
    }
    namespace Nonersr{    ///<Receive Status Register
        using Addr = Register::Address<0x40048004,0xfffffff0,0,unsigned>;
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe{}; 
        namespace FeValC{
        }
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///BE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
        ///OE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oe{}; 
        namespace OeValC{
        }
    }
    namespace Noneecr{    ///<Error Clear Register
        using Addr = Register::Address<0x40048004,0xfffffff0,0,unsigned>;
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe{}; 
        namespace FeValC{
        }
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///BE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
        ///OE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oe{}; 
        namespace OeValC{
        }
    }
    namespace Nonefr{    ///<Flag Register
        using Addr = Register::Address<0x40048018,0xfffffe00,0,unsigned>;
        ///CTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cts{}; 
        namespace CtsValC{
        }
        ///DSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsr{}; 
        namespace DsrValC{
        }
        ///DCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcd{}; 
        namespace DcdValC{
        }
        ///BUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///RXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxfe{}; 
        namespace RxfeValC{
        }
        ///TXFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txff{}; 
        namespace TxffValC{
        }
        ///RXFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxff{}; 
        namespace RxffValC{
        }
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///RI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ri{}; 
        namespace RiValC{
        }
    }
    namespace Noneilpr{    ///<IrDA Low-power Counter register
        using Addr = Register::Address<0x40048020,0xffffff00,0,unsigned>;
        ///ILPDVSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ilpdvsr{}; 
        namespace IlpdvsrValC{
        }
    }
    namespace Noneibdr{    ///<Integer Baud Rate Register
        using Addr = Register::Address<0x40048024,0xffff0000,0,unsigned>;
        ///BAUDDIVINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bauddivint{}; 
        namespace BauddivintValC{
        }
    }
    namespace Nonefbdr{    ///<Fractional Baud Rate Register
        using Addr = Register::Address<0x40048028,0xffffffc0,0,unsigned>;
        ///BAUDDIVFRAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> bauddivfrac{}; 
        namespace BauddivfracValC{
        }
    }
    namespace NonelcrH{    ///<Line Control Register
        using Addr = Register::Address<0x4004802c,0xffffff00,0,unsigned>;
        ///BRK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> brk{}; 
        namespace BrkValC{
        }
        ///PEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///EPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eps{}; 
        namespace EpsValC{
        }
        ///STP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stp2{}; 
        namespace Stp2ValC{
        }
        ///FEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fen{}; 
        namespace FenValC{
        }
        ///WLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> wlen{}; 
        namespace WlenValC{
        }
        ///SPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sps{}; 
        namespace SpsValC{
        }
    }
    namespace Nonecr{    ///<Cntrol Register
        using Addr = Register::Address<0x40048030,0xffff30f8,0,unsigned>;
        ///UARTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uarten{}; 
        namespace UartenValC{
        }
        ///SIREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> siren{}; 
        namespace SirenValC{
        }
        ///SIRLP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sirlp{}; 
        namespace SirlpValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///RXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        ///DTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dtr{}; 
        namespace DtrValC{
        }
        ///RTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rts{}; 
        namespace RtsValC{
        }
        ///RTSEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rtsen{}; 
        namespace RtsenValC{
        }
        ///CTSEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctsen{}; 
        namespace CtsenValC{
        }
    }
    namespace Noneifls{    ///<Interrupt FIFO Level Select Register
        using Addr = Register::Address<0x40048034,0xffffffc0,0,unsigned>;
        ///TXIFLSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txiflsel{}; 
        namespace TxiflselValC{
        }
        ///RXIFLSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> rxiflsel{}; 
        namespace RxiflselValC{
        }
    }
    namespace Noneimsc{    ///<Interrupt Mask set_Clear Register
        using Addr = Register::Address<0x40048038,0xfffff800,0,unsigned>;
        ///RIMIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rimim{}; 
        namespace RimimValC{
        }
        ///CTSMIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsmim{}; 
        namespace CtsmimValC{
        }
        ///DCDMIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdmim{}; 
        namespace DcdmimValC{
        }
        ///DSRMIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrmim{}; 
        namespace DsrmimValC{
        }
        ///RXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxim{}; 
        namespace RximValC{
        }
        ///TXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txim{}; 
        namespace TximValC{
        }
        ///RTIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtim{}; 
        namespace RtimValC{
        }
        ///FEIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feim{}; 
        namespace FeimValC{
        }
        ///PEIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peim{}; 
        namespace PeimValC{
        }
        ///BEIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> beim{}; 
        namespace BeimValC{
        }
        ///OEIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oeim{}; 
        namespace OeimValC{
        }
    }
    namespace Noneris{    ///<Raw Interrupt Status Register
        using Addr = Register::Address<0x4004803c,0xfffff800,0,unsigned>;
        ///RIRMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rirmis{}; 
        namespace RirmisValC{
        }
        ///CTSRMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsrmis{}; 
        namespace CtsrmisValC{
        }
        ///DCDRMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdrmis{}; 
        namespace DcdrmisValC{
        }
        ///DSRRMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrrmis{}; 
        namespace DsrrmisValC{
        }
        ///RXRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxris{}; 
        namespace RxrisValC{
        }
        ///TXRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txris{}; 
        namespace TxrisValC{
        }
        ///RTRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtris{}; 
        namespace RtrisValC{
        }
        ///FERIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feris{}; 
        namespace FerisValC{
        }
        ///PERIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peris{}; 
        namespace PerisValC{
        }
        ///BERIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> beris{}; 
        namespace BerisValC{
        }
        ///OERIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oeris{}; 
        namespace OerisValC{
        }
    }
    namespace Nonemis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40048040,0xfffff800,0,unsigned>;
        ///RIMMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rimmis{}; 
        namespace RimmisValC{
        }
        ///CTSMMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsmmis{}; 
        namespace CtsmmisValC{
        }
        ///DCDMMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdmmis{}; 
        namespace DcdmmisValC{
        }
        ///DSRMMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrmmis{}; 
        namespace DsrmmisValC{
        }
        ///RXMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxmis{}; 
        namespace RxmisValC{
        }
        ///TXMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txmis{}; 
        namespace TxmisValC{
        }
        ///RTMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtmis{}; 
        namespace RtmisValC{
        }
        ///FEMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> femis{}; 
        namespace FemisValC{
        }
        ///PEMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pemis{}; 
        namespace PemisValC{
        }
        ///BEMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bemis{}; 
        namespace BemisValC{
        }
        ///OEMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oemis{}; 
        namespace OemisValC{
        }
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40048044,0xfffff800,0,unsigned>;
        ///RIMIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rimic{}; 
        namespace RimicValC{
        }
        ///CTSMIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsmic{}; 
        namespace CtsmicValC{
        }
        ///DCDMIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdmic{}; 
        namespace DcdmicValC{
        }
        ///DSRMIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrmic{}; 
        namespace DsrmicValC{
        }
        ///RXIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxic{}; 
        namespace RxicValC{
        }
        ///TXIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txic{}; 
        namespace TxicValC{
        }
        ///RTIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtic{}; 
        namespace RticValC{
        }
        ///FEIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feic{}; 
        namespace FeicValC{
        }
        ///PEIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peic{}; 
        namespace PeicValC{
        }
        ///BEIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> beic{}; 
        namespace BeicValC{
        }
        ///OEIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oeic{}; 
        namespace OeicValC{
        }
    }
    namespace Nonedmacr{    ///<DMA Control Register
        using Addr = Register::Address<0x40048048,0xfffffff8,0,unsigned>;
        ///RXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        namespace RxdmaeValC{
        }
        ///TXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmae{}; 
        namespace TxdmaeValC{
        }
        ///DMAONERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaonerr{}; 
        namespace DmaonerrValC{
        }
    }
}
