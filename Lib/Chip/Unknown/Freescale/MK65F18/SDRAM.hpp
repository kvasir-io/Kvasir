#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SDRAM_ctrl{
        using Addr = Register::Address<0x4000f042,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> RTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IS; 
    }
    namespace SDRAM_ac0{
        using Addr = Register::Address<0x4000f048,0x00034887>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IMRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CASL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18)> BA; 
    }
    namespace SDRAM_ac1{
        using Addr = Register::Address<0x4000f050,0x00034887>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IMRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CASL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18)> BA; 
    }
    namespace SDRAM_cm0{
        using Addr = Register::Address<0x4000f04c,0x0003fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18)> BAM; 
    }
    namespace SDRAM_cm1{
        using Addr = Register::Address<0x4000f054,0x0003fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,18)> BAM; 
    }
}
