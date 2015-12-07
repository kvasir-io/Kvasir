#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fast GPIO Registers
    namespace Nonefpdir0{    ///<Fast GPIO Input Data Register 0
        using Addr = Register::Address<0xf8000000,0xffff7fe0,0,unsigned>;
        ///Bit15 of FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        ///Bit4 of FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        ///Bit3 of FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        ///Bit2 of FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        ///Bit1 of FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        ///Bit0 of FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Nonefpdir1{    ///<Fast GPIO Input Data Register 1
        using Addr = Register::Address<0xf8000004,0xffffffc0,0,unsigned>;
        ///Bit5 of FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace Nonefpdir2{    ///<Fast GPIO Input Data Register 2
        using Addr = Register::Address<0xf8000008,0xfffffff1,0,unsigned>;
        ///Bit3 of FPDIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit2 of FPDIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit1 of FPDIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
    }
    namespace Nonefpdir3{    ///<Fast GPIO Input Data Register 3
        using Addr = Register::Address<0xf800000c,0xffff01ff,0,unsigned>;
        ///Bit15 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit14 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit13 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit12 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit11 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit10 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
        ///Bit9 of FPDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        namespace P39ValC{
        }
    }
    namespace Nonefpdir4{    ///<Fast GPIO Input Data Register 4
        using Addr = Register::Address<0xf8000010,0xfffff93f,0,unsigned>;
        ///Bit10 of FPDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        ///Bit9 of FPDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        ///Bit7 of FPDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of FPDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
    }
    namespace Nonefpdir5{    ///<Fast GPIO Input Data Register 5
        using Addr = Register::Address<0xf8000014,0xfffffff8,0,unsigned>;
        ///Bit2 of FPDIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        namespace P52ValC{
        }
        ///Bit1 of FPDIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        namespace P51ValC{
        }
        ///Bit0 of FPDIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
        namespace P50ValC{
        }
    }
    namespace Nonefpdir6{    ///<Fast GPIO Input Data Register 6
        using Addr = Register::Address<0xf8000018,0xfffffffc,0,unsigned>;
        ///Bit1 of FPDIR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        ///Bit0 of FPDIR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonefpdir8{    ///<Fast GPIO Input Data Register 8
        using Addr = Register::Address<0xf8000020,0xfffffff8,0,unsigned>;
        ///Bit2 of FPDIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        namespace P82ValC{
        }
        ///Bit1 of FPDIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        namespace P81ValC{
        }
        ///Bit0 of FPDIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
        namespace P80ValC{
        }
    }
    namespace Nonefpdire{    ///<Fast GPIO Input Data Register E
        using Addr = Register::Address<0xf8000038,0xfffffff2,0,unsigned>;
        ///Bit3 of FPDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///Bit2 of FPDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///Bit0 of FPDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
    }
    namespace Nonefpdor0{    ///<Fast GPIO Output Data Register 0
        using Addr = Register::Address<0xf8000040,0xffff7fe0,0,unsigned>;
        ///Bit15 of FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        ///Bit4 of FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        ///Bit3 of FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        ///Bit2 of FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        ///Bit1 of FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        ///Bit0 of FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Nonefpdor1{    ///<Fast GPIO Output Data Register 1
        using Addr = Register::Address<0xf8000044,0xffffffc0,0,unsigned>;
        ///Bit5 of FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace Nonefpdor2{    ///<Fast GPIO Output Data Register 2
        using Addr = Register::Address<0xf8000048,0xfffffff1,0,unsigned>;
        ///Bit3 of FPDOR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit2 of FPDOR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit1 of FPDOR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
    }
    namespace Nonefpdor3{    ///<Fast GPIO Output Data Register 3
        using Addr = Register::Address<0xf800004c,0xffff01ff,0,unsigned>;
        ///Bit15 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit14 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit13 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit12 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit11 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit10 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
        ///Bit9 of FPDOR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        namespace P39ValC{
        }
    }
    namespace Nonefpdor4{    ///<Fast GPIO Output Data Register 4
        using Addr = Register::Address<0xf8000050,0xfffff93f,0,unsigned>;
        ///Bit10 of FPDOR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        ///Bit9 of FPDOR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        ///Bit7 of FPDOR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of FPDOR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
    }
    namespace Nonefpdor5{    ///<Fast GPIO Output Data Register 5
        using Addr = Register::Address<0xf8000054,0xfffffff8,0,unsigned>;
        ///Bit2 of FPDOR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        namespace P52ValC{
        }
        ///Bit1 of FPDOR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        namespace P51ValC{
        }
        ///Bit0 of FPDOR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
        namespace P50ValC{
        }
    }
    namespace Nonefpdor6{    ///<Fast GPIO Output Data Register 6
        using Addr = Register::Address<0xf8000058,0xfffffffc,0,unsigned>;
        ///Bit1 of FPDOR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        ///Bit0 of FPDOR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonefpdor8{    ///<Fast GPIO Output Data Register 8
        using Addr = Register::Address<0xf8000060,0xfffffff8,0,unsigned>;
        ///Bit2 of FPDOR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        namespace P82ValC{
        }
        ///Bit1 of FPDOR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        namespace P81ValC{
        }
        ///Bit0 of FPDOR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
        namespace P80ValC{
        }
    }
    namespace Nonefpdore{    ///<Fast GPIO Output Data Register E
        using Addr = Register::Address<0xf8000078,0xfffffff2,0,unsigned>;
        ///Bit3 of FPDORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///Bit2 of FPDORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///Bit0 of FPDORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
    }
    namespace NonemFpdir0{    ///<Mirror Fast GPIO Input Data Register 0
        using Addr = Register::Address<0xf8000080,0xffffff00,0,unsigned>;
        ///Bit7 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit6 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit5 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of M_FPDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace NonemFpdir1{    ///<Mirror Fast GPIO Input Data Register 1
        using Addr = Register::Address<0xf8000084,0xffffff00,0,unsigned>;
        ///Bit7 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
        ///Bit5 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit4 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit3 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit2 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit1 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit0 of M_FPDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
    }
    namespace NonemFpdor0{    ///<Mirror Fast GPIO Output Data Register 0
        using Addr = Register::Address<0xf80000c0,0xffffff00,0,unsigned>;
        ///Bit7 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit6 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit5 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of M_FPDOR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace NonemFpdor1{    ///<Mirror Fast GPIO Output Data Register 1
        using Addr = Register::Address<0xf80000c4,0xffffff00,0,unsigned>;
        ///Bit7 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
        ///Bit5 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit4 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit3 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit2 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit1 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit0 of M_FPDOR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
    }
}
