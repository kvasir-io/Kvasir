#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneiser{
        using Addr = Register::Address<0xe000e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Noneicer{
        using Addr = Register::Address<0xe000e180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Noneispr{
        using Addr = Register::Address<0xe000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Noneicpr{
        using Addr = Register::Address<0xe000e280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Noneipr0{
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_00; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_03; 
    }
    namespace Noneipr1{
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_43; 
    }
    namespace Noneipr2{
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_80; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_83; 
    }
    namespace Noneipr3{
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_120; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_121; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_122; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_123; 
    }
    namespace Noneipr4{
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_160; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_161; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_162; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_163; 
    }
    namespace Noneipr5{
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_200; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_201; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_202; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_203; 
    }
    namespace Noneipr6{
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_240; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_241; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_242; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_243; 
    }
    namespace Noneipr7{
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_280; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_281; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_282; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_283; 
    }
}
