#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//OPACMP
    namespace OpacmpOpacr0{    ///<OPACR0
        using Addr = Register::Address<0x40018000,0x000000f0,0x00000000,unsigned>;
        ///OPA0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa0en{}; 
        ///OPC0MS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opc0ms{}; 
        ///A0OFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a0ofm{}; 
        ///A0RS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a0rs{}; 
        ///CMP0S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0s{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpOfvcr0{    ///<OFVCR0
        using Addr = Register::Address<0x40018004,0x00000000,0x00000000,unsigned>;
        ///A0OF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> a0of{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmpier0{    ///<CMPIER0
        using Addr = Register::Address<0x40018008,0x00000000,0x00000000,unsigned>;
        ///CF0IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0ien{}; 
        ///CR0IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0ien{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmprsr0{    ///<CMPRSR0
        using Addr = Register::Address<0x4001800c,0x00000000,0x00000000,unsigned>;
        ///CF0RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0raw{}; 
        ///CR0RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0raw{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmpisr0{    ///<CMPISR0
        using Addr = Register::Address<0x40018010,0x00000000,0x00000000,unsigned>;
        ///CF0IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0is{}; 
        ///CR0IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0is{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmpiclr0{    ///<CMPICLR0
        using Addr = Register::Address<0x40018014,0x00000000,0x00000000,unsigned>;
        ///CF0ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0iclr{}; 
        ///CR0ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0iclr{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpOpacr1{    ///<OPACR1
        using Addr = Register::Address<0x40018100,0x000000f0,0x00000000,unsigned>;
        ///OPA1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa1en{}; 
        ///OPC1MS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opc1ms{}; 
        ///A1OFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a1ofm{}; 
        ///A1RS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a1rs{}; 
        ///CMP1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp1s{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpOfvcr1{    ///<OFVCR1
        using Addr = Register::Address<0x40018104,0x00000000,0x00000000,unsigned>;
        ///A1OF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> a1of{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmpier1{    ///<CMPIER1
        using Addr = Register::Address<0x40018108,0x00000000,0x00000000,unsigned>;
        ///CF1IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1ien{}; 
        ///CR1IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1ien{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmprsr1{    ///<CMPRSR1
        using Addr = Register::Address<0x4001810c,0x00000000,0x00000000,unsigned>;
        ///CF1RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1raw{}; 
        ///CR1RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1raw{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmpisr1{    ///<CMPISR1
        using Addr = Register::Address<0x40018110,0x00000000,0x00000000,unsigned>;
        ///CF1IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1is{}; 
        ///CR1IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1is{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace OpacmpCmpiclr1{    ///<CMPICLR1
        using Addr = Register::Address<0x40018114,0x00000000,0x00000000,unsigned>;
        ///CF1ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1iclr{}; 
        ///CR1ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1iclr{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
