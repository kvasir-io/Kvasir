#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O Port Registers
    namespace Nonepfr0{    ///<Port Function Setting Register 0
        using Addr = Register::Address<0x40033000,0xffff7fe0,0,unsigned>;
        ///Bit15 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        ///Bit4 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        ///Bit3 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        ///Bit2 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        ///Bit1 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        ///Bit0 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Nonepfr1{    ///<Port Function Setting Register 1
        using Addr = Register::Address<0x40033004,0xffffffc0,0,unsigned>;
        ///Bit5 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace Nonepfr2{    ///<Port Function Setting Register 2
        using Addr = Register::Address<0x40033008,0xfffffff1,0,unsigned>;
        ///Bit3 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit2 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit1 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
    }
    namespace Nonepfr3{    ///<Port Function Setting Register 3
        using Addr = Register::Address<0x4003300c,0xffff01ff,0,unsigned>;
        ///Bit15 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit14 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit13 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit12 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit11 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit10 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
        ///Bit9 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        namespace P39ValC{
        }
    }
    namespace Nonepfr4{    ///<Port Function Setting Register 4
        using Addr = Register::Address<0x40033010,0xfffff93f,0,unsigned>;
        ///Bit10 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        ///Bit9 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
    }
    namespace Nonepfr5{    ///<Port Function Setting Register 5
        using Addr = Register::Address<0x40033014,0xfffffff8,0,unsigned>;
        ///Bit2 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        namespace P52ValC{
        }
        ///Bit1 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        namespace P51ValC{
        }
        ///Bit0 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
        namespace P50ValC{
        }
    }
    namespace Nonepfr6{    ///<Port Function Setting Register 6
        using Addr = Register::Address<0x40033018,0xfffffffc,0,unsigned>;
        ///Bit1 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        ///Bit0 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonepfr8{    ///<Port Function Setting Register 8
        using Addr = Register::Address<0x40033020,0xfffffff8,0,unsigned>;
        ///Bit2 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        namespace P82ValC{
        }
        ///Bit1 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        namespace P81ValC{
        }
        ///Bit0 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
        namespace P80ValC{
        }
    }
    namespace Nonepfre{    ///<Port Function Setting Register E
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///Bit2 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///Bit0 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
    }
    namespace Nonepcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x40033100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x40033104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x40033108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4003310c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x40033110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x40033114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x40033118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x40033120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x40033138,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output Direction Setting Register 0
        using Addr = Register::Address<0x40033200,0xffff7fe0,0,unsigned>;
        ///Bit15 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        ///Bit4 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        ///Bit3 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        ///Bit2 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        ///Bit1 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        ///Bit0 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Noneddr1{    ///<Port input/output Direction Setting Register 1
        using Addr = Register::Address<0x40033204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output Direction Setting Register 2
        using Addr = Register::Address<0x40033208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output Direction Setting Register 3
        using Addr = Register::Address<0x4003320c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output Direction Setting Register 4
        using Addr = Register::Address<0x40033210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output Direction Setting Register 5
        using Addr = Register::Address<0x40033214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output Direction Setting Register 6
        using Addr = Register::Address<0x40033218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output Direction Setting Register 8
        using Addr = Register::Address<0x40033220,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output Direction Setting Register E
        using Addr = Register::Address<0x40033238,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port Input Data Register 0
        using Addr = Register::Address<0x40033300,0xffff7fe0,0,unsigned>;
        ///Bit15 of PDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        ///Bit4 of PDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        ///Bit3 of PDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        ///Bit2 of PDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        ///Bit1 of PDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        ///Bit0 of PDIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Nonepdir1{    ///<Port Input Data Register 1
        using Addr = Register::Address<0x40033304,0xffffffc0,0,unsigned>;
        ///Bit5 of PDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of PDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of PDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of PDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of PDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of PDIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace Nonepdir2{    ///<Port Input Data Register 2
        using Addr = Register::Address<0x40033308,0xfffffff1,0,unsigned>;
        ///Bit3 of PDIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit2 of PDIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit1 of PDIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
    }
    namespace Nonepdir3{    ///<Port Input Data Register 3
        using Addr = Register::Address<0x4003330c,0xffff01ff,0,unsigned>;
        ///Bit15 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit14 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit13 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit12 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit11 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit10 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
        ///Bit9 of PDIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        namespace P39ValC{
        }
    }
    namespace Nonepdir4{    ///<Port Input Data Register 4
        using Addr = Register::Address<0x40033310,0xfffff93f,0,unsigned>;
        ///Bit10 of PDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        ///Bit9 of PDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        ///Bit7 of PDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of PDIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
    }
    namespace Nonepdir5{    ///<Port Input Data Register 5
        using Addr = Register::Address<0x40033314,0xfffffff8,0,unsigned>;
        ///Bit2 of PDIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        namespace P52ValC{
        }
        ///Bit1 of PDIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        namespace P51ValC{
        }
        ///Bit0 of PDIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
        namespace P50ValC{
        }
    }
    namespace Nonepdir6{    ///<Port Input Data Register 6
        using Addr = Register::Address<0x40033318,0xfffffffc,0,unsigned>;
        ///Bit1 of PDIR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        ///Bit0 of PDIR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonepdir8{    ///<Port Input Data Register 8
        using Addr = Register::Address<0x40033320,0xfffffff8,0,unsigned>;
        ///Bit2 of PDIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        namespace P82ValC{
        }
        ///Bit1 of PDIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        namespace P81ValC{
        }
        ///Bit0 of PDIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
        namespace P80ValC{
        }
    }
    namespace Nonepdire{    ///<Port Input Data Register E
        using Addr = Register::Address<0x40033338,0xfffffff2,0,unsigned>;
        ///Bit3 of PDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///Bit2 of PDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///Bit0 of PDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
    }
    namespace Nonepdor0{    ///<Port Output Data Register 0
        using Addr = Register::Address<0x40033400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port Output Data Register 1
        using Addr = Register::Address<0x40033404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port Output Data Register 2
        using Addr = Register::Address<0x40033408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port Output Data Register 3
        using Addr = Register::Address<0x4003340c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port Output Data Register 4
        using Addr = Register::Address<0x40033410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port Output Data Register 5
        using Addr = Register::Address<0x40033414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port Output Data Register 6
        using Addr = Register::Address<0x40033418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port Output Data Register 8
        using Addr = Register::Address<0x40033420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port Output Data Register E
        using Addr = Register::Address<0x40033438,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog Input Setting Register
        using Addr = Register::Address<0x40033500,0x00000000,0,unsigned>;
        ///Analog Input Ch.31 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        ///Analog Input Ch.30 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        ///Analog Input Ch.29 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        ///Analog Input Ch.28 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        ///Analog Input Ch.27 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        ///Analog Input Ch.26 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        ///Analog Input Ch.25 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        ///Analog Input Ch.24 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
        ///Analog Input Ch.23 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        ///Analog Input Ch.22 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        ///Analog Input Ch.21 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        ///Analog Input Ch.20 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        ///Analog Input Ch.19 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        ///Analog Input Ch.18 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        ///Analog Input Ch.17 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        ///Analog Input Ch.16 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
        ///Analog Input Ch.15 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        ///Analog Input Ch.14 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        ///Analog Input Ch.13 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        ///Analog Input Ch.12 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        ///Analog Input Ch.11 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        ///Analog Input Ch.10 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        ///Analog Input Ch.9 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an09{}; 
        namespace An09ValC{
        }
        ///Analog Input Ch.8 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an08{}; 
        namespace An08ValC{
        }
        ///Analog Input Ch.7 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an07{}; 
        namespace An07ValC{
        }
        ///Analog Input Ch.6 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an06{}; 
        namespace An06ValC{
        }
        ///Analog Input Ch.5 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an05{}; 
        namespace An05ValC{
        }
        ///Analog Input Ch.4 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an04{}; 
        namespace An04ValC{
        }
        ///Analog Input Ch.3 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an03{}; 
        namespace An03ValC{
        }
        ///Analog Input Ch.2 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an02{}; 
        namespace An02ValC{
        }
        ///Analog Input Ch.1 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an01{}; 
        namespace An01ValC{
        }
        ///Analog Input Ch.0 Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an00{}; 
        namespace An00ValC{
        }
    }
    namespace Nonespsr{    ///<Special Port Setting Register
        using Addr = Register::Address<0x40033580,0xfffffff0,0,unsigned>;
        ///Main Clock (Oscillation) Pin Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
        ///Sub Clock (Oscillation) Pin Setting Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
        namespace SubxcValC{
        }
    }
    namespace Noneepfr00{    ///<Extended Pin Function Setting Register 00
        using Addr = Register::Address<0x40033600,0xfffeff08,0,unsigned>;
        ///Serial Wire Debug Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swden{}; 
        namespace SwdenValC{
        }
        ///Sub clock divide output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        namespace SubouteValC{
        }
        ///RTC clock output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        namespace RtccoeValC{
        }
        ///Internal high-speed CR Oscillation Output Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        namespace CrouteValC{
        }
        ///NMIX Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
        namespace NmisValC{
        }
    }
    namespace Noneepfr01{    ///<Extended Pin Function Setting Register 01
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        ///IC03 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        namespace Ic03sValC{
        }
        ///IC02 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        namespace Ic02sValC{
        }
        ///IC01 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        namespace Ic01sValC{
        }
        ///IC00 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        namespace Ic00sValC{
        }
        ///FRCK0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        namespace Frck0sValC{
        }
        ///DTTIX0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        namespace Dtti0sValC{
        }
        ///DTTIX0 Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        namespace Dtti0cValC{
        }
        ///RTO05 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        namespace Rto05eValC{
        }
        ///RTO04 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        namespace Rto04eValC{
        }
        ///RTO03 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        namespace Rto03eValC{
        }
        ///RTO02 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        namespace Rto02eValC{
        }
        ///RTO01 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        namespace Rto01eValC{
        }
        ///RTO00 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
        namespace Rto00eValC{
        }
    }
    namespace Noneepfr02{    ///<Extended Pin Function Setting Register 02
        using Addr = Register::Address<0x40033608,0x0000c000,0,unsigned>;
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic13s{}; 
        namespace Ic13sValC{
        }
        ///IC12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic12s{}; 
        namespace Ic12sValC{
        }
        ///IC11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic11s{}; 
        namespace Ic11sValC{
        }
        ///IC10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic10s{}; 
        namespace Ic10sValC{
        }
        ///FRCK1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck1s{}; 
        namespace Frck1sValC{
        }
        ///DTTIX1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti1s{}; 
        namespace Dtti1sValC{
        }
        ///IGTRG0 Input Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> igtrg0{}; 
        namespace Igtrg0ValC{
        }
        ///DTTIX1 Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti1c{}; 
        namespace Dtti1cValC{
        }
        ///RTO15 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto15e{}; 
        namespace Rto15eValC{
        }
        ///RTO14 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto14e{}; 
        namespace Rto14eValC{
        }
        ///RTO13 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto13e{}; 
        namespace Rto13eValC{
        }
        ///RTO12 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto12e{}; 
        namespace Rto12eValC{
        }
        ///RTO11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto11e{}; 
        namespace Rto11eValC{
        }
        ///RTO10 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto10e{}; 
        namespace Rto10eValC{
        }
    }
    namespace Noneepfr03{    ///<Extended Pin Function Setting Register 03
        using Addr = Register::Address<0x4003360c,0x0000e000,0,unsigned>;
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic23s{}; 
        namespace Ic23sValC{
        }
        ///IC22 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic22s{}; 
        namespace Ic22sValC{
        }
        ///IC21 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic21s{}; 
        namespace Ic21sValC{
        }
        ///IC20 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic20s{}; 
        namespace Ic20sValC{
        }
        ///FRCK2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck2s{}; 
        namespace Frck2sValC{
        }
        ///DTTIX2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti2s{}; 
        namespace Dtti2sValC{
        }
        ///DTTIX2 Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti2c{}; 
        namespace Dtti2cValC{
        }
        ///RTO25 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto25e{}; 
        namespace Rto25eValC{
        }
        ///RTO24 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto24e{}; 
        namespace Rto24eValC{
        }
        ///RTO23 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto23e{}; 
        namespace Rto23eValC{
        }
        ///RTO22 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto22e{}; 
        namespace Rto22eValC{
        }
        ///RTO21 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto21e{}; 
        namespace Rto21eValC{
        }
        ///RTO20 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto20e{}; 
        namespace Rto20eValC{
        }
    }
    namespace Noneepfr04{    ///<Extended Pin Function Setting Register 04
        using Addr = Register::Address<0x40033610,0xc0c3c083,0,unsigned>;
        ///TIOB3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        namespace Tiob3sValC{
        }
        ///TIOA3 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        namespace Tioa3eValC{
        }
        ///TIOA3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        namespace Tioa3sValC{
        }
        ///TIOB2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        namespace Tiob2sValC{
        }
        ///TIOA2 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        namespace Tioa2eValC{
        }
        ///TIOB1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        namespace Tiob1sValC{
        }
        ///TIOA1 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        namespace Tioa1eValC{
        }
        ///TIOA1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        namespace Tioa1sValC{
        }
        ///TIOB0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        namespace Tiob0sValC{
        }
        ///TIOA0 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
        namespace Tioa0eValC{
        }
    }
    namespace Noneepfr05{    ///<Extended Pin Function Setting Register 05
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        ///TIOB7 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        namespace Tiob7sValC{
        }
        ///TIOA7 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        namespace Tioa7eValC{
        }
        ///TIOA7 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        namespace Tioa7sValC{
        }
        ///TIOB6 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        namespace Tiob6sValC{
        }
        ///TIOA6 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        namespace Tioa6eValC{
        }
        ///TIOB5 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        namespace Tiob5sValC{
        }
        ///TIOA5 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        namespace Tioa5eValC{
        }
        ///TIOA5 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        namespace Tioa5sValC{
        }
        ///TIOB4 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        namespace Tiob4sValC{
        }
        ///TIOA4 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
        namespace Tioa4eValC{
        }
    }
    namespace Noneepfr06{    ///<Extended Pin Function Setting Register 06
        using Addr = Register::Address<0x40033618,0x00000000,0,unsigned>;
        ///External Interrupt 15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        namespace Eint15sValC{
        }
        ///External Interrupt 14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        namespace Eint14sValC{
        }
        ///External Interrupt 13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        namespace Eint13sValC{
        }
        ///External Interrupt 12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        namespace Eint12sValC{
        }
        ///External Interrupt 11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        namespace Eint11sValC{
        }
        ///External Interrupt 10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        namespace Eint10sValC{
        }
        ///External Interrupt 09 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        namespace Eint09sValC{
        }
        ///External Interrupt 08 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        namespace Eint08sValC{
        }
        ///External Interrupt 07 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        namespace Eint07sValC{
        }
        ///External Interrupt 06 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        namespace Eint06sValC{
        }
        ///External Interrupt 05 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        namespace Eint05sValC{
        }
        ///External Interrupt 04 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        namespace Eint04sValC{
        }
        ///External Interrupt 03 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        namespace Eint03sValC{
        }
        ///External Interrupt 02 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        namespace Eint02sValC{
        }
        ///External Interrupt 01 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        namespace Eint01sValC{
        }
        ///External Interrupt 00 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
        namespace Eint00sValC{
        }
    }
    namespace Noneepfr07{    ///<Extended Pin Function Setting Register 07
        using Addr = Register::Address<0x4003361c,0xf000000f,0,unsigned>;
        ///SCK3 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        namespace Sck3bValC{
        }
        ///SOT3 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        namespace Sot3bValC{
        }
        ///SIN3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        namespace Sin3sValC{
        }
        ///SCK2 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        namespace Sck2bValC{
        }
        ///SOT2 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        namespace Sot2bValC{
        }
        ///SIN2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        namespace Sin2sValC{
        }
        ///SCK1 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        namespace Sck1bValC{
        }
        ///SOT1 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        namespace Sot1bValC{
        }
        ///SIN1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        namespace Sin1sValC{
        }
        ///SCK0 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        namespace Sck0bValC{
        }
        ///SOT0 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        namespace Sot0bValC{
        }
        ///SIN0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
        namespace Sin0sValC{
        }
    }
    namespace Noneepfr08{    ///<Extended Pin Function Setting Register 08
        using Addr = Register::Address<0x40033620,0xf0000000,0,unsigned>;
        ///SCK7 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        namespace Sck7bValC{
        }
        ///SOT7 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        namespace Sot7bValC{
        }
        ///SIN7 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        namespace Sin7sValC{
        }
        ///SCK6 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        namespace Sck6bValC{
        }
        ///SOT6 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        namespace Sot6bValC{
        }
        ///SIN6 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        namespace Sin6sValC{
        }
        ///SCK5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        namespace Sck5bValC{
        }
        ///SOT5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        namespace Sot5bValC{
        }
        ///SIN5 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        namespace Sin5sValC{
        }
        ///SCK4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        namespace Sck4bValC{
        }
        ///SOT4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        namespace Sot4bValC{
        }
        ///SIN4 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        namespace Sin4sValC{
        }
        ///CTS4 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        namespace Cts4sValC{
        }
        ///RTS4 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
        namespace Rts4eValC{
        }
    }
    namespace Noneepfr09{    ///<Extended Pin Function Setting Register 09
        using Addr = Register::Address<0x40033624,0x00000000,0,unsigned>;
        ///CTX1E Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ctx1e{}; 
        namespace Ctx1eValC{
        }
        ///CRX1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> crx1s{}; 
        namespace Crx1sValC{
        }
        ///CTX0E Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ctx0e{}; 
        namespace Ctx0eValC{
        }
        ///CRX0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> crx0s{}; 
        namespace Crx0sValC{
        }
        ///ADTRG2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> adtrg2s{}; 
        namespace Adtrg2sValC{
        }
        ///ADTRG1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        namespace Adtrg1sValC{
        }
        ///ADTRG0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        namespace Adtrg0sValC{
        }
        ///QZIN1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        namespace Qzin1sValC{
        }
        ///QBIN1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        namespace Qbin1sValC{
        }
        ///QAIN1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        namespace Qain1sValC{
        }
        ///QZIN0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        namespace Qzin0sValC{
        }
        ///QBIN0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        namespace Qbin0sValC{
        }
        ///QAIN0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
        namespace Qain0sValC{
        }
    }
    namespace Noneepfr12{    ///<Extended Pin Function Setting Register 12
        using Addr = Register::Address<0x40033630,0xc0c3c0c3,0,unsigned>;
        ///TIOB11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        namespace Tiob11sValC{
        }
        ///TIOA11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        namespace Tioa11eValC{
        }
        ///TIOA11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        namespace Tioa11sValC{
        }
        ///TIOB10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        namespace Tiob10sValC{
        }
        ///TIOA10 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        namespace Tioa10eValC{
        }
        ///TIOB9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        namespace Tiob9sValC{
        }
        ///TIOA9 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        namespace Tioa9eValC{
        }
        ///TIOA9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        namespace Tioa9sValC{
        }
        ///TIOB8 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        namespace Tiob8sValC{
        }
        ///TIOA8 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
        namespace Tioa8eValC{
        }
    }
    namespace Noneepfr13{    ///<Extended Pin Function Setting Register 13
        using Addr = Register::Address<0x40033634,0xc0c3c0c3,0,unsigned>;
        ///TIOB15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        namespace Tiob15sValC{
        }
        ///TIOA15 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        namespace Tioa15eValC{
        }
        ///TIOA15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        namespace Tioa15sValC{
        }
        ///TIOB14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        namespace Tiob14sValC{
        }
        ///TIOA14 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        namespace Tioa14eValC{
        }
        ///TIOB13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        namespace Tiob13sValC{
        }
        ///TIOA13 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        namespace Tioa13eValC{
        }
        ///TIOA13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        namespace Tioa13sValC{
        }
        ///TIOB12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        namespace Tiob12sValC{
        }
        ///TIOA12 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
        namespace Tioa12eValC{
        }
    }
    namespace Noneepfr14{    ///<Extended Pin Function Setting Register 14
        using Addr = Register::Address<0x40033638,0xffffffc0,0,unsigned>;
        ///QPRC-ch.2 ZIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin2s{}; 
        namespace Qzin2sValC{
        }
        ///QPRC-ch.2 BIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin2s{}; 
        namespace Qbin2sValC{
        }
        ///QPRC-ch.2 AIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain2s{}; 
        namespace Qain2sValC{
        }
    }
    namespace Noneepfr15{    ///<Extended Pin Function Setting Register 15
        using Addr = Register::Address<0x4003363c,0x00000000,0,unsigned>;
        ///External Interrupt 31 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        namespace Eint31sValC{
        }
        ///External Interrupt 30 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        namespace Eint30sValC{
        }
        ///External Interrupt 29 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        namespace Eint29sValC{
        }
        ///External Interrupt 28 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        namespace Eint28sValC{
        }
        ///External Interrupt 27 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        namespace Eint27sValC{
        }
        ///External Interrupt 26 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        namespace Eint26sValC{
        }
        ///External Interrupt 25 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        namespace Eint25sValC{
        }
        ///External Interrupt 24 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        namespace Eint24sValC{
        }
        ///External Interrupt 23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        namespace Eint23sValC{
        }
        ///External Interrupt 22 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        namespace Eint22sValC{
        }
        ///External Interrupt 21 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        namespace Eint21sValC{
        }
        ///External Interrupt 20 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        namespace Eint20sValC{
        }
        ///External Interrupt 19 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        namespace Eint19sValC{
        }
        ///External Interrupt 18 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        namespace Eint18sValC{
        }
        ///External Interrupt 17 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        namespace Eint17sValC{
        }
        ///External Interrupt 16 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
        namespace Eint16sValC{
        }
    }
    namespace Noneepfr16{    ///<Extended Pin Function Setting Register 16
        using Addr = Register::Address<0x40033640,0xf000000f,0,unsigned>;
        ///SCK11 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        namespace Sck11bValC{
        }
        ///SOT11 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        namespace Sot11bValC{
        }
        ///SIN11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        namespace Sin11sValC{
        }
        ///SCK10 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        namespace Sck10bValC{
        }
        ///SOT10 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        namespace Sot10bValC{
        }
        ///SIN10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        namespace Sin10sValC{
        }
        ///SCK9 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        namespace Sck9bValC{
        }
        ///SOT9 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        namespace Sot9bValC{
        }
        ///SIN9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        namespace Sin9sValC{
        }
        ///SCK8 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        namespace Sck8bValC{
        }
        ///SOT8 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        namespace Sot8bValC{
        }
        ///SIN8 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
        namespace Sin8sValC{
        }
    }
    namespace Noneepfr17{    ///<Extended Pin Function Setting Register 17
        using Addr = Register::Address<0x40033644,0xf000000f,0,unsigned>;
        ///SCK15 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        namespace Sck15bValC{
        }
        ///SOT15 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        namespace Sot15bValC{
        }
        ///SIN15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        namespace Sin15sValC{
        }
        ///SCK14 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        namespace Sck14bValC{
        }
        ///SOT14 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        namespace Sot14bValC{
        }
        ///SIN14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        namespace Sin14sValC{
        }
        ///SCK13 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        namespace Sck13bValC{
        }
        ///SOT13 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        namespace Sot13bValC{
        }
        ///SIN13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        namespace Sin13sValC{
        }
        ///SCK12 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        namespace Sck12bValC{
        }
        ///SOT12 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        namespace Sot12bValC{
        }
        ///SIN12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
        namespace Sin12sValC{
        }
    }
    namespace Noneepfr18{    ///<Extended Pin Function Setting Register 18
        using Addr = Register::Address<0x40033648,0xfffffff0,0,unsigned>;
        ///CEC1 input/output selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cecr1b{}; 
        namespace Cecr1bValC{
        }
        ///CEC0 input/output selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cecr0b{}; 
        namespace Cecr0bValC{
        }
    }
    namespace Noneepfr21{    ///<Extended Pin Function Setting Register 21
        using Addr = Register::Address<0x40033654,0xfffffff8,0,unsigned>;
        ///QPRC-ch.0 ZIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        namespace Qzin0sValC{
        }
        ///QPRC-ch.0 BIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        namespace Qbin0sValC{
        }
        ///QPRC-ch.0 AIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
        namespace Qain0sValC{
        }
    }
    namespace Noneepfr22{    ///<Extended Pin Function Setting Register 22
        using Addr = Register::Address<0x40033658,0xffff0f0f,0,unsigned>;
        ///SCS31 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> scs31e{}; 
        namespace Scs31eValC{
        }
        ///SCS30 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> scs30b{}; 
        namespace Scs30bValC{
        }
        ///SCS11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> scs11e{}; 
        namespace Scs11eValC{
        }
        ///SCS10 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> scs10b{}; 
        namespace Scs10bValC{
        }
    }
    namespace Nonepzr0{    ///<Port Pseudo Open Drain Setting Register 0
        using Addr = Register::Address<0x40033700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x40033704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x40033708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///<Port Pseudo Open Drain Setting Register 3
        using Addr = Register::Address<0x4003370c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///<Port Pseudo Open Drain Setting Register 4
        using Addr = Register::Address<0x40033710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x40033714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x40033718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x40033720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x40033738,0xffffffff,0,unsigned>;
    }
    namespace Nonefpoer0{    ///<Fast GPIO Output Enable Register 0
        using Addr = Register::Address<0x40033900,0xffff7fe0,0,unsigned>;
        ///Bit15 of FPOER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        ///Bit4 of FPOER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        ///Bit3 of FPOER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        ///Bit2 of FPOER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        ///Bit1 of FPOER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        ///Bit0 of FPOER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Nonefpoer1{    ///<Fast GPIO Output Enable Register 1
        using Addr = Register::Address<0x40033904,0xffffffc0,0,unsigned>;
        ///Bit5 of FPOER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Bit4 of FPOER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Bit3 of FPOER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Bit2 of FPOER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Bit1 of FPOER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Bit0 of FPOER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace Nonefpoer2{    ///<Fast GPIO Output Enable Register 2
        using Addr = Register::Address<0x40033908,0xfffffff1,0,unsigned>;
        ///Bit3 of FPOER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Bit2 of FPOER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Bit1 of FPOER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
    }
    namespace Nonefpoer3{    ///<Fast GPIO Output Enable Register 3
        using Addr = Register::Address<0x4003390c,0xffff01ff,0,unsigned>;
        ///Bit15 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        ///Bit14 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        ///Bit13 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        ///Bit12 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        ///Bit11 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        ///Bit10 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
        ///Bit9 of FPOER3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        namespace P39ValC{
        }
    }
    namespace Nonefpoer4{    ///<Fast GPIO Output Enable Register 4
        using Addr = Register::Address<0x40033910,0xfffff93f,0,unsigned>;
        ///Bit10 of FPOER4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        ///Bit9 of FPOER4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        ///Bit7 of FPOER4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of FPOER4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
    }
    namespace Nonefpoer5{    ///<Fast GPIO Output Enable Register 5
        using Addr = Register::Address<0x40033914,0xfffffff8,0,unsigned>;
        ///Bit2 of FPOER5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        namespace P52ValC{
        }
        ///Bit1 of FPOER5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        namespace P51ValC{
        }
        ///Bit0 of FPOER5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
        namespace P50ValC{
        }
    }
    namespace Nonefpoer6{    ///<Fast GPIO Output Enable Register 6
        using Addr = Register::Address<0x40033918,0xfffffffc,0,unsigned>;
        ///Bit1 of FPOER6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        ///Bit0 of FPOER6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonefpoer8{    ///<Fast GPIO Output Enable Register 8
        using Addr = Register::Address<0x40033920,0xfffffff8,0,unsigned>;
        ///Bit2 of FPOER8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        namespace P82ValC{
        }
        ///Bit1 of FPOER8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        namespace P81ValC{
        }
        ///Bit0 of FPOER8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
        namespace P80ValC{
        }
    }
    namespace Nonefpoere{    ///<Fast GPIO Output Enable Register E
        using Addr = Register::Address<0x40033938,0xfffffff2,0,unsigned>;
        ///Bit3 of FPOERE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///Bit2 of FPOERE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///Bit0 of FPOERE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
    }
}
