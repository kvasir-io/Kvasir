#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//NVIC
    namespace Noneictr{    ///<ICTR
        using Addr = Register::Address<0xe000e004,0xffffffe0,0,unsigned>;
        ///INTLINESNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intlinesnum{}; 
    }
    namespace Noneactlr{    ///<ACTLR
        using Addr = Register::Address<0xe000e008,0xfffffff8,0,unsigned>;
        ///DISMCYCINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dismcycint{}; 
        ///DISDEFWBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disdefwbuf{}; 
        ///DISFOLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
    }
    namespace Noneiser0{    ///<ISER0
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena0{}; 
        ///SETENA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena1{}; 
        ///SETENA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena2{}; 
        ///SETENA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena3{}; 
        ///SETENA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setena4{}; 
        ///SETENA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setena5{}; 
        ///SETENA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setena6{}; 
        ///SETENA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setena7{}; 
        ///SETENA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setena8{}; 
        ///SETENA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setena9{}; 
        ///SETENA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setena10{}; 
        ///SETENA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setena11{}; 
        ///SETENA12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setena12{}; 
        ///SETENA13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setena13{}; 
        ///SETENA14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setena14{}; 
        ///SETENA15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setena15{}; 
        ///SETENA16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setena16{}; 
        ///SETENA17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setena17{}; 
        ///SETENA18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setena18{}; 
        ///SETENA19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setena19{}; 
        ///SETENA20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setena20{}; 
        ///SETENA21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setena21{}; 
        ///SETENA22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setena22{}; 
        ///SETENA23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setena23{}; 
        ///SETENA24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setena24{}; 
        ///SETENA25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setena25{}; 
        ///SETENA26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setena26{}; 
        ///SETENA27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setena27{}; 
        ///SETENA28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setena28{}; 
        ///SETENA29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setena29{}; 
        ///SETENA30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setena30{}; 
        ///SETENA31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setena31{}; 
    }
    namespace Noneiser1{    ///<ISER1
        using Addr = Register::Address<0xe000e104,0xffff0000,0,unsigned>;
        ///SETENA32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena32{}; 
        ///SETENA33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena33{}; 
        ///SETENA34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena34{}; 
        ///SETENA35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena35{}; 
        ///SETENA36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setena36{}; 
        ///SETENA37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setena37{}; 
        ///SETENA38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setena38{}; 
        ///SETENA39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setena39{}; 
        ///SETENA40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setena40{}; 
        ///SETENA41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setena41{}; 
        ///SETENA42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setena42{}; 
        ///SETENA43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setena43{}; 
        ///SETENA44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setena44{}; 
        ///SETENA45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setena45{}; 
        ///SETENA46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setena46{}; 
        ///SETENA47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setena47{}; 
    }
    namespace Noneicer0{    ///<ICER0
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena0{}; 
        ///CLRENA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena1{}; 
        ///CLRENA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena2{}; 
        ///CLRENA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena3{}; 
        ///CLRENA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrena4{}; 
        ///CLRENA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrena5{}; 
        ///CLRENA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrena6{}; 
        ///CLRENA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrena7{}; 
        ///CLRENA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrena8{}; 
        ///CLRENA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrena9{}; 
        ///CLRENA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrena10{}; 
        ///CLRENA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrena11{}; 
        ///CLRENA12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrena12{}; 
        ///CLRENA13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrena13{}; 
        ///CLRENA14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrena14{}; 
        ///CLRENA15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrena15{}; 
        ///CLRENA16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrena16{}; 
        ///CLRENA17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrena17{}; 
        ///CLRENA18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrena18{}; 
        ///CLRENA19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrena19{}; 
        ///CLRENA20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrena20{}; 
        ///CLRENA21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrena21{}; 
        ///CLRENA22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrena22{}; 
        ///CLRENA23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrena23{}; 
        ///CLRENA24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrena24{}; 
        ///CLRENA25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrena25{}; 
        ///CLRENA26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrena26{}; 
        ///CLRENA27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrena27{}; 
        ///CLRENA28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrena28{}; 
        ///CLRENA29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrena29{}; 
        ///CLRENA30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrena30{}; 
        ///CLRENA31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrena31{}; 
    }
    namespace Noneicer1{    ///<ICER1
        using Addr = Register::Address<0xe000e184,0xffff0000,0,unsigned>;
        ///CLRENA32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena32{}; 
        ///CLRENA33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena33{}; 
        ///CLRENA34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena34{}; 
        ///CLRENA35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena35{}; 
        ///CLRENA36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrena36{}; 
        ///CLRENA37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrena37{}; 
        ///CLRENA38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrena38{}; 
        ///CLRENA39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrena39{}; 
        ///CLRENA40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrena40{}; 
        ///CLRENA41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrena41{}; 
        ///CLRENA42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrena42{}; 
        ///CLRENA43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrena43{}; 
        ///CLRENA44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrena44{}; 
        ///CLRENA45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrena45{}; 
        ///CLRENA46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrena46{}; 
        ///CLRENA47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrena47{}; 
    }
    namespace Noneispr0{    ///<ISPR0
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend0{}; 
        ///SETPEND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend1{}; 
        ///SETPEND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend2{}; 
        ///SETPEND3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend3{}; 
        ///SETPEND4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setpend4{}; 
        ///SETPEND5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setpend5{}; 
        ///SETPEND6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setpend6{}; 
        ///SETPEND7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setpend7{}; 
        ///SETPEND8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setpend8{}; 
        ///SETPEND9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setpend9{}; 
        ///SETPEND10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setpend10{}; 
        ///SETPEND11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setpend11{}; 
        ///SETPEND12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setpend12{}; 
        ///SETPEND13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setpend13{}; 
        ///SETPEND14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setpend14{}; 
        ///SETPEND15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setpend15{}; 
        ///SETPEND16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setpend16{}; 
        ///SETPEND17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setpend17{}; 
        ///SETPEND18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setpend18{}; 
        ///SETPEND19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setpend19{}; 
        ///SETPEND20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setpend20{}; 
        ///SETPEND21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setpend21{}; 
        ///SETPEND22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setpend22{}; 
        ///SETPEND23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setpend23{}; 
        ///SETPEND24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setpend24{}; 
        ///SETPEND25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setpend25{}; 
        ///SETPEND26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setpend26{}; 
        ///SETPEND27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setpend27{}; 
        ///SETPEND28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setpend28{}; 
        ///SETPEND29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setpend29{}; 
        ///SETPEND30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setpend30{}; 
        ///SETPEND31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setpend31{}; 
    }
    namespace Noneispr1{    ///<ISPR1
        using Addr = Register::Address<0xe000e204,0xffff0000,0,unsigned>;
        ///SETPEND32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend32{}; 
        ///SETPEND33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend33{}; 
        ///SETPEND34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend34{}; 
        ///SETPEND35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend35{}; 
        ///SETPEND36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setpend36{}; 
        ///SETPEND37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setpend37{}; 
        ///SETPEND38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setpend38{}; 
        ///SETPEND39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setpend39{}; 
        ///SETPEND40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setpend40{}; 
        ///SETPEND41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setpend41{}; 
        ///SETPEND42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setpend42{}; 
        ///SETPEND43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setpend43{}; 
        ///SETPEND44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setpend44{}; 
        ///SETPEND45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setpend45{}; 
        ///SETPEND46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setpend46{}; 
        ///SETPEND47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setpend47{}; 
    }
    namespace Noneicpr0{    ///<ICPR0
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend0{}; 
        ///CLRPEND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend1{}; 
        ///CLRPEND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend2{}; 
        ///CLRPEND3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend3{}; 
        ///CLRPEND4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrpend4{}; 
        ///CLRPEND5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrpend5{}; 
        ///CLRPEND6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrpend6{}; 
        ///CLRPEND7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrpend7{}; 
        ///CLRPEND8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrpend8{}; 
        ///CLRPEND9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrpend9{}; 
        ///CLRPEND10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrpend10{}; 
        ///CLRPEND11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrpend11{}; 
        ///CLRPEND12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrpend12{}; 
        ///CLRPEND13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrpend13{}; 
        ///CLRPEND14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrpend14{}; 
        ///CLRPEND15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrpend15{}; 
        ///CLRPEND16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrpend16{}; 
        ///CLRPEND17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrpend17{}; 
        ///CLRPEND18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrpend18{}; 
        ///CLRPEND19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrpend19{}; 
        ///CLRPEND20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrpend20{}; 
        ///CLRPEND21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrpend21{}; 
        ///CLRPEND22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrpend22{}; 
        ///CLRPEND23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrpend23{}; 
        ///CLRPEND24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrpend24{}; 
        ///CLRPEND25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrpend25{}; 
        ///CLRPEND26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrpend26{}; 
        ///CLRPEND27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrpend27{}; 
        ///CLRPEND28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrpend28{}; 
        ///CLRPEND29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrpend29{}; 
        ///CLRPEND30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrpend30{}; 
        ///CLRPEND31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrpend31{}; 
    }
    namespace Noneicpr1{    ///<ICPR1
        using Addr = Register::Address<0xe000e284,0xffff0000,0,unsigned>;
        ///CLRPEND32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend32{}; 
        ///CLRPEND33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend33{}; 
        ///CLRPEND34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend34{}; 
        ///CLRPEND35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend35{}; 
        ///CLRPEND36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrpend36{}; 
        ///CLRPEND37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrpend37{}; 
        ///CLRPEND38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrpend38{}; 
        ///CLRPEND39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrpend39{}; 
        ///CLRPEND40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrpend40{}; 
        ///CLRPEND41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrpend41{}; 
        ///CLRPEND42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrpend42{}; 
        ///CLRPEND43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrpend43{}; 
        ///CLRPEND44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrpend44{}; 
        ///CLRPEND45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrpend45{}; 
        ///CLRPEND46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrpend46{}; 
        ///CLRPEND47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrpend47{}; 
    }
    namespace Noneiabr0{    ///<IABR0
        using Addr = Register::Address<0xe000e300,0x00000000,0,unsigned>;
        ///ACTIVE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active0{}; 
        ///ACTIVE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active1{}; 
        ///ACTIVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active2{}; 
        ///ACTIVE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active3{}; 
        ///ACTIVE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> active4{}; 
        ///ACTIVE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active5{}; 
        ///ACTIVE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active6{}; 
        ///ACTIVE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> active7{}; 
        ///ACTIVE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> active8{}; 
        ///ACTIVE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> active9{}; 
        ///ACTIVE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> active10{}; 
        ///ACTIVE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> active11{}; 
        ///ACTIVE12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> active12{}; 
        ///ACTIVE13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> active13{}; 
        ///ACTIVE14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> active14{}; 
        ///ACTIVE15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> active15{}; 
        ///ACTIVE16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> active16{}; 
        ///ACTIVE17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active17{}; 
        ///ACTIVE18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> active18{}; 
        ///ACTIVE19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> active19{}; 
        ///ACTIVE20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> active20{}; 
        ///ACTIVE21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> active21{}; 
        ///ACTIVE22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> active22{}; 
        ///ACTIVE23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> active23{}; 
        ///ACTIVE24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> active24{}; 
        ///ACTIVE25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> active25{}; 
        ///ACTIVE26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> active26{}; 
        ///ACTIVE27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> active27{}; 
        ///ACTIVE28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> active28{}; 
        ///ACTIVE29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> active29{}; 
        ///ACTIVE30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> active30{}; 
        ///ACTIVE31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> active31{}; 
    }
    namespace Noneiabr1{    ///<IABR1
        using Addr = Register::Address<0xe000e304,0xffff0000,0,unsigned>;
        ///ACTIVE32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active32{}; 
        ///ACTIVE33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active33{}; 
        ///ACTIVE34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active34{}; 
        ///ACTIVE35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active35{}; 
        ///ACTIVE36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> active36{}; 
        ///ACTIVE37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active37{}; 
        ///ACTIVE38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active38{}; 
        ///ACTIVE39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> active39{}; 
        ///ACTIVE40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> active40{}; 
        ///ACTIVE41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> active41{}; 
        ///ACTIVE42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> active42{}; 
        ///ACTIVE43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> active43{}; 
        ///ACTIVE44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> active44{}; 
        ///ACTIVE45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> active45{}; 
        ///ACTIVE46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> active46{}; 
        ///ACTIVE47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> active47{}; 
    }
    namespace Noneip0{    ///<IP0
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///PRI_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        ///PRI_1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        ///PRI_2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        ///PRI_3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace Noneip1{    ///<IP1
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///PRI_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///PRI_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///PRI_6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///PRI_7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace Noneip2{    ///<IP2
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///PRI_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///PRI_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///PRI_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///PRI_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Noneip3{    ///<IP3
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///PRI_12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///PRI_13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///PRI_14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///PRI_15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace Noneip4{    ///<IP4
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///PRI_16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        ///PRI_17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        ///PRI_18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        ///PRI_19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace Noneip5{    ///<IP5
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///PRI_20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        ///PRI_21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        ///PRI_22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        ///PRI_23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace Noneip6{    ///<IP6
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///PRI_24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        ///PRI_25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        ///PRI_26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        ///PRI_27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace Noneip7{    ///<IP7
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///PRI_28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        ///PRI_29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        ///PRI_30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        ///PRI_31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
    namespace Noneip8{    ///<IP8
        using Addr = Register::Address<0xe000e420,0x00000000,0,unsigned>;
        ///PRI_32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri32{}; 
        ///PRI_33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri33{}; 
        ///PRI_34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri34{}; 
        ///PRI_35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri35{}; 
    }
    namespace Noneip9{    ///<IP9
        using Addr = Register::Address<0xe000e424,0x00000000,0,unsigned>;
        ///PRI_36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri36{}; 
        ///PRI_37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri37{}; 
        ///PRI_38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri38{}; 
        ///PRI_39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri39{}; 
    }
    namespace Noneip10{    ///<IP10
        using Addr = Register::Address<0xe000e428,0x00000000,0,unsigned>;
        ///PRI_40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri40{}; 
        ///PRI_41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri41{}; 
        ///PRI_42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri42{}; 
        ///PRI_43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri43{}; 
    }
    namespace Noneip11{    ///<IP11
        using Addr = Register::Address<0xe000e42c,0x00000000,0,unsigned>;
        ///PRI_44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri44{}; 
        ///PRI_45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri45{}; 
        ///PRI_46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri46{}; 
        ///PRI_47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri47{}; 
    }
    namespace Nonecpuid{    ///<CPUID
        using Addr = Register::Address<0xe000ed00,0x000f0000,0,unsigned>;
        ///REVISION
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///PARTNO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///VARIANT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///IMPLEMENTER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace Noneicsr{    ///<ICSR
        using Addr = Register::Address<0xe000ed04,0x61000600,0,unsigned>;
        ///VECTACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///RETTOBASE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rettobase{}; 
        ///VECTPENDING
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///ISRPENDING
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///ISRPREEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isrpreempt{}; 
        ///PENDSTCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pendstclr{}; 
        ///PENDSTSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pendstset{}; 
        ///PENDSVCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pendsvclr{}; 
        ///PENDSVSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pendsvset{}; 
        ///NMIPENDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmipendset{}; 
    }
    namespace Nonevtor{    ///<VTOR
        using Addr = Register::Address<0xe000ed08,0xc000007f,0,unsigned>;
        ///TBLOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
        ///TBLBASE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tblbase{}; 
    }
    namespace Noneaircr{    ///<AIRCR
        using Addr = Register::Address<0xe000ed0c,0x000078f8,0,unsigned>;
        ///VECTRESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vectreset{}; 
        ///VECTCLRACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///SYSRESETREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysresetreq{}; 
        ///PRIGROUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prigroup{}; 
        ///ENDIANESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> endianess{}; 
        ///VECTKEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkey{}; 
    }
    namespace Noneshp0{    ///<SHP0
        using Addr = Register::Address<0xe000ed18,0x00000000,0,unsigned>;
        ///PRI_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///PRI_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///PRI_6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///PRI_7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace Noneshp1{    ///<SHP1
        using Addr = Register::Address<0xe000ed1c,0x00000000,0,unsigned>;
        ///PRI_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///PRI_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///PRI_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///PRI_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Noneshp2{    ///<SHP2
        using Addr = Register::Address<0xe000ed20,0x00000000,0,unsigned>;
        ///PRI_12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///PRI_13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///PRI_14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///PRI_15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace Noneshcsr{    ///<SHCSR
        using Addr = Register::Address<0xe000ed24,0xfff80274,0,unsigned>;
        ///MEMFAULTACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> memfaultact{}; 
        ///BUSFAULTACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busfaultact{}; 
        ///USGFAULTACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usgfaultact{}; 
        ///SVCALLACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> svcallact{}; 
        ///MONITORACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monitoract{}; 
        ///PENDSVACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pendsvact{}; 
        ///SYSTICKACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> systickact{}; 
        ///USGFAULTPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usgfaultpended{}; 
        ///MEMFAULTPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> memfaultpended{}; 
        ///BUSFAULTPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busfaultpended{}; 
        ///SVCALLPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> svcallpended{}; 
        ///MEMFAULTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> memfaultena{}; 
        ///BUSFAULTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> busfaultena{}; 
        ///USGFAULTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usgfaultena{}; 
    }
    namespace Nonestir{    ///<STIR
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0,unsigned>;
        ///INTID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
}
