#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MATRIX_mcfg0{
        using Addr = Register::Address<0xffffec00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg1{
        using Addr = Register::Address<0xffffec04,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg2{
        using Addr = Register::Address<0xffffec08,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg3{
        using Addr = Register::Address<0xffffec0c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg4{
        using Addr = Register::Address<0xffffec10,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg5{
        using Addr = Register::Address<0xffffec14,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg6{
        using Addr = Register::Address<0xffffec18,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg7{
        using Addr = Register::Address<0xffffec1c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg8{
        using Addr = Register::Address<0xffffec20,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg9{
        using Addr = Register::Address<0xffffec24,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg10{
        using Addr = Register::Address<0xffffec28,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg11{
        using Addr = Register::Address<0xffffec2c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg12{
        using Addr = Register::Address<0xffffec30,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg13{
        using Addr = Register::Address<0xffffec34,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg14{
        using Addr = Register::Address<0xffffec38,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_mcfg15{
        using Addr = Register::Address<0xffffec3c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ULBT; 
    }
    namespace MATRIX_scfg0{
        using Addr = Register::Address<0xffffec40,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg1{
        using Addr = Register::Address<0xffffec44,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg2{
        using Addr = Register::Address<0xffffec48,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg3{
        using Addr = Register::Address<0xffffec4c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg4{
        using Addr = Register::Address<0xffffec50,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg5{
        using Addr = Register::Address<0xffffec54,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg6{
        using Addr = Register::Address<0xffffec58,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg7{
        using Addr = Register::Address<0xffffec5c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg8{
        using Addr = Register::Address<0xffffec60,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg9{
        using Addr = Register::Address<0xffffec64,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg10{
        using Addr = Register::Address<0xffffec68,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg11{
        using Addr = Register::Address<0xffffec6c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg12{
        using Addr = Register::Address<0xffffec70,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg13{
        using Addr = Register::Address<0xffffec74,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg14{
        using Addr = Register::Address<0xffffec78,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_scfg15{
        using Addr = Register::Address<0xffffec7c,0xffc0fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SLOT_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DEFMSTR_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> FIXED_DEFMSTR; 
    }
    namespace MATRIX_pras0{
        using Addr = Register::Address<0xffffec80,0xcccccccc>;
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
        using Addr = Register::Address<0xffffec84,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras1{
        using Addr = Register::Address<0xffffec88,0xcccccccc>;
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
        using Addr = Register::Address<0xffffec8c,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras2{
        using Addr = Register::Address<0xffffec90,0xcccccccc>;
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
        using Addr = Register::Address<0xffffec94,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras3{
        using Addr = Register::Address<0xffffec98,0xcccccccc>;
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
        using Addr = Register::Address<0xffffec9c,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras4{
        using Addr = Register::Address<0xffffeca0,0xcccccccc>;
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
        using Addr = Register::Address<0xffffeca4,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras5{
        using Addr = Register::Address<0xffffeca8,0xcccccccc>;
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
        using Addr = Register::Address<0xffffecac,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras6{
        using Addr = Register::Address<0xffffecb0,0xcccccccc>;
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
        using Addr = Register::Address<0xffffecb4,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras7{
        using Addr = Register::Address<0xffffecb8,0xcccccccc>;
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
        using Addr = Register::Address<0xffffecbc,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras8{
        using Addr = Register::Address<0xffffecc0,0xcccccccc>;
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
        using Addr = Register::Address<0xffffecc4,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras9{
        using Addr = Register::Address<0xffffecc8,0xcccccccc>;
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
        using Addr = Register::Address<0xffffeccc,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras10{
        using Addr = Register::Address<0xffffecd0,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs10{
        using Addr = Register::Address<0xffffecd4,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras11{
        using Addr = Register::Address<0xffffecd8,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs11{
        using Addr = Register::Address<0xffffecdc,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras12{
        using Addr = Register::Address<0xffffece0,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs12{
        using Addr = Register::Address<0xffffece4,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras13{
        using Addr = Register::Address<0xffffece8,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs13{
        using Addr = Register::Address<0xffffecec,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras14{
        using Addr = Register::Address<0xffffecf0,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs14{
        using Addr = Register::Address<0xffffecf4,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_pras15{
        using Addr = Register::Address<0xffffecf8,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M0PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M1PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M2PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M3PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M4PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M5PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M6PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M7PR; 
    }
    namespace MATRIX_prbs15{
        using Addr = Register::Address<0xffffecfc,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> M8PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> M9PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> M10PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> M11PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> M12PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> M13PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> M14PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> M15PR; 
    }
    namespace MATRIX_mrcr{
        using Addr = Register::Address<0xffffed00,0xffff0000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RCB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RCB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RCB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RCB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RCB15; 
    }
    namespace MATRIX_sfr0{
        using Addr = Register::Address<0xffffed10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr1{
        using Addr = Register::Address<0xffffed14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr2{
        using Addr = Register::Address<0xffffed18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr3{
        using Addr = Register::Address<0xffffed1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr4{
        using Addr = Register::Address<0xffffed20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr5{
        using Addr = Register::Address<0xffffed24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr6{
        using Addr = Register::Address<0xffffed28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr7{
        using Addr = Register::Address<0xffffed2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr8{
        using Addr = Register::Address<0xffffed30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr9{
        using Addr = Register::Address<0xffffed34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr10{
        using Addr = Register::Address<0xffffed38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr11{
        using Addr = Register::Address<0xffffed3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr12{
        using Addr = Register::Address<0xffffed40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr13{
        using Addr = Register::Address<0xffffed44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr14{
        using Addr = Register::Address<0xffffed48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_sfr15{
        using Addr = Register::Address<0xffffed4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SFR; 
    }
    namespace MATRIX_wpmr{
        using Addr = Register::Address<0xffffede4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace MATRIX_wpsr{
        using Addr = Register::Address<0xffffede8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
