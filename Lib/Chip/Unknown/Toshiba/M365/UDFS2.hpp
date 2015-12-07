#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UDC2(USB -Spec2.0 Device contoller)
    namespace Noneadr{    ///<UDC2 Address State
        using Addr = Register::Address<0x40008200,0xffff0080,0,unsigned>;
        ///DEV_ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> devAdr{}; 
        namespace DevadrValC{
        }
        ///DEFAULT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> default_{}; 
        namespace Default_ValC{
        }
        ///ADDRESSED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> addressed{}; 
        namespace AddressedValC{
        }
        ///CONFIGURED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> configured{}; 
        namespace ConfiguredValC{
        }
        ///SUSPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspend{}; 
        namespace SuspendValC{
        }
        ///CUR_SPEED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> curSpeed{}; 
        namespace CurspeedValC{
        }
        ///EP_BI_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> epBiMode{}; 
        namespace EpbimodeValC{
        }
        ///STAGE_ERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stageErr{}; 
        namespace StageerrValC{
        }
    }
    namespace Nonefrm{    ///<UDC2 Frame
        using Addr = Register::Address<0x40008204,0xffff4800,0,unsigned>;
        ///FRAME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> frame{}; 
        namespace FrameValC{
        }
        ///F_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> fStatus{}; 
        namespace FstatusValC{
        }
        ///CREATE_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> createSof{}; 
        namespace CreatesofValC{
        }
    }
    namespace Nonecmd{    ///<UDC2 Command
        using Addr = Register::Address<0x4000820c,0xffff7000,0,unsigned>;
        ///COM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> com{}; 
        namespace ComValC{
        }
        ///EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ep{}; 
        namespace EpValC{
        }
        ///RX_NULLPKT_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rxNullpktEp{}; 
        namespace RxnullpktepValC{
        }
        ///INT_TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intToggle{}; 
        namespace InttoggleValC{
        }
    }
    namespace Nonebrq{    ///<UDC2 bRequest-bmRequest Type
        using Addr = Register::Address<0x40008210,0xffff0000,0,unsigned>;
        ///RECIPIENT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> recipient{}; 
        namespace RecipientValC{
        }
        ///REQ_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reqType{}; 
        namespace ReqtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///REQUESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> requeset{}; 
        namespace RequesetValC{
        }
    }
    namespace Nonewvl{    ///<UDC2 wValue
        using Addr = Register::Address<0x40008214,0xffff0000,0,unsigned>;
        ///VALUE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> value{}; 
        namespace ValueValC{
        }
    }
    namespace Nonewidx{    ///<UDC2 wIndex
        using Addr = Register::Address<0x40008218,0xffff0000,0,unsigned>;
        ///INDEX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> index{}; 
        namespace IndexValC{
        }
    }
    namespace Nonewlgth{    ///<UDC2 wLength
        using Addr = Register::Address<0x4000821c,0xffff0000,0,unsigned>;
        ///LENGTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> length{}; 
        namespace LengthValC{
        }
    }
    namespace Noneint{    ///<UDC2 INT
        using Addr = Register::Address<0x40008220,0xffff0000,0,unsigned>;
        ///I_SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iSetup{}; 
        namespace IsetupValC{
        }
        ///I_STATUS_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iStatusNak{}; 
        namespace IstatusnakValC{
        }
        ///I_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iStatus{}; 
        namespace IstatusValC{
        }
        ///I_RX_DATA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iRxData0{}; 
        namespace Irxdata0ValC{
        }
        ///I_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iSof{}; 
        namespace IsofValC{
        }
        ///I_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iEp0{}; 
        namespace Iep0ValC{
        }
        ///I_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iEp{}; 
        namespace IepValC{
        }
        ///I_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iNak{}; 
        namespace InakValC{
        }
        ///M_SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mSetup{}; 
        namespace MsetupValC{
        }
        ///M_STATUS_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mStatusNak{}; 
        namespace MstatusnakValC{
        }
        ///M_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mStatus{}; 
        namespace MstatusValC{
        }
        ///M_RX_DATA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mRxData0{}; 
        namespace Mrxdata0ValC{
        }
        ///M_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mSof{}; 
        namespace MsofValC{
        }
        ///M_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mEp0{}; 
        namespace Mep0ValC{
        }
        ///M_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mEp{}; 
        namespace MepValC{
        }
        ///M_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mNak{}; 
        namespace MnakValC{
        }
    }
    namespace Noneintep{    ///<UDC2 INT_EP
        using Addr = Register::Address<0x40008224,0xffffff01,0,unsigned>;
        ///I_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iEp1{}; 
        namespace Iep1ValC{
        }
        ///I_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iEp2{}; 
        namespace Iep2ValC{
        }
        ///I_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iEp3{}; 
        namespace Iep3ValC{
        }
        ///I_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iEp4{}; 
        namespace Iep4ValC{
        }
        ///I_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iEp5{}; 
        namespace Iep5ValC{
        }
        ///I_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iEp6{}; 
        namespace Iep6ValC{
        }
        ///I_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iEp7{}; 
        namespace Iep7ValC{
        }
    }
    namespace Noneintepmsk{    ///<UDC2 INT_EP_MASK
        using Addr = Register::Address<0x40008228,0xffffff00,0,unsigned>;
        ///M_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mEp0{}; 
        namespace Mep0ValC{
        }
        ///M_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mEp1{}; 
        namespace Mep1ValC{
        }
        ///M_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mEp2{}; 
        namespace Mep2ValC{
        }
        ///M_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mEp3{}; 
        namespace Mep3ValC{
        }
        ///M_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mEp4{}; 
        namespace Mep4ValC{
        }
        ///M_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mEp5{}; 
        namespace Mep5ValC{
        }
        ///M_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mEp6{}; 
        namespace Mep6ValC{
        }
        ///M_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mEp7{}; 
        namespace Mep7ValC{
        }
    }
    namespace Noneintrx0{    ///<UDC2 INT RX DATA0
        using Addr = Register::Address<0x4000822c,0xffffff00,0,unsigned>;
        ///RX_D0_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxD0Ep0{}; 
        namespace Rxd0ep0ValC{
        }
        ///RX_D0_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxD0Ep1{}; 
        namespace Rxd0ep1ValC{
        }
        ///RX_D0_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxD0Ep2{}; 
        namespace Rxd0ep2ValC{
        }
        ///RX_D0_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxD0Ep3{}; 
        namespace Rxd0ep3ValC{
        }
        ///RX_D0_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxD0Ep4{}; 
        namespace Rxd0ep4ValC{
        }
        ///RX_D0_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxD0Ep5{}; 
        namespace Rxd0ep5ValC{
        }
        ///RX_D0_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxD0Ep6{}; 
        namespace Rxd0ep6ValC{
        }
        ///RX_D0_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxD0Ep7{}; 
        namespace Rxd0ep7ValC{
        }
    }
    namespace Noneep0msz{    ///<UDC2 EP0 Max Packet Size
        using Addr = Register::Address<0x40008230,0xffff6f80,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep0sts{    ///<UDC2 EP0 Status
        using Addr = Register::Address<0x40008234,0xffff41ff,0,unsigned>;
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///EP0_MASK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ep0Mask{}; 
        namespace Ep0maskValC{
        }
    }
    namespace Noneep0dsz{    ///<UDC2 EP0 Data Size
        using Addr = Register::Address<0x40008238,0xffffff80,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep0fifo{    ///<UDC2 EP0 FIFO
        using Addr = Register::Address<0x4000823c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep1msz{    ///<UDC2 EP1 Max Packet Size
        using Addr = Register::Address<0x40008240,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep1sts{    ///<UDC2 EP1 Status
        using Addr = Register::Address<0x40008244,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep1dsz{    ///<UDC2 EP1 Data Size
        using Addr = Register::Address<0x40008248,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep1fifo{    ///<UDC2 EP1 FIFO
        using Addr = Register::Address<0x4000824c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep2msz{    ///<UDC2 EP2 Max Packet Size
        using Addr = Register::Address<0x40008250,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep2sts{    ///<UDC2 EP2 Status
        using Addr = Register::Address<0x40008254,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep2dsz{    ///<UDC2 EP2 Data Size
        using Addr = Register::Address<0x40008258,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep2fifo{    ///<UDC2 EP2 FIFO
        using Addr = Register::Address<0x4000825c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep3msz{    ///<UDC2 EP3 Max Packet Size
        using Addr = Register::Address<0x40008260,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep3sts{    ///<UDC2 EP3 Status
        using Addr = Register::Address<0x40008264,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep3dsz{    ///<UDC2 EP3 Data Size
        using Addr = Register::Address<0x40008268,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep3fifo{    ///<UDC2 EP3 FIFO
        using Addr = Register::Address<0x4000826c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep4msz{    ///<UDC2 EP4 Max Packet Size
        using Addr = Register::Address<0x40008270,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep4sts{    ///<UDC2 EP4 Status
        using Addr = Register::Address<0x40008274,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep4dsz{    ///<UDC2 EP4 Data Size
        using Addr = Register::Address<0x40008278,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep4fifo{    ///<UDC2 EP4 FIFO
        using Addr = Register::Address<0x4000827c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep5msz{    ///<UDC2 EP5 Max Packet Size
        using Addr = Register::Address<0x40008280,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep5sts{    ///<UDC2 EP5 Status
        using Addr = Register::Address<0x40008284,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep5dsz{    ///<UDC2 EP5 Data Size
        using Addr = Register::Address<0x40008288,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep5fifo{    ///<UDC2 EP5 FIFO
        using Addr = Register::Address<0x4000828c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep6msz{    ///<UDC2 EP6 Max Packet Size
        using Addr = Register::Address<0x40008290,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep6sts{    ///<UDC2 EP6 Status
        using Addr = Register::Address<0x40008294,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep6dsz{    ///<UDC2 EP6 Data Size
        using Addr = Register::Address<0x40008298,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep6fifo{    ///<UDC2 EP6 FIFO
        using Addr = Register::Address<0x4000829c,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneep7msz{    ///<UDC2 EP7 Max Packet Size
        using Addr = Register::Address<0x400082a0,0xffff6800,0,unsigned>;
        ///MAX_PKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> maxPkt{}; 
        namespace MaxpktValC{
        }
        ///DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dset{}; 
        namespace DsetValC{
        }
        ///TX0_DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tx0Data{}; 
        namespace Tx0dataValC{
        }
    }
    namespace Noneep7sts{    ///<UDC2 EP7 Status
        using Addr = Register::Address<0x400082a4,0xffff0070,0,unsigned>;
        ///NUM_MF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> numMf{}; 
        namespace NummfValC{
        }
        ///T_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tType{}; 
        namespace TtypeValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DISABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disable{}; 
        namespace DisableValC{
        }
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> status{}; 
        namespace StatusValC{
        }
        ///TOGGLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> toggle{}; 
        namespace ToggleValC{
        }
        ///BUS_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busSel{}; 
        namespace BusselValC{
        }
        ///PKT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pktMode{}; 
        namespace PktmodeValC{
        }
    }
    namespace Noneep7dsz{    ///<UDC2 EP7 Data Size
        using Addr = Register::Address<0x400082a8,0xfffff800,0,unsigned>;
        ///SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep7fifo{    ///<UDC2 EP7 FIFO
        using Addr = Register::Address<0x400082ac,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneintnak{    ///<UDC2 INT NAK
        using Addr = Register::Address<0x40008330,0xffffff01,0,unsigned>;
        ///I_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iEp1{}; 
        namespace Iep1ValC{
        }
        ///I_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iEp2{}; 
        namespace Iep2ValC{
        }
        ///I_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iEp3{}; 
        namespace Iep3ValC{
        }
        ///I_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iEp4{}; 
        namespace Iep4ValC{
        }
        ///I_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iEp5{}; 
        namespace Iep5ValC{
        }
        ///I_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iEp6{}; 
        namespace Iep6ValC{
        }
        ///I_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iEp7{}; 
        namespace Iep7ValC{
        }
    }
    namespace Noneintnakmsk{    ///<UDC2 INT NAK MASK
        using Addr = Register::Address<0x40008334,0xffffff01,0,unsigned>;
        ///M_EP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mEp1{}; 
        namespace Mep1ValC{
        }
        ///M_EP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mEp2{}; 
        namespace Mep2ValC{
        }
        ///M_EP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mEp3{}; 
        namespace Mep3ValC{
        }
        ///M_EP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mEp4{}; 
        namespace Mep4ValC{
        }
        ///M_EP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mEp5{}; 
        namespace Mep5ValC{
        }
        ///M_EP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mEp6{}; 
        namespace Mep6ValC{
        }
        ///M_EP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mEp7{}; 
        namespace Mep7ValC{
        }
    }
}
