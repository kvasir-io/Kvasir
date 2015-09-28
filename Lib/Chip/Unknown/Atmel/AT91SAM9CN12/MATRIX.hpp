#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MATRIX_mcfg0{
        using Addr = Register::Address<0xffffde00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg1{
        using Addr = Register::Address<0xffffde04,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg2{
        using Addr = Register::Address<0xffffde08,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg3{
        using Addr = Register::Address<0xffffde0c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg4{
        using Addr = Register::Address<0xffffde10,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg5{
        using Addr = Register::Address<0xffffde14,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_scfg0{
        using Addr = Register::Address<0xffffde40,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg1{
        using Addr = Register::Address<0xffffde44,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg2{
        using Addr = Register::Address<0xffffde48,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg3{
        using Addr = Register::Address<0xffffde4c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg4{
        using Addr = Register::Address<0xffffde50,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_pras0{
        using Addr = Register::Address<0xffffde80,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace MATRIX_pras1{
        using Addr = Register::Address<0xffffde88,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace MATRIX_pras2{
        using Addr = Register::Address<0xffffde90,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace MATRIX_pras3{
        using Addr = Register::Address<0xffffde98,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace MATRIX_pras4{
        using Addr = Register::Address<0xffffdea0,0xffcccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
    }
    namespace MATRIX_mrcr{
        using Addr = Register::Address<0xffffdf00,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RCB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RCB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RCB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCB5; 
    }
    namespace MATRIX_wpmr{
        using Addr = Register::Address<0xffffdfe4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace MATRIX_wpsr{
        using Addr = Register::Address<0xffffdfe8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
