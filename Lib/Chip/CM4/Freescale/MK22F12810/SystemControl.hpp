#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SCB_actlr{
        using Addr = Register::Address<0xe000e008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DISMCYCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISDEFWBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISFOLD; 
    }
    namespace SCB_cpuid{
        using Addr = Register::Address<0xe000ed00,0x000f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REVISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> PARTNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> VARIANT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IMPLEMENTER; 
    }
    namespace SCB_icsr{
        using Addr = Register::Address<0xe000ed04,0x613c0600>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> VECTACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RETTOBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12)> VECTPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ISRPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ISRPREEMPT; 
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
        using Addr = Register::Address<0xe000ed0c,0x000078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VECTRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VECTCLRACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYSRESETREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRIGROUP; 
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
        using Addr = Register::Address<0xe000ed14,0xfffffce4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NONBASETHRDENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USERSETMPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UNALIGN_TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIV_0_TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BFHFNMIGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STKALIGN; 
    }
    namespace SCB_shpr1{
        using Addr = Register::Address<0xe000ed18,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_6; 
    }
    namespace SCB_shpr2{
        using Addr = Register::Address<0xe000ed1c,0x00ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_11; 
    }
    namespace SCB_shpr3{
        using Addr = Register::Address<0xe000ed20,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_15; 
    }
    namespace SCB_shcsr{
        using Addr = Register::Address<0xe000ed24,0xfff80274>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MEMFAULTACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BUSFAULTACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USGFAULTACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SVCALLACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MONITORACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PENDSVACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYSTICKACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> USGFAULTPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MEMFAULTPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUSFAULTPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SVCALLPENDED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MEMFAULTENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BUSFAULTENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USGFAULTENA; 
    }
    namespace SCB_cfsr{
        using Addr = Register::Address<0xe000ed28,0xfcf04044>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IACCVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACCVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MUNSTKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MLSPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MMARVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IBUSERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PRECISERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IMPRECISERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UNSTKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LSPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BFARVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UNDEFINSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INVSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> INVPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> NOCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UNALIGNED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DIVBYZERO; 
    }
    namespace SCB_hfsr{
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VECTTBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FORCED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DEBUGEVT; 
    }
    namespace SCB_dfsr{
        using Addr = Register::Address<0xe000ed30,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HALTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BKPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DWTTRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTERNAL; 
    }
    namespace SCB_mmfar{
        using Addr = Register::Address<0xe000ed34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace SCB_bfar{
        using Addr = Register::Address<0xe000ed38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace SCB_afsr{
        using Addr = Register::Address<0xe000ed3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AUXFAULT; 
    }
    namespace SCB_cpacr{
        using Addr = Register::Address<0xe000ed88,0xff0fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> CP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> CP11; 
    }
}
