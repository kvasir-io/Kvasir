#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose I/O ports
    namespace Nonepfr0{    ///<Port function setting register 0
        using Addr = Register::Address<0x40033000,0xfffffc00,0,unsigned>;
        ///Bit9 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        ///Bit8 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        ///Bit7 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        ///Bit6 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        ///Bit5 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        ///Bit4 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        ///Bit3 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        ///Bit2 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        ///Bit1 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        ///Bit0 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
    }
    namespace Nonepfr1{    ///<Port function setting register 1
        using Addr = Register::Address<0x40033004,0xffff0000,0,unsigned>;
        ///Bit15 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p1f{}; 
        ///Bit14 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p1e{}; 
        ///Bit13 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p1d{}; 
        ///Bit12 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p1c{}; 
        ///Bit11 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p1b{}; 
        ///Bit10 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p1a{}; 
        ///Bit9 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p19{}; 
        ///Bit8 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p18{}; 
        ///Bit7 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p17{}; 
        ///Bit6 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p16{}; 
        ///Bit5 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        ///Bit4 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        ///Bit3 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        ///Bit2 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        ///Bit1 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        ///Bit0 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
    }
    namespace Nonepfr2{    ///<Port function setting register 2
        using Addr = Register::Address<0x40033008,0xfffffc00,0,unsigned>;
        ///Bit9 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29{}; 
        ///Bit8 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28{}; 
        ///Bit7 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27{}; 
        ///Bit6 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26{}; 
        ///Bit5 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25{}; 
        ///Bit4 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24{}; 
        ///Bit3 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        ///Bit2 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        ///Bit1 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        ///Bit0 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20{}; 
    }
    namespace Nonepfr3{    ///<Port function setting register 3
        using Addr = Register::Address<0x4003300c,0xffff003f,0,unsigned>;
        ///Bit15 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        ///Bit14 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        ///Bit13 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        ///Bit12 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        ///Bit11 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        ///Bit10 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        ///Bit9 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        ///Bit8 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p38{}; 
        ///Bit7 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p37{}; 
        ///Bit6 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p36{}; 
    }
    namespace Nonepfr4{    ///<Port function setting register 4
        using Addr = Register::Address<0x40033010,0xffff8000,0,unsigned>;
        ///Bit14 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p4e{}; 
        ///Bit13 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p4d{}; 
        ///Bit12 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p4c{}; 
        ///Bit11 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p4b{}; 
        ///Bit10 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        ///Bit9 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        ///Bit8 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p48{}; 
        ///Bit7 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        ///Bit6 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        ///Bit5 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p45{}; 
        ///Bit4 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p44{}; 
        ///Bit3 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p43{}; 
        ///Bit2 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p42{}; 
        ///Bit1 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p41{}; 
        ///Bit0 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p40{}; 
    }
    namespace Nonepfr5{    ///<Port function setting register 5
        using Addr = Register::Address<0x40033014,0xfffff000,0,unsigned>;
        ///Bit11 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p5b{}; 
        ///Bit10 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p5a{}; 
        ///Bit9 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p59{}; 
        ///Bit8 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p58{}; 
        ///Bit7 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p57{}; 
        ///Bit6 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p56{}; 
        ///Bit5 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p55{}; 
        ///Bit4 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p54{}; 
        ///Bit3 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p53{}; 
        ///Bit2 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        ///Bit1 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        ///Bit0 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
    }
    namespace Nonepfr6{    ///<Port function setting register 6
        using Addr = Register::Address<0x40033018,0xfffffff8,0,unsigned>;
        ///Bit2 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p62{}; 
        ///Bit1 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        ///Bit0 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
    }
    namespace Nonepfr7{    ///<Port function setting register 7
        using Addr = Register::Address<0x4003301c,0xfffff800,0,unsigned>;
        ///Bit10 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p7a{}; 
        ///Bit9 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p79{}; 
        ///Bit8 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p78{}; 
        ///Bit7 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p77{}; 
        ///Bit6 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p76{}; 
        ///Bit5 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p75{}; 
        ///Bit4 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p74{}; 
        ///Bit3 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p73{}; 
        ///Bit2 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p72{}; 
        ///Bit1 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p71{}; 
        ///Bit0 of PFR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p70{}; 
    }
    namespace Nonepfr8{    ///<Port function setting register 8
        using Addr = Register::Address<0x40033020,0xfffffff0,0,unsigned>;
        ///Bit3 of PFR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p83{}; 
        ///Bit2 of PFR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        ///Bit1 of PFR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        ///Bit0 of PFR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
    }
    namespace Nonepfra{    ///<Port function setting register A
        using Addr = Register::Address<0x40033028,0xffffffc0,0,unsigned>;
        ///Bit5 of PFRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5{}; 
        ///Bit4 of PFRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4{}; 
        ///Bit3 of PFRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3{}; 
        ///Bit2 of PFRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2{}; 
        ///Bit1 of PFRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1{}; 
        ///Bit0 of PFRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0{}; 
    }
    namespace Nonepfrc{    ///<Port function setting register C
        using Addr = Register::Address<0x40033030,0xffff0000,0,unsigned>;
        ///Bit15 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pcf{}; 
        ///Bit14 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pce{}; 
        ///Bit13 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pcd{}; 
        ///Bit12 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pcc{}; 
        ///Bit11 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pcb{}; 
        ///Bit10 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pca{}; 
        ///Bit9 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pc9{}; 
        ///Bit8 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pc8{}; 
        ///Bit7 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7{}; 
        ///Bit6 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6{}; 
        ///Bit5 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5{}; 
        ///Bit4 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4{}; 
        ///Bit3 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3{}; 
        ///Bit2 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2{}; 
        ///Bit1 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1{}; 
        ///Bit0 of PFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0{}; 
    }
    namespace Nonepfrd{    ///<Port function setting register D
        using Addr = Register::Address<0x40033034,0xfffffff0,0,unsigned>;
        ///Bit3 of PFRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Bit2 of PFRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Bit1 of PFRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Bit0 of PFRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace Nonepfre{    ///<Port function setting register E
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        ///Bit2 of PFRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        ///Bit0 of PFRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
    }
    namespace Nonepfrf{    ///<Port function setting register F
        using Addr = Register::Address<0x4003303c,0xffffff9f,0,unsigned>;
        ///Bit6 of PFRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6{}; 
        ///Bit5 of PFRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5{}; 
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
    namespace Nonepcr7{    ///<Pull-up Setting Register 7
        using Addr = Register::Address<0x4003311c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x40033120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcra{    ///<Pull-up Setting Register A
        using Addr = Register::Address<0x40033128,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrc{    ///<Pull-up Setting Register C
        using Addr = Register::Address<0x40033130,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrd{    ///<Pull-up Setting Register D
        using Addr = Register::Address<0x40033134,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x40033138,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrf{    ///<Pull-up Setting Register F
        using Addr = Register::Address<0x4003313c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output direction setting register 0
        using Addr = Register::Address<0x40033200,0xffff0000,0,unsigned>;
        ///Bit15 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        ///Bit14 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p0e{}; 
        ///Bit13 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p0d{}; 
        ///Bit12 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p0c{}; 
        ///Bit11 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p0b{}; 
        ///Bit10 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        ///Bit9 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        ///Bit8 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        ///Bit7 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        ///Bit6 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        ///Bit5 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        ///Bit4 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        ///Bit3 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        ///Bit2 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        ///Bit1 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        ///Bit0 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
    }
    namespace Noneddr1{    ///<Port input/output direction setting register 1
        using Addr = Register::Address<0x40033204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output direction setting register 2
        using Addr = Register::Address<0x40033208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output direction setting register 3
        using Addr = Register::Address<0x4003320c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output direction setting register 4
        using Addr = Register::Address<0x40033210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output direction setting register 5
        using Addr = Register::Address<0x40033214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output direction setting register 6
        using Addr = Register::Address<0x40033218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr7{    ///<Port input/output direction setting register 7
        using Addr = Register::Address<0x4003321c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output direction setting register 8
        using Addr = Register::Address<0x40033220,0xffffffff,0,unsigned>;
    }
    namespace Noneddra{    ///<Port input/output direction setting register A
        using Addr = Register::Address<0x40033228,0xffffffff,0,unsigned>;
    }
    namespace Noneddrc{    ///<Port input/output direction setting register C
        using Addr = Register::Address<0x40033230,0xffffffff,0,unsigned>;
    }
    namespace Noneddrd{    ///<Port input/output direction setting register D
        using Addr = Register::Address<0x40033234,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output direction setting register E
        using Addr = Register::Address<0x40033238,0xffffffff,0,unsigned>;
    }
    namespace Noneddrf{    ///<Port input/output direction setting register F
        using Addr = Register::Address<0x4003323c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port input data register 0
        using Addr = Register::Address<0x40033300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///<Port input data register 1
        using Addr = Register::Address<0x40033304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///<Port input data register 2
        using Addr = Register::Address<0x40033308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///<Port input data register 3
        using Addr = Register::Address<0x4003330c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///<Port input data register 4
        using Addr = Register::Address<0x40033310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///<Port input data register 5
        using Addr = Register::Address<0x40033314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///<Port input data register 6
        using Addr = Register::Address<0x40033318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir7{    ///<Port input data register 7
        using Addr = Register::Address<0x4003331c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///<Port input data register 8
        using Addr = Register::Address<0x40033320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdira{    ///<Port input data register A
        using Addr = Register::Address<0x40033328,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirc{    ///<Port input data register C
        using Addr = Register::Address<0x40033330,0xffffffff,0,unsigned>;
    }
    namespace Nonepdird{    ///<Port input data register D
        using Addr = Register::Address<0x40033334,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///<Port input data register E
        using Addr = Register::Address<0x40033338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirf{    ///<Port input data register F
        using Addr = Register::Address<0x4003333c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///<Port output data register 0
        using Addr = Register::Address<0x40033400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port output data register 1
        using Addr = Register::Address<0x40033404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port output data register 2
        using Addr = Register::Address<0x40033408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port output data register 3
        using Addr = Register::Address<0x4003340c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port output data register 4
        using Addr = Register::Address<0x40033410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port output data register 5
        using Addr = Register::Address<0x40033414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port output data register 6
        using Addr = Register::Address<0x40033418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor7{    ///<Port output data register 7
        using Addr = Register::Address<0x4003341c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port output data register 8
        using Addr = Register::Address<0x40033420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdora{    ///<Port output data register A
        using Addr = Register::Address<0x40033428,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorc{    ///<Port output data register C
        using Addr = Register::Address<0x40033430,0xffffffff,0,unsigned>;
    }
    namespace Nonepdord{    ///<Port output data register D
        using Addr = Register::Address<0x40033434,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port output data register E
        using Addr = Register::Address<0x40033438,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorf{    ///<Port output data register F
        using Addr = Register::Address<0x4003343c,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog input setting register
        using Addr = Register::Address<0x40033500,0x00ff0000,0,unsigned>;
        ///Bit31 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        ///Bit30 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        ///Bit29 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        ///Bit28 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        ///Bit27 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        ///Bit26 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        ///Bit25 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        ///Bit24 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        ///Bit15 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        ///Bit14 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        ///Bit13 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        ///Bit12 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        ///Bit11 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        ///Bit10 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        ///Bit9 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an9{}; 
        ///Bit8 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an8{}; 
        ///Bit7 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        ///Bit6 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        ///Bit5 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        ///Bit4 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        ///Bit3 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        ///Bit2 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        ///Bit1 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        ///Bit0 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
    }
    namespace Nonespsr{    ///<Special port setting register
        using Addr = Register::Address<0x40033580,0xffffffca,0,unsigned>;
        ///USBch1 pin setting bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb1c{}; 
        ///USBch0 pin setting bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        ///Main clock(oscillation) pin setting bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        ///Sub clock(oscillation) pin setting bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> subxc{}; 
    }
    namespace Noneepfr00{    ///<Extended pin function setting register 00
        using Addr = Register::Address<0x40033600,0xfcfcdd38,0,unsigned>;
        ///TRACED function select bit1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        ///TRACED function select bit0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        ///JTAG function select bit1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        ///JTAG function select bit0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        ///USBch1 function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> usbp1e{}; 
        ///USBch0 function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        ///Sub clock divide output function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        ///Internal high-speed CR oscillation output function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        ///NMIX function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace Noneepfr01{    ///<Extended pin function setting register 01
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        ///IC03 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        ///IC02 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        ///IC01 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        ///IC00 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        ///FRCK0 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        ///DTTIX0 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        ///DTTIX0 function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        ///RTO05E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        ///RTO04E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        ///RTO03E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        ///RTO02E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        ///RTO01E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        ///RTO00E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
    }
    namespace Noneepfr02{    ///<Extended pin function setting register 02
        using Addr = Register::Address<0x40033608,0x0000e000,0,unsigned>;
        ///IC13 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic13s{}; 
        ///IC12 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic12s{}; 
        ///IC11 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic11s{}; 
        ///IC10 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic10s{}; 
        ///FRCK1 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck1s{}; 
        ///DTTIX1 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti1s{}; 
        ///DTTIX1 function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti1c{}; 
        ///RTO15E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto15e{}; 
        ///RTO14E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto14e{}; 
        ///RTO13E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto13e{}; 
        ///RTO12E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto12e{}; 
        ///RTO11E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto11e{}; 
        ///RTO10E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto10e{}; 
    }
    namespace Noneepfr03{    ///<Extended pin function setting register 03
        using Addr = Register::Address<0x4003360c,0x0000e000,0,unsigned>;
        ///IC23 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic23s{}; 
        ///IC22 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic22s{}; 
        ///IC21 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic21s{}; 
        ///IC20 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic20s{}; 
        ///FRCK2 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck2s{}; 
        ///DTTIX2 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti2s{}; 
        ///DTTIX2 function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti2c{}; 
        ///RTO25E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto25e{}; 
        ///RTO24E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto24e{}; 
        ///RTO23E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto23e{}; 
        ///RTO22E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto22e{}; 
        ///RTO21E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto21e{}; 
        ///RTO20E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto20e{}; 
    }
    namespace Noneepfr04{    ///<Extended pin function setting register 04
        using Addr = Register::Address<0x40033610,0xc0c3c0c3,0,unsigned>;
        ///TIOB3 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        ///TIOA3E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        ///TIOA3 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        ///TIOB2 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        ///TIOA2 output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        ///TIOB1 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        ///TIOA1E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        ///TIOA1 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        ///TIOB0 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        ///TIOA0 output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace Noneepfr05{    ///<Extended pin function setting register 05
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        ///TIOB7 input select Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        ///TIOA7E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        ///TIOA7 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        ///TIOB6 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        ///TIOA6 output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        ///TIOB5 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        ///TIOA5E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        ///TIOA5 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        ///TIOB4 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        ///TIOA4 output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace Noneepfr06{    ///<Extended pin function setting register 06
        using Addr = Register::Address<0x40033618,0x00000000,0,unsigned>;
        ///External interrupt 15 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        ///External interrupt 14 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        ///External interrupt 13 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        ///External interrupt 12 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        ///External interrupt 11 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        ///External interrupt 10 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        ///External interrupt 9 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        ///External interrupt 8 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        ///External interrupt 7 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        ///External interrupt 6 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        ///External interrupt 5 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        ///External interrupt 4 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        ///External interrupt 3 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        ///External interrupt 2 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        ///External interrupt 1 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        ///External interrupt 0 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
    }
    namespace Noneepfr07{    ///<Extended pin function setting register 07
        using Addr = Register::Address<0x4003361c,0xf000000f,0,unsigned>;
        ///SCK3 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        ///SOT3B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        ///SIN3S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        ///SCK2 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        ///SOT2B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        ///SIN2S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        ///SCK1 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        ///SCK1B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        ///SIN1S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        ///SCK0 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        ///SOT0B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        ///SIN0S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace Noneepfr08{    ///<Extended pin function setting register 08
        using Addr = Register::Address<0x40033620,0xf0000000,0,unsigned>;
        ///SCK7 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        ///SOT7B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        ///SIN7S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        ///SCK6 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        ///SOT6B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        ///SIN6S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        ///SCK5 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        ///SOT5B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        ///SIN5S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        ///SCK4 input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        ///SOT4B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        ///SIN4S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        ///CTS4S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        ///RTS4E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
    }
    namespace Noneepfr09{    ///<Extended pin function setting register 09
        using Addr = Register::Address<0x40033624,0x00000000,0,unsigned>;
        ///CAN TX1 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ctx1e{}; 
        ///CAN RX1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> crx1s{}; 
        ///CAN TX2 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ctx0e{}; 
        ///CAN RX2 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> crx0s{}; 
        ///ADTRG2 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> adtrg2s{}; 
        ///ADTRG1 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        ///ADTRG0 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        ///QZIN1S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        ///QBIN1S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        ///QAIN1S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        ///QZIN0S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        ///QBIN0S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        ///QAIN0S input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
    }
    namespace Noneepfr10{    ///<Extended pin function setting register 10
        using Addr = Register::Address<0x40033628,0xfc000000,0,unsigned>;
        ///UEA18E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        ///UEA17E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        ///UEA16E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        ///UEA15E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        ///UEA14E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        ///UEA13E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        ///UEA12E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        ///UEA11E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        ///UEA10E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        ///UEA09E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        ///UEA08E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        ///UEAOOE output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        ///UECS7E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        ///UECS6E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        ///UECS5E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        ///UECS4E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        ///UECS3E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        ///UECS2E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        ///UECS1E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        ///UEFLSE output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        ///UEOEXE output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        ///UEDQME output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        ///UEWEXE output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        ///UECLKE output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        ///UEDTHB input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        ///UEDEFB input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
    }
    namespace Noneepfr11{    ///<Extended pin function setting register 11
        using Addr = Register::Address<0x4003362c,0xfc000000,0,unsigned>;
        ///UERLC relocation select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        ///UED15B input/output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        ///UED14B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        ///UED13B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        ///UED12B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        ///UED11B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        ///UED10B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        ///UED09B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        ///UED08B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        ///UED07B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        ///UED06B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        ///UED05B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        ///UED04B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        ///UED03B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        ///UED02B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        ///UED01B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        ///UED00B output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        ///UEA07E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        ///UEA06E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        ///UEA05E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        ///UEA04E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        ///UEA03E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        ///UEA02E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        ///UEA01E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        ///UECS0E output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        ///UEALEE output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
    }
    namespace Noneepfr12{    ///<Extended pin function setting register 12
        using Addr = Register::Address<0x40033630,0xc0c3c0c3,0,unsigned>;
        ///TIOB11 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        ///TIOA11 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        ///TIOA11 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        ///TIOB10 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        ///TIOA10 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        ///TIOB9 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        ///TIOA9 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        ///TIOA9 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        ///TIOB8 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        ///TIOA8 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
    }
    namespace Noneepfr13{    ///<Extended pin function setting register 13
        using Addr = Register::Address<0x40033634,0xc0c3c0c3,0,unsigned>;
        ///TIOB15 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        ///TIOA15 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        ///TIOA15 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        ///TIOB14 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        ///TIOA14 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        ///TIOB13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        ///TIOA13 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        ///TIOA13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        ///TIOB12 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        ///TIOA12 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
    }
    namespace Noneepfr14{    ///<Extended pin function setting register 14
        using Addr = Register::Address<0x40033638,0xc003ffc0,0,unsigned>;
        ///Input cutoff Select bit in Standby of input Pin for Ethernet 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eSplc{}; 
        ///PPS0_PPS1 Output Select bit for Ethernet 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ePse{}; 
        ///E_COUT Output Select bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eCke{}; 
        ///E_MDO1 I/O Select bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eMd1b{}; 
        ///E_MDO0 I/O Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eMd0b{}; 
        ///E_MDC1 I/O Select bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eMc1b{}; 
        ///E_MDC0 Output Select bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eMc0e{}; 
        ///E_TXER0_TXEN1 Output Select bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eTe1e{}; 
        ///E_TXEN0 Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eTe0e{}; 
        ///"E_TX02_TX10, E_TX03_TX11 Output Select bit "
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eTd1e{}; 
        ///"E_TX00, E_TX01 Output Select bit "
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eTd0e{}; 
        ///QDU-ch.2 ZIN Input Pin bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin2s{}; 
        ///QDU-ch.2 BIN Input Pin bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin2s{}; 
        ///QDU-ch.2 AIN Input Pin bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain2s{}; 
    }
    namespace Noneepfr15{    ///<Extended pin function setting register 15
        using Addr = Register::Address<0x4003363c,0x00000000,0,unsigned>;
        ///External interrupt 31 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        ///External interrupt 30 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        ///External interrupt 29 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        ///External interrupt 28 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        ///External interrupt 27 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        ///External interrupt 26 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        ///External interrupt 25 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        ///External interrupt 24 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        ///External interrupt 23 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        ///External interrupt 22 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        ///External interrupt 21 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        ///External interrupt 20 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        ///External interrupt 19 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        ///External interrupt 18 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        ///External interrupt 17 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        ///External interrupt 16 input select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
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
    namespace Nonepzr7{    ///<Port Pseudo Open Drain Setting Register 7
        using Addr = Register::Address<0x4003371c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x40033720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzra{    ///<Port Pseudo Open Drain Setting Register A
        using Addr = Register::Address<0x40033728,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrc{    ///<Port Pseudo Open Drain Setting Register C
        using Addr = Register::Address<0x40033730,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrd{    ///<Port Pseudo Open Drain Setting Register D
        using Addr = Register::Address<0x40033734,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x40033738,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrf{    ///<Port Pseudo Open Drain Setting Register F
        using Addr = Register::Address<0x4003373c,0xffffffff,0,unsigned>;
    }
}
