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
    namespace Nonematrix_pras0{
        using Addr = Register::Address<0x400e0280,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
    }
    namespace Nonematrix_pras1{
        using Addr = Register::Address<0x400e0288,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
    }
    namespace Nonematrix_pras2{
        using Addr = Register::Address<0x400e0290,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
    }
    namespace Nonematrix_pras3{
        using Addr = Register::Address<0x400e0298,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
    }
    namespace Noneccfg_sysio{
        using Addr = Register::Address<0x400e0314,0xffffef0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYSIO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYSIO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SYSIO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSIO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYSIO12; 
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
