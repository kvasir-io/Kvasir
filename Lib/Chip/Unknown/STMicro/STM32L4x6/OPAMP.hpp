#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneopamp1_csr{
        using Addr = Register::Address<0x40007800,0x7fff08c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPALPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> OPAMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PGA_GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CALON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USERTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CALOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OPA_RANGE; 
    }
    namespace Noneopamp1_otr{
        using Addr = Register::Address<0x40007804,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRIMOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TRIMOFFSETP; 
    }
    namespace Noneopamp1_lpotr{
        using Addr = Register::Address<0x40007808,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRIMLPOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TRIMLPOFFSETP; 
    }
    namespace Noneopamp2_csr{
        using Addr = Register::Address<0x40007810,0xffff08c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPALPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> OPAMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PGA_GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> VM_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CALON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USERTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CALOUT; 
    }
    namespace Noneopamp2_otr{
        using Addr = Register::Address<0x40007814,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRIMOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TRIMOFFSETP; 
    }
    namespace Noneopamp2_lpotr{
        using Addr = Register::Address<0x40007818,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRIMLPOFFSETN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TRIMLPOFFSETP; 
    }
}
