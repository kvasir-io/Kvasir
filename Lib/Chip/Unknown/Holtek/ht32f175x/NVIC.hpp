#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//NVIC
    namespace Noneictr{    ///<ICTR
        using Addr = Register::Address<0xe000e004,0xffffffe0,0,unsigned>;
        ///INTLINESNUM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intlinesnum{}; 
    }
    namespace Noneactlr{    ///<ACTLR
        using Addr = Register::Address<0xe000e008,0xfffffff8,0,unsigned>;
        ///DISMCYCINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dismcycint{}; 
        ///DISDEFWBUF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disdefwbuf{}; 
        ///DISFOLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
    }
    namespace Noneiser0{    ///<ISER0
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena0{}; 
        ///SETENA1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena1{}; 
        ///SETENA2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena2{}; 
        ///SETENA3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena3{}; 
        ///SETENA4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setena4{}; 
        ///SETENA5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setena5{}; 
        ///SETENA6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setena6{}; 
        ///SETENA7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setena7{}; 
        ///SETENA8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setena8{}; 
        ///SETENA9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setena9{}; 
        ///SETENA10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setena10{}; 
        ///SETENA11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setena11{}; 
        ///SETENA12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setena12{}; 
        ///SETENA13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setena13{}; 
        ///SETENA14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setena14{}; 
        ///SETENA15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setena15{}; 
        ///SETENA16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setena16{}; 
        ///SETENA17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setena17{}; 
        ///SETENA18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setena18{}; 
        ///SETENA19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setena19{}; 
        ///SETENA20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setena20{}; 
        ///SETENA21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setena21{}; 
        ///SETENA22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setena22{}; 
        ///SETENA23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setena23{}; 
        ///SETENA24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setena24{}; 
        ///SETENA25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setena25{}; 
        ///SETENA26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setena26{}; 
        ///SETENA27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setena27{}; 
        ///SETENA28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setena28{}; 
        ///SETENA29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setena29{}; 
        ///SETENA30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setena30{}; 
        ///SETENA31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setena31{}; 
    }
    namespace Noneiser1{    ///<ISER1
        using Addr = Register::Address<0xe000e104,0x00000000,0,unsigned>;
        ///SETENA32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena32{}; 
        ///SETENA33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena33{}; 
        ///SETENA34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena34{}; 
        ///SETENA35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena35{}; 
        ///SETENA36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setena36{}; 
        ///SETENA37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setena37{}; 
        ///SETENA38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setena38{}; 
        ///SETENA39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setena39{}; 
        ///SETENA40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setena40{}; 
        ///SETENA41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setena41{}; 
        ///SETENA42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setena42{}; 
        ///SETENA43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setena43{}; 
        ///SETENA44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setena44{}; 
        ///SETENA45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setena45{}; 
        ///SETENA46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setena46{}; 
        ///SETENA47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setena47{}; 
        ///SETENA48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setena48{}; 
        ///SETENA49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setena49{}; 
        ///SETENA50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setena50{}; 
        ///SETENA51
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setena51{}; 
        ///SETENA52
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setena52{}; 
        ///SETENA53
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setena53{}; 
        ///SETENA54
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setena54{}; 
        ///SETENA55
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setena55{}; 
        ///SETENA56
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setena56{}; 
        ///SETENA57
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setena57{}; 
        ///SETENA58
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setena58{}; 
        ///SETENA59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setena59{}; 
        ///SETENA60
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setena60{}; 
        ///SETENA61
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setena61{}; 
        ///SETENA62
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setena62{}; 
        ///SETENA63
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setena63{}; 
    }
    namespace Noneiser2{    ///<ISER2
        using Addr = Register::Address<0xe000e108,0xfffffff0,0,unsigned>;
        ///SETENA64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena64{}; 
        ///SETENA65
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena65{}; 
        ///SETENA66
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena66{}; 
        ///SETENA67
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena67{}; 
    }
    namespace Noneicer0{    ///<ICER0
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena0{}; 
        ///CLRENA1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena1{}; 
        ///CLRENA2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena2{}; 
        ///CLRENA3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena3{}; 
        ///CLRENA4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrena4{}; 
        ///CLRENA5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrena5{}; 
        ///CLRENA6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrena6{}; 
        ///CLRENA7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrena7{}; 
        ///CLRENA8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrena8{}; 
        ///CLRENA9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrena9{}; 
        ///CLRENA10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrena10{}; 
        ///CLRENA11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrena11{}; 
        ///CLRENA12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrena12{}; 
        ///CLRENA13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrena13{}; 
        ///CLRENA14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrena14{}; 
        ///CLRENA15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrena15{}; 
        ///CLRENA16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrena16{}; 
        ///CLRENA17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrena17{}; 
        ///CLRENA18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrena18{}; 
        ///CLRENA19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrena19{}; 
        ///CLRENA20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrena20{}; 
        ///CLRENA21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrena21{}; 
        ///CLRENA22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrena22{}; 
        ///CLRENA23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrena23{}; 
        ///CLRENA24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrena24{}; 
        ///CLRENA25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrena25{}; 
        ///CLRENA26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrena26{}; 
        ///CLRENA27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrena27{}; 
        ///CLRENA28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrena28{}; 
        ///CLRENA29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrena29{}; 
        ///CLRENA30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrena30{}; 
        ///CLRENA31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrena31{}; 
    }
    namespace Noneicer1{    ///<ICER1
        using Addr = Register::Address<0xe000e184,0x00000000,0,unsigned>;
        ///CLRENA32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena32{}; 
        ///CLRENA33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena33{}; 
        ///CLRENA34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena34{}; 
        ///CLRENA35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena35{}; 
        ///CLRENA36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrena36{}; 
        ///CLRENA37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrena37{}; 
        ///CLRENA38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrena38{}; 
        ///CLRENA39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrena39{}; 
        ///CLRENA40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrena40{}; 
        ///CLRENA41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrena41{}; 
        ///CLRENA42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrena42{}; 
        ///CLRENA43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrena43{}; 
        ///CLRENA44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrena44{}; 
        ///CLRENA45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrena45{}; 
        ///CLRENA46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrena46{}; 
        ///CLRENA47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrena47{}; 
        ///CLRENA48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrena48{}; 
        ///CLRENA49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrena49{}; 
        ///CLRENA50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrena50{}; 
        ///CLRENA51
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrena51{}; 
        ///CLRENA52
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrena52{}; 
        ///CLRENA53
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrena53{}; 
        ///CLRENA54
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrena54{}; 
        ///CLRENA55
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrena55{}; 
        ///CLRENA56
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrena56{}; 
        ///CLRENA57
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrena57{}; 
        ///CLRENA58
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrena58{}; 
        ///CLRENA59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrena59{}; 
        ///CLRENA60
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrena60{}; 
        ///CLRENA61
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrena61{}; 
        ///CLRENA62
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrena62{}; 
        ///CLRENA63
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrena63{}; 
    }
    namespace Noneicer2{    ///<ICER2
        using Addr = Register::Address<0xe000e188,0xfffffff0,0,unsigned>;
        ///CLRENA64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena64{}; 
        ///CLRENA65
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena65{}; 
        ///CLRENA66
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena66{}; 
        ///CLRENA67
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena67{}; 
    }
    namespace Noneispr0{    ///<ISPR0
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend0{}; 
        ///SETPEND1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend1{}; 
        ///SETPEND2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend2{}; 
        ///SETPEND3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend3{}; 
        ///SETPEND4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setpend4{}; 
        ///SETPEND5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setpend5{}; 
        ///SETPEND6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setpend6{}; 
        ///SETPEND7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setpend7{}; 
        ///SETPEND8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setpend8{}; 
        ///SETPEND9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setpend9{}; 
        ///SETPEND10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setpend10{}; 
        ///SETPEND11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setpend11{}; 
        ///SETPEND12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setpend12{}; 
        ///SETPEND13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setpend13{}; 
        ///SETPEND14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setpend14{}; 
        ///SETPEND15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setpend15{}; 
        ///SETPEND16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setpend16{}; 
        ///SETPEND17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setpend17{}; 
        ///SETPEND18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setpend18{}; 
        ///SETPEND19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setpend19{}; 
        ///SETPEND20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setpend20{}; 
        ///SETPEND21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setpend21{}; 
        ///SETPEND22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setpend22{}; 
        ///SETPEND23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setpend23{}; 
        ///SETPEND24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setpend24{}; 
        ///SETPEND25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setpend25{}; 
        ///SETPEND26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setpend26{}; 
        ///SETPEND27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setpend27{}; 
        ///SETPEND28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setpend28{}; 
        ///SETPEND29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setpend29{}; 
        ///SETPEND30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setpend30{}; 
        ///SETPEND31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setpend31{}; 
    }
    namespace Noneispr1{    ///<ISPR1
        using Addr = Register::Address<0xe000e204,0x00000000,0,unsigned>;
        ///SETPEND32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend32{}; 
        ///SETPEND33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend33{}; 
        ///SETPEND34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend34{}; 
        ///SETPEND35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend35{}; 
        ///SETPEND36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setpend36{}; 
        ///SETPEND37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setpend37{}; 
        ///SETPEND38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setpend38{}; 
        ///SETPEND39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setpend39{}; 
        ///SETPEND40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setpend40{}; 
        ///SETPEND41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setpend41{}; 
        ///SETPEND42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setpend42{}; 
        ///SETPEND43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setpend43{}; 
        ///SETPEND44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setpend44{}; 
        ///SETPEND45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setpend45{}; 
        ///SETPEND46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setpend46{}; 
        ///SETPEND47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setpend47{}; 
        ///SETPEND48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setpend48{}; 
        ///SETPEND49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setpend49{}; 
        ///SETPEND50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setpend50{}; 
        ///SETPEND51
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setpend51{}; 
        ///SETPEND52
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setpend52{}; 
        ///SETPEND53
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setpend53{}; 
        ///SETPEND54
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setpend54{}; 
        ///SETPEND55
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setpend55{}; 
        ///SETPEND56
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setpend56{}; 
        ///SETPEND57
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setpend57{}; 
        ///SETPEND58
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setpend58{}; 
        ///SETPEND59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setpend59{}; 
        ///SETPEND60
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setpend60{}; 
        ///SETPEND61
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setpend61{}; 
        ///SETPEND62
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setpend62{}; 
        ///SETPEND63
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setpend63{}; 
    }
    namespace Noneispr2{    ///<ISPR2
        using Addr = Register::Address<0xe000e208,0xfffffff0,0,unsigned>;
        ///SETPEND64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend64{}; 
        ///SETPEND65
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend65{}; 
        ///SETPEND66
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend66{}; 
        ///SETPEND67
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend67{}; 
    }
    namespace Noneicpr0{    ///<ICPR0
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend0{}; 
        ///CLRPEND1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend1{}; 
        ///CLRPEND2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend2{}; 
        ///CLRPEND3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend3{}; 
        ///CLRPEND4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrpend4{}; 
        ///CLRPEND5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrpend5{}; 
        ///CLRPEND6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrpend6{}; 
        ///CLRPEND7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrpend7{}; 
        ///CLRPEND8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrpend8{}; 
        ///CLRPEND9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrpend9{}; 
        ///CLRPEND10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrpend10{}; 
        ///CLRPEND11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrpend11{}; 
        ///CLRPEND12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrpend12{}; 
        ///CLRPEND13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrpend13{}; 
        ///CLRPEND14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrpend14{}; 
        ///CLRPEND15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrpend15{}; 
        ///CLRPEND16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrpend16{}; 
        ///CLRPEND17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrpend17{}; 
        ///CLRPEND18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrpend18{}; 
        ///CLRPEND19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrpend19{}; 
        ///CLRPEND20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrpend20{}; 
        ///CLRPEND21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrpend21{}; 
        ///CLRPEND22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrpend22{}; 
        ///CLRPEND23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrpend23{}; 
        ///CLRPEND24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrpend24{}; 
        ///CLRPEND25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrpend25{}; 
        ///CLRPEND26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrpend26{}; 
        ///CLRPEND27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrpend27{}; 
        ///CLRPEND28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrpend28{}; 
        ///CLRPEND29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrpend29{}; 
        ///CLRPEND30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrpend30{}; 
        ///CLRPEND31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrpend31{}; 
    }
    namespace Noneicpr1{    ///<ICPR1
        using Addr = Register::Address<0xe000e284,0x00000000,0,unsigned>;
        ///CLRPEND32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend32{}; 
        ///CLRPEND33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend33{}; 
        ///CLRPEND34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend34{}; 
        ///CLRPEND35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend35{}; 
        ///CLRPEND36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrpend36{}; 
        ///CLRPEND37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrpend37{}; 
        ///CLRPEND38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrpend38{}; 
        ///CLRPEND39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrpend39{}; 
        ///CLRPEND40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrpend40{}; 
        ///CLRPEND41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrpend41{}; 
        ///CLRPEND42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrpend42{}; 
        ///CLRPEND43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrpend43{}; 
        ///CLRPEND44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrpend44{}; 
        ///CLRPEND45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrpend45{}; 
        ///CLRPEND46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrpend46{}; 
        ///CLRPEND47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrpend47{}; 
        ///CLRPEND48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrpend48{}; 
        ///CLRPEND49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrpend49{}; 
        ///CLRPEND50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrpend50{}; 
        ///CLRPEND51
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrpend51{}; 
        ///CLRPEND52
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrpend52{}; 
        ///CLRPEND53
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrpend53{}; 
        ///CLRPEND54
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrpend54{}; 
        ///CLRPEND55
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrpend55{}; 
        ///CLRPEND56
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrpend56{}; 
        ///CLRPEND57
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrpend57{}; 
        ///CLRPEND58
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrpend58{}; 
        ///CLRPEND59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrpend59{}; 
        ///CLRPEND60
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrpend60{}; 
        ///CLRPEND61
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrpend61{}; 
        ///CLRPEND62
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrpend62{}; 
        ///CLRPEND63
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrpend63{}; 
    }
    namespace Noneicpr2{    ///<ICPR2
        using Addr = Register::Address<0xe000e288,0xfffffff0,0,unsigned>;
        ///CLRPEND64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend64{}; 
        ///CLRPEND65
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend65{}; 
        ///CLRPEND66
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend66{}; 
        ///CLRPEND67
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend67{}; 
    }
    namespace Noneiabr0{    ///<IABR0
        using Addr = Register::Address<0xe000e300,0x00000000,0,unsigned>;
        ///ACTIVE0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active0{}; 
        ///ACTIVE1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active1{}; 
        ///ACTIVE2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active2{}; 
        ///ACTIVE3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active3{}; 
        ///ACTIVE4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> active4{}; 
        ///ACTIVE5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active5{}; 
        ///ACTIVE6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active6{}; 
        ///ACTIVE7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> active7{}; 
        ///ACTIVE8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> active8{}; 
        ///ACTIVE9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> active9{}; 
        ///ACTIVE10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> active10{}; 
        ///ACTIVE11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> active11{}; 
        ///ACTIVE12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> active12{}; 
        ///ACTIVE13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> active13{}; 
        ///ACTIVE14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> active14{}; 
        ///ACTIVE15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> active15{}; 
        ///ACTIVE16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> active16{}; 
        ///ACTIVE17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active17{}; 
        ///ACTIVE18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> active18{}; 
        ///ACTIVE19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> active19{}; 
        ///ACTIVE20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> active20{}; 
        ///ACTIVE21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> active21{}; 
        ///ACTIVE22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> active22{}; 
        ///ACTIVE23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> active23{}; 
        ///ACTIVE24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> active24{}; 
        ///ACTIVE25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> active25{}; 
        ///ACTIVE26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> active26{}; 
        ///ACTIVE27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> active27{}; 
        ///ACTIVE28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> active28{}; 
        ///ACTIVE29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> active29{}; 
        ///ACTIVE30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> active30{}; 
        ///ACTIVE31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> active31{}; 
    }
    namespace Noneiabr1{    ///<IABR1
        using Addr = Register::Address<0xe000e304,0x00000000,0,unsigned>;
        ///ACTIVE32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active32{}; 
        ///ACTIVE33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active33{}; 
        ///ACTIVE34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active34{}; 
        ///ACTIVE35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active35{}; 
        ///ACTIVE36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> active36{}; 
        ///ACTIVE37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active37{}; 
        ///ACTIVE38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active38{}; 
        ///ACTIVE39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> active39{}; 
        ///ACTIVE40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> active40{}; 
        ///ACTIVE41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> active41{}; 
        ///ACTIVE42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> active42{}; 
        ///ACTIVE43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> active43{}; 
        ///ACTIVE44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> active44{}; 
        ///ACTIVE45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> active45{}; 
        ///ACTIVE46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> active46{}; 
        ///ACTIVE47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> active47{}; 
        ///ACTIVE48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> active48{}; 
        ///ACTIVE49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active49{}; 
        ///ACTIVE50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> active50{}; 
        ///ACTIVE51
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> active51{}; 
        ///ACTIVE52
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> active52{}; 
        ///ACTIVE53
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> active53{}; 
        ///ACTIVE54
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> active54{}; 
        ///ACTIVE55
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> active55{}; 
        ///ACTIVE56
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> active56{}; 
        ///ACTIVE57
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> active57{}; 
        ///ACTIVE58
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> active58{}; 
        ///ACTIVE59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> active59{}; 
        ///ACTIVE60
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> active60{}; 
        ///ACTIVE61
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> active61{}; 
        ///ACTIVE62
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> active62{}; 
        ///ACTIVE63
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> active63{}; 
    }
    namespace Noneiabr2{    ///<IABR2
        using Addr = Register::Address<0xe000e308,0xfffffff0,0,unsigned>;
        ///ACTIVE64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active64{}; 
        ///ACTIVE65
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active65{}; 
        ///ACTIVE66
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active66{}; 
        ///ACTIVE67
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active67{}; 
    }
    namespace Noneip0{    ///<IP0
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///PRI_0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        ///PRI_1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        ///PRI_2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        ///PRI_3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace Noneip1{    ///<IP1
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///PRI_4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///PRI_5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///PRI_6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///PRI_7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace Noneip2{    ///<IP2
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///PRI_8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///PRI_9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///PRI_10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///PRI_11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Noneip3{    ///<IP3
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///PRI_12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///PRI_13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///PRI_14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///PRI_15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace Noneip4{    ///<IP4
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///PRI_16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        ///PRI_17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        ///PRI_18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        ///PRI_19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace Noneip5{    ///<IP5
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///PRI_20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        ///PRI_21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        ///PRI_22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        ///PRI_23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace Noneip6{    ///<IP6
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///PRI_24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        ///PRI_25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        ///PRI_26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        ///PRI_27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace Noneip7{    ///<IP7
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///PRI_28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        ///PRI_29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        ///PRI_30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        ///PRI_31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
    namespace Noneip8{    ///<IP8
        using Addr = Register::Address<0xe000e420,0x00000000,0,unsigned>;
        ///PRI_32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri32{}; 
        ///PRI_33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri33{}; 
        ///PRI_34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri34{}; 
        ///PRI_35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri35{}; 
    }
    namespace Noneip9{    ///<IP9
        using Addr = Register::Address<0xe000e424,0x00000000,0,unsigned>;
        ///PRI_36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri36{}; 
        ///PRI_37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri37{}; 
        ///PRI_38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri38{}; 
        ///PRI_39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri39{}; 
    }
    namespace Noneip10{    ///<IP10
        using Addr = Register::Address<0xe000e428,0x00000000,0,unsigned>;
        ///PRI_40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri40{}; 
        ///PRI_41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri41{}; 
        ///PRI_42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri42{}; 
        ///PRI_43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri43{}; 
    }
    namespace Noneip11{    ///<IP11
        using Addr = Register::Address<0xe000e42c,0x00000000,0,unsigned>;
        ///PRI_44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri44{}; 
        ///PRI_45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri45{}; 
        ///PRI_46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri46{}; 
        ///PRI_47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri47{}; 
    }
    namespace Noneip12{    ///<IP12
        using Addr = Register::Address<0xe000e430,0x00000000,0,unsigned>;
        ///PRI_48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri48{}; 
        ///PRI_49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri49{}; 
        ///PRI_50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri50{}; 
        ///PRI_51
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri51{}; 
    }
    namespace Noneip13{    ///<IP13
        using Addr = Register::Address<0xe000e434,0x00000000,0,unsigned>;
        ///PRI_52
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri52{}; 
        ///PRI_53
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri53{}; 
        ///PRI_54
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri54{}; 
        ///PRI_55
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri55{}; 
    }
    namespace Noneip14{    ///<IP14
        using Addr = Register::Address<0xe000e438,0x00000000,0,unsigned>;
        ///PRI_56
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri56{}; 
        ///PRI_57
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri57{}; 
        ///PRI_58
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri58{}; 
        ///PRI_59
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri59{}; 
    }
    namespace Noneip15{    ///<IP15
        using Addr = Register::Address<0xe000e43c,0x00000000,0,unsigned>;
        ///PRI_60
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri60{}; 
        ///PRI_61
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri61{}; 
        ///PRI_62
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri62{}; 
        ///PRI_63
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri63{}; 
    }
    namespace Noneip16{    ///<IP16
        using Addr = Register::Address<0xe000e440,0x00000000,0,unsigned>;
        ///PRI_64
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri64{}; 
        ///PRI_65
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri65{}; 
        ///PRI_66
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri66{}; 
        ///PRI_67
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri67{}; 
    }
    namespace Nonecpuid{    ///<CPUID
        using Addr = Register::Address<0xe000ed00,0x000f0000,0,unsigned>;
        ///REVISION
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///PARTNO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///VARIANT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///IMPLEMENTER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace Noneicsr{    ///<ICSR
        using Addr = Register::Address<0xe000ed04,0x61000600,0,unsigned>;
        ///VECTACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///RETTOBASE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rettobase{}; 
        ///VECTPENDING
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///ISRPENDING
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///ISRPREEMPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isrpreempt{}; 
        ///PENDSTCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pendstclr{}; 
        ///PENDSTSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pendstset{}; 
        ///PENDSVCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pendsvclr{}; 
        ///PENDSVSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pendsvset{}; 
        ///NMIPENDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmipendset{}; 
    }
    namespace Nonevtor{    ///<VTOR
        using Addr = Register::Address<0xe000ed08,0xc000007f,0,unsigned>;
        ///TBLOFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
        ///TBLBASE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tblbase{}; 
    }
    namespace Noneaircr{    ///<AIRCR
        using Addr = Register::Address<0xe000ed0c,0x000078f8,0,unsigned>;
        ///VECTRESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vectreset{}; 
        ///VECTCLRACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///SYSRESETREQ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysresetreq{}; 
        ///PRIGROUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prigroup{}; 
        ///ENDIANESS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> endianess{}; 
        ///VECTKEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkey{}; 
    }
    namespace Noneshp0{    ///<SHP0
        using Addr = Register::Address<0xe000ed18,0x00000000,0,unsigned>;
        ///PRI_4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///PRI_5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///PRI_6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///PRI_7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace Noneshp1{    ///<SHP1
        using Addr = Register::Address<0xe000ed1c,0x00000000,0,unsigned>;
        ///PRI_8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///PRI_9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///PRI_10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///PRI_11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Noneshp2{    ///<SHP2
        using Addr = Register::Address<0xe000ed20,0x00000000,0,unsigned>;
        ///PRI_12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///PRI_13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///PRI_14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///PRI_15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace Noneshcsr{    ///<SHCSR
        using Addr = Register::Address<0xe000ed24,0xfff80274,0,unsigned>;
        ///MEMFAULTACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> memfaultact{}; 
        ///BUSFAULTACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busfaultact{}; 
        ///USGFAULTACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usgfaultact{}; 
        ///SVCALLACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> svcallact{}; 
        ///MONITORACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monitoract{}; 
        ///PENDSVACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pendsvact{}; 
        ///SYSTICKACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> systickact{}; 
        ///USGFAULTPENDED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usgfaultpended{}; 
        ///MEMFAULTPENDED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> memfaultpended{}; 
        ///BUSFAULTPENDED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busfaultpended{}; 
        ///SVCALLPENDED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> svcallpended{}; 
        ///MEMFAULTENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> memfaultena{}; 
        ///BUSFAULTENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> busfaultena{}; 
        ///USGFAULTENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usgfaultena{}; 
    }
    namespace Nonestir{    ///<STIR
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0,unsigned>;
        ///INTID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
}
