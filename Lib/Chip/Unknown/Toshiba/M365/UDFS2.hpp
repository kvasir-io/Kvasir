#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//UDC2(USB -Spec2.0 Device contoller)
    namespace Udfs2Adr{    ///<UDC2 Address State
        using Addr = Register::Address<0x40008200,0xffff0080,0x00000000,unsigned>;
        ///DEV_ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> devAdr{}; 
        ///DEFAULT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> default_{}; 
        ///ADDRESSED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> addressed{}; 
        ///CONFIGURED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> configured{}; 
        ///SUSPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> suspend{}; 
        ///CUR_SPEED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curSpeed{}; 
        ///EP_BI_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epBiMode{}; 
        ///STAGE_ERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stageErr{}; 
    }
    namespace Udfs2Frm{    ///<UDC2 Frame
        using Addr = Register::Address<0x40008204,0xffff4800,0x00000000,unsigned>;
        ///FRAME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///F_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fStatus{}; 
        ///CREATE_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> createSof{}; 
    }
    namespace Udfs2Cmd{    ///<UDC2 Command
        using Addr = Register::Address<0x4000820c,0xffff7000,0x00000000,unsigned>;
        ///COM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> com{}; 
        ///EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ep{}; 
        ///RX_NULLPKT_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxNullpktEp{}; 
        ///INT_TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intToggle{}; 
    }
    namespace Udfs2Brq{    ///<UDC2 bRequest-bmRequest Type
        using Addr = Register::Address<0x40008210,0xffff0000,0x00000000,unsigned>;
        ///RECIPIENT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recipient{}; 
        ///REQ_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reqType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
        ///REQUESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> requeset{}; 
    }
    namespace Udfs2Wvl{    ///<UDC2 wValue
        using Addr = Register::Address<0x40008214,0xffff0000,0x00000000,unsigned>;
        ///VALUE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> value{}; 
    }
    namespace Udfs2Widx{    ///<UDC2 wIndex
        using Addr = Register::Address<0x40008218,0xffff0000,0x00000000,unsigned>;
        ///INDEX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> index{}; 
    }
    namespace Udfs2Wlgth{    ///<UDC2 wLength
        using Addr = Register::Address<0x4000821c,0xffff0000,0x00000000,unsigned>;
        ///LENGTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> length{}; 
    }
    namespace Udfs2Int{    ///<UDC2 INT
        using Addr = Register::Address<0x40008220,0xffff0000,0x00000000,unsigned>;
        ///I_SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iSetup{}; 
        ///I_STATUS_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iStatusNak{}; 
        ///I_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iStatus{}; 
        ///I_RX_DATA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iRxData0{}; 
        ///I_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iSof{}; 
        ///I_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iEp0{}; 
        ///I_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iEp{}; 
        ///I_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iNak{}; 
        ///M_SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mSetup{}; 
        ///M_STATUS_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mStatusNak{}; 
        ///M_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mStatus{}; 
        ///M_RX_DATA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mRxData0{}; 
        ///M_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mSof{}; 
        ///M_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mEp0{}; 
        ///M_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mEp{}; 
        ///M_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mNak{}; 
    }
    namespace Udfs2Intep{    ///<UDC2 INT_EP
        using Addr = Register::Address<0x40008224,0xffffff01,0x00000000,unsigned>;
        ///I_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iEp1{}; 
        ///I_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iEp2{}; 
        ///I_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iEp3{}; 
        ///I_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iEp4{}; 
        ///I_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iEp5{}; 
        ///I_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iEp6{}; 
        ///I_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iEp7{}; 
    }
    namespace Udfs2Intepmsk{    ///<UDC2 INT_EP_MASK
        using Addr = Register::Address<0x40008228,0xffffff00,0x00000000,unsigned>;
        ///M_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mEp0{}; 
        ///M_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mEp1{}; 
        ///M_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mEp2{}; 
        ///M_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mEp3{}; 
        ///M_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mEp4{}; 
        ///M_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mEp5{}; 
        ///M_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mEp6{}; 
        ///M_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mEp7{}; 
    }
    namespace Udfs2Intrx0{    ///<UDC2 INT RX DATA0
        using Addr = Register::Address<0x4000822c,0xffffff00,0x00000000,unsigned>;
        ///RX_D0_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxD0Ep0{}; 
        ///RX_D0_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxD0Ep1{}; 
        ///RX_D0_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxD0Ep2{}; 
        ///RX_D0_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxD0Ep3{}; 
        ///RX_D0_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxD0Ep4{}; 
        ///RX_D0_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxD0Ep5{}; 
        ///RX_D0_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxD0Ep6{}; 
        ///RX_D0_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxD0Ep7{}; 
    }
    namespace Udfs2Ep0msz{    ///<UDC2 EP0 Max Packet Size
        using Addr = Register::Address<0x40008230,0xffff6f80,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep0sts{    ///<UDC2 EP0 Status
        using Addr = Register::Address<0x40008234,0xffff41ff,0x00000000,unsigned>;
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///EP0_MASK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep0Mask{}; 
    }
    namespace Udfs2Ep0dsz{    ///<UDC2 EP0 Data Size
        using Addr = Register::Address<0x40008238,0xffffff80,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep0fifo{    ///<UDC2 EP0 FIFO
        using Addr = Register::Address<0x4000823c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep1msz{    ///<UDC2 EP1 Max Packet Size
        using Addr = Register::Address<0x40008240,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep1sts{    ///<UDC2 EP1 Status
        using Addr = Register::Address<0x40008244,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep1dsz{    ///<UDC2 EP1 Data Size
        using Addr = Register::Address<0x40008248,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep1fifo{    ///<UDC2 EP1 FIFO
        using Addr = Register::Address<0x4000824c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep2msz{    ///<UDC2 EP2 Max Packet Size
        using Addr = Register::Address<0x40008250,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep2sts{    ///<UDC2 EP2 Status
        using Addr = Register::Address<0x40008254,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep2dsz{    ///<UDC2 EP2 Data Size
        using Addr = Register::Address<0x40008258,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep2fifo{    ///<UDC2 EP2 FIFO
        using Addr = Register::Address<0x4000825c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep3msz{    ///<UDC2 EP3 Max Packet Size
        using Addr = Register::Address<0x40008260,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep3sts{    ///<UDC2 EP3 Status
        using Addr = Register::Address<0x40008264,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep3dsz{    ///<UDC2 EP3 Data Size
        using Addr = Register::Address<0x40008268,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep3fifo{    ///<UDC2 EP3 FIFO
        using Addr = Register::Address<0x4000826c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep4msz{    ///<UDC2 EP4 Max Packet Size
        using Addr = Register::Address<0x40008270,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep4sts{    ///<UDC2 EP4 Status
        using Addr = Register::Address<0x40008274,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep4dsz{    ///<UDC2 EP4 Data Size
        using Addr = Register::Address<0x40008278,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep4fifo{    ///<UDC2 EP4 FIFO
        using Addr = Register::Address<0x4000827c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep5msz{    ///<UDC2 EP5 Max Packet Size
        using Addr = Register::Address<0x40008280,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep5sts{    ///<UDC2 EP5 Status
        using Addr = Register::Address<0x40008284,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep5dsz{    ///<UDC2 EP5 Data Size
        using Addr = Register::Address<0x40008288,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep5fifo{    ///<UDC2 EP5 FIFO
        using Addr = Register::Address<0x4000828c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep6msz{    ///<UDC2 EP6 Max Packet Size
        using Addr = Register::Address<0x40008290,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep6sts{    ///<UDC2 EP6 Status
        using Addr = Register::Address<0x40008294,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep6dsz{    ///<UDC2 EP6 Data Size
        using Addr = Register::Address<0x40008298,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep6fifo{    ///<UDC2 EP6 FIFO
        using Addr = Register::Address<0x4000829c,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Ep7msz{    ///<UDC2 EP7 Max Packet Size
        using Addr = Register::Address<0x400082a0,0xffff6800,0x00000000,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dset{}; 
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx0Data{}; 
    }
    namespace Udfs2Ep7sts{    ///<UDC2 EP7 Status
        using Addr = Register::Address<0x400082a4,0xffff0070,0x00000000,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status{}; 
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toggle{}; 
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
    }
    namespace Udfs2Ep7dsz{    ///<UDC2 EP7 Data Size
        using Addr = Register::Address<0x400082a8,0xfffff800,0x00000000,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Udfs2Ep7fifo{    ///<UDC2 EP7 FIFO
        using Addr = Register::Address<0x400082ac,0xffff0000,0x00000000,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Udfs2Intnak{    ///<UDC2 INT NAK
        using Addr = Register::Address<0x40008330,0xffffff01,0x00000000,unsigned>;
        ///I_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iEp1{}; 
        ///I_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iEp2{}; 
        ///I_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iEp3{}; 
        ///I_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iEp4{}; 
        ///I_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iEp5{}; 
        ///I_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iEp6{}; 
        ///I_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iEp7{}; 
    }
    namespace Udfs2Intnakmsk{    ///<UDC2 INT NAK MASK
        using Addr = Register::Address<0x40008334,0xffffff01,0x00000000,unsigned>;
        ///M_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mEp1{}; 
        ///M_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mEp2{}; 
        ///M_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mEp3{}; 
        ///M_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mEp4{}; 
        ///M_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mEp5{}; 
        ///M_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mEp6{}; 
        ///M_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mEp7{}; 
    }
}
