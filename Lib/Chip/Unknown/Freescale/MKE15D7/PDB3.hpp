#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PDB3_sc{
        using Addr = Register::Address<0x40028000,0xfff00010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LDOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PDBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PDBIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PDBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> PRESCALER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PDBEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDMOD; 
    }
    namespace PDB3_mod{
        using Addr = Register::Address<0x40028004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace PDB3_cnt{
        using Addr = Register::Address<0x40028008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PDB3_idly{
        using Addr = Register::Address<0x4002800c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IDLY; 
    }
    namespace PDB3_chc1{
        using Addr = Register::Address<0x40028010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TOS; 
    }
    namespace PDB3_chs{
        using Addr = Register::Address<0x40028014,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CF; 
    }
    namespace PDB3_chdly0{
        using Addr = Register::Address<0x40028018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB3_chdly1{
        using Addr = Register::Address<0x4002801c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB3_chdly2{
        using Addr = Register::Address<0x40028020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB3_chdly3{
        using Addr = Register::Address<0x40028024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB3_poen{
        using Addr = Register::Address<0x40028190,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POEN; 
    }
    namespace PDB3_podly{
        using Addr = Register::Address<0x40028194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
}
