#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB Device Port
    namespace UdpFrmNum{    ///<Frame Number Register
        using Addr = Register::Address<0xf803c000,0xfffcf800,0,unsigned>;
        ///Frame Number as Defined in the Packet Field Formats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> frmNum{}; 
        namespace FrmnumValC{
        }
        ///Frame Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frmErr{}; 
        namespace FrmerrValC{
        }
        ///Frame OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> frmOk{}; 
        namespace FrmokValC{
        }
    }
    namespace UdpGlbStat{    ///<Global State Register
        using Addr = Register::Address<0xf803c004,0xffffffe0,0,unsigned>;
        ///Function Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fadden{}; 
        namespace FaddenValC{
        }
        ///Configured
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> confg{}; 
        namespace ConfgValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> esr{}; 
        namespace EsrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsminpr{}; 
        namespace RsminprValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rmwupe{}; 
        namespace RmwupeValC{
        }
    }
    namespace UdpFaddr{    ///<Function Address Register
        using Addr = Register::Address<0xf803c008,0xfffffe80,0,unsigned>;
        ///Function Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fadd{}; 
        namespace FaddValC{
        }
        ///Function Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fen{}; 
        namespace FenValC{
        }
    }
    namespace UdpIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf803c010,0xffffd0c0,0,unsigned>;
        ///Enable Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        namespace Ep0intValC{
        }
        ///Enable Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        namespace Ep1intValC{
        }
        ///Enable Endpoint 2Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        namespace Ep2intValC{
        }
        ///Enable Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        namespace Ep3intValC{
        }
        ///Enable Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        namespace Ep4intValC{
        }
        ///Enable Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        namespace Ep5intValC{
        }
        ///Enable UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        namespace RxsuspValC{
        }
        ///Enable UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        namespace RxrsmValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extrsm{}; 
        namespace ExtrsmValC{
        }
        ///Enable Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        namespace SofintValC{
        }
        ///Enable UDP bus Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace UdpIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf803c014,0xffffd0c0,0,unsigned>;
        ///Disable Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        namespace Ep0intValC{
        }
        ///Disable Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        namespace Ep1intValC{
        }
        ///Disable Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        namespace Ep2intValC{
        }
        ///Disable Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        namespace Ep3intValC{
        }
        ///Disable Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        namespace Ep4intValC{
        }
        ///Disable Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        namespace Ep5intValC{
        }
        ///Disable UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        namespace RxsuspValC{
        }
        ///Disable UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        namespace RxrsmValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extrsm{}; 
        namespace ExtrsmValC{
        }
        ///Disable Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        namespace SofintValC{
        }
        ///Disable USB Bus Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace UdpImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf803c018,0xffffc0c0,0,unsigned>;
        ///Mask Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        namespace Ep0intValC{
        }
        ///Mask Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        namespace Ep1intValC{
        }
        ///Mask Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        namespace Ep2intValC{
        }
        ///Mask Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        namespace Ep3intValC{
        }
        ///Mask Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        namespace Ep4intValC{
        }
        ///Mask Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        namespace Ep5intValC{
        }
        ///Mask UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        namespace RxsuspValC{
        }
        ///Mask UDP Resume Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        namespace RxrsmValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extrsm{}; 
        namespace ExtrsmValC{
        }
        ///Mask Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        namespace SofintValC{
        }
        ///UDP_IMR Bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bit12{}; 
        namespace Bit12ValC{
        }
        ///USB Bus WAKEUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace UdpIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf803c01c,0xffffc0c0,0,unsigned>;
        ///Endpoint 0 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        namespace Ep0intValC{
        }
        ///Endpoint 1 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        namespace Ep1intValC{
        }
        ///Endpoint 2 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        namespace Ep2intValC{
        }
        ///Endpoint 3 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        namespace Ep3intValC{
        }
        ///Endpoint 4 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        namespace Ep4intValC{
        }
        ///Endpoint 5 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        namespace Ep5intValC{
        }
        ///UDP Suspend Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        namespace RxsuspValC{
        }
        ///UDP Resume Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        namespace RxrsmValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extrsm{}; 
        namespace ExtrsmValC{
        }
        ///Start of Frame Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        namespace SofintValC{
        }
        ///End of BUS Reset Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endbusres{}; 
        namespace EndbusresValC{
        }
        ///UDP Resume Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace UdpIcr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0xf803c020,0xffffc0ff,0,unsigned>;
        ///Clear UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        namespace RxsuspValC{
        }
        ///Clear UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        namespace RxrsmValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extrsm{}; 
        namespace ExtrsmValC{
        }
        ///Clear Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        namespace SofintValC{
        }
        ///Clear End of Bus Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endbusres{}; 
        namespace EndbusresValC{
        }
        ///Clear Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
    }
    namespace UdpRstEp{    ///<Reset Endpoint Register
        using Addr = Register::Address<0xf803c028,0xffffffc0,0,unsigned>;
        ///Reset Endpoint 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0{}; 
        namespace Ep0ValC{
        }
        ///Reset Endpoint 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1{}; 
        namespace Ep1ValC{
        }
        ///Reset Endpoint 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2{}; 
        namespace Ep2ValC{
        }
        ///Reset Endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3{}; 
        namespace Ep3ValC{
        }
        ///Reset Endpoint 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4{}; 
        namespace Ep4ValC{
        }
        ///Reset Endpoint 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5{}; 
        namespace Ep5ValC{
        }
    }
    namespace UdpCsr0{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c030,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        namespace StallsentValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            bulkOut=0x00000002,     ///<Bulk OUT
            intOut=0x00000003,     ///<Interrupt OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkIn=0x00000006,     ///<Bulk IN
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpCsr1{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c034,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        namespace StallsentValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            bulkOut=0x00000002,     ///<Bulk OUT
            intOut=0x00000003,     ///<Interrupt OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkIn=0x00000006,     ///<Bulk IN
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpCsr2{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c038,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        namespace StallsentValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            bulkOut=0x00000002,     ///<Bulk OUT
            intOut=0x00000003,     ///<Interrupt OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkIn=0x00000006,     ///<Bulk IN
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpCsr3{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c03c,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        namespace StallsentValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            bulkOut=0x00000002,     ///<Bulk OUT
            intOut=0x00000003,     ///<Interrupt OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkIn=0x00000006,     ///<Bulk IN
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpCsr4{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c040,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        namespace StallsentValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            bulkOut=0x00000002,     ///<Bulk OUT
            intOut=0x00000003,     ///<Interrupt OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkIn=0x00000006,     ///<Bulk IN
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpCsr5{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c044,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        namespace StallsentValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            bulkOut=0x00000002,     ///<Bulk OUT
            intOut=0x00000003,     ///<Interrupt OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkIn=0x00000006,     ///<Bulk IN
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpCsr0Isoendpt{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0xf803c030,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        namespace Rxdatabk0ValC{
        }
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        namespace RxsetupValC{
        }
        ///A CRC error has been detected in an isochronous transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isoerror{}; 
        namespace IsoerrorValC{
        }
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        namespace TxpktrdyValC{
        }
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        namespace ForcestallValC{
        }
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        namespace Rxdatabk1ValC{
        }
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            isoOut=0x00000001,     ///<Isochronous OUT
            isoIn=0x00000005,     ///<Isochronous IN
            bulkOut=0x00000002,     ///<Bulk OUT
            bulkIn=0x00000006,     ///<Bulk IN
            intOut=0x00000003,     ///<Interrupt OUT
            intIn=0x00000007,     ///<Interrupt IN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        namespace DtgleValC{
        }
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        namespace EpedsValC{
        }
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
        namespace RxbytecntValC{
        }
    }
    namespace UdpFdr0{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0xf803c050,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
        namespace FifodataValC{
        }
    }
    namespace UdpFdr1{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0xf803c054,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
        namespace FifodataValC{
        }
    }
    namespace UdpFdr2{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0xf803c058,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
        namespace FifodataValC{
        }
    }
    namespace UdpFdr3{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0xf803c05c,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
        namespace FifodataValC{
        }
    }
    namespace UdpFdr4{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0xf803c060,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
        namespace FifodataValC{
        }
    }
    namespace UdpFdr5{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0xf803c064,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
        namespace FifodataValC{
        }
    }
    namespace UdpTxvc{    ///<Transceiver Control Register
        using Addr = Register::Address<0xf803c074,0xfffffcff,0,unsigned>;
        ///Transceiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txvdis{}; 
        namespace TxvdisValC{
        }
        ///Pull-up On
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> puon{}; 
        namespace PuonValC{
        }
    }
}
