#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PH)
    namespace PhData{    ///<PH Data Register
        using Addr = Register::Address<0x400c0700,0xffffffe0,0x00000000,unsigned>;
        ///PH0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0{}; 
        ///PH1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1{}; 
        ///PH2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2{}; 
        ///PH3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3{}; 
        ///PH4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ph4{}; 
    }
    namespace PhCr{    ///<PH Control Register
        using Addr = Register::Address<0x400c0704,0xffffffe0,0x00000000,unsigned>;
        ///PH0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0c{}; 
        ///PH1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1c{}; 
        ///PH2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2c{}; 
        ///PH3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3c{}; 
        ///PH4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ph4c{}; 
    }
    namespace PhFr1{    ///<PH Function Register 1
        using Addr = Register::Address<0x400c0708,0xfffffffa,0x00000000,unsigned>;
        ///PH0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0f1{}; 
        ///PH2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f1{}; 
    }
    namespace PhFr3{    ///<PH Function Register 3
        using Addr = Register::Address<0x400c0710,0xffffffe3,0x00000000,unsigned>;
        ///PH2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f3{}; 
        ///PH3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3f3{}; 
        ///PH4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ph4f3{}; 
    }
    namespace PhOd{    ///<PH Open Drain Control Register
        using Addr = Register::Address<0x400c0728,0xffffffe0,0x00000000,unsigned>;
        ///PH0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0od{}; 
        ///PH1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1od{}; 
        ///PH2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2od{}; 
        ///PH3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3od{}; 
        ///PH4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ph4od{}; 
    }
    namespace PhPup{    ///<PH Pull-Up Control Register
        using Addr = Register::Address<0x400c072c,0xffffffe0,0x00000000,unsigned>;
        ///PH0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0up{}; 
        ///PH1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1up{}; 
        ///PH2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2up{}; 
        ///PH3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3up{}; 
        ///PH4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ph4up{}; 
    }
    namespace PhIe{    ///<PH Input Enable Control Register
        using Addr = Register::Address<0x400c0738,0xffffffe0,0x00000000,unsigned>;
        ///PH0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0ie{}; 
        ///PH1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1ie{}; 
        ///PH2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2ie{}; 
        ///PH3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3ie{}; 
        ///PH4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ph4ie{}; 
    }
}
