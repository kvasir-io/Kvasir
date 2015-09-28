#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneafmr{
        using Addr = Register::Address<0x4003c000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACCOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACCBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EFCAN; 
    }
    namespace Nonesff_sa{
        using Addr = Register::Address<0x4003c004,0xfffff803>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,2)> SFF_SA; 
    }
    namespace Nonesff_grp_sa{
        using Addr = Register::Address<0x4003c008,0xfffff003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2)> SFF_GRP_SA; 
    }
    namespace Noneeff_sa{
        using Addr = Register::Address<0x4003c00c,0xfffff803>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,2)> EFF_SA; 
    }
    namespace Noneeff_grp_sa{
        using Addr = Register::Address<0x4003c010,0xfffff003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2)> EFF_GRP_SA; 
    }
    namespace Noneendoftable{
        using Addr = Register::Address<0x4003c014,0xfffff003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2)> ENDOFTABLE; 
    }
    namespace Noneluterrad{
        using Addr = Register::Address<0x4003c018,0xfffff803>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,2)> LUTERRAD; 
    }
    namespace Noneluterr{
        using Addr = Register::Address<0x4003c01c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LUTERR; 
    }
    namespace Nonefcanie{
        using Addr = Register::Address<0x4003c020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCANIE; 
    }
    namespace Nonefcanic0{
        using Addr = Register::Address<0x4003c024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTPND; 
    }
    namespace Nonefcanic1{
        using Addr = Register::Address<0x4003c028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IntPnd32; 
    }
}
