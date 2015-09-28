#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonematrix_mcfg0{
        using Addr = Register::Address<0x400e0200,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg1{
        using Addr = Register::Address<0x400e0204,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg2{
        using Addr = Register::Address<0x400e0208,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg3{
        using Addr = Register::Address<0x400e020c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_scfg0{
        using Addr = Register::Address<0x400e0240,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg1{
        using Addr = Register::Address<0x400e0244,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg2{
        using Addr = Register::Address<0x400e0248,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg3{
        using Addr = Register::Address<0x400e024c,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg4{
        using Addr = Register::Address<0x400e0250,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_pras0{
        using Addr = Register::Address<0x400e0280,0xfffccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
    }
    namespace Nonematrix_pras1{
        using Addr = Register::Address<0x400e0288,0xfffccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
    }
    namespace Nonematrix_pras2{
        using Addr = Register::Address<0x400e0290,0xfffccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
    }
    namespace Nonematrix_pras3{
        using Addr = Register::Address<0x400e0298,0xfffccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
    }
    namespace Nonematrix_pras4{
        using Addr = Register::Address<0x400e02a0,0xfffccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
    }
    namespace Noneccfg_sysio{
        using Addr = Register::Address<0x400e0314,0xffffe30f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYSIO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSIO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SYSIO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSIO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SYSIO10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYSIO11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYSIO12; 
    }
    namespace Noneccfg_smcnfcs{
        using Addr = Register::Address<0x400e031c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SMC_NFCS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SMC_NFCS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SMC_NFCS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SMC_NFCS3; 
    }
    namespace Nonematrix_wpmr{
        using Addr = Register::Address<0x400e03e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace Nonematrix_wpsr{
        using Addr = Register::Address<0x400e03e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
