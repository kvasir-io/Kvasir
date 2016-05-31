#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CAN Controller (TXCAN)
    namespace CanMc{    ///<CAN Mailbox Configuration Register
        using Addr = Register::Address<0x40005400,0x00000000,0x00000000,unsigned>;
        ///MC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mc{}; 
    }
    namespace CanMd{    ///<CAN Mailbox Direction Register
        using Addr = Register::Address<0x40005408,0x00000000,0x00000000,unsigned>;
        ///MD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> md{}; 
    }
    namespace CanTrs{    ///<CAN Transmit Request Set Register
        using Addr = Register::Address<0x40005410,0x80000000,0x00000000,unsigned>;
        ///TRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> trs{}; 
    }
    namespace CanTrr{    ///<CAN Transmit Request Reset Register
        using Addr = Register::Address<0x40005418,0x80000000,0x00000000,unsigned>;
        ///TRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> trr{}; 
    }
    namespace CanTa{    ///<CAN Transmission Acknowledge Register
        using Addr = Register::Address<0x40005420,0x80000000,0x00000000,unsigned>;
        ///TA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> ta{}; 
    }
    namespace CanAa{    ///<CAN Abort Acknowledge Register
        using Addr = Register::Address<0x40005428,0x80000000,0x00000000,unsigned>;
        ///AA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> aa{}; 
    }
    namespace CanRmp{    ///<CAN Receive Message Pending Register
        using Addr = Register::Address<0x40005430,0x00000000,0x00000000,unsigned>;
        ///RMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmp{}; 
    }
    namespace CanRml{    ///<CAN Receive Message Lost Register
        using Addr = Register::Address<0x40005438,0x00000000,0x00000000,unsigned>;
        ///RML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rml{}; 
    }
    namespace CanLam{    ///<CAN Local Acceptance Mask Register
        using Addr = Register::Address<0x40005440,0x60000000,0x00000000,unsigned>;
        ///LAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> lam{}; 
        ///LAMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lami{}; 
    }
    namespace CanGam{    ///<CAN Global Acceptance Mask Register
        using Addr = Register::Address<0x40005448,0x60000000,0x00000000,unsigned>;
        ///GAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> gam{}; 
        ///GAMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> gami{}; 
    }
    namespace CanMcr{    ///<CAN Master Control Register
        using Addr = Register::Address<0x40005450,0xfffff424,0x00000000,unsigned>;
        ///SRES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sres{}; 
        ///TSCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tscc{}; 
        ///MTOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mtos{}; 
        ///WUBA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuba{}; 
        ///SMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smr{}; 
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ccr{}; 
        ///TSTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tsterr{}; 
        ///TSTLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstlb{}; 
        ///SUR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sur{}; 
    }
    namespace CanGsr{    ///<CAN Global Status Register
        using Addr = Register::Address<0x40005458,0xfffe0230,0x00000000,unsigned>;
        ///EW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ew{}; 
        ///EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep{}; 
        ///BO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bo{}; 
        ///TSO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tso{}; 
        ///SMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sma{}; 
        ///CCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cce{}; 
        ///SUA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sua{}; 
        ///TM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tm{}; 
        ///RM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rm{}; 
        ///MIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mis{}; 
    }
    namespace CanBcr1{    ///<CAN Bit Configuration Register 1
        using Addr = Register::Address<0x40005460,0xfffffc00,0x00000000,unsigned>;
        ///BRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> brp{}; 
    }
    namespace CanBcr2{    ///<CAN Bit Configuration Register 2
        using Addr = Register::Address<0x40005468,0xfffffc00,0x00000000,unsigned>;
        ///TSEG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tseg1{}; 
        ///TSEG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tseg2{}; 
        ///SAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sam{}; 
        ///SJW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sjw{}; 
    }
    namespace CanGif{    ///<CAN Global Interrupt Flag Register
        using Addr = Register::Address<0x40005470,0xffffff00,0x00000000,unsigned>;
        ///WLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wlif{}; 
        ///EPIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epif{}; 
        ///BOIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> boif{}; 
        ///TSOIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsoif{}; 
        ///TRMABF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trmabf{}; 
        ///RMLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rmlif{}; 
        ///WUIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wuif{}; 
        ///RFPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfpf{}; 
    }
    namespace CanGim{    ///<CAN Global Interrupt Mask Register
        using Addr = Register::Address<0x40005478,0xffffff00,0x00000000,unsigned>;
        ///WLIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wlim{}; 
        ///EPIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epim{}; 
        ///BOIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> boim{}; 
        ///TSOIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsoim{}; 
        ///TRMABF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trmabf{}; 
        ///RMLIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rmlim{}; 
        ///WUIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wuim{}; 
        ///RFPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfpm{}; 
    }
    namespace CanMbtif{    ///<CAN Mailbox Transmit Interrupt Flag Register
        using Addr = Register::Address<0x40005480,0x80000000,0x00000000,unsigned>;
        ///MBTIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> mbtif{}; 
    }
    namespace CanMbrif{    ///<CAN Mailbox Receive Interrupt Flag Register
        using Addr = Register::Address<0x40005488,0x00000000,0x00000000,unsigned>;
        ///MBRIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbrif{}; 
    }
    namespace CanMbim{    ///<CAN Mailbox Interrupt Mask Register
        using Addr = Register::Address<0x40005490,0x00000000,0x00000000,unsigned>;
        ///MBIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbim{}; 
    }
    namespace CanCdr{    ///<CAN Change Data Request
        using Addr = Register::Address<0x40005498,0x80000000,0x00000000,unsigned>;
        ///CDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> cdr{}; 
    }
    namespace CanRfp{    ///<CAN Remote Frame Pending Register
        using Addr = Register::Address<0x400054a0,0x00000000,0x00000000,unsigned>;
        ///RFP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfp{}; 
    }
    namespace CanCec{    ///<CAN Error Counter Register
        using Addr = Register::Address<0x400054a8,0xffff0000,0x00000000,unsigned>;
        ///REC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rec{}; 
        ///TEC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tec{}; 
    }
    namespace CanTsp{    ///<CAN Time Stamp Counter Prescaler Register
        using Addr = Register::Address<0x400054b0,0xfffffff0,0x00000000,unsigned>;
        ///TSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsp{}; 
    }
    namespace CanTsc{    ///<CAN Time Stamp Counter Register
        using Addr = Register::Address<0x400054b8,0xffff0000,0x00000000,unsigned>;
        ///TSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsc{}; 
    }
}
