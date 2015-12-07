#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fuse Controller
    namespace FuseCr{    ///<Fuse Control Register
        using Addr = Register::Address<0xffffe400,0xffff00fc,0,unsigned>;
        ///Write Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrq{}; 
        namespace WrqValC{
        }
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rrq{}; 
        namespace RrqValC{
        }
        ///Key code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace FuseMr{    ///<Fuse Mode Register
        using Addr = Register::Address<0xffffe404,0xfffffffe,0,unsigned>;
        ///Mask Fuse Status Registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk{}; 
        namespace MskValC{
        }
    }
    namespace FuseIr{    ///<Fuse Index Register
        using Addr = Register::Address<0xffffe408,0xfffff0fc,0,unsigned>;
        ///Write Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ws{}; 
        namespace WsValC{
        }
        ///Read Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Word Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wsel{}; 
        namespace WselValC{
        }
    }
    namespace FuseDr{    ///<Fuse Data Register
        using Addr = Register::Address<0xffffe40c,0x00000000,0,unsigned>;
        ///Data to Program
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FuseSr0{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe410,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr1{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe414,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr2{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe418,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr3{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe41c,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr4{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe420,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr5{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe424,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr6{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe428,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr7{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffe42c,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
}
