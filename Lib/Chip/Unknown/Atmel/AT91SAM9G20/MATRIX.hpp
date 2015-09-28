#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonematrix_mcfg0{
        using Addr = Register::Address<0xffffee00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg1{
        using Addr = Register::Address<0xffffee04,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg2{
        using Addr = Register::Address<0xffffee08,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg3{
        using Addr = Register::Address<0xffffee0c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg4{
        using Addr = Register::Address<0xffffee10,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg5{
        using Addr = Register::Address<0xffffee14,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_scfg0{
        using Addr = Register::Address<0xffffee40,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg1{
        using Addr = Register::Address<0xffffee44,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg2{
        using Addr = Register::Address<0xffffee48,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg3{
        using Addr = Register::Address<0xffffee4c,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg4{
        using Addr = Register::Address<0xffffee50,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_pras0{
        using Addr = Register::Address<0xffffee80,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras1{
        using Addr = Register::Address<0xffffee88,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras2{
        using Addr = Register::Address<0xffffee90,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras3{
        using Addr = Register::Address<0xffffee98,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras4{
        using Addr = Register::Address<0xffffeea0,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_mrcr{
        using Addr = Register::Address<0xffffef00,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCB1; 
    }
    namespace Noneebi_csa{
        using Addr = Register::Address<0xffffef1c,0xfffcfec5>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EBI_CS1A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EBI_CS3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EBI_CS4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EBI_CS5A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EBI_DBPUC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> VDDIOMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IOSR; 
    }
}
