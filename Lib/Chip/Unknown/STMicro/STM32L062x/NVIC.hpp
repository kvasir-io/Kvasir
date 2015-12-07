#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt
      Controller
    namespace Noneiser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
        namespace SetenaValC{
        }
    }
    namespace Noneicer{    ///<Interrupt Clear Enable
          Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
        namespace ClrenaValC{
        }
    }
    namespace Noneispr{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
        namespace SetpendValC{
        }
    }
    namespace Noneicpr{    ///<Interrupt Clear-Pending
          Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
        namespace ClrpendValC{
        }
    }
    namespace Noneipr0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///priority for interrupt 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        namespace Pri0ValC{
        }
        ///priority for interrupt 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        namespace Pri1ValC{
        }
        ///priority for interrupt 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        namespace Pri2ValC{
        }
        ///priority for interrupt 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
        namespace Pri3ValC{
        }
    }
    namespace Noneipr1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        namespace Pri4ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        namespace Pri5ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        namespace Pri6ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
        namespace Pri7ValC{
        }
    }
    namespace Noneipr2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        namespace Pri8ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        namespace Pri9ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        namespace Pri10ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
        namespace Pri11ValC{
        }
    }
    namespace Noneipr3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        namespace Pri12ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        namespace Pri13ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        namespace Pri14ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
        namespace Pri15ValC{
        }
    }
    namespace Noneipr4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        namespace Pri16ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        namespace Pri17ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        namespace Pri18ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
        namespace Pri19ValC{
        }
    }
    namespace Noneipr5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        namespace Pri20ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        namespace Pri21ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        namespace Pri22ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
        namespace Pri23ValC{
        }
    }
    namespace Noneipr6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        namespace Pri24ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        namespace Pri25ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        namespace Pri26ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
        namespace Pri27ValC{
        }
    }
    namespace Noneipr7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        namespace Pri28ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        namespace Pri29ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        namespace Pri30ValC{
        }
        ///priority for interrupt n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
        namespace Pri31ValC{
        }
    }
}
