#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt Controller
    namespace NonenvicIser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///Interrupt set enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace NonenvicIcer{    ///<Interrupt Clear Enable Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///Interrupt clear-enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace NonenvicIspr{    ///<Interrupt Set Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///Interrupt set-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace NonenvicIcpr{    ///<Interrupt Clear Pending Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///Interrupt clear-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace NonenvicIpr0{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///Priority of interrupt 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        ///Priority of interrupt 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        ///Priority of interrupt 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        ///Priority of interrupt 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace NonenvicIpr1{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///Priority of interrupt 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///Priority of interrupt 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///Priority of interrupt 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///Priority of interrupt 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace NonenvicIpr2{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///Priority of interrupt 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///Priority of interrupt 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///Priority of interrupt 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///Priority of interrupt 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace NonenvicIpr3{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///Priority of interrupt 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///Priority of interrupt 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///Priority of interrupt 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of interrupt 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace NonenvicIpr4{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///Priority of interrupt 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        ///Priority of interrupt 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        ///Priority of interrupt 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        ///Priority of interrupt 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace NonenvicIpr5{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///Priority of interrupt 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        ///Priority of interrupt 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        ///Priority of interrupt 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        ///Priority of interrupt 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace NonenvicIpr6{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///Priority of interrupt 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        ///Priority of interrupt 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        ///Priority of interrupt 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        ///Priority of interrupt 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace NonenvicIpr7{    ///<Interrupt Priority Register n
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///Priority of interrupt 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        ///Priority of interrupt 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        ///Priority of interrupt 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        ///Priority of interrupt 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
}
