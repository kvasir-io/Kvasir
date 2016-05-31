#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB Device Port
    namespace UdpFrmNum{    ///<Frame Number Register
        using Addr = Register::Address<0x40034000,0xfffcf800,0x00000000,unsigned>;
        ///Frame Number as Defined in the Packet Field Formats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmNum{}; 
        ///Frame Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmErr{}; 
        ///Frame OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmOk{}; 
    }
    namespace UdpGlbStat{    ///<Global State Register
        using Addr = Register::Address<0x40034004,0xffffffe0,0x00000000,unsigned>;
        ///Function Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fadden{}; 
        ///Configured
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> confg{}; 
        ///Enable Send Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> esr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsminpr{}; 
        ///Remote Wake Up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rmwupe{}; 
    }
    namespace UdpFaddr{    ///<Function Address Register
        using Addr = Register::Address<0x40034008,0xfffffe80,0x00000000,unsigned>;
        ///Function Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fadd{}; 
        ///Function Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fen{}; 
    }
    namespace UdpIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40034010,0xffffd000,0x00000000,unsigned>;
        ///Enable Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep0int{}; 
        ///Enable Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep1int{}; 
        ///Enable Endpoint 2Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep2int{}; 
        ///Enable Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep3int{}; 
        ///Enable Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep4int{}; 
        ///Enable Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep5int{}; 
        ///Enable Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep6int{}; 
        ///Enable Endpoint 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep7int{}; 
        ///Enable UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsusp{}; 
        ///Enable UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsm{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extrsm{}; 
        ///Enable Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofint{}; 
        ///Enable UDP bus Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
    }
    namespace UdpIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40034014,0xffffd000,0x00000000,unsigned>;
        ///Disable Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep0int{}; 
        ///Disable Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep1int{}; 
        ///Disable Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep2int{}; 
        ///Disable Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep3int{}; 
        ///Disable Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep4int{}; 
        ///Disable Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep5int{}; 
        ///Disable Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep6int{}; 
        ///Disable Endpoint 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep7int{}; 
        ///Disable UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsusp{}; 
        ///Disable UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsm{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extrsm{}; 
        ///Disable Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofint{}; 
        ///Disable USB Bus Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
    }
    namespace UdpImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x40034018,0xffffc000,0x00000000,unsigned>;
        ///Mask Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep0int{}; 
        ///Mask Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep1int{}; 
        ///Mask Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep2int{}; 
        ///Mask Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep3int{}; 
        ///Mask Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep4int{}; 
        ///Mask Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep5int{}; 
        ///Mask Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep6int{}; 
        ///Mask Endpoint 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep7int{}; 
        ///Mask UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsusp{}; 
        ///Mask UDP Resume Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsm{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extrsm{}; 
        ///Mask Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofint{}; 
        ///UDP_IMR Bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bit12{}; 
        ///USB Bus WAKEUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
    }
    namespace UdpIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x4003401c,0xffffc000,0x00000000,unsigned>;
        ///Endpoint 0 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep0int{}; 
        ///Endpoint 1 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep1int{}; 
        ///Endpoint 2 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep2int{}; 
        ///Endpoint 3 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep3int{}; 
        ///Endpoint 4 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep4int{}; 
        ///Endpoint 5 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep5int{}; 
        ///Endpoint 6 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep6int{}; 
        ///Endpoint 7Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep7int{}; 
        ///UDP Suspend Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsusp{}; 
        ///UDP Resume Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsm{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extrsm{}; 
        ///Start of Frame Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofint{}; 
        ///End of BUS Reset Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endbusres{}; 
        ///UDP Resume Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
    }
    namespace UdpIcr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40034020,0xffffc0ff,0x00000000,unsigned>;
        ///Clear UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsusp{}; 
        ///Clear UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsm{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extrsm{}; 
        ///Clear Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofint{}; 
        ///Clear End of Bus Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endbusres{}; 
        ///Clear Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
    }
    namespace UdpRstEp{    ///<Reset Endpoint Register
        using Addr = Register::Address<0x40034028,0xffffff00,0x00000000,unsigned>;
        ///Reset Endpoint 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0{}; 
        ///Reset Endpoint 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1{}; 
        ///Reset Endpoint 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2{}; 
        ///Reset Endpoint 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3{}; 
        ///Reset Endpoint 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4{}; 
        ///Reset Endpoint 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5{}; 
        ///Reset Endpoint 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep6{}; 
        ///Reset Endpoint 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ep7{}; 
    }
    namespace UdpCsr0Isoendpt{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034030,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///A CRC error has been detected in an isochronous transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpTxvc{    ///<Transceiver Control Register
        using Addr = Register::Address<0x40034074,0xfffffcff,0x00000000,unsigned>;
        ///Transceiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txvdis{}; 
        ///Pull-up On
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> puon{}; 
    }
    namespace UdpCsr0{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034030,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr1{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034034,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr2{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034038,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr3{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x4003403c,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr4{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034040,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr5{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034044,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr6{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x40034048,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr7{    ///<Endpoint Control and Status Register
        using Addr = Register::Address<0x4003404c,0xf8007000,0x00000000,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsent{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
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
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoOut> isoOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkOut> bulkOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intOut> intOut{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::isoIn> isoIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::bulkIn> bulkIn{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intIn> intIn{};
        }
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpFdr0{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x40034050,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr1{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x40034054,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr2{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x40034058,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr3{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x4003405c,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr4{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x40034060,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr5{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x40034064,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr6{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x40034068,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr7{    ///<Endpoint FIFO Data Register
        using Addr = Register::Address<0x4003406c,0xffffff00,0x00000000,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
}
