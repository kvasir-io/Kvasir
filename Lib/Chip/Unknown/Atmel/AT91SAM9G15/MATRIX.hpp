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
    namespace MATRIX_mcfg6{
        using Addr = Register::Address<0xffffde18,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg7{
        using Addr = Register::Address<0xffffde1c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg8{
        using Addr = Register::Address<0xffffde20,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg9{
        using Addr = Register::Address<0xffffde24,0xfffffff8>;
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
    namespace MATRIX_scfg5{
        using Addr = Register::Address<0xffffde54,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg6{
        using Addr = Register::Address<0xffffde58,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg7{
        using Addr = Register::Address<0xffffde5c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg8{
        using Addr = Register::Address<0xffffde60,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg9{
        using Addr = Register::Address<0xffffde64,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_pras0{
        using Addr = Register::Address<0xffffde80,0xcccccccc>;
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
        using Addr = Register::Address<0xffffde84,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras1{
        using Addr = Register::Address<0xffffde88,0xcccccccc>;
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
        using Addr = Register::Address<0xffffde8c,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras2{
        using Addr = Register::Address<0xffffde90,0xcccccccc>;
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
        using Addr = Register::Address<0xffffde94,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras3{
        using Addr = Register::Address<0xffffde98,0xcccccccc>;
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
        using Addr = Register::Address<0xffffde9c,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras4{
        using Addr = Register::Address<0xffffdea0,0xcccccccc>;
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
        using Addr = Register::Address<0xffffdea4,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras5{
        using Addr = Register::Address<0xffffdea8,0xcccccccc>;
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
        using Addr = Register::Address<0xffffdeac,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras6{
        using Addr = Register::Address<0xffffdeb0,0xcccccccc>;
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
        using Addr = Register::Address<0xffffdeb4,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras7{
        using Addr = Register::Address<0xffffdeb8,0xcccccccc>;
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
        using Addr = Register::Address<0xffffdebc,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras8{
        using Addr = Register::Address<0xffffdec0,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs8{
        using Addr = Register::Address<0xffffdec4,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_pras9{
        using Addr = Register::Address<0xffffdec8,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs9{
        using Addr = Register::Address<0xffffdecc,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
    }
    namespace MATRIX_mrcr{
        using Addr = Register::Address<0xffffdf00,0xfffff800>;
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
