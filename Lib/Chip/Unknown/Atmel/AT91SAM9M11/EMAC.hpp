#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet MAC 10/100
    namespace EmacNcr{    ///<Network Control Register
        using Addr = Register::Address<0xfffbc000,0xfffff800,0,unsigned>;
        ///LoopBack
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lb{}; 
        ///Loopback local
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> llb{}; 
        ///Receive enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        ///Transmit enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Management port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mpe{}; 
        ///Clear statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrstat{}; 
        ///Increment statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> incstat{}; 
        ///Write enable for statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> westat{}; 
        ///Back pressure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bp{}; 
        ///Start transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstart{}; 
        ///Transmit halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thalt{}; 
    }
    namespace EmacNcfg{    ///<Network Configuration Register
        using Addr = Register::Address<0xfffbc004,0xfff00204,0,unsigned>;
        ///Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spd{}; 
        ///Full Duplex
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fd{}; 
        ///Jumbo Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jframe{}; 
        ///Copy All Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caf{}; 
        ///No Broadcast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nbc{}; 
        ///Multicast Hash Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mti{}; 
        ///Unicast Hash Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uni{}; 
        ///Receive 1536 bytes frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> big{}; 
        ///MDC clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> clk{}; 
        ///Retry test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rty{}; 
        ///Pause Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pae{}; 
        ///Receive Buffer Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rbof{}; 
        ///Receive Length field Checking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rlce{}; 
        ///Discard Receive FCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> drfcs{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> efrhd{}; 
        ///Ignore RX FCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> irxfcs{}; 
    }
    namespace EmacNsr{    ///<Network Status Register
        using Addr = Register::Address<0xfffbc008,0xfffffff9,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mdio{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idle{}; 
    }
    namespace EmacTsr{    ///<Transmit Status Register
        using Addr = Register::Address<0xfffbc014,0xffffff80,0,unsigned>;
        ///Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ubr{}; 
        ///Collision Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> col{}; 
        ///Retry Limit exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rle{}; 
        ///Transmit Go
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgo{}; 
        ///Buffers exhausted mid frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comp{}; 
        ///Transmit Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> und{}; 
    }
    namespace EmacRbqp{    ///<Receive Buffer Queue Pointer Register
        using Addr = Register::Address<0xfffbc018,0x00000003,0,unsigned>;
        ///Receive buffer queue pointer address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacTbqp{    ///<Transmit Buffer Queue Pointer Register
        using Addr = Register::Address<0xfffbc01c,0x00000003,0,unsigned>;
        ///Transmit buffer queue pointer address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacRsr{    ///<Receive Status Register
        using Addr = Register::Address<0xfffbc020,0xfffffff8,0,unsigned>;
        ///Buffer Not Available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace EmacIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffbc024,0xffffc300,0,unsigned>;
        ///Management Frame Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        ///Transmit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
    }
    namespace EmacIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffbc028,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
    }
    namespace EmacIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffbc02c,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
    }
    namespace EmacImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffbc030,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
    }
    namespace EmacMan{    ///<Phy Maintenance Register
        using Addr = Register::Address<0xfffbc034,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> code{}; 
        ///Register Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> rega{}; 
        ///PHY Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> phya{}; 
        ///Read-write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> rw{}; 
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> sof{}; 
    }
    namespace EmacPtr{    ///<Pause Time Register
        using Addr = Register::Address<0xfffbc038,0xffff0000,0,unsigned>;
        ///Pause Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptime{}; 
    }
    namespace EmacPfr{    ///<Pause Frames Received Register
        using Addr = Register::Address<0xfffbc03c,0xffff0000,0,unsigned>;
        ///Pause Frames received OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frok{}; 
    }
    namespace EmacFto{    ///<Frames Transmitted Ok Register
        using Addr = Register::Address<0xfffbc040,0xff000000,0,unsigned>;
        ///Frames Transmitted OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ftok{}; 
    }
    namespace EmacScf{    ///<Single Collision Frames Register
        using Addr = Register::Address<0xfffbc044,0xffff0000,0,unsigned>;
        ///Single Collision Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> scf{}; 
    }
    namespace EmacMcf{    ///<Multiple Collision Frames Register
        using Addr = Register::Address<0xfffbc048,0xffff0000,0,unsigned>;
        ///Multicollision Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcf{}; 
    }
    namespace EmacFro{    ///<Frames Received Ok Register
        using Addr = Register::Address<0xfffbc04c,0xff000000,0,unsigned>;
        ///Frames Received OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> frok{}; 
    }
    namespace EmacFcse{    ///<Frame Check Sequence Errors Register
        using Addr = Register::Address<0xfffbc050,0xffffff00,0,unsigned>;
        ///Frame Check Sequence Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fcse{}; 
    }
    namespace EmacAle{    ///<Alignment Errors Register
        using Addr = Register::Address<0xfffbc054,0xffffff00,0,unsigned>;
        ///Alignment Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ale{}; 
    }
    namespace EmacDtf{    ///<Deferred Transmission Frames Register
        using Addr = Register::Address<0xfffbc058,0xffff0000,0,unsigned>;
        ///Deferred Transmission Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dtf{}; 
    }
    namespace EmacLcol{    ///<Late Collisions Register
        using Addr = Register::Address<0xfffbc05c,0xffffff00,0,unsigned>;
        ///Late Collisions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcol{}; 
    }
    namespace EmacEcol{    ///<Excessive Collisions Register
        using Addr = Register::Address<0xfffbc060,0xffffff00,0,unsigned>;
        ///Excessive Collisions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> excol{}; 
    }
    namespace EmacTund{    ///<Transmit Underrun Errors Register
        using Addr = Register::Address<0xfffbc064,0xffffff00,0,unsigned>;
        ///Transmit Underruns
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tund{}; 
    }
    namespace EmacCse{    ///<Carrier Sense Errors Register
        using Addr = Register::Address<0xfffbc068,0xffffff00,0,unsigned>;
        ///Carrier Sense Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cse{}; 
    }
    namespace EmacRre{    ///<Receive Resource Errors Register
        using Addr = Register::Address<0xfffbc06c,0xffff0000,0,unsigned>;
        ///Receive Resource Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rre{}; 
    }
    namespace EmacRov{    ///<Receive Overrun Errors Register
        using Addr = Register::Address<0xfffbc070,0xffffff00,0,unsigned>;
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rovr{}; 
    }
    namespace EmacRse{    ///<Receive Symbol Errors Register
        using Addr = Register::Address<0xfffbc074,0xffffff00,0,unsigned>;
        ///Receive Symbol Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rse{}; 
    }
    namespace EmacEle{    ///<Excessive Length Errors Register
        using Addr = Register::Address<0xfffbc078,0xffffff00,0,unsigned>;
        ///Excessive Length Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exl{}; 
    }
    namespace EmacRja{    ///<Receive Jabbers Register
        using Addr = Register::Address<0xfffbc07c,0xffffff00,0,unsigned>;
        ///Receive Jabbers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rjb{}; 
    }
    namespace EmacUsf{    ///<Undersize Frames Register
        using Addr = Register::Address<0xfffbc080,0xffffff00,0,unsigned>;
        ///Undersize frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usf{}; 
    }
    namespace EmacSte{    ///<SQE Test Errors Register
        using Addr = Register::Address<0xfffbc084,0xffffff00,0,unsigned>;
        ///SQE test errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sqer{}; 
    }
    namespace EmacRle{    ///<Received Length Field Mismatch Register
        using Addr = Register::Address<0xfffbc088,0xffffff00,0,unsigned>;
        ///Receive Length Field Mismatch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rlfm{}; 
    }
    namespace EmacHrb{    ///<Hash Register Bottom [31:0] Register
        using Addr = Register::Address<0xfffbc090,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacHrt{    ///<Hash Register Top [63:32] Register
        using Addr = Register::Address<0xfffbc094,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa1b{    ///<Specific Address 1 Bottom Register
        using Addr = Register::Address<0xfffbc098,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa1t{    ///<Specific Address 1 Top Register
        using Addr = Register::Address<0xfffbc09c,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa2b{    ///<Specific Address 2 Bottom Register
        using Addr = Register::Address<0xfffbc0a0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa2t{    ///<Specific Address 2 Top Register
        using Addr = Register::Address<0xfffbc0a4,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa3b{    ///<Specific Address 3 Bottom Register
        using Addr = Register::Address<0xfffbc0a8,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa3t{    ///<Specific Address 3 Top Register
        using Addr = Register::Address<0xfffbc0ac,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa4b{    ///<Specific Address 4 Bottom Register
        using Addr = Register::Address<0xfffbc0b0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacSa4t{    ///<Specific Address 4 Top Register
        using Addr = Register::Address<0xfffbc0b4,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace EmacTid{    ///<Type ID Checking Register
        using Addr = Register::Address<0xfffbc0b8,0xffff0000,0,unsigned>;
        ///Type ID checking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
    }
    namespace EmacUsrio{    ///<User Input/Output Register
        using Addr = Register::Address<0xfffbc0c0,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmii{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clken{}; 
    }
}
