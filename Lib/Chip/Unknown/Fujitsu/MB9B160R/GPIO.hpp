#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//0
    namespace Nonepfr0{    ///<Port Function Setting Register 0
        using Addr = Register::Address<0x4006f000,0xffff8000,0,unsigned>;
        ///Bit14 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p0e{}; 
        namespace P0eValC{
        }
        ///Bit13 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p0d{}; 
        namespace P0dValC{
        }
        ///Bit12 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p0c{}; 
        namespace P0cValC{
        }
        ///Bit11 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p0b{}; 
        namespace P0bValC{
        }
        ///Bit10 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        namespace P0aValC{
        }
        ///Bit9 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        namespace P09ValC{
        }
        ///Bit8 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        namespace P08ValC{
        }
        ///Bit7 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        namespace P07ValC{
        }
        ///Bit6 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        namespace P06ValC{
        }
        ///Bit5 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        namespace P05ValC{
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
        using Addr = Register::Address<0x4006f004,0xffff0000,0,unsigned>;
        ///Bit15 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p1f{}; 
        namespace P1fValC{
        }
        ///Bit14 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p1e{}; 
        namespace P1eValC{
        }
        ///Bit13 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p1d{}; 
        namespace P1dValC{
        }
        ///Bit12 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p1c{}; 
        namespace P1cValC{
        }
        ///Bit11 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p1b{}; 
        namespace P1bValC{
        }
        ///Bit10 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p1a{}; 
        namespace P1aValC{
        }
        ///Bit9 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Bit8 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Bit7 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Bit6 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
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
        using Addr = Register::Address<0x4006f008,0xffffff00,0,unsigned>;
        ///Bit7 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Bit6 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Bit5 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Bit4 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
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
        ///Bit0 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
    }
    namespace Nonepfr3{    ///<Port Function Setting Register 3
        using Addr = Register::Address<0x4006f00c,0xffff0000,0,unsigned>;
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
        ///Bit8 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p38{}; 
        namespace P38ValC{
        }
        ///Bit7 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p37{}; 
        namespace P37ValC{
        }
        ///Bit6 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p36{}; 
        namespace P36ValC{
        }
        ///Bit5 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p35{}; 
        namespace P35ValC{
        }
        ///Bit4 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p34{}; 
        namespace P34ValC{
        }
        ///Bit3 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p33{}; 
        namespace P33ValC{
        }
        ///Bit2 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p32{}; 
        namespace P32ValC{
        }
        ///Bit1 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
        ///Bit0 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
    }
    namespace Nonepfr4{    ///<Port Function Setting Register 4
        using Addr = Register::Address<0x4006f010,0xffff8000,0,unsigned>;
        ///Bit14 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p4e{}; 
        namespace P4eValC{
        }
        ///Bit13 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p4d{}; 
        namespace P4dValC{
        }
        ///Bit12 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p4c{}; 
        namespace P4cValC{
        }
        ///Bit11 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p4b{}; 
        namespace P4bValC{
        }
        ///Bit10 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        ///Bit9 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        ///Bit8 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p48{}; 
        namespace P48ValC{
        }
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
        ///Bit5 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p45{}; 
        namespace P45ValC{
        }
        ///Bit4 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p44{}; 
        namespace P44ValC{
        }
        ///Bit3 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p43{}; 
        namespace P43ValC{
        }
        ///Bit2 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p42{}; 
        namespace P42ValC{
        }
        ///Bit1 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p41{}; 
        namespace P41ValC{
        }
        ///Bit0 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p40{}; 
        namespace P40ValC{
        }
    }
    namespace Nonepfr5{    ///<Port Function Setting Register 5
        using Addr = Register::Address<0x4006f014,0xfffff000,0,unsigned>;
        ///Bit11 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p5b{}; 
        namespace P5bValC{
        }
        ///Bit10 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p5a{}; 
        namespace P5aValC{
        }
        ///Bit9 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p59{}; 
        namespace P59ValC{
        }
        ///Bit8 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p58{}; 
        namespace P58ValC{
        }
        ///Bit7 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p57{}; 
        namespace P57ValC{
        }
        ///Bit6 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p56{}; 
        namespace P56ValC{
        }
        ///Bit5 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p55{}; 
        namespace P55ValC{
        }
        ///Bit4 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p54{}; 
        namespace P54ValC{
        }
        ///Bit3 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p53{}; 
        namespace P53ValC{
        }
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
        using Addr = Register::Address<0x4006f018,0xfffffe00,0,unsigned>;
        ///Bit8 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p68{}; 
        namespace P68ValC{
        }
        ///Bit7 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p67{}; 
        namespace P67ValC{
        }
        ///Bit6 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p66{}; 
        namespace P66ValC{
        }
        ///Bit5 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p65{}; 
        namespace P65ValC{
        }
        ///Bit4 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p64{}; 
        namespace P64ValC{
        }
        ///Bit3 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p63{}; 
        namespace P63ValC{
        }
        ///Bit2 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p62{}; 
        namespace P62ValC{
        }
        ///Bit1 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        ///Bit0 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonepfr7{    ///<Port Function Setting Register 7
        using Addr = Register::Address<0x4006f01c,0xffffffe0,0,unsigned>;
        ///Bit4 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p74{}; 
        namespace P74ValC{
        }
        ///Bit3 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p73{}; 
        namespace P73ValC{
        }
        ///Bit2 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p72{}; 
        namespace P72ValC{
        }
        ///Bit1 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p71{}; 
        namespace P71ValC{
        }
        ///Bit0 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p70{}; 
        namespace P70ValC{
        }
    }
    namespace Nonepfr8{    ///<Port Function Setting Register 8
        using Addr = Register::Address<0x4006f020,0xfffffffc,0,unsigned>;
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
        using Addr = Register::Address<0x4006f038,0xfffffff2,0,unsigned>;
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
        using Addr = Register::Address<0x4006f100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x4006f104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x4006f108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4006f10c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x4006f110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x4006f114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x4006f118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr7{    ///<Pull-up Setting Register 7
        using Addr = Register::Address<0x4006f11c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x4006f120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x4006f138,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output Direction Setting Register 0
        using Addr = Register::Address<0x4006f200,0xffff8000,0,unsigned>;
        ///Bit14 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p0e{}; 
        namespace P0eValC{
        }
        ///Bit13 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p0d{}; 
        namespace P0dValC{
        }
        ///Bit12 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p0c{}; 
        namespace P0cValC{
        }
        ///Bit11 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p0b{}; 
        namespace P0bValC{
        }
        ///Bit10 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        namespace P0aValC{
        }
        ///Bit9 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        namespace P09ValC{
        }
        ///Bit8 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        namespace P08ValC{
        }
        ///Bit7 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        namespace P07ValC{
        }
        ///Bit6 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        namespace P06ValC{
        }
        ///Bit5 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        namespace P05ValC{
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
        using Addr = Register::Address<0x4006f204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output Direction Setting Register 2
        using Addr = Register::Address<0x4006f208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output Direction Setting Register 3
        using Addr = Register::Address<0x4006f20c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output Direction Setting Register 4
        using Addr = Register::Address<0x4006f210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output Direction Setting Register 5
        using Addr = Register::Address<0x4006f214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output Direction Setting Register 6
        using Addr = Register::Address<0x4006f218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr7{    ///<Port input/output Direction Setting Register 7
        using Addr = Register::Address<0x4006f21c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output Direction Setting Register 8
        using Addr = Register::Address<0x4006f220,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output Direction Setting Register E
        using Addr = Register::Address<0x4006f238,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port Input Data Register 0
        using Addr = Register::Address<0x4006f300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///<Port Input Data Register 1
        using Addr = Register::Address<0x4006f304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///<Port Input Data Register 2
        using Addr = Register::Address<0x4006f308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///<Port Input Data Register 3
        using Addr = Register::Address<0x4006f30c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///<Port Input Data Register 4
        using Addr = Register::Address<0x4006f310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///<Port Input Data Register 5
        using Addr = Register::Address<0x4006f314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///<Port Input Data Register 6
        using Addr = Register::Address<0x4006f318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir7{    ///<Port Input Data Register 7
        using Addr = Register::Address<0x4006f31c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///<Port Input Data Register 8
        using Addr = Register::Address<0x4006f320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///<Port Input Data Register E
        using Addr = Register::Address<0x4006f338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///<Port Output Data Register 0
        using Addr = Register::Address<0x4006f400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port Output Data Register 1
        using Addr = Register::Address<0x4006f404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port Output Data Register 2
        using Addr = Register::Address<0x4006f408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port Output Data Register 3
        using Addr = Register::Address<0x4006f40c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port Output Data Register 4
        using Addr = Register::Address<0x4006f410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port Output Data Register 5
        using Addr = Register::Address<0x4006f414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port Output Data Register 6
        using Addr = Register::Address<0x4006f418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor7{    ///<Port Output Data Register 7
        using Addr = Register::Address<0x4006f41c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port Output Data Register 8
        using Addr = Register::Address<0x4006f420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port Output Data Register E
        using Addr = Register::Address<0x4006f438,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog Input Setting Register
        using Addr = Register::Address<0x4006f500,0x00000000,0,unsigned>;
        ///Bit31 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        ///Bit30 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        ///Bit29 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        ///Bit28 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        ///Bit27 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        ///Bit26 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        ///Bit25 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        ///Bit24 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
        ///Bit23 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        ///Bit22 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        ///Bit21 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        ///Bit20 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        ///Bit19 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        ///Bit18 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        ///Bit17 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        ///Bit16 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
        ///Bit15 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        ///Bit14 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        ///Bit13 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        ///Bit12 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        ///Bit11 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        ///Bit10 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        ///Bit9 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an09{}; 
        namespace An09ValC{
        }
        ///Bit8 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an08{}; 
        namespace An08ValC{
        }
        ///Bit7 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an07{}; 
        namespace An07ValC{
        }
        ///Bit6 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an06{}; 
        namespace An06ValC{
        }
        ///Bit5 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an05{}; 
        namespace An05ValC{
        }
        ///Bit4 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an04{}; 
        namespace An04ValC{
        }
        ///Bit3 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an03{}; 
        namespace An03ValC{
        }
        ///Bit2 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an02{}; 
        namespace An02ValC{
        }
        ///Bit1 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an01{}; 
        namespace An01ValC{
        }
        ///Bit0 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an00{}; 
        namespace An00ValC{
        }
    }
    namespace Nonespsr{    ///<Special Port Setting Register
        using Addr = Register::Address<0x4006f580,0xffffffc3,0,unsigned>;
        ///USB (ch.1) Pin Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb1c{}; 
        namespace Usb1cValC{
        }
        ///USB (ch.0) Pin Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        namespace Usb0cValC{
        }
        ///Main Clock (Oscillation) Pin Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
    }
    namespace Noneepfr00{    ///<Extended Pin Function Setting Register 00
        using Addr = Register::Address<0x4006f600,0xfcfcdd08,0,unsigned>;
        ///TRACED Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        namespace Trc1eValC{
        }
        ///TRACED Function Select bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        namespace Trc0eValC{
        }
        ///JTAG Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        namespace Jtagen1sValC{
        }
        ///JTAG Function Select bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        namespace Jtagen0bValC{
        }
        ///USB ch.1 Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> usbp1e{}; 
        namespace Usbp1eValC{
        }
        ///USB ch.0 Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        namespace Usbp0eValC{
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
        using Addr = Register::Address<0x4006f604,0x0000e000,0,unsigned>;
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
        using Addr = Register::Address<0x4006f608,0x0000e000,0,unsigned>;
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic13s{}; 
        namespace Ic13sValC{
        }
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic12s{}; 
        namespace Ic12sValC{
        }
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic11s{}; 
        namespace Ic11sValC{
        }
        ///IC13 Input Select bits
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
        using Addr = Register::Address<0x4006f60c,0x0000e000,0,unsigned>;
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic23s{}; 
        namespace Ic23sValC{
        }
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic22s{}; 
        namespace Ic22sValC{
        }
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic21s{}; 
        namespace Ic21sValC{
        }
        ///IC23 Input Select bits
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
        using Addr = Register::Address<0x4006f610,0xc0c3c083,0,unsigned>;
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
        using Addr = Register::Address<0x4006f614,0xc0c3c0c3,0,unsigned>;
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
        using Addr = Register::Address<0x4006f618,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0x4006f61c,0xf000000f,0,unsigned>;
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
        using Addr = Register::Address<0x4006f620,0x00000000,0,unsigned>;
        ///CTS5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cts5s{}; 
        namespace Cts5sValC{
        }
        ///RTS5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> rts5e{}; 
        namespace Rts5eValC{
        }
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
        ///CTS4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        namespace Cts4sValC{
        }
        ///RTS4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
        namespace Rts4eValC{
        }
    }
    namespace Noneepfr09{    ///<Extended Pin Function Setting Register 09
        using Addr = Register::Address<0x4006f624,0x00000000,0,unsigned>;
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
        ///QAIN0S Input Select bits$
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
        namespace Qain0sValC{
        }
    }
    namespace Noneepfr10{    ///<Extended Pin Function Setting Register 10
        using Addr = Register::Address<0x4006f628,0x00000000,0,unsigned>;
        ///UEA24E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        namespace Uea24eValC{
        }
        ///UEA23E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        namespace Uea23eValC{
        }
        ///UEA22E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        namespace Uea22eValC{
        }
        ///UEA21E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        namespace Uea21eValC{
        }
        ///UEA20E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        namespace Uea20eValC{
        }
        ///UEA19E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        namespace Uea19eValC{
        }
        ///UEA18E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        namespace Uea18eValC{
        }
        ///UEA17E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        namespace Uea17eValC{
        }
        ///UEA16E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        namespace Uea16eValC{
        }
        ///UEA15E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        namespace Uea15eValC{
        }
        ///UEA14E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        namespace Uea14eValC{
        }
        ///UEA13E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        namespace Uea13eValC{
        }
        ///UEA12E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        namespace Uea12eValC{
        }
        ///UEA11E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        namespace Uea11eValC{
        }
        ///UEA10E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        namespace Uea10eValC{
        }
        ///UEA09E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        namespace Uea09eValC{
        }
        ///UEA08E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        namespace Uea08eValC{
        }
        ///UEAOOE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        namespace UeaooeValC{
        }
        ///UECS7E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        namespace Uecs7eValC{
        }
        ///UECS6E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        namespace Uecs6eValC{
        }
        ///UECS5E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        namespace Uecs5eValC{
        }
        ///UECS4E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        namespace Uecs4eValC{
        }
        ///UECS3E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        namespace Uecs3eValC{
        }
        ///UECS2E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        namespace Uecs2eValC{
        }
        ///UECS1E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        namespace Uecs1eValC{
        }
        ///UEFLSE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        namespace UeflseValC{
        }
        ///UEOEXE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        namespace UeoexeValC{
        }
        ///UEDQME Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        namespace UedqmeValC{
        }
        ///UEWEXE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        namespace UewexeValC{
        }
        ///UECLKE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        namespace UeclkeValC{
        }
        ///UEDTHB Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        namespace UedthbValC{
        }
        ///UEDEFB Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
        namespace UedefbValC{
        }
    }
    namespace Noneepfr11{    ///<Extended Pin Function Setting Register 11
        using Addr = Register::Address<0x4006f62c,0xfc000000,0,unsigned>;
        ///UERLC relocation select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        namespace UerlcValC{
        }
        ///UED15B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        namespace Ued15bValC{
        }
        ///UED14B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        namespace Ued14bValC{
        }
        ///UED13B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        namespace Ued13bValC{
        }
        ///UED12B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        namespace Ued12bValC{
        }
        ///UED11B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        namespace Ued11bValC{
        }
        ///UED10B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        namespace Ued10bValC{
        }
        ///UED09B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        namespace Ued09bValC{
        }
        ///UED08B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        namespace Ued08bValC{
        }
        ///UED07B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        namespace Ued07bValC{
        }
        ///UED06B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        namespace Ued06bValC{
        }
        ///UED05B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        namespace Ued05bValC{
        }
        ///UED04B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        namespace Ued04bValC{
        }
        ///UED03B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        namespace Ued03bValC{
        }
        ///UED02B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        namespace Ued02bValC{
        }
        ///UED01B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        namespace Ued01bValC{
        }
        ///UED00B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        namespace Ued00bValC{
        }
        ///UEA07E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        namespace Uea07eValC{
        }
        ///UEA06E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        namespace Uea06eValC{
        }
        ///UEA05E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        namespace Uea05eValC{
        }
        ///UEA04E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        namespace Uea04eValC{
        }
        ///UEA03E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        namespace Uea03eValC{
        }
        ///UEA02E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        namespace Uea02eValC{
        }
        ///UEA01E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        namespace Uea01eValC{
        }
        ///UEA00E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        namespace Uecs0eValC{
        }
        ///UEALEE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
        namespace UealeeValC{
        }
    }
    namespace Noneepfr12{    ///<Extended Pin Function Setting Register 12
        using Addr = Register::Address<0x4006f630,0xc0c3c0c3,0,unsigned>;
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
        using Addr = Register::Address<0x4006f634,0xc0c3c0c3,0,unsigned>;
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
        using Addr = Register::Address<0x4006f638,0xc003ffc0,0,unsigned>;
        ///Input cutoff Select bit in Standby of input Pin for Ethernet-MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eSplc{}; 
        namespace EsplcValC{
        }
        ///PPS0_PPS1 Output Select bit for Ethernet-MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ePse{}; 
        namespace EpseValC{
        }
        ///E_COUT Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eCke{}; 
        namespace EckeValC{
        }
        ///E_MDO1 I/O Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eMd1b{}; 
        namespace Emd1bValC{
        }
        ///E_MDO0 I/O Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eMd0b{}; 
        namespace Emd0bValC{
        }
        ///E_MDC1 I/O Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eMc1b{}; 
        namespace Emc1bValC{
        }
        ///E_MDC0 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eMc0e{}; 
        namespace Emc0eValC{
        }
        ///E_TXER0_TXEN1 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eTe1e{}; 
        namespace Ete1eValC{
        }
        ///E_TXEN0 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eTe0e{}; 
        namespace Ete0eValC{
        }
        ///E_TX02_TX10@ E_TX03_TX11 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eTd1e{}; 
        namespace Etd1eValC{
        }
        ///E_TX00@ E_TX01 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eTd0e{}; 
        namespace Etd0eValC{
        }
        ///QDU-ch.2 ZIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin2s{}; 
        namespace Qzin2sValC{
        }
        ///QDU-ch.2 BIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin2s{}; 
        namespace Qbin2sValC{
        }
        ///QDU-ch.2 AIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain2s{}; 
        namespace Qain2sValC{
        }
    }
    namespace Noneepfr15{    ///<Extended Pin Function Setting Register 15
        using Addr = Register::Address<0x4006f63c,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0x4006f640,0xc0000000,0,unsigned>;
        ///MFS ch.B I2C FastMode+ Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sfmpbc{}; 
        namespace SfmpbcValC{
        }
        ///MFS ch.A I2C FastMode+ Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sfmpac{}; 
        namespace SfmpacValC{
        }
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
        ///SCS7 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> scs7b{}; 
        namespace Scs7bValC{
        }
        ///SCS6 Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> scs6b{}; 
        namespace Scs6bValC{
        }
    }
    namespace Noneepfr17{    ///<Extended Pin Function Setting Register 17
        using Addr = Register::Address<0x4006f644,0xf000000f,0,unsigned>;
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
        using Addr = Register::Address<0x4006f648,0xc0003c0f,0,unsigned>;
        ///S_WP input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> sdwps{}; 
        namespace SdwpsValC{
        }
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sdcds{}; 
        namespace SdcdsValC{
        }
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sddata3b{}; 
        namespace Sddata3bValC{
        }
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sddata2b{}; 
        namespace Sddata2bValC{
        }
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sddata1b{}; 
        namespace Sddata1bValC{
        }
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sddata0b{}; 
        namespace Sddata0bValC{
        }
        ///S_CMD input/output select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sdcmdb{}; 
        namespace SdcmdbValC{
        }
        ///S_CLK output select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sdclke{}; 
        namespace SdclkeValC{
        }
        ///QDU-ch3 ZIN input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qzin3s{}; 
        namespace Qzin3sValC{
        }
        ///QDU-ch3 BIN input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qbin3s{}; 
        namespace Qbin3sValC{
        }
        ///QDU-ch3 AIN input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qain3s{}; 
        namespace Qain3sValC{
        }
    }
    namespace Noneepfr19{    ///<Extended Pin Function Setting Register 19
        using Addr = Register::Address<0x4006f64c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr20{    ///<Extended Pin Function Setting Register 20
        using Addr = Register::Address<0x4006f650,0xfe000000,0,unsigned>;
        ///UED31B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued31b{}; 
        namespace Ued31bValC{
        }
        ///UED30B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued30b{}; 
        namespace Ued30bValC{
        }
        ///UED29B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued29b{}; 
        namespace Ued29bValC{
        }
        ///UED28B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued28b{}; 
        namespace Ued28bValC{
        }
        ///UED27B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued27b{}; 
        namespace Ued27bValC{
        }
        ///UED26B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued26b{}; 
        namespace Ued26bValC{
        }
        ///UED25B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued25b{}; 
        namespace Ued25bValC{
        }
        ///UED24B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued24b{}; 
        namespace Ued24bValC{
        }
        ///UED23B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued23b{}; 
        namespace Ued23bValC{
        }
        ///UED22B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued22b{}; 
        namespace Ued22bValC{
        }
        ///UED21B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued21b{}; 
        namespace Ued21bValC{
        }
        ///UED20B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued20b{}; 
        namespace Ued20bValC{
        }
        ///UED19B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued19b{}; 
        namespace Ued19bValC{
        }
        ///UED18B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued18b{}; 
        namespace Ued18bValC{
        }
        ///UED17B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued17b{}; 
        namespace Ued17bValC{
        }
        ///UED16B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued16b{}; 
        namespace Ued16bValC{
        }
        ///UEDTHHB input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uedthhb{}; 
        namespace UedthhbValC{
        }
        ///UEDQM3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uedqm3e{}; 
        namespace Uedqm3eValC{
        }
        ///UEDQM2E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uedqm2e{}; 
        namespace Uedqm2eValC{
        }
        ///UECSXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uecsxe{}; 
        namespace UecsxeValC{
        }
        ///UEDWEXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedwexe{}; 
        namespace UedwexeValC{
        }
        ///UECASE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uecase{}; 
        namespace UecaseValC{
        }
        ///UERASE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uerase{}; 
        namespace UeraseValC{
        }
        ///UESMCEE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uesmcee{}; 
        namespace UesmceeValC{
        }
        ///UESMCKE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uesmcke{}; 
        namespace UesmckeValC{
        }
    }
    namespace Nonepzr0{    ///<Port Pseudo Open Drain Setting Register 0
        using Addr = Register::Address<0x4006f700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x4006f704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x4006f708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///<Port Pseudo Open Drain Setting Register 3
        using Addr = Register::Address<0x4006f70c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///<Port Pseudo Open Drain Setting Register 4
        using Addr = Register::Address<0x4006f710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x4006f714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x4006f718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr7{    ///<Port Pseudo Open Drain Setting Register 7
        using Addr = Register::Address<0x4006f71c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x4006f720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x4006f738,0xffffffff,0,unsigned>;
    }
}
