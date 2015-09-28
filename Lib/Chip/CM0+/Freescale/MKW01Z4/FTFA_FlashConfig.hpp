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
    namespace NV_fprot3{
        using Addr = Register::Address<0x00000408,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace NV_fprot2{
        using Addr = Register::Address<0x00000409,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace NV_fprot1{
        using Addr = Register::Address<0x0000040a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace NV_fprot0{
        using Addr = Register::Address<0x0000040b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace NV_fsec{
        using Addr = Register::Address<0x0000040c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FSLACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace NV_fopt{
        using Addr = Register::Address<0x0000040d,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPBOOT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NMI_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESET_PIN_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LPBOOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FAST_INIT; 
    }
}
