#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SCB_actlr{
        using Addr = Register::Address<0xe000e008,0xffffffff>;
    }
    namespace SCB_cpuid{
        using Addr = Register::Address<0xe000ed00,0x000f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REVISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> PARTNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> VARIANT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IMPLEMENTER; 
    }
    namespace SCB_icsr{
        using Addr = Register::Address<0xe000ed04,0x61fc0fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12)> VECTPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PENDSTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PENDSTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PENDSVCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PENDSVSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NMIPENDSET; 
    }
    namespace SCB_vtor{
        using Addr = Register::Address<0xe000ed08,0x0000007f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,7)> TBLOFF; 
    }
    namespace SCB_aircr{
        using Addr = Register::Address<0xe000ed0c,0x00007ff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VECTCLRACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYSRESETREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENDIANNESS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> VECTKEY; 
    }
    namespace SCB_scr{
        using Addr = Register::Address<0xe000ed10,0xffffffe9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLEEPONEXIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SLEEPDEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEVONPEND; 
    }
    namespace SCB_ccr{
        using Addr = Register::Address<0xe000ed14,0xfffffdf7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNALIGN_TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STKALIGN; 
    }
    namespace SCB_shpr2{
        using Addr = Register::Address<0xe000ed1c,0x3fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_11; 
    }
    namespace SCB_shpr3{
        using Addr = Register::Address<0xe000ed20,0x3f3fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_15; 
    }
    namespace SCB_shcsr{
        using Addr = Register::Address<0xe000ed24,0xffff7fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SVCALLPENDED; 
    }
    namespace SCB_dfsr{
        using Addr = Register::Address<0xe000ed30,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HALTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BKPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DWTTRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTERNAL; 
    }
}
