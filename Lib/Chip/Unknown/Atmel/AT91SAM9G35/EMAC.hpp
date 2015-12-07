#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet MAC 10/100
    namespace EmacNcr{    ///<Network Control Register
        using Addr = Register::Address<0xf802c000,0xfffff800,0,unsigned>;
        ///LoopBack
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lb{}; 
        namespace LbValC{
        }
        ///Loopback local
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> llb{}; 
        namespace LlbValC{
        }
        ///Receive enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        namespace ReValC{
        }
        ///Transmit enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        namespace TeValC{
        }
        ///Management port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mpe{}; 
        namespace MpeValC{
        }
        ///Clear statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrstat{}; 
        namespace ClrstatValC{
        }
        ///Increment statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> incstat{}; 
        namespace IncstatValC{
        }
        ///Write enable for statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> westat{}; 
        namespace WestatValC{
        }
        ///Back pressure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bp{}; 
        namespace BpValC{
        }
        ///Start transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstart{}; 
        namespace TstartValC{
        }
        ///Transmit halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thalt{}; 
        namespace ThaltValC{
        }
    }
    namespace EmacNcfgr{    ///<Network Configuration Register
        using Addr = Register::Address<0xf802c004,0xfff00204,0,unsigned>;
        ///Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spd{}; 
        namespace SpdValC{
        }
        ///Full Duplex
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fd{}; 
        namespace FdValC{
        }
        ///Jumbo Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jframe{}; 
        namespace JframeValC{
        }
        ///Copy All Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caf{}; 
        namespace CafValC{
        }
        ///No Broadcast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nbc{}; 
        namespace NbcValC{
        }
        ///Multicast Hash Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mti{}; 
        namespace MtiValC{
        }
        ///Unicast Hash Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uni{}; 
        namespace UniValC{
        }
        ///Receive 1536 bytes frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> big{}; 
        namespace BigValC{
        }
        ///MDC clock divider
        enum class ClkVal {
            mck8=0x00000000,     ///<MCK divided by 8 (MCK up to 20 MHz).
            mck16=0x00000001,     ///<MCK divided by 16 (MCK up to 40 MHz).
            mck32=0x00000002,     ///<MCK divided by 32 (MCK up to 80 MHz).
            mck64=0x00000003,     ///<MCK divided by 64 (MCK up to 160 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ClkVal> clk{}; 
        namespace ClkValC{
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck8> mck8{};
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck16> mck16{};
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck32> mck32{};
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck64> mck64{};
        }
        ///Retry test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rty{}; 
        namespace RtyValC{
        }
        ///Pause Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pae{}; 
        namespace PaeValC{
        }
        ///Receive Buffer Offset
        enum class RbofVal {
            offset0=0x00000000,     ///<No offset from start of receive buffer.
            offset1=0x00000001,     ///<One-byte offset from start of receive buffer.
            offset2=0x00000002,     ///<Two-byte offset from start of receive buffer.
            offset3=0x00000003,     ///<Three-byte offset from start of receive buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,RbofVal> rbof{}; 
        namespace RbofValC{
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset0> offset0{};
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset1> offset1{};
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset2> offset2{};
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset3> offset3{};
        }
        ///Receive Length field Checking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rlce{}; 
        namespace RlceValC{
        }
        ///Discard Receive FCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> drfcs{}; 
        namespace DrfcsValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> efrhd{}; 
        namespace EfrhdValC{
        }
        ///Ignore RX FCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> irxfcs{}; 
        namespace IrxfcsValC{
        }
    }
    namespace EmacNsr{    ///<Network Status Register
        using Addr = Register::Address<0xf802c008,0xfffffff9,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mdio{}; 
        namespace MdioValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idle{}; 
        namespace IdleValC{
        }
    }
    namespace EmacTsr{    ///<Transmit Status Register
        using Addr = Register::Address<0xf802c014,0xffffff80,0,unsigned>;
        ///Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ubr{}; 
        namespace UbrValC{
        }
        ///Collision Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> col{}; 
        namespace ColValC{
        }
        ///Retry Limit exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rles{}; 
        namespace RlesValC{
        }
        ///Transmit Go
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgo{}; 
        namespace TgoValC{
        }
        ///Buffers exhausted mid frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bex{}; 
        namespace BexValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
        ///Transmit Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> und{}; 
        namespace UndValC{
        }
    }
    namespace EmacRbqp{    ///<Receive Buffer Queue Pointer Register
        using Addr = Register::Address<0xf802c018,0x00000003,0,unsigned>;
        ///Receive buffer queue pointer address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacTbqp{    ///<Transmit Buffer Queue Pointer Register
        using Addr = Register::Address<0xf802c01c,0x00000003,0,unsigned>;
        ///Transmit buffer queue pointer address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacRsr{    ///<Receive Status Register
        using Addr = Register::Address<0xf802c020,0xfffffff8,0,unsigned>;
        ///Buffer Not Available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
    }
    namespace EmacIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf802c024,0xffffc300,0,unsigned>;
        ///Management Frame Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        namespace RlexValC{
        }
        ///Transmit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfre{}; 
        namespace PfreValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace EmacIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf802c028,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        namespace RleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace EmacIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf802c02c,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        namespace RleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace EmacImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf802c030,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        namespace RleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace EmacMan{    ///<Phy Maintenance Register
        using Addr = Register::Address<0xf802c034,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
        ///Register Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> rega{}; 
        namespace RegaValC{
        }
        ///PHY Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> phya{}; 
        namespace PhyaValC{
        }
        ///Read-write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> rw{}; 
        namespace RwValC{
        }
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
    }
    namespace EmacPtr{    ///<Pause Time Register
        using Addr = Register::Address<0xf802c038,0xffff0000,0,unsigned>;
        ///Pause Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptime{}; 
        namespace PtimeValC{
        }
    }
    namespace EmacPfr{    ///<Pause Frames Received Register
        using Addr = Register::Address<0xf802c03c,0xffff0000,0,unsigned>;
        ///Pause Frames received OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frok{}; 
        namespace FrokValC{
        }
    }
    namespace EmacFto{    ///<Frames Transmitted Ok Register
        using Addr = Register::Address<0xf802c040,0xff000000,0,unsigned>;
        ///Frames Transmitted OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ftok{}; 
        namespace FtokValC{
        }
    }
    namespace EmacScf{    ///<Single Collision Frames Register
        using Addr = Register::Address<0xf802c044,0xffff0000,0,unsigned>;
        ///Single Collision Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> scf{}; 
        namespace ScfValC{
        }
    }
    namespace EmacMcf{    ///<Multiple Collision Frames Register
        using Addr = Register::Address<0xf802c048,0xffff0000,0,unsigned>;
        ///Multicollision Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcf{}; 
        namespace McfValC{
        }
    }
    namespace EmacFro{    ///<Frames Received Ok Register
        using Addr = Register::Address<0xf802c04c,0xff000000,0,unsigned>;
        ///Frames Received OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> frok{}; 
        namespace FrokValC{
        }
    }
    namespace EmacFcse{    ///<Frame Check Sequence Errors Register
        using Addr = Register::Address<0xf802c050,0xffffff00,0,unsigned>;
        ///Frame Check Sequence Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fcse{}; 
        namespace FcseValC{
        }
    }
    namespace EmacAle{    ///<Alignment Errors Register
        using Addr = Register::Address<0xf802c054,0xffffff00,0,unsigned>;
        ///Alignment Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ale{}; 
        namespace AleValC{
        }
    }
    namespace EmacDtf{    ///<Deferred Transmission Frames Register
        using Addr = Register::Address<0xf802c058,0xffff0000,0,unsigned>;
        ///Deferred Transmission Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dtf{}; 
        namespace DtfValC{
        }
    }
    namespace EmacLcol{    ///<Late Collisions Register
        using Addr = Register::Address<0xf802c05c,0xffffff00,0,unsigned>;
        ///Late Collisions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcol{}; 
        namespace LcolValC{
        }
    }
    namespace EmacEcol{    ///<Excessive Collisions Register
        using Addr = Register::Address<0xf802c060,0xffffff00,0,unsigned>;
        ///Excessive Collisions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> excol{}; 
        namespace ExcolValC{
        }
    }
    namespace EmacTund{    ///<Transmit Underrun Errors Register
        using Addr = Register::Address<0xf802c064,0xffffff00,0,unsigned>;
        ///Transmit Underruns
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
    }
    namespace EmacCse{    ///<Carrier Sense Errors Register
        using Addr = Register::Address<0xf802c068,0xffffff00,0,unsigned>;
        ///Carrier Sense Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cse{}; 
        namespace CseValC{
        }
    }
    namespace EmacRre{    ///<Receive Resource Errors Register
        using Addr = Register::Address<0xf802c06c,0xffff0000,0,unsigned>;
        ///Receive Resource Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rre{}; 
        namespace RreValC{
        }
    }
    namespace EmacRov{    ///<Receive Overrun Errors Register
        using Addr = Register::Address<0xf802c070,0xffffff00,0,unsigned>;
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
    }
    namespace EmacRse{    ///<Receive Symbol Errors Register
        using Addr = Register::Address<0xf802c074,0xffffff00,0,unsigned>;
        ///Receive Symbol Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rse{}; 
        namespace RseValC{
        }
    }
    namespace EmacEle{    ///<Excessive Length Errors Register
        using Addr = Register::Address<0xf802c078,0xffffff00,0,unsigned>;
        ///Excessive Length Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exl{}; 
        namespace ExlValC{
        }
    }
    namespace EmacRja{    ///<Receive Jabbers Register
        using Addr = Register::Address<0xf802c07c,0xffffff00,0,unsigned>;
        ///Receive Jabbers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rjb{}; 
        namespace RjbValC{
        }
    }
    namespace EmacUsf{    ///<Undersize Frames Register
        using Addr = Register::Address<0xf802c080,0xffffff00,0,unsigned>;
        ///Undersize frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usf{}; 
        namespace UsfValC{
        }
    }
    namespace EmacSte{    ///<SQE Test Errors Register
        using Addr = Register::Address<0xf802c084,0xffffff00,0,unsigned>;
        ///SQE test errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sqer{}; 
        namespace SqerValC{
        }
    }
    namespace EmacRle{    ///<Received Length Field Mismatch Register
        using Addr = Register::Address<0xf802c088,0xffffff00,0,unsigned>;
        ///Receive Length Field Mismatch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rlfm{}; 
        namespace RlfmValC{
        }
    }
    namespace EmacHrb{    ///<Hash Register Bottom [31:0] Register
        using Addr = Register::Address<0xf802c090,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacHrt{    ///<Hash Register Top [63:32] Register
        using Addr = Register::Address<0xf802c094,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa1b{    ///<Specific Address 1 Bottom Register
        using Addr = Register::Address<0xf802c098,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa1t{    ///<Specific Address 1 Top Register
        using Addr = Register::Address<0xf802c09c,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa2b{    ///<Specific Address 2 Bottom Register
        using Addr = Register::Address<0xf802c0a0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa2t{    ///<Specific Address 2 Top Register
        using Addr = Register::Address<0xf802c0a4,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa3b{    ///<Specific Address 3 Bottom Register
        using Addr = Register::Address<0xf802c0a8,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa3t{    ///<Specific Address 3 Top Register
        using Addr = Register::Address<0xf802c0ac,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa4b{    ///<Specific Address 4 Bottom Register
        using Addr = Register::Address<0xf802c0b0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacSa4t{    ///<Specific Address 4 Top Register
        using Addr = Register::Address<0xf802c0b4,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace EmacTid{    ///<Type ID Checking Register
        using Addr = Register::Address<0xf802c0b8,0xffff0000,0,unsigned>;
        ///Type ID checking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
        namespace TidValC{
        }
    }
    namespace EmacUsrio{    ///<User Input/Output Register
        using Addr = Register::Address<0xf802c0c0,0xfffffffc,0,unsigned>;
        ///Reduce MII
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmii{}; 
        namespace RmiiValC{
        }
        ///Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
    }
}
