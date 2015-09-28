#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneictr{
        using Addr = Register::Address<0xe000e004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> INTLINESNUM; 
    }
    namespace Nonestir{
        using Addr = Register::Address<0xe000ef00,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> INTID; 
    }
    namespace Noneiser0{
        using Addr = Register::Address<0xe000e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Noneiser1{
        using Addr = Register::Address<0xe000e104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Noneicer0{
        using Addr = Register::Address<0xe000e180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Noneicer1{
        using Addr = Register::Address<0xe000e184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Noneispr0{
        using Addr = Register::Address<0xe000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Noneispr1{
        using Addr = Register::Address<0xe000e204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Noneicpr0{
        using Addr = Register::Address<0xe000e280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Noneicpr1{
        using Addr = Register::Address<0xe000e284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Noneiabr0{
        using Addr = Register::Address<0xe000e300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACTIVE; 
    }
    namespace Noneiabr1{
        using Addr = Register::Address<0xe000e304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACTIVE; 
    }
    namespace Noneipr0{
        using Addr = Register::Address<0xe000e400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr1{
        using Addr = Register::Address<0xe000e404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr2{
        using Addr = Register::Address<0xe000e408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr3{
        using Addr = Register::Address<0xe000e40c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr4{
        using Addr = Register::Address<0xe000e410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr5{
        using Addr = Register::Address<0xe000e414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr6{
        using Addr = Register::Address<0xe000e418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr7{
        using Addr = Register::Address<0xe000e41c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr8{
        using Addr = Register::Address<0xe000e420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr9{
        using Addr = Register::Address<0xe000e424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr10{
        using Addr = Register::Address<0xe000e428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr11{
        using Addr = Register::Address<0xe000e42c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr12{
        using Addr = Register::Address<0xe000e430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
    namespace Noneipr13{
        using Addr = Register::Address<0xe000e434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IPR_N0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IPR_N1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPR_N2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IPR_N3; 
    }
}
