#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fuse Controller
    namespace FuseCr{    ///<Fuse Control Register
        using Addr = Register::Address<0xffffdc00,0xffff00fc,0,unsigned>;
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
        using Addr = Register::Address<0xffffdc04,0xfffffffe,0,unsigned>;
        ///Mask Fuse Status Registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk{}; 
        namespace MskValC{
        }
    }
    namespace FuseIr{    ///<Fuse Index Register
        using Addr = Register::Address<0xffffdc08,0xfffff0fc,0,unsigned>;
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
        using Addr = Register::Address<0xffffdc0c,0x00000000,0,unsigned>;
        ///Data to Program
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace FuseSr0{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc10,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr1{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc14,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr2{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc18,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr3{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc1c,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr4{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc20,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr5{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc24,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr6{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc28,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr7{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc2c,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr8{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc30,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
    namespace FuseSr9{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc34,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
        namespace FuseValC{
        }
    }
}
