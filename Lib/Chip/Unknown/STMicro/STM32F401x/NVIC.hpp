#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt       Controller
    namespace Noneictr{    ///<Interrupt Controller Type           Register
        using Addr = Register::Address<0xe000e004,0xfffffff0,0,unsigned>;
        ///Total number of interrupt lines in               groups
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> intlinesnum{}; 
    }
    namespace Nonestir{    ///<Software Triggered Interrupt           Register
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0,unsigned>;
        ///interrupt to be triggered
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
    namespace Noneiser0{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Noneiser1{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e104,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Noneiser2{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e108,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Noneicer0{    ///<Interrupt Clear-Enable           Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Noneicer1{    ///<Interrupt Clear-Enable           Register
        using Addr = Register::Address<0xe000e184,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Noneicer2{    ///<Interrupt Clear-Enable           Register
        using Addr = Register::Address<0xe000e188,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Noneispr0{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Noneispr1{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e204,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Noneispr2{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e208,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Noneicpr0{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Noneicpr1{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e284,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Noneicpr2{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e288,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Noneiabr0{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e300,0x00000000,0,unsigned>;
        ///ACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Noneiabr1{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e304,0x00000000,0,unsigned>;
        ///ACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Noneiabr2{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e308,0x00000000,0,unsigned>;
        ///ACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Noneipr0{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr1{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr2{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr3{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr4{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr5{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr6{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr7{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr8{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e420,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr9{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e424,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr10{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e428,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr11{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e42c,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr12{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e430,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr13{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e434,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr14{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e438,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr15{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e43c,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr16{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e440,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr17{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e444,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr18{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e448,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace Noneipr19{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e44c,0x00000000,0,unsigned>;
        ///IPR_N0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
}
