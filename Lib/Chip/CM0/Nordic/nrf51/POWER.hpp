#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_constlat{
        using Addr = Register::Address<0x40000078,0xffffffff>;
    }
    namespace Nonetasks_lowpwr{
        using Addr = Register::Address<0x4000007c,0xffffffff>;
    }
    namespace Noneevents_pofwarn{
        using Addr = Register::Address<0x40000108,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40000304,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POFWARN; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40000308,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POFWARN; 
    }
    namespace Noneresetreas{
        using Addr = Register::Address<0x40000400,0xfff8fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESETPIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LPCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DIF; 
    }
    namespace Noneramstatus{
        using Addr = Register::Address<0x40000428,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAMBLOCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAMBLOCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAMBLOCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RAMBLOCK3; 
    }
    namespace Nonesystemoff{
        using Addr = Register::Address<0x40000500,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSTEMOFF; 
    }
    namespace Nonepofcon{
        using Addr = Register::Address<0x40000510,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> THRESHOLD; 
    }
    namespace Nonegpregret{
        using Addr = Register::Address<0x4000051c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPREGRET; 
    }
    namespace Noneramon{
        using Addr = Register::Address<0x40000524,0xfffcfffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ONRAM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONRAM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OFFRAM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFFRAM1; 
    }
    namespace Nonereset{
        using Addr = Register::Address<0x40000544,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESET; 
    }
    namespace Noneramonb{
        using Addr = Register::Address<0x40000554,0xfffcfffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ONRAM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONRAM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OFFRAM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFFRAM3; 
    }
    namespace Nonedcdcen{
        using Addr = Register::Address<0x40000578,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCDCEN; 
    }
    namespace Nonedcdcforce{
        using Addr = Register::Address<0x40000a08,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FORCEOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FORCEON; 
    }
}
