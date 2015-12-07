#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral GPIO 
    namespace Nonepfr0{    ///< register PFR0 
        using Addr = Register::Address<0x4006f000,0xffff8000,0,unsigned>;
        /// bitfield P0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p0e{}; 
        namespace P0eValC{
        }
        /// bitfield P0D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p0d{}; 
        namespace P0dValC{
        }
        /// bitfield P0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p0c{}; 
        namespace P0cValC{
        }
        /// bitfield P0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p0b{}; 
        namespace P0bValC{
        }
        /// bitfield P0A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        namespace P0aValC{
        }
        /// bitfield P09 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        namespace P09ValC{
        }
        /// bitfield P08 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        namespace P08ValC{
        }
        /// bitfield P07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        namespace P07ValC{
        }
        /// bitfield P06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        namespace P06ValC{
        }
        /// bitfield P05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        namespace P05ValC{
        }
        /// bitfield P04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        /// bitfield P03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        /// bitfield P02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        /// bitfield P01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        /// bitfield P00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Nonepfr1{    ///< register PFR1 
        using Addr = Register::Address<0x4006f004,0xffff0000,0,unsigned>;
        /// bitfield P1F 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p1f{}; 
        namespace P1fValC{
        }
        /// bitfield P1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p1e{}; 
        namespace P1eValC{
        }
        /// bitfield P1D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p1d{}; 
        namespace P1dValC{
        }
        /// bitfield P1C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p1c{}; 
        namespace P1cValC{
        }
        /// bitfield P1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p1b{}; 
        namespace P1bValC{
        }
        /// bitfield P1A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p1a{}; 
        namespace P1aValC{
        }
        /// bitfield P19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        /// bitfield P18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        /// bitfield P17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        /// bitfield P16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        /// bitfield P15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        /// bitfield P14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        /// bitfield P13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        /// bitfield P12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        /// bitfield P11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        /// bitfield P10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
    }
    namespace Nonepfr2{    ///< register PFR2 
        using Addr = Register::Address<0x4006f008,0xffffff00,0,unsigned>;
        /// bitfield P27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        /// bitfield P26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        /// bitfield P25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        /// bitfield P24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        /// bitfield P23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        /// bitfield P22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        /// bitfield P21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        /// bitfield P20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
    }
    namespace Nonepfr3{    ///< register PFR3 
        using Addr = Register::Address<0x4006f00c,0xffff0000,0,unsigned>;
        /// bitfield P3F 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p3f{}; 
        namespace P3fValC{
        }
        /// bitfield P3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        namespace P3eValC{
        }
        /// bitfield P3D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        namespace P3dValC{
        }
        /// bitfield P3C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        namespace P3cValC{
        }
        /// bitfield P3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        namespace P3bValC{
        }
        /// bitfield P3A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        namespace P3aValC{
        }
        /// bitfield P39 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        namespace P39ValC{
        }
        /// bitfield P38 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p38{}; 
        namespace P38ValC{
        }
        /// bitfield P37 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p37{}; 
        namespace P37ValC{
        }
        /// bitfield P36 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p36{}; 
        namespace P36ValC{
        }
        /// bitfield P35 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p35{}; 
        namespace P35ValC{
        }
        /// bitfield P34 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p34{}; 
        namespace P34ValC{
        }
        /// bitfield P33 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p33{}; 
        namespace P33ValC{
        }
        /// bitfield P32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p32{}; 
        namespace P32ValC{
        }
        /// bitfield P31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
        /// bitfield P30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
    }
    namespace Nonepfr4{    ///< register PFR4 
        using Addr = Register::Address<0x4006f010,0xffff8000,0,unsigned>;
        /// bitfield P4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p4e{}; 
        namespace P4eValC{
        }
        /// bitfield P4D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p4d{}; 
        namespace P4dValC{
        }
        /// bitfield P4C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p4c{}; 
        namespace P4cValC{
        }
        /// bitfield P4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p4b{}; 
        namespace P4bValC{
        }
        /// bitfield P4A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        namespace P4aValC{
        }
        /// bitfield P49 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        namespace P49ValC{
        }
        /// bitfield P48 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p48{}; 
        namespace P48ValC{
        }
        /// bitfield P47 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        namespace P47ValC{
        }
        /// bitfield P46 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        namespace P46ValC{
        }
        /// bitfield P45 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p45{}; 
        namespace P45ValC{
        }
        /// bitfield P44 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p44{}; 
        namespace P44ValC{
        }
        /// bitfield P43 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p43{}; 
        namespace P43ValC{
        }
        /// bitfield P42 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p42{}; 
        namespace P42ValC{
        }
        /// bitfield P41 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p41{}; 
        namespace P41ValC{
        }
        /// bitfield P40 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p40{}; 
        namespace P40ValC{
        }
    }
    namespace Nonepfr5{    ///< register PFR5 
        using Addr = Register::Address<0x4006f014,0xfffff000,0,unsigned>;
        /// bitfield P5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p5b{}; 
        namespace P5bValC{
        }
        /// bitfield P5A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p5a{}; 
        namespace P5aValC{
        }
        /// bitfield P59 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p59{}; 
        namespace P59ValC{
        }
        /// bitfield P58 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p58{}; 
        namespace P58ValC{
        }
        /// bitfield P57 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p57{}; 
        namespace P57ValC{
        }
        /// bitfield P56 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p56{}; 
        namespace P56ValC{
        }
        /// bitfield P55 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p55{}; 
        namespace P55ValC{
        }
        /// bitfield P54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p54{}; 
        namespace P54ValC{
        }
        /// bitfield P53 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p53{}; 
        namespace P53ValC{
        }
        /// bitfield P52 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        namespace P52ValC{
        }
        /// bitfield P51 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        namespace P51ValC{
        }
        /// bitfield P50 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
        namespace P50ValC{
        }
    }
    namespace Nonepfr6{    ///< register PFR6 
        using Addr = Register::Address<0x4006f018,0xfffffe00,0,unsigned>;
        /// bitfield P68 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p68{}; 
        namespace P68ValC{
        }
        /// bitfield P67 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p67{}; 
        namespace P67ValC{
        }
        /// bitfield P66 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p66{}; 
        namespace P66ValC{
        }
        /// bitfield P65 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p65{}; 
        namespace P65ValC{
        }
        /// bitfield P64 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p64{}; 
        namespace P64ValC{
        }
        /// bitfield P63 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p63{}; 
        namespace P63ValC{
        }
        /// bitfield P62 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p62{}; 
        namespace P62ValC{
        }
        /// bitfield P61 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        namespace P61ValC{
        }
        /// bitfield P60 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
        namespace P60ValC{
        }
    }
    namespace Nonepfr7{    ///< register PFR7 
        using Addr = Register::Address<0x4006f01c,0xffffffe0,0,unsigned>;
        /// bitfield P74 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p74{}; 
        namespace P74ValC{
        }
        /// bitfield P73 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p73{}; 
        namespace P73ValC{
        }
        /// bitfield P72 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p72{}; 
        namespace P72ValC{
        }
        /// bitfield P71 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p71{}; 
        namespace P71ValC{
        }
        /// bitfield P70 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p70{}; 
        namespace P70ValC{
        }
    }
    namespace Nonepfr8{    ///< register PFR8 
        using Addr = Register::Address<0x4006f020,0xfffffffc,0,unsigned>;
        /// bitfield P81 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        namespace P81ValC{
        }
        /// bitfield P80 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
        namespace P80ValC{
        }
    }
    namespace Nonepfre{    ///< register PFRE 
        using Addr = Register::Address<0x4006f038,0xfffffff2,0,unsigned>;
        /// bitfield PE3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        /// bitfield PE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        /// bitfield PE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
    }
    namespace Nonepcr0{    ///< register PCR0 
        using Addr = Register::Address<0x4006f100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///< register PCR1 
        using Addr = Register::Address<0x4006f104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///< register PCR2 
        using Addr = Register::Address<0x4006f108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///< register PCR3 
        using Addr = Register::Address<0x4006f10c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///< register PCR4 
        using Addr = Register::Address<0x4006f110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///< register PCR5 
        using Addr = Register::Address<0x4006f114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///< register PCR6 
        using Addr = Register::Address<0x4006f118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr7{    ///< register PCR7 
        using Addr = Register::Address<0x4006f11c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///< register PCR8 
        using Addr = Register::Address<0x4006f120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///< register PCRE 
        using Addr = Register::Address<0x4006f138,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///< register DDR0 
        using Addr = Register::Address<0x4006f200,0xffff0000,0,unsigned>;
        /// bitfield P0F 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p0f{}; 
        namespace P0fValC{
        }
        /// bitfield P0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p0e{}; 
        namespace P0eValC{
        }
        /// bitfield P0D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p0d{}; 
        namespace P0dValC{
        }
        /// bitfield P0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p0c{}; 
        namespace P0cValC{
        }
        /// bitfield P0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p0b{}; 
        namespace P0bValC{
        }
        /// bitfield P0A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        namespace P0aValC{
        }
        /// bitfield P09 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        namespace P09ValC{
        }
        /// bitfield P08 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        namespace P08ValC{
        }
        /// bitfield P07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        namespace P07ValC{
        }
        /// bitfield P06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        namespace P06ValC{
        }
        /// bitfield P05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        namespace P05ValC{
        }
        /// bitfield P04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        namespace P04ValC{
        }
        /// bitfield P03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        namespace P03ValC{
        }
        /// bitfield P02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        namespace P02ValC{
        }
        /// bitfield P01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        namespace P01ValC{
        }
        /// bitfield P00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
        namespace P00ValC{
        }
    }
    namespace Noneddr1{    ///< register DDR1 
        using Addr = Register::Address<0x4006f204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///< register DDR2 
        using Addr = Register::Address<0x4006f208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///< register DDR3 
        using Addr = Register::Address<0x4006f20c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///< register DDR4 
        using Addr = Register::Address<0x4006f210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///< register DDR5 
        using Addr = Register::Address<0x4006f214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///< register DDR6 
        using Addr = Register::Address<0x4006f218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr7{    ///< register DDR7 
        using Addr = Register::Address<0x4006f21c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///< register DDR8 
        using Addr = Register::Address<0x4006f220,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///< register DDRE 
        using Addr = Register::Address<0x4006f238,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///< register PDIR0 
        using Addr = Register::Address<0x4006f300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///< register PDIR1 
        using Addr = Register::Address<0x4006f304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///< register PDIR2 
        using Addr = Register::Address<0x4006f308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///< register PDIR3 
        using Addr = Register::Address<0x4006f30c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///< register PDIR4 
        using Addr = Register::Address<0x4006f310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///< register PDIR5 
        using Addr = Register::Address<0x4006f314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///< register PDIR6 
        using Addr = Register::Address<0x4006f318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir7{    ///< register PDIR7 
        using Addr = Register::Address<0x4006f31c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///< register PDIR8 
        using Addr = Register::Address<0x4006f320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///< register PDIRE 
        using Addr = Register::Address<0x4006f338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///< register PDOR0 
        using Addr = Register::Address<0x4006f400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///< register PDOR1 
        using Addr = Register::Address<0x4006f404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///< register PDOR2 
        using Addr = Register::Address<0x4006f408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///< register PDOR3 
        using Addr = Register::Address<0x4006f40c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///< register PDOR4 
        using Addr = Register::Address<0x4006f410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///< register PDOR5 
        using Addr = Register::Address<0x4006f414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///< register PDOR6 
        using Addr = Register::Address<0x4006f418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor7{    ///< register PDOR7 
        using Addr = Register::Address<0x4006f41c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///< register PDOR8 
        using Addr = Register::Address<0x4006f420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///< register PDORE 
        using Addr = Register::Address<0x4006f438,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///< register ADE 
        using Addr = Register::Address<0x4006f500,0x00000000,0,unsigned>;
        /// bitfield AN31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        /// bitfield AN30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        /// bitfield AN29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        /// bitfield AN28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        /// bitfield AN27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        /// bitfield AN26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        /// bitfield AN25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        /// bitfield AN24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
        /// bitfield AN23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        /// bitfield AN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        /// bitfield AN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        /// bitfield AN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        /// bitfield AN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        /// bitfield AN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        /// bitfield AN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        /// bitfield AN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
        /// bitfield AN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        /// bitfield AN11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        /// bitfield AN10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        /// bitfield AN09 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an09{}; 
        namespace An09ValC{
        }
        /// bitfield AN08 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an08{}; 
        namespace An08ValC{
        }
        /// bitfield AN07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an07{}; 
        namespace An07ValC{
        }
        /// bitfield AN06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an06{}; 
        namespace An06ValC{
        }
        /// bitfield AN05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an05{}; 
        namespace An05ValC{
        }
        /// bitfield AN04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an04{}; 
        namespace An04ValC{
        }
        /// bitfield AN03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an03{}; 
        namespace An03ValC{
        }
        /// bitfield AN02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an02{}; 
        namespace An02ValC{
        }
        /// bitfield AN01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an01{}; 
        namespace An01ValC{
        }
        /// bitfield AN00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an00{}; 
        namespace An00ValC{
        }
    }
    namespace Nonespsr{    ///< register SPSR 
        using Addr = Register::Address<0x4006f580,0xffffffc3,0,unsigned>;
        /// bitfield USB1C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb1c{}; 
        namespace Usb1cValC{
        }
        /// bitfield USB0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        namespace Usb0cValC{
        }
        /// bitfield MAINXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
    }
    namespace Noneepfr00{    ///< register EPFR00 
        using Addr = Register::Address<0x4006f600,0xfcfcdd08,0,unsigned>;
        /// bitfield TRC1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        namespace Trc1eValC{
        }
        /// bitfield TRC0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        namespace Trc0eValC{
        }
        /// bitfield JTAGEN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        namespace Jtagen1sValC{
        }
        /// bitfield JTAGEN0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        namespace Jtagen0bValC{
        }
        /// bitfield USBP1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> usbp1e{}; 
        namespace Usbp1eValC{
        }
        /// bitfield USBP0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        namespace Usbp0eValC{
        }
        /// bitfield SUBOUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        namespace SubouteValC{
        }
        /// bitfield RTCCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        namespace RtccoeValC{
        }
        /// bitfield CROUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        namespace CrouteValC{
        }
        /// bitfield NMIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
        namespace NmisValC{
        }
    }
    namespace Noneepfr01{    ///< register EPFR01 
        using Addr = Register::Address<0x4006f604,0x0000e000,0,unsigned>;
        /// bitfield IC03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        namespace Ic03sValC{
        }
        /// bitfield IC02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        namespace Ic02sValC{
        }
        /// bitfield IC01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        namespace Ic01sValC{
        }
        /// bitfield IC00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        namespace Ic00sValC{
        }
        /// bitfield FRCK0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        namespace Frck0sValC{
        }
        /// bitfield DTTI0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        namespace Dtti0sValC{
        }
        /// bitfield DTTI0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        namespace Dtti0cValC{
        }
        /// bitfield RTO05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        namespace Rto05eValC{
        }
        /// bitfield RTO04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        namespace Rto04eValC{
        }
        /// bitfield RTO03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        namespace Rto03eValC{
        }
        /// bitfield RTO02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        namespace Rto02eValC{
        }
        /// bitfield RTO01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        namespace Rto01eValC{
        }
        /// bitfield RTO00E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
        namespace Rto00eValC{
        }
    }
    namespace Noneepfr02{    ///< register EPFR02 
        using Addr = Register::Address<0x4006f608,0x0000e000,0,unsigned>;
        /// bitfield IC13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic13s{}; 
        namespace Ic13sValC{
        }
        /// bitfield IC12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic12s{}; 
        namespace Ic12sValC{
        }
        /// bitfield IC11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic11s{}; 
        namespace Ic11sValC{
        }
        /// bitfield IC10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic10s{}; 
        namespace Ic10sValC{
        }
        /// bitfield FRCK1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck1s{}; 
        namespace Frck1sValC{
        }
        /// bitfield DTTI1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti1s{}; 
        namespace Dtti1sValC{
        }
        /// bitfield DTTI1C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti1c{}; 
        namespace Dtti1cValC{
        }
        /// bitfield RTO15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto15e{}; 
        namespace Rto15eValC{
        }
        /// bitfield RTO14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto14e{}; 
        namespace Rto14eValC{
        }
        /// bitfield RTO13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto13e{}; 
        namespace Rto13eValC{
        }
        /// bitfield RTO12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto12e{}; 
        namespace Rto12eValC{
        }
        /// bitfield RTO11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto11e{}; 
        namespace Rto11eValC{
        }
        /// bitfield RTO10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto10e{}; 
        namespace Rto10eValC{
        }
    }
    namespace Noneepfr03{    ///< register EPFR03 
        using Addr = Register::Address<0x4006f60c,0x0000e000,0,unsigned>;
        /// bitfield IC23S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic23s{}; 
        namespace Ic23sValC{
        }
        /// bitfield IC22S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic22s{}; 
        namespace Ic22sValC{
        }
        /// bitfield IC21S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic21s{}; 
        namespace Ic21sValC{
        }
        /// bitfield IC20S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic20s{}; 
        namespace Ic20sValC{
        }
        /// bitfield FRCK2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck2s{}; 
        namespace Frck2sValC{
        }
        /// bitfield DTTI2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti2s{}; 
        namespace Dtti2sValC{
        }
        /// bitfield DTTI2C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti2c{}; 
        namespace Dtti2cValC{
        }
        /// bitfield RTO25E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto25e{}; 
        namespace Rto25eValC{
        }
        /// bitfield RTO24E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto24e{}; 
        namespace Rto24eValC{
        }
        /// bitfield RTO23E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto23e{}; 
        namespace Rto23eValC{
        }
        /// bitfield RTO22E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto22e{}; 
        namespace Rto22eValC{
        }
        /// bitfield RTO21E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto21e{}; 
        namespace Rto21eValC{
        }
        /// bitfield RTO20E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto20e{}; 
        namespace Rto20eValC{
        }
    }
    namespace Noneepfr04{    ///< register EPFR04 
        using Addr = Register::Address<0x4006f610,0xc0c3c083,0,unsigned>;
        /// bitfield TIOB3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        namespace Tiob3sValC{
        }
        /// bitfield TIOA3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        namespace Tioa3eValC{
        }
        /// bitfield TIOA3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        namespace Tioa3sValC{
        }
        /// bitfield TIOB2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        namespace Tiob2sValC{
        }
        /// bitfield TIOA2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        namespace Tioa2eValC{
        }
        /// bitfield TIOB1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        namespace Tiob1sValC{
        }
        /// bitfield TIOA1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        namespace Tioa1eValC{
        }
        /// bitfield TIOA1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        namespace Tioa1sValC{
        }
        /// bitfield TIOB0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        namespace Tiob0sValC{
        }
        /// bitfield TIOA0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
        namespace Tioa0eValC{
        }
    }
    namespace Noneepfr05{    ///< register EPFR05 
        using Addr = Register::Address<0x4006f614,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        namespace Tiob7sValC{
        }
        /// bitfield TIOA7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        namespace Tioa7eValC{
        }
        /// bitfield TIOA7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        namespace Tioa7sValC{
        }
        /// bitfield TIOB6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        namespace Tiob6sValC{
        }
        /// bitfield TIOA6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        namespace Tioa6eValC{
        }
        /// bitfield TIOB5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        namespace Tiob5sValC{
        }
        /// bitfield TIOA5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        namespace Tioa5eValC{
        }
        /// bitfield TIOA5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        namespace Tioa5sValC{
        }
        /// bitfield TIOB4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        namespace Tiob4sValC{
        }
        /// bitfield TIOA4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
        namespace Tioa4eValC{
        }
    }
    namespace Noneepfr06{    ///< register EPFR06 
        using Addr = Register::Address<0x4006f618,0x00000000,0,unsigned>;
        /// bitfield EINT15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        namespace Eint15sValC{
        }
        /// bitfield EINT14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        namespace Eint14sValC{
        }
        /// bitfield EINT13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        namespace Eint13sValC{
        }
        /// bitfield EINT12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        namespace Eint12sValC{
        }
        /// bitfield EINT11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        namespace Eint11sValC{
        }
        /// bitfield EINT10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        namespace Eint10sValC{
        }
        /// bitfield EINT09S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        namespace Eint09sValC{
        }
        /// bitfield EINT08S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        namespace Eint08sValC{
        }
        /// bitfield EINT07S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        namespace Eint07sValC{
        }
        /// bitfield EINT06S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        namespace Eint06sValC{
        }
        /// bitfield EINT05S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        namespace Eint05sValC{
        }
        /// bitfield EINT04S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        namespace Eint04sValC{
        }
        /// bitfield EINT03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        namespace Eint03sValC{
        }
        /// bitfield EINT02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        namespace Eint02sValC{
        }
        /// bitfield EINT01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        namespace Eint01sValC{
        }
        /// bitfield EINT00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
        namespace Eint00sValC{
        }
    }
    namespace Noneepfr07{    ///< register EPFR07 
        using Addr = Register::Address<0x4006f61c,0xf000000f,0,unsigned>;
        /// bitfield SCK3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        namespace Sck3bValC{
        }
        /// bitfield SOT3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        namespace Sot3bValC{
        }
        /// bitfield SIN3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        namespace Sin3sValC{
        }
        /// bitfield SCK2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        namespace Sck2bValC{
        }
        /// bitfield SOT2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        namespace Sot2bValC{
        }
        /// bitfield SIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        namespace Sin2sValC{
        }
        /// bitfield SCK1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        namespace Sck1bValC{
        }
        /// bitfield SOT1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        namespace Sot1bValC{
        }
        /// bitfield SIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        namespace Sin1sValC{
        }
        /// bitfield SCK0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        namespace Sck0bValC{
        }
        /// bitfield SOT0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        namespace Sot0bValC{
        }
        /// bitfield SIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
        namespace Sin0sValC{
        }
    }
    namespace Noneepfr08{    ///< register EPFR08 
        using Addr = Register::Address<0x4006f620,0x00000000,0,unsigned>;
        /// bitfield CTS5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cts5s{}; 
        namespace Cts5sValC{
        }
        /// bitfield RTS5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> rts5e{}; 
        namespace Rts5eValC{
        }
        /// bitfield SCK7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        namespace Sck7bValC{
        }
        /// bitfield SOT7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        namespace Sot7bValC{
        }
        /// bitfield SIN7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        namespace Sin7sValC{
        }
        /// bitfield SCK6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        namespace Sck6bValC{
        }
        /// bitfield SOT6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        namespace Sot6bValC{
        }
        /// bitfield SIN6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        namespace Sin6sValC{
        }
        /// bitfield SCK5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        namespace Sck5bValC{
        }
        /// bitfield SOT5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        namespace Sot5bValC{
        }
        /// bitfield SIN5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        namespace Sin5sValC{
        }
        /// bitfield SCK4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        namespace Sck4bValC{
        }
        /// bitfield SOT4B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        namespace Sot4bValC{
        }
        /// bitfield SIN4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        namespace Sin4sValC{
        }
        /// bitfield CTS4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        namespace Cts4sValC{
        }
        /// bitfield RTS4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
        namespace Rts4eValC{
        }
    }
    namespace Noneepfr09{    ///< register EPFR09 
        using Addr = Register::Address<0x4006f624,0x00000000,0,unsigned>;
        /// bitfield CTX1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ctx1e{}; 
        namespace Ctx1eValC{
        }
        /// bitfield CRX1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> crx1s{}; 
        namespace Crx1sValC{
        }
        /// bitfield CTX0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ctx0e{}; 
        namespace Ctx0eValC{
        }
        /// bitfield CRX0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> crx0s{}; 
        namespace Crx0sValC{
        }
        /// bitfield ADTRG2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> adtrg2s{}; 
        namespace Adtrg2sValC{
        }
        /// bitfield ADTRG1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        namespace Adtrg1sValC{
        }
        /// bitfield ADTRG0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        namespace Adtrg0sValC{
        }
        /// bitfield QZIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        namespace Qzin1sValC{
        }
        /// bitfield QBIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        namespace Qbin1sValC{
        }
        /// bitfield QAIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        namespace Qain1sValC{
        }
        /// bitfield QZIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        namespace Qzin0sValC{
        }
        /// bitfield QBIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        namespace Qbin0sValC{
        }
        /// bitfield QAIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
        namespace Qain0sValC{
        }
    }
    namespace Noneepfr10{    ///< register EPFR10 
        using Addr = Register::Address<0x4006f628,0x00000000,0,unsigned>;
        /// bitfield UEA24E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        namespace Uea24eValC{
        }
        /// bitfield UEA23E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        namespace Uea23eValC{
        }
        /// bitfield UEA22E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        namespace Uea22eValC{
        }
        /// bitfield UEA21E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        namespace Uea21eValC{
        }
        /// bitfield UEA20E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        namespace Uea20eValC{
        }
        /// bitfield UEA19E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        namespace Uea19eValC{
        }
        /// bitfield UEA18E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        namespace Uea18eValC{
        }
        /// bitfield UEA17E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        namespace Uea17eValC{
        }
        /// bitfield UEA16E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        namespace Uea16eValC{
        }
        /// bitfield UEA15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        namespace Uea15eValC{
        }
        /// bitfield UEA14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        namespace Uea14eValC{
        }
        /// bitfield UEA13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        namespace Uea13eValC{
        }
        /// bitfield UEA12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        namespace Uea12eValC{
        }
        /// bitfield UEA11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        namespace Uea11eValC{
        }
        /// bitfield UEA10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        namespace Uea10eValC{
        }
        /// bitfield UEA09E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        namespace Uea09eValC{
        }
        /// bitfield UEA08E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        namespace Uea08eValC{
        }
        /// bitfield UEAOOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        namespace UeaooeValC{
        }
        /// bitfield UECS7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        namespace Uecs7eValC{
        }
        /// bitfield UECS6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        namespace Uecs6eValC{
        }
        /// bitfield UECS5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        namespace Uecs5eValC{
        }
        /// bitfield UECS4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        namespace Uecs4eValC{
        }
        /// bitfield UECS3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        namespace Uecs3eValC{
        }
        /// bitfield UECS2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        namespace Uecs2eValC{
        }
        /// bitfield UECS1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        namespace Uecs1eValC{
        }
        /// bitfield UEFLSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        namespace UeflseValC{
        }
        /// bitfield UEOEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        namespace UeoexeValC{
        }
        /// bitfield UEDQME 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        namespace UedqmeValC{
        }
        /// bitfield UEWEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        namespace UewexeValC{
        }
        /// bitfield UECLKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        namespace UeclkeValC{
        }
        /// bitfield UEDTHB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        namespace UedthbValC{
        }
        /// bitfield UEDEFB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
        namespace UedefbValC{
        }
    }
    namespace Noneepfr11{    ///< register EPFR11 
        using Addr = Register::Address<0x4006f62c,0xfc000000,0,unsigned>;
        /// bitfield UERLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        namespace UerlcValC{
        }
        /// bitfield UED15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        namespace Ued15bValC{
        }
        /// bitfield UED14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        namespace Ued14bValC{
        }
        /// bitfield UED13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        namespace Ued13bValC{
        }
        /// bitfield UED12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        namespace Ued12bValC{
        }
        /// bitfield UED11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        namespace Ued11bValC{
        }
        /// bitfield UED10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        namespace Ued10bValC{
        }
        /// bitfield UED09B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        namespace Ued09bValC{
        }
        /// bitfield UED08B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        namespace Ued08bValC{
        }
        /// bitfield UED07B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        namespace Ued07bValC{
        }
        /// bitfield UED06B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        namespace Ued06bValC{
        }
        /// bitfield UED05B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        namespace Ued05bValC{
        }
        /// bitfield UED04B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        namespace Ued04bValC{
        }
        /// bitfield UED03B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        namespace Ued03bValC{
        }
        /// bitfield UED02B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        namespace Ued02bValC{
        }
        /// bitfield UED01B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        namespace Ued01bValC{
        }
        /// bitfield UED00B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        namespace Ued00bValC{
        }
        /// bitfield UEA07E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        namespace Uea07eValC{
        }
        /// bitfield UEA06E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        namespace Uea06eValC{
        }
        /// bitfield UEA05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        namespace Uea05eValC{
        }
        /// bitfield UEA04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        namespace Uea04eValC{
        }
        /// bitfield UEA03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        namespace Uea03eValC{
        }
        /// bitfield UEA02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        namespace Uea02eValC{
        }
        /// bitfield UEA01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        namespace Uea01eValC{
        }
        /// bitfield UECS0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        namespace Uecs0eValC{
        }
        /// bitfield UEALEE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
        namespace UealeeValC{
        }
    }
    namespace Noneepfr12{    ///< register EPFR12 
        using Addr = Register::Address<0x4006f630,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        namespace Tiob11sValC{
        }
        /// bitfield TIOA11E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        namespace Tioa11eValC{
        }
        /// bitfield TIOA11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        namespace Tioa11sValC{
        }
        /// bitfield TIOB10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        namespace Tiob10sValC{
        }
        /// bitfield TIOA10E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        namespace Tioa10eValC{
        }
        /// bitfield TIOB9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        namespace Tiob9sValC{
        }
        /// bitfield TIOA9E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        namespace Tioa9eValC{
        }
        /// bitfield TIOA9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        namespace Tioa9sValC{
        }
        /// bitfield TIOB8S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        namespace Tiob8sValC{
        }
        /// bitfield TIOA8E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
        namespace Tioa8eValC{
        }
    }
    namespace Noneepfr13{    ///< register EPFR13 
        using Addr = Register::Address<0x4006f634,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        namespace Tiob15sValC{
        }
        /// bitfield TIOA15E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        namespace Tioa15eValC{
        }
        /// bitfield TIOA15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        namespace Tioa15sValC{
        }
        /// bitfield TIOB14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        namespace Tiob14sValC{
        }
        /// bitfield TIOA14E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        namespace Tioa14eValC{
        }
        /// bitfield TIOB13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        namespace Tiob13sValC{
        }
        /// bitfield TIOA13E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        namespace Tioa13eValC{
        }
        /// bitfield TIOA13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        namespace Tioa13sValC{
        }
        /// bitfield TIOB12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        namespace Tiob12sValC{
        }
        /// bitfield TIOA12E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
        namespace Tioa12eValC{
        }
    }
    namespace Noneepfr14{    ///< register EPFR14 
        using Addr = Register::Address<0x4006f638,0xc003ffc0,0,unsigned>;
        /// bitfield E_SPLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eSplc{}; 
        namespace EsplcValC{
        }
        /// bitfield E_PSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ePse{}; 
        namespace EpseValC{
        }
        /// bitfield E_CKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eCke{}; 
        namespace EckeValC{
        }
        /// bitfield E_MD1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eMd1b{}; 
        namespace Emd1bValC{
        }
        /// bitfield E_MD0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eMd0b{}; 
        namespace Emd0bValC{
        }
        /// bitfield E_MC1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eMc1b{}; 
        namespace Emc1bValC{
        }
        /// bitfield E_MC0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eMc0e{}; 
        namespace Emc0eValC{
        }
        /// bitfield E_TE1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eTe1e{}; 
        namespace Ete1eValC{
        }
        /// bitfield E_TE0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eTe0e{}; 
        namespace Ete0eValC{
        }
        /// bitfield E_TD1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eTd1e{}; 
        namespace Etd1eValC{
        }
        /// bitfield E_TD0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eTd0e{}; 
        namespace Etd0eValC{
        }
        /// bitfield QZIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin2s{}; 
        namespace Qzin2sValC{
        }
        /// bitfield QBIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin2s{}; 
        namespace Qbin2sValC{
        }
        /// bitfield QAIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain2s{}; 
        namespace Qain2sValC{
        }
    }
    namespace Noneepfr15{    ///< register EPFR15 
        using Addr = Register::Address<0x4006f63c,0x00000000,0,unsigned>;
        /// bitfield EINT31S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        namespace Eint31sValC{
        }
        /// bitfield EINT30S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        namespace Eint30sValC{
        }
        /// bitfield EINT29S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        namespace Eint29sValC{
        }
        /// bitfield EINT28S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        namespace Eint28sValC{
        }
        /// bitfield EINT27S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        namespace Eint27sValC{
        }
        /// bitfield EINT26S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        namespace Eint26sValC{
        }
        /// bitfield EINT25S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        namespace Eint25sValC{
        }
        /// bitfield EINT24S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        namespace Eint24sValC{
        }
        /// bitfield EINT23S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        namespace Eint23sValC{
        }
        /// bitfield EINT22S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        namespace Eint22sValC{
        }
        /// bitfield EINT21S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        namespace Eint21sValC{
        }
        /// bitfield EINT20S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        namespace Eint20sValC{
        }
        /// bitfield EINT19S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        namespace Eint19sValC{
        }
        /// bitfield EINT18S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        namespace Eint18sValC{
        }
        /// bitfield EINT17S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        namespace Eint17sValC{
        }
        /// bitfield EINT16S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
        namespace Eint16sValC{
        }
    }
    namespace Noneepfr16{    ///< register EPFR16 
        using Addr = Register::Address<0x4006f640,0xc0000000,0,unsigned>;
        /// bitfield SFMPBC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sfmpbc{}; 
        namespace SfmpbcValC{
        }
        /// bitfield SFMPAC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sfmpac{}; 
        namespace SfmpacValC{
        }
        /// bitfield SCK11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        namespace Sck11bValC{
        }
        /// bitfield SOT11B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        namespace Sot11bValC{
        }
        /// bitfield SIN11S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        namespace Sin11sValC{
        }
        /// bitfield SCK10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        namespace Sck10bValC{
        }
        /// bitfield SOT10B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        namespace Sot10bValC{
        }
        /// bitfield SIN10S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        namespace Sin10sValC{
        }
        /// bitfield SCK9B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        namespace Sck9bValC{
        }
        /// bitfield SOT9B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        namespace Sot9bValC{
        }
        /// bitfield SIN9S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        namespace Sin9sValC{
        }
        /// bitfield SCK8B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        namespace Sck8bValC{
        }
        /// bitfield SOT8B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        namespace Sot8bValC{
        }
        /// bitfield SIN8S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
        namespace Sin8sValC{
        }
        /// bitfield SCS7B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> scs7b{}; 
        namespace Scs7bValC{
        }
        /// bitfield SCS6B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> scs6b{}; 
        namespace Scs6bValC{
        }
    }
    namespace Noneepfr17{    ///< register EPFR17 
        using Addr = Register::Address<0x4006f644,0xf000000f,0,unsigned>;
        /// bitfield SCK15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        namespace Sck15bValC{
        }
        /// bitfield SOT15B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        namespace Sot15bValC{
        }
        /// bitfield SIN15S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        namespace Sin15sValC{
        }
        /// bitfield SCK14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        namespace Sck14bValC{
        }
        /// bitfield SOT14B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        namespace Sot14bValC{
        }
        /// bitfield SIN14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        namespace Sin14sValC{
        }
        /// bitfield SCK13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        namespace Sck13bValC{
        }
        /// bitfield SOT13B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        namespace Sot13bValC{
        }
        /// bitfield SIN13S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        namespace Sin13sValC{
        }
        /// bitfield SCK12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        namespace Sck12bValC{
        }
        /// bitfield SOT12B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        namespace Sot12bValC{
        }
        /// bitfield SIN12S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
        namespace Sin12sValC{
        }
    }
    namespace Noneepfr18{    ///< register EPFR18 
        using Addr = Register::Address<0x4006f648,0xc0003c0f,0,unsigned>;
        /// bitfield SDWPS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> sdwps{}; 
        namespace SdwpsValC{
        }
        /// bitfield SDCDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sdcds{}; 
        namespace SdcdsValC{
        }
        /// bitfield SDDATA3B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sddata3b{}; 
        namespace Sddata3bValC{
        }
        /// bitfield SDDATA2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sddata2b{}; 
        namespace Sddata2bValC{
        }
        /// bitfield SDDATA1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sddata1b{}; 
        namespace Sddata1bValC{
        }
        /// bitfield SDDATA0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sddata0b{}; 
        namespace Sddata0bValC{
        }
        /// bitfield SDCMDB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sdcmdb{}; 
        namespace SdcmdbValC{
        }
        /// bitfield SDCLKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sdclke{}; 
        namespace SdclkeValC{
        }
        /// bitfield QZIN3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qzin3s{}; 
        namespace Qzin3sValC{
        }
        /// bitfield QBIN3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qbin3s{}; 
        namespace Qbin3sValC{
        }
        /// bitfield QAIN3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qain3s{}; 
        namespace Qain3sValC{
        }
    }
    namespace Noneepfr19{    ///< register EPFR19 
        using Addr = Register::Address<0x4006f64c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr20{    ///< register EPFR20 
        using Addr = Register::Address<0x4006f650,0xfe000000,0,unsigned>;
        /// bitfield UED31B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued31b{}; 
        namespace Ued31bValC{
        }
        /// bitfield UED30B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued30b{}; 
        namespace Ued30bValC{
        }
        /// bitfield UED29B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued29b{}; 
        namespace Ued29bValC{
        }
        /// bitfield UED28B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued28b{}; 
        namespace Ued28bValC{
        }
        /// bitfield UED27B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued27b{}; 
        namespace Ued27bValC{
        }
        /// bitfield UED26B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued26b{}; 
        namespace Ued26bValC{
        }
        /// bitfield UED25B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued25b{}; 
        namespace Ued25bValC{
        }
        /// bitfield UED24B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued24b{}; 
        namespace Ued24bValC{
        }
        /// bitfield UED23B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued23b{}; 
        namespace Ued23bValC{
        }
        /// bitfield UED22B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued22b{}; 
        namespace Ued22bValC{
        }
        /// bitfield UED21B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued21b{}; 
        namespace Ued21bValC{
        }
        /// bitfield UED20B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued20b{}; 
        namespace Ued20bValC{
        }
        /// bitfield UED19B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued19b{}; 
        namespace Ued19bValC{
        }
        /// bitfield UED18B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued18b{}; 
        namespace Ued18bValC{
        }
        /// bitfield UED17B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued17b{}; 
        namespace Ued17bValC{
        }
        /// bitfield UED16B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued16b{}; 
        namespace Ued16bValC{
        }
        /// bitfield UEDTHHB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uedthhb{}; 
        namespace UedthhbValC{
        }
        /// bitfield UEDQM3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uedqm3e{}; 
        namespace Uedqm3eValC{
        }
        /// bitfield UEDQM2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uedqm2e{}; 
        namespace Uedqm2eValC{
        }
        /// bitfield UECSXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uecsxe{}; 
        namespace UecsxeValC{
        }
        /// bitfield UEDWEXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedwexe{}; 
        namespace UedwexeValC{
        }
        /// bitfield UECASE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uecase{}; 
        namespace UecaseValC{
        }
        /// bitfield UERASE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uerase{}; 
        namespace UeraseValC{
        }
        /// bitfield UESMCEE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uesmcee{}; 
        namespace UesmceeValC{
        }
        /// bitfield UESMCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uesmcke{}; 
        namespace UesmckeValC{
        }
    }
    namespace Nonepzr0{    ///< register PZR0 
        using Addr = Register::Address<0x4006f700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///< register PZR1 
        using Addr = Register::Address<0x4006f704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///< register PZR2 
        using Addr = Register::Address<0x4006f708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///< register PZR3 
        using Addr = Register::Address<0x4006f70c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///< register PZR4 
        using Addr = Register::Address<0x4006f710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///< register PZR5 
        using Addr = Register::Address<0x4006f714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///< register PZR6 
        using Addr = Register::Address<0x4006f718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr7{    ///< register PZR7 
        using Addr = Register::Address<0x4006f71c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///< register PZR8 
        using Addr = Register::Address<0x4006f720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///< register PZRE 
        using Addr = Register::Address<0x4006f738,0xffffffff,0,unsigned>;
    }
}
