#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MATRIX_mcfg0{
        using Addr = Register::Address<0xffffea00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg1{
        using Addr = Register::Address<0xffffea04,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg2{
        using Addr = Register::Address<0xffffea08,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg3{
        using Addr = Register::Address<0xffffea0c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg4{
        using Addr = Register::Address<0xffffea10,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg5{
        using Addr = Register::Address<0xffffea14,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg6{
        using Addr = Register::Address<0xffffea18,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg7{
        using Addr = Register::Address<0xffffea1c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg8{
        using Addr = Register::Address<0xffffea20,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg9{
        using Addr = Register::Address<0xffffea24,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg10{
        using Addr = Register::Address<0xffffea28,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_scfg0{
        using Addr = Register::Address<0xffffea40,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg1{
        using Addr = Register::Address<0xffffea44,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg2{
        using Addr = Register::Address<0xffffea48,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg3{
        using Addr = Register::Address<0xffffea4c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg4{
        using Addr = Register::Address<0xffffea50,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg5{
        using Addr = Register::Address<0xffffea54,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg6{
        using Addr = Register::Address<0xffffea58,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg7{
        using Addr = Register::Address<0xffffea5c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_pras0{
        using Addr = Register::Address<0xffffea80,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs0{
        using Addr = Register::Address<0xffffea84,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras1{
        using Addr = Register::Address<0xffffea88,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs1{
        using Addr = Register::Address<0xffffea8c,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras2{
        using Addr = Register::Address<0xffffea90,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs2{
        using Addr = Register::Address<0xffffea94,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras3{
        using Addr = Register::Address<0xffffea98,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs3{
        using Addr = Register::Address<0xffffea9c,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras4{
        using Addr = Register::Address<0xffffeaa0,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs4{
        using Addr = Register::Address<0xffffeaa4,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras5{
        using Addr = Register::Address<0xffffeaa8,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs5{
        using Addr = Register::Address<0xffffeaac,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras6{
        using Addr = Register::Address<0xffffeab0,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs6{
        using Addr = Register::Address<0xffffeab4,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_pras7{
        using Addr = Register::Address<0xffffeab8,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs7{
        using Addr = Register::Address<0xffffeabc,0xfffffccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
    }
    namespace MATRIX_mrcr{
        using Addr = Register::Address<0xffffeb00,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RCB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RCB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RCB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RCB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RCB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RCB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RCB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RCB10; 
    }
    namespace MATRIX_wpmr{
        using Addr = Register::Address<0xffffebe4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace MATRIX_wpsr{
        using Addr = Register::Address<0xffffebe8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
