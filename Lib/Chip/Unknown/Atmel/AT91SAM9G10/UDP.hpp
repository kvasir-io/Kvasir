#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB Device Port
    namespace UdpFrmNum{    ///<Frame Number Register
        using Addr = Register::Address<0xfffa4000,0xfffcf800,0,unsigned>;
        ///Frame Number as Defined in the Packet Field Formats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> frmNum{}; 
        ///Frame Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frmErr{}; 
        ///Frame OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> frmOk{}; 
    }
    namespace UdpGlbStat{    ///<Global State Register
        using Addr = Register::Address<0xfffa4004,0xfffffffc,0,unsigned>;
        ///Function Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fadden{}; 
        ///Configured
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> confg{}; 
    }
    namespace UdpFaddr{    ///<Function Address Register
        using Addr = Register::Address<0xfffa4008,0xfffffe80,0,unsigned>;
        ///Function Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fadd{}; 
        ///Function Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fen{}; 
    }
    namespace UdpIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffa4010,0xffffd4c0,0,unsigned>;
        ///Enable Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        ///Enable Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        ///Enable Endpoint 2Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        ///Enable Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        ///Enable Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        ///Enable Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        ///Enable UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        ///Enable UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        ///Enable Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        ///Enable UDP bus Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace UdpIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffa4014,0xffffd4c0,0,unsigned>;
        ///Disable Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        ///Disable Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        ///Disable Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        ///Disable Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        ///Disable Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        ///Disable Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        ///Disable UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        ///Disable UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        ///Disable Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        ///Disable USB Bus Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace UdpImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffa4018,0xffffc4c0,0,unsigned>;
        ///Mask Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        ///Mask Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        ///Mask Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        ///Mask Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        ///Mask Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        ///Mask Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        ///Mask UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        ///Mask UDP Resume Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        ///Mask Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        ///UDP_IMR Bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bit12{}; 
        ///USB Bus WAKEUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace UdpIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffa401c,0xffffc4c0,0,unsigned>;
        ///Endpoint 0 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ep0int{}; 
        ///Endpoint 1 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep1int{}; 
        ///Endpoint 2 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ep2int{}; 
        ///Endpoint 3 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ep3int{}; 
        ///Endpoint 4 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ep4int{}; 
        ///Endpoint 5 Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep5int{}; 
        ///UDP Suspend Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        ///UDP Resume Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        ///Start of Frame Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        ///End of BUS Reset Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endbusres{}; 
        ///UDP Resume Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace UdpIcr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0xfffa4020,0xffffc4ff,0,unsigned>;
        ///Clear UDP Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxsusp{}; 
        ///Clear UDP Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrsm{}; 
        ///Clear Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sofint{}; 
        ///Clear End of Bus Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endbusres{}; 
        ///Clear Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeup{}; 
    }
    namespace UdpRstEp{    ///<Reset Endpoint Register
        using Addr = Register::Address<0xfffa4028,0xffffffc0,0,unsigned>;
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
    }
    namespace UdpCsr0{    ///<Endpoint Control and Status Register (ept_num = 0)
        using Addr = Register::Address<0xfffa402c,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsentisoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Endpoint Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr1{    ///<Endpoint Control and Status Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4030,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsentisoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Endpoint Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr2{    ///<Endpoint Control and Status Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4034,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsentisoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Endpoint Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr3{    ///<Endpoint Control and Status Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4038,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsentisoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Endpoint Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr4{    ///<Endpoint Control and Status Register (ept_num = 0)
        using Addr = Register::Address<0xfffa403c,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsentisoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Endpoint Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpCsr5{    ///<Endpoint Control and Status Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4040,0xf8007000,0,unsigned>;
        ///Generates an IN Packet with Data Previously Written in the DPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Data Bank 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDataBk0{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxsetup{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallsentisoerror{}; 
        ///Transmit Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txpktrdy{}; 
        ///Force Stall (used by Control, Bulk and Isochronous Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> forcestall{}; 
        ///Receive Data Bank 1 (only used by endpoints with ping-pong attributes)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxDataBk1{}; 
        ///Transfer Direction (only available for control endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Endpoint Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtgle{}; 
        ///Endpoint Enable Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epeds{}; 
        ///Number of Bytes Available in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rxbytecnt{}; 
    }
    namespace UdpFdr0{    ///<Endpoint FIFO Data Register (ept_num = 0)
        using Addr = Register::Address<0xfffa404c,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr1{    ///<Endpoint FIFO Data Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4050,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr2{    ///<Endpoint FIFO Data Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4054,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr3{    ///<Endpoint FIFO Data Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4058,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr4{    ///<Endpoint FIFO Data Register (ept_num = 0)
        using Addr = Register::Address<0xfffa405c,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpFdr5{    ///<Endpoint FIFO Data Register (ept_num = 0)
        using Addr = Register::Address<0xfffa4060,0xffffff00,0,unsigned>;
        ///FIFO Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fifoData{}; 
    }
    namespace UdpTxvc{    ///<Transceiver Control Register
        using Addr = Register::Address<0xfffa4074,0xfffffeff,0,unsigned>;
        ///Transceiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txvdis{}; 
    }
}
