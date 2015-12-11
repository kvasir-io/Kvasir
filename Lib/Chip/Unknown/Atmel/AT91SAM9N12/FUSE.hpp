#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fuse Controller
    namespace FuseCr{    ///<Fuse Control Register
        using Addr = Register::Address<0xffffdc00,0xffff00fc,0,unsigned>;
        ///Write Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrq{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rrq{}; 
        ///Key code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace FuseMr{    ///<Fuse Mode Register
        using Addr = Register::Address<0xffffdc04,0xfffffffe,0,unsigned>;
        ///Mask Fuse Status Registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk{}; 
    }
    namespace FuseIr{    ///<Fuse Index Register
        using Addr = Register::Address<0xffffdc08,0xfffff0fc,0,unsigned>;
        ///Write Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Read Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Word Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wsel{}; 
    }
    namespace FuseDr{    ///<Fuse Data Register
        using Addr = Register::Address<0xffffdc0c,0x00000000,0,unsigned>;
        ///Data to Program
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FuseSr0{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc10,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr1{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc14,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr2{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc18,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr3{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc1c,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr4{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc20,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr5{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc24,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr6{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc28,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr7{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc2c,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr8{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc30,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
    namespace FuseSr9{    ///<Fuse Status Register
        using Addr = Register::Address<0xffffdc34,0x00000000,0,unsigned>;
        ///Fuse Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fuse{}; 
    }
}
