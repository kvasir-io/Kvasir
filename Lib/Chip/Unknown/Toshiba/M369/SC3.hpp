#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Channel (SC)
    namespace Sc3En{    ///<SC Enable Register
        using Addr = Register::Address<0x400e1300,0xfffffffe,0x00000000,unsigned>;
        ///SIOE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sioe{}; 
    }
    namespace Sc3Buf{    ///<SC Buffer Register
        using Addr = Register::Address<0x400e1304,0xffffff00,0x00000000,unsigned>;
        ///TB_RB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tbRb{}; 
    }
    namespace Sc3Cr{    ///<SC Control Register
        using Addr = Register::Address<0x400e1308,0xffffff00,0x00000000,unsigned>;
        ///IOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioc{}; 
        ///SCLKS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sclks{}; 
        ///FERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///PERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perr{}; 
        ///OERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oerr{}; 
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        ///EVEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> even{}; 
        ///RB8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rb8{}; 
    }
    namespace Sc3Mod0{    ///<SC Mode Control Register 0
        using Addr = Register::Address<0x400e130c,0xffffff00,0x00000000,unsigned>;
        ///SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sc{}; 
        ///SM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sm{}; 
        ///WU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wu{}; 
        ///RXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///CTSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctse{}; 
        ///TB8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tb8{}; 
    }
    namespace Sc3Brcr{    ///<SC Baud Rate Generator Control Register
        using Addr = Register::Address<0x400e1310,0xffffff80,0x00000000,unsigned>;
        ///BRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brs{}; 
        ///BRCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> brck{}; 
        ///BRADDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bradde{}; 
    }
    namespace Sc3Bradd{    ///<SC Baud Rate Generator Control Register 2
        using Addr = Register::Address<0x400e1314,0xfffffff0,0x00000000,unsigned>;
        ///BRK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brk{}; 
    }
    namespace Sc3Mod1{    ///<SC Mode Control Register 1
        using Addr = Register::Address<0x400e1318,0xffffff01,0x00000000,unsigned>;
        ///SINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> sint{}; 
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txe{}; 
        ///FDPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> fdpx{}; 
        ///I2SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2sc{}; 
    }
    namespace Sc3Mod2{    ///<SC Mode Control Register 2
        using Addr = Register::Address<0x400e131c,0xffffff00,0x00000000,unsigned>;
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///WBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wbuf{}; 
        ///DRCHG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> drchg{}; 
        ///SBLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sblen{}; 
        ///TXRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrun{}; 
        ///RBFLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbfll{}; 
        ///TBEMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbemp{}; 
    }
    namespace Sc3Rfc{    ///<SC RX FIFO Configuration Register
        using Addr = Register::Address<0x400e1320,0xffffff3c,0x00000000,unsigned>;
        ///RIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ril{}; 
        ///RFIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfis{}; 
        ///RFCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rfcs{}; 
    }
    namespace Sc3Tfc{    ///<SC TX FIFO Configuration Register
        using Addr = Register::Address<0x400e1324,0xffffff3c,0x00000000,unsigned>;
        ///TIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> til{}; 
        ///TFIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfis{}; 
        ///TFCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfcs{}; 
    }
    namespace Sc3Rst{    ///<SC RX FIFO Status Register
        using Addr = Register::Address<0x400e1328,0xffffff78,0x00000000,unsigned>;
        ///RLVL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlvl{}; 
        ///ROR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ror{}; 
    }
    namespace Sc3Tst{    ///<SC TX FIFO Status Register
        using Addr = Register::Address<0x400e132c,0xffffff78,0x00000000,unsigned>;
        ///TLVL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tlvl{}; 
        ///TUR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tur{}; 
    }
    namespace Sc3Fcnf{    ///<SC FIFO Configuration Register
        using Addr = Register::Address<0x400e1330,0xffffffe0,0x00000000,unsigned>;
        ///CNFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cnfg{}; 
        ///RXTXCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtxcnt{}; 
        ///RFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfie{}; 
        ///TFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tfie{}; 
        ///RFST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfst{}; 
    }
}
