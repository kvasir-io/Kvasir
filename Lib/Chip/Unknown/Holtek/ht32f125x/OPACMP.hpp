#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//OPACMP
    namespace Noneopacr0{    ///<OPACR0
        using Addr = Register::Address<0x40018000,0xfffffef0,0,unsigned>;
        ///OPA0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa0en{}; 
        namespace Opa0enValC{
        }
        ///OPC0MS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opc0ms{}; 
        namespace Opc0msValC{
        }
        ///A0OFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a0ofm{}; 
        namespace A0ofmValC{
        }
        ///A0RS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a0rs{}; 
        namespace A0rsValC{
        }
        ///CMP0S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0s{}; 
        namespace Cmp0sValC{
        }
    }
    namespace Noneofvcr0{    ///<OFVCR0
        using Addr = Register::Address<0x40018004,0xffffffc0,0,unsigned>;
        ///A0OF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> a0of{}; 
        namespace A0ofValC{
        }
    }
    namespace Nonecmpier0{    ///<CMPIER0
        using Addr = Register::Address<0x40018008,0xfffffffc,0,unsigned>;
        ///CF0IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0ien{}; 
        namespace Cf0ienValC{
        }
        ///CR0IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0ien{}; 
        namespace Cr0ienValC{
        }
    }
    namespace Nonecmprsr0{    ///<CMPRSR0
        using Addr = Register::Address<0x4001800c,0xfffffffc,0,unsigned>;
        ///CF0RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0raw{}; 
        namespace Cf0rawValC{
        }
        ///CR0RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0raw{}; 
        namespace Cr0rawValC{
        }
    }
    namespace Nonecmpisr0{    ///<CMPISR0
        using Addr = Register::Address<0x40018010,0xfffffffc,0,unsigned>;
        ///CF0IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0is{}; 
        namespace Cf0isValC{
        }
        ///CR0IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0is{}; 
        namespace Cr0isValC{
        }
    }
    namespace Nonecmpiclr0{    ///<CMPICLR0
        using Addr = Register::Address<0x40018014,0xfffffffc,0,unsigned>;
        ///CF0ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0iclr{}; 
        namespace Cf0iclrValC{
        }
        ///CR0ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0iclr{}; 
        namespace Cr0iclrValC{
        }
    }
    namespace Noneopacr1{    ///<OPACR1
        using Addr = Register::Address<0x40018100,0xfffffef0,0,unsigned>;
        ///OPA1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa1en{}; 
        namespace Opa1enValC{
        }
        ///OPC1MS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opc1ms{}; 
        namespace Opc1msValC{
        }
        ///A1OFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a1ofm{}; 
        namespace A1ofmValC{
        }
        ///A1RS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a1rs{}; 
        namespace A1rsValC{
        }
        ///CMP1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp1s{}; 
        namespace Cmp1sValC{
        }
    }
    namespace Noneofvcr1{    ///<OFVCR1
        using Addr = Register::Address<0x40018104,0xffffffc0,0,unsigned>;
        ///A1OF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> a1of{}; 
        namespace A1ofValC{
        }
    }
    namespace Nonecmpier1{    ///<CMPIER1
        using Addr = Register::Address<0x40018108,0xfffffffc,0,unsigned>;
        ///CF1IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1ien{}; 
        namespace Cf1ienValC{
        }
        ///CR1IEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1ien{}; 
        namespace Cr1ienValC{
        }
    }
    namespace Nonecmprsr1{    ///<CMPRSR1
        using Addr = Register::Address<0x4001810c,0xfffffffc,0,unsigned>;
        ///CF1RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1raw{}; 
        namespace Cf1rawValC{
        }
        ///CR1RAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1raw{}; 
        namespace Cr1rawValC{
        }
    }
    namespace Nonecmpisr1{    ///<CMPISR1
        using Addr = Register::Address<0x40018110,0xfffffffc,0,unsigned>;
        ///CF1IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1is{}; 
        namespace Cf1isValC{
        }
        ///CR1IS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1is{}; 
        namespace Cr1isValC{
        }
    }
    namespace Nonecmpiclr1{    ///<CMPICLR1
        using Addr = Register::Address<0x40018114,0xfffffffc,0,unsigned>;
        ///CF1ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1iclr{}; 
        namespace Cf1iclrValC{
        }
        ///CR1ICLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1iclr{}; 
        namespace Cr1iclrValC{
        }
    }
}
