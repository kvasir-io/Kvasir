#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonematrix_mcfg0{
        using Addr = Register::Address<0x400e0400,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg1{
        using Addr = Register::Address<0x400e0404,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg2{
        using Addr = Register::Address<0x400e0408,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg3{
        using Addr = Register::Address<0x400e040c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg4{
        using Addr = Register::Address<0x400e0410,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_mcfg5{
        using Addr = Register::Address<0x400e0414,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace Nonematrix_scfg0{
        using Addr = Register::Address<0x400e0440,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg1{
        using Addr = Register::Address<0x400e0444,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg2{
        using Addr = Register::Address<0x400e0448,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg3{
        using Addr = Register::Address<0x400e044c,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg4{
        using Addr = Register::Address<0x400e0450,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg5{
        using Addr = Register::Address<0x400e0454,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg6{
        using Addr = Register::Address<0x400e0458,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg7{
        using Addr = Register::Address<0x400e045c,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_scfg8{
        using Addr = Register::Address<0x400e0460,0xfce0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> FIXED_DEFMSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> ARBT; 
    }
    namespace Nonematrix_pras0{
        using Addr = Register::Address<0x400e0480,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras1{
        using Addr = Register::Address<0x400e0488,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras2{
        using Addr = Register::Address<0x400e0490,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras3{
        using Addr = Register::Address<0x400e0498,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras4{
        using Addr = Register::Address<0x400e04a0,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras5{
        using Addr = Register::Address<0x400e04a8,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras6{
        using Addr = Register::Address<0x400e04b0,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras7{
        using Addr = Register::Address<0x400e04b8,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_pras8{
        using Addr = Register::Address<0x400e04c0,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace Nonematrix_mrcr{
        using Addr = Register::Address<0x400e0500,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RCB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RCB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RCB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCB5; 
    }
    namespace Noneccfg_sysio{
        using Addr = Register::Address<0x400e0514,0xffffefff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYSIO12; 
    }
    namespace Nonematrix_wpmr{
        using Addr = Register::Address<0x400e05e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace Nonematrix_wpsr{
        using Addr = Register::Address<0x400e05e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
