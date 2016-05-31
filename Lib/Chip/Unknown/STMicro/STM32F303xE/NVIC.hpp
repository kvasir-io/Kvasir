#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Nested Vectored Interrupt       Controller
    namespace NvicIctr{    ///<Interrupt Controller Type           Register
        using Addr = Register::Address<0xe000e004,0xfffffff0,0x00000000,unsigned>;
        ///Total number of interrupt lines in               groups
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> intlinesnum{}; 
    }
    namespace NvicStir{    ///<Software Triggered Interrupt           Register
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0x00000000,unsigned>;
        ///interrupt to be triggered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
    namespace NvicIser0{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0x00000000,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace NvicIser1{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e104,0x00000000,0x00000000,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace NvicIser2{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e108,0x00000000,0x00000000,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace NvicIcer0{    ///<Interrupt Clear-Enable           Register
        using Addr = Register::Address<0xe000e180,0x00000000,0x00000000,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace NvicIcer1{    ///<Interrupt Clear-Enable           Register
        using Addr = Register::Address<0xe000e184,0x00000000,0x00000000,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace NvicIcer2{    ///<Interrupt Clear-Enable           Register
        using Addr = Register::Address<0xe000e188,0x00000000,0x00000000,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace NvicIspr0{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0x00000000,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace NvicIspr1{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e204,0x00000000,0x00000000,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace NvicIspr2{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e208,0x00000000,0x00000000,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace NvicIcpr0{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e280,0x00000000,0x00000000,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace NvicIcpr1{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e284,0x00000000,0x00000000,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace NvicIcpr2{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e288,0x00000000,0x00000000,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace NvicIabr0{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e300,0x00000000,0x00000000,unsigned>;
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace NvicIabr1{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e304,0x00000000,0x00000000,unsigned>;
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace NvicIabr2{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e308,0x00000000,0x00000000,unsigned>;
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace NvicIpr0{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e400,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr1{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e404,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr2{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e408,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr3{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e40c,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr4{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e410,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr5{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e414,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr6{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e418,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr7{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e41c,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr8{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e420,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr9{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e424,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr10{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e428,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr11{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e42c,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr12{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e430,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr13{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e434,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr14{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e438,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr15{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e43c,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr16{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e440,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr17{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e444,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr18{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e448,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr19{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e44c,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr20{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e450,0x00000000,0x00000000,unsigned>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
}
