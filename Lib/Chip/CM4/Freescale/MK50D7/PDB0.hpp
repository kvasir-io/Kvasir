#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PDB0_sc{
        using Addr = Register::Address<0x40036000,0xfff00010>;
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
    namespace PDB0_mod{
        using Addr = Register::Address<0x40036004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace PDB0_cnt{
        using Addr = Register::Address<0x40036008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PDB0_idly{
        using Addr = Register::Address<0x4003600c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IDLY; 
    }
    namespace PDB0_ch0c1{
        using Addr = Register::Address<0x40036010,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BB; 
    }
    namespace PDB0_ch1c1{
        using Addr = Register::Address<0x40036038,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BB; 
    }
    namespace PDB0_ch0s{
        using Addr = Register::Address<0x40036014,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CF; 
    }
    namespace PDB0_ch1s{
        using Addr = Register::Address<0x4003603c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CF; 
    }
    namespace PDB0_ch0dly0{
        using Addr = Register::Address<0x40036018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_ch1dly0{
        using Addr = Register::Address<0x40036040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_ch0dly1{
        using Addr = Register::Address<0x4003601c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_ch1dly1{
        using Addr = Register::Address<0x40036044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_dacintc{
        using Addr = Register::Address<0x40036150,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXT; 
    }
    namespace PDB0_dacint{
        using Addr = Register::Address<0x40036154,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INT; 
    }
    namespace PDB0_poen{
        using Addr = Register::Address<0x40036190,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POEN; 
    }
    namespace PDB0_po0dly{
        using Addr = Register::Address<0x40036194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
    namespace PDB0_po1dly{
        using Addr = Register::Address<0x40036198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
    namespace PDB0_po2dly{
        using Addr = Register::Address<0x4003619c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
}
