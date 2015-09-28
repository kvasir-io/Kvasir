#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace NV_backkey3{
        using Addr = Register::Address<0x00000400,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey2{
        using Addr = Register::Address<0x00000401,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey1{
        using Addr = Register::Address<0x00000402,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey0{
        using Addr = Register::Address<0x00000403,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey7{
        using Addr = Register::Address<0x00000404,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey6{
        using Addr = Register::Address<0x00000405,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey5{
        using Addr = Register::Address<0x00000406,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_backkey4{
        using Addr = Register::Address<0x00000407,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace NV_fsec{
        using Addr = Register::Address<0x0000040c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace NV_fopt{
        using Addr = Register::Address<0x0000040d,0xffffffff>;
    }
    namespace NV_fprot{
        using Addr = Register::Address<0x0000040e,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FPLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FPLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> FPHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FPHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FPOPEN; 
    }
    namespace NV_dfprot{
        using Addr = Register::Address<0x0000040f,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DPOPEN; 
    }
}
