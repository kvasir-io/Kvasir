#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneinten{
        using Addr = Register::Address<0x40020300,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PREGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PREGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREGION1RA; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40020304,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PREGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PREGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREGION1RA; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40020308,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PREGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PREGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREGION1RA; 
    }
    namespace Nonenmien{
        using Addr = Register::Address<0x40020320,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PREGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PREGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREGION1RA; 
    }
    namespace Nonenmienset{
        using Addr = Register::Address<0x40020324,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PREGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PREGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREGION1RA; 
    }
    namespace Nonenmienclr{
        using Addr = Register::Address<0x40020328,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PREGION0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PREGION0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PREGION1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREGION1RA; 
    }
    namespace Noneregionen{
        using Addr = Register::Address<0x40020510,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RGN0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RGN0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RGN1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RGN1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RGN2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RGN2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RGN3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RGN3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PRGN0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PRGN0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PRGN1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PRGN1RA; 
    }
    namespace Noneregionenset{
        using Addr = Register::Address<0x40020514,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RGN0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RGN0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RGN1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RGN1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RGN2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RGN2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RGN3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RGN3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PRGN0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PRGN0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PRGN1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PRGN1RA; 
    }
    namespace Noneregionenclr{
        using Addr = Register::Address<0x40020518,0xf0ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RGN0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RGN0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RGN1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RGN1RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RGN2WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RGN2RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RGN3WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RGN3RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PRGN0WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PRGN0RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PRGN1WA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PRGN1RA; 
    }
}
