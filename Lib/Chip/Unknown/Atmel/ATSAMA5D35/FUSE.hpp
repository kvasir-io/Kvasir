#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Fuse Controller
    namespace FuseCr{    ///<Fuse Control Register
        using Addr = Register::Address<0xffffe400,0xffff00fc,0x00000000,unsigned>;
        ///Write Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrq{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rrq{}; 
        ///Key code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FuseMr{    ///<Fuse Mode Register
        using Addr = Register::Address<0xffffe404,0xfffffffe,0x00000000,unsigned>;
        ///Mask Fuse Status Registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msk{}; 
    }
    namespace FuseIr{    ///<Fuse Index Register
        using Addr = Register::Address<0xffffe408,0xfffff0fc,0x00000000,unsigned>;
        ///Write Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Read Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Word Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wsel{}; 
    }
    namespace FuseDr{    ///<Fuse Data Register
        using Addr = Register::Address<0xffffe40c,0x00000000,0x00000000,unsigned>;
        ///Data to Program
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FuseSr0{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe410,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr1{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe414,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr2{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe418,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr3{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe41c,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr4{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe420,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr5{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe424,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr6{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe428,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
    namespace FuseSr7{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe42c,0x00000000,0x00000000,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fuse{}; 
    }
}
