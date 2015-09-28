#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40004000,0xfff88000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SPDIFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXSTEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DRFMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CUMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PTMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CHSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> INSEL; 
    }
    namespace Noneimr{
        using Addr = Register::Address<0x40004004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSRNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBLKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IFEIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40004008,0x8000fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSRNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,16)> WIDTH5; 
    }
    namespace Noneifcr{
        using Addr = Register::Address<0x4000400c,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERRCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCDCF; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40004010,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> DR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> U; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PT; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40004014,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> USR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SOB; 
    }
    namespace Nonedir{
        using Addr = Register::Address<0x40004018,0xe000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> THI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16)> TLO; 
    }
}
