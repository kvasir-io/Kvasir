#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PDB1_sc{
        using Addr = Register::Address<0x40031000,0xfff00010>;
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
    namespace PDB1_mod{
        using Addr = Register::Address<0x40031004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace PDB1_cnt{
        using Addr = Register::Address<0x40031008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PDB1_idly{
        using Addr = Register::Address<0x4003100c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IDLY; 
    }
    namespace PDB1_chc1{
        using Addr = Register::Address<0x40031010,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BB; 
    }
    namespace PDB1_chs{
        using Addr = Register::Address<0x40031014,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CF; 
    }
    namespace PDB1_chdly0{
        using Addr = Register::Address<0x40031018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB1_chdly1{
        using Addr = Register::Address<0x4003101c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB1_chdly2{
        using Addr = Register::Address<0x40031020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB1_chdly3{
        using Addr = Register::Address<0x40031024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB1_dacintc{
        using Addr = Register::Address<0x40031150,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXT; 
    }
    namespace PDB1_dacint{
        using Addr = Register::Address<0x40031154,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INT; 
    }
    namespace PDB1_poen{
        using Addr = Register::Address<0x40031190,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POEN; 
    }
    namespace PDB1_po0dly{
        using Addr = Register::Address<0x40031194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
    namespace PDB1_po1dly{
        using Addr = Register::Address<0x40031198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
    namespace PDB1_po2dly{
        using Addr = Register::Address<0x4003119c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
    namespace PDB1_po3dly{
        using Addr = Register::Address<0x400311a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
}
