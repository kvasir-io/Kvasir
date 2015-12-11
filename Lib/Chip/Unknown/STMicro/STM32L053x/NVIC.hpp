#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt
      Controller
    namespace Noneiser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Noneicer{    ///<Interrupt Clear Enable
          Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Noneispr{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Noneicpr{    ///<Interrupt Clear-Pending
          Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Noneipr0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///priority for interrupt 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        ///priority for interrupt 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        ///priority for interrupt 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        ///priority for interrupt 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace Noneipr1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace Noneipr2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Noneipr3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace Noneipr4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace Noneipr5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace Noneipr6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace Noneipr7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
}
