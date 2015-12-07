#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//NVIC
    namespace Noneictr{    ///<ICTR
        using Addr = Register::Address<0xe000e004,0xffffffe0,0,unsigned>;
        ///INTLINESNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intlinesnum{}; 
        namespace IntlinesnumValC{
        }
    }
    namespace Noneactlr{    ///<ACTLR
        using Addr = Register::Address<0xe000e008,0xfffffff8,0,unsigned>;
        ///DISMCYCINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dismcycint{}; 
        namespace DismcycintValC{
        }
        ///DISDEFWBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disdefwbuf{}; 
        namespace DisdefwbufValC{
        }
        ///DISFOLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
        namespace DisfoldValC{
        }
    }
    namespace Noneiser0{    ///<ISER0
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena0{}; 
        namespace Setena0ValC{
        }
        ///SETENA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena1{}; 
        namespace Setena1ValC{
        }
        ///SETENA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena2{}; 
        namespace Setena2ValC{
        }
        ///SETENA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena3{}; 
        namespace Setena3ValC{
        }
        ///SETENA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setena4{}; 
        namespace Setena4ValC{
        }
        ///SETENA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setena5{}; 
        namespace Setena5ValC{
        }
        ///SETENA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setena6{}; 
        namespace Setena6ValC{
        }
        ///SETENA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setena7{}; 
        namespace Setena7ValC{
        }
        ///SETENA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setena8{}; 
        namespace Setena8ValC{
        }
        ///SETENA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setena9{}; 
        namespace Setena9ValC{
        }
        ///SETENA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setena10{}; 
        namespace Setena10ValC{
        }
        ///SETENA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setena11{}; 
        namespace Setena11ValC{
        }
        ///SETENA12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setena12{}; 
        namespace Setena12ValC{
        }
        ///SETENA13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setena13{}; 
        namespace Setena13ValC{
        }
        ///SETENA14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setena14{}; 
        namespace Setena14ValC{
        }
        ///SETENA15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setena15{}; 
        namespace Setena15ValC{
        }
        ///SETENA16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setena16{}; 
        namespace Setena16ValC{
        }
        ///SETENA17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setena17{}; 
        namespace Setena17ValC{
        }
        ///SETENA18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setena18{}; 
        namespace Setena18ValC{
        }
        ///SETENA19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setena19{}; 
        namespace Setena19ValC{
        }
        ///SETENA20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setena20{}; 
        namespace Setena20ValC{
        }
        ///SETENA21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setena21{}; 
        namespace Setena21ValC{
        }
        ///SETENA22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setena22{}; 
        namespace Setena22ValC{
        }
        ///SETENA23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setena23{}; 
        namespace Setena23ValC{
        }
        ///SETENA24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setena24{}; 
        namespace Setena24ValC{
        }
        ///SETENA25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setena25{}; 
        namespace Setena25ValC{
        }
        ///SETENA26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setena26{}; 
        namespace Setena26ValC{
        }
        ///SETENA27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setena27{}; 
        namespace Setena27ValC{
        }
        ///SETENA28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setena28{}; 
        namespace Setena28ValC{
        }
        ///SETENA29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setena29{}; 
        namespace Setena29ValC{
        }
        ///SETENA30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setena30{}; 
        namespace Setena30ValC{
        }
        ///SETENA31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setena31{}; 
        namespace Setena31ValC{
        }
    }
    namespace Noneiser1{    ///<ISER1
        using Addr = Register::Address<0xe000e104,0xffff0000,0,unsigned>;
        ///SETENA32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setena32{}; 
        namespace Setena32ValC{
        }
        ///SETENA33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setena33{}; 
        namespace Setena33ValC{
        }
        ///SETENA34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setena34{}; 
        namespace Setena34ValC{
        }
        ///SETENA35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setena35{}; 
        namespace Setena35ValC{
        }
        ///SETENA36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setena36{}; 
        namespace Setena36ValC{
        }
        ///SETENA37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setena37{}; 
        namespace Setena37ValC{
        }
        ///SETENA38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setena38{}; 
        namespace Setena38ValC{
        }
        ///SETENA39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setena39{}; 
        namespace Setena39ValC{
        }
        ///SETENA40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setena40{}; 
        namespace Setena40ValC{
        }
        ///SETENA41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setena41{}; 
        namespace Setena41ValC{
        }
        ///SETENA42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setena42{}; 
        namespace Setena42ValC{
        }
        ///SETENA43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setena43{}; 
        namespace Setena43ValC{
        }
        ///SETENA44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setena44{}; 
        namespace Setena44ValC{
        }
        ///SETENA45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setena45{}; 
        namespace Setena45ValC{
        }
        ///SETENA46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setena46{}; 
        namespace Setena46ValC{
        }
        ///SETENA47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setena47{}; 
        namespace Setena47ValC{
        }
    }
    namespace Noneicer0{    ///<ICER0
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena0{}; 
        namespace Clrena0ValC{
        }
        ///CLRENA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena1{}; 
        namespace Clrena1ValC{
        }
        ///CLRENA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena2{}; 
        namespace Clrena2ValC{
        }
        ///CLRENA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena3{}; 
        namespace Clrena3ValC{
        }
        ///CLRENA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrena4{}; 
        namespace Clrena4ValC{
        }
        ///CLRENA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrena5{}; 
        namespace Clrena5ValC{
        }
        ///CLRENA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrena6{}; 
        namespace Clrena6ValC{
        }
        ///CLRENA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrena7{}; 
        namespace Clrena7ValC{
        }
        ///CLRENA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrena8{}; 
        namespace Clrena8ValC{
        }
        ///CLRENA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrena9{}; 
        namespace Clrena9ValC{
        }
        ///CLRENA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrena10{}; 
        namespace Clrena10ValC{
        }
        ///CLRENA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrena11{}; 
        namespace Clrena11ValC{
        }
        ///CLRENA12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrena12{}; 
        namespace Clrena12ValC{
        }
        ///CLRENA13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrena13{}; 
        namespace Clrena13ValC{
        }
        ///CLRENA14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrena14{}; 
        namespace Clrena14ValC{
        }
        ///CLRENA15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrena15{}; 
        namespace Clrena15ValC{
        }
        ///CLRENA16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrena16{}; 
        namespace Clrena16ValC{
        }
        ///CLRENA17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrena17{}; 
        namespace Clrena17ValC{
        }
        ///CLRENA18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrena18{}; 
        namespace Clrena18ValC{
        }
        ///CLRENA19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrena19{}; 
        namespace Clrena19ValC{
        }
        ///CLRENA20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrena20{}; 
        namespace Clrena20ValC{
        }
        ///CLRENA21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrena21{}; 
        namespace Clrena21ValC{
        }
        ///CLRENA22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrena22{}; 
        namespace Clrena22ValC{
        }
        ///CLRENA23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrena23{}; 
        namespace Clrena23ValC{
        }
        ///CLRENA24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrena24{}; 
        namespace Clrena24ValC{
        }
        ///CLRENA25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrena25{}; 
        namespace Clrena25ValC{
        }
        ///CLRENA26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrena26{}; 
        namespace Clrena26ValC{
        }
        ///CLRENA27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrena27{}; 
        namespace Clrena27ValC{
        }
        ///CLRENA28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrena28{}; 
        namespace Clrena28ValC{
        }
        ///CLRENA29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrena29{}; 
        namespace Clrena29ValC{
        }
        ///CLRENA30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrena30{}; 
        namespace Clrena30ValC{
        }
        ///CLRENA31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrena31{}; 
        namespace Clrena31ValC{
        }
    }
    namespace Noneicer1{    ///<ICER1
        using Addr = Register::Address<0xe000e184,0xffff0000,0,unsigned>;
        ///CLRENA32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrena32{}; 
        namespace Clrena32ValC{
        }
        ///CLRENA33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrena33{}; 
        namespace Clrena33ValC{
        }
        ///CLRENA34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrena34{}; 
        namespace Clrena34ValC{
        }
        ///CLRENA35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrena35{}; 
        namespace Clrena35ValC{
        }
        ///CLRENA36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrena36{}; 
        namespace Clrena36ValC{
        }
        ///CLRENA37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrena37{}; 
        namespace Clrena37ValC{
        }
        ///CLRENA38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrena38{}; 
        namespace Clrena38ValC{
        }
        ///CLRENA39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrena39{}; 
        namespace Clrena39ValC{
        }
        ///CLRENA40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrena40{}; 
        namespace Clrena40ValC{
        }
        ///CLRENA41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrena41{}; 
        namespace Clrena41ValC{
        }
        ///CLRENA42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrena42{}; 
        namespace Clrena42ValC{
        }
        ///CLRENA43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrena43{}; 
        namespace Clrena43ValC{
        }
        ///CLRENA44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrena44{}; 
        namespace Clrena44ValC{
        }
        ///CLRENA45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrena45{}; 
        namespace Clrena45ValC{
        }
        ///CLRENA46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrena46{}; 
        namespace Clrena46ValC{
        }
        ///CLRENA47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrena47{}; 
        namespace Clrena47ValC{
        }
    }
    namespace Noneispr0{    ///<ISPR0
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend0{}; 
        namespace Setpend0ValC{
        }
        ///SETPEND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend1{}; 
        namespace Setpend1ValC{
        }
        ///SETPEND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend2{}; 
        namespace Setpend2ValC{
        }
        ///SETPEND3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend3{}; 
        namespace Setpend3ValC{
        }
        ///SETPEND4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setpend4{}; 
        namespace Setpend4ValC{
        }
        ///SETPEND5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setpend5{}; 
        namespace Setpend5ValC{
        }
        ///SETPEND6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setpend6{}; 
        namespace Setpend6ValC{
        }
        ///SETPEND7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setpend7{}; 
        namespace Setpend7ValC{
        }
        ///SETPEND8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setpend8{}; 
        namespace Setpend8ValC{
        }
        ///SETPEND9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setpend9{}; 
        namespace Setpend9ValC{
        }
        ///SETPEND10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setpend10{}; 
        namespace Setpend10ValC{
        }
        ///SETPEND11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setpend11{}; 
        namespace Setpend11ValC{
        }
        ///SETPEND12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setpend12{}; 
        namespace Setpend12ValC{
        }
        ///SETPEND13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setpend13{}; 
        namespace Setpend13ValC{
        }
        ///SETPEND14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setpend14{}; 
        namespace Setpend14ValC{
        }
        ///SETPEND15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setpend15{}; 
        namespace Setpend15ValC{
        }
        ///SETPEND16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setpend16{}; 
        namespace Setpend16ValC{
        }
        ///SETPEND17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setpend17{}; 
        namespace Setpend17ValC{
        }
        ///SETPEND18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setpend18{}; 
        namespace Setpend18ValC{
        }
        ///SETPEND19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setpend19{}; 
        namespace Setpend19ValC{
        }
        ///SETPEND20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setpend20{}; 
        namespace Setpend20ValC{
        }
        ///SETPEND21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setpend21{}; 
        namespace Setpend21ValC{
        }
        ///SETPEND22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setpend22{}; 
        namespace Setpend22ValC{
        }
        ///SETPEND23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setpend23{}; 
        namespace Setpend23ValC{
        }
        ///SETPEND24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setpend24{}; 
        namespace Setpend24ValC{
        }
        ///SETPEND25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setpend25{}; 
        namespace Setpend25ValC{
        }
        ///SETPEND26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setpend26{}; 
        namespace Setpend26ValC{
        }
        ///SETPEND27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setpend27{}; 
        namespace Setpend27ValC{
        }
        ///SETPEND28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setpend28{}; 
        namespace Setpend28ValC{
        }
        ///SETPEND29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setpend29{}; 
        namespace Setpend29ValC{
        }
        ///SETPEND30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setpend30{}; 
        namespace Setpend30ValC{
        }
        ///SETPEND31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setpend31{}; 
        namespace Setpend31ValC{
        }
    }
    namespace Noneispr1{    ///<ISPR1
        using Addr = Register::Address<0xe000e204,0xffff0000,0,unsigned>;
        ///SETPEND32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setpend32{}; 
        namespace Setpend32ValC{
        }
        ///SETPEND33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setpend33{}; 
        namespace Setpend33ValC{
        }
        ///SETPEND34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setpend34{}; 
        namespace Setpend34ValC{
        }
        ///SETPEND35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setpend35{}; 
        namespace Setpend35ValC{
        }
        ///SETPEND36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setpend36{}; 
        namespace Setpend36ValC{
        }
        ///SETPEND37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setpend37{}; 
        namespace Setpend37ValC{
        }
        ///SETPEND38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setpend38{}; 
        namespace Setpend38ValC{
        }
        ///SETPEND39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setpend39{}; 
        namespace Setpend39ValC{
        }
        ///SETPEND40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setpend40{}; 
        namespace Setpend40ValC{
        }
        ///SETPEND41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setpend41{}; 
        namespace Setpend41ValC{
        }
        ///SETPEND42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setpend42{}; 
        namespace Setpend42ValC{
        }
        ///SETPEND43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setpend43{}; 
        namespace Setpend43ValC{
        }
        ///SETPEND44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setpend44{}; 
        namespace Setpend44ValC{
        }
        ///SETPEND45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setpend45{}; 
        namespace Setpend45ValC{
        }
        ///SETPEND46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setpend46{}; 
        namespace Setpend46ValC{
        }
        ///SETPEND47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setpend47{}; 
        namespace Setpend47ValC{
        }
    }
    namespace Noneicpr0{    ///<ICPR0
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend0{}; 
        namespace Clrpend0ValC{
        }
        ///CLRPEND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend1{}; 
        namespace Clrpend1ValC{
        }
        ///CLRPEND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend2{}; 
        namespace Clrpend2ValC{
        }
        ///CLRPEND3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend3{}; 
        namespace Clrpend3ValC{
        }
        ///CLRPEND4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrpend4{}; 
        namespace Clrpend4ValC{
        }
        ///CLRPEND5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrpend5{}; 
        namespace Clrpend5ValC{
        }
        ///CLRPEND6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrpend6{}; 
        namespace Clrpend6ValC{
        }
        ///CLRPEND7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrpend7{}; 
        namespace Clrpend7ValC{
        }
        ///CLRPEND8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrpend8{}; 
        namespace Clrpend8ValC{
        }
        ///CLRPEND9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrpend9{}; 
        namespace Clrpend9ValC{
        }
        ///CLRPEND10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrpend10{}; 
        namespace Clrpend10ValC{
        }
        ///CLRPEND11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrpend11{}; 
        namespace Clrpend11ValC{
        }
        ///CLRPEND12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrpend12{}; 
        namespace Clrpend12ValC{
        }
        ///CLRPEND13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrpend13{}; 
        namespace Clrpend13ValC{
        }
        ///CLRPEND14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrpend14{}; 
        namespace Clrpend14ValC{
        }
        ///CLRPEND15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrpend15{}; 
        namespace Clrpend15ValC{
        }
        ///CLRPEND16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrpend16{}; 
        namespace Clrpend16ValC{
        }
        ///CLRPEND17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrpend17{}; 
        namespace Clrpend17ValC{
        }
        ///CLRPEND18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrpend18{}; 
        namespace Clrpend18ValC{
        }
        ///CLRPEND19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrpend19{}; 
        namespace Clrpend19ValC{
        }
        ///CLRPEND20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrpend20{}; 
        namespace Clrpend20ValC{
        }
        ///CLRPEND21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrpend21{}; 
        namespace Clrpend21ValC{
        }
        ///CLRPEND22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrpend22{}; 
        namespace Clrpend22ValC{
        }
        ///CLRPEND23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrpend23{}; 
        namespace Clrpend23ValC{
        }
        ///CLRPEND24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrpend24{}; 
        namespace Clrpend24ValC{
        }
        ///CLRPEND25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrpend25{}; 
        namespace Clrpend25ValC{
        }
        ///CLRPEND26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrpend26{}; 
        namespace Clrpend26ValC{
        }
        ///CLRPEND27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrpend27{}; 
        namespace Clrpend27ValC{
        }
        ///CLRPEND28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrpend28{}; 
        namespace Clrpend28ValC{
        }
        ///CLRPEND29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrpend29{}; 
        namespace Clrpend29ValC{
        }
        ///CLRPEND30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrpend30{}; 
        namespace Clrpend30ValC{
        }
        ///CLRPEND31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrpend31{}; 
        namespace Clrpend31ValC{
        }
    }
    namespace Noneicpr1{    ///<ICPR1
        using Addr = Register::Address<0xe000e284,0xffff0000,0,unsigned>;
        ///CLRPEND32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrpend32{}; 
        namespace Clrpend32ValC{
        }
        ///CLRPEND33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrpend33{}; 
        namespace Clrpend33ValC{
        }
        ///CLRPEND34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrpend34{}; 
        namespace Clrpend34ValC{
        }
        ///CLRPEND35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrpend35{}; 
        namespace Clrpend35ValC{
        }
        ///CLRPEND36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrpend36{}; 
        namespace Clrpend36ValC{
        }
        ///CLRPEND37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrpend37{}; 
        namespace Clrpend37ValC{
        }
        ///CLRPEND38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrpend38{}; 
        namespace Clrpend38ValC{
        }
        ///CLRPEND39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrpend39{}; 
        namespace Clrpend39ValC{
        }
        ///CLRPEND40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrpend40{}; 
        namespace Clrpend40ValC{
        }
        ///CLRPEND41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrpend41{}; 
        namespace Clrpend41ValC{
        }
        ///CLRPEND42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrpend42{}; 
        namespace Clrpend42ValC{
        }
        ///CLRPEND43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrpend43{}; 
        namespace Clrpend43ValC{
        }
        ///CLRPEND44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrpend44{}; 
        namespace Clrpend44ValC{
        }
        ///CLRPEND45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrpend45{}; 
        namespace Clrpend45ValC{
        }
        ///CLRPEND46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrpend46{}; 
        namespace Clrpend46ValC{
        }
        ///CLRPEND47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrpend47{}; 
        namespace Clrpend47ValC{
        }
    }
    namespace Noneiabr0{    ///<IABR0
        using Addr = Register::Address<0xe000e300,0x00000000,0,unsigned>;
        ///ACTIVE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active0{}; 
        namespace Active0ValC{
        }
        ///ACTIVE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active1{}; 
        namespace Active1ValC{
        }
        ///ACTIVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active2{}; 
        namespace Active2ValC{
        }
        ///ACTIVE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active3{}; 
        namespace Active3ValC{
        }
        ///ACTIVE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> active4{}; 
        namespace Active4ValC{
        }
        ///ACTIVE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active5{}; 
        namespace Active5ValC{
        }
        ///ACTIVE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active6{}; 
        namespace Active6ValC{
        }
        ///ACTIVE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> active7{}; 
        namespace Active7ValC{
        }
        ///ACTIVE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> active8{}; 
        namespace Active8ValC{
        }
        ///ACTIVE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> active9{}; 
        namespace Active9ValC{
        }
        ///ACTIVE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> active10{}; 
        namespace Active10ValC{
        }
        ///ACTIVE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> active11{}; 
        namespace Active11ValC{
        }
        ///ACTIVE12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> active12{}; 
        namespace Active12ValC{
        }
        ///ACTIVE13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> active13{}; 
        namespace Active13ValC{
        }
        ///ACTIVE14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> active14{}; 
        namespace Active14ValC{
        }
        ///ACTIVE15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> active15{}; 
        namespace Active15ValC{
        }
        ///ACTIVE16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> active16{}; 
        namespace Active16ValC{
        }
        ///ACTIVE17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active17{}; 
        namespace Active17ValC{
        }
        ///ACTIVE18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> active18{}; 
        namespace Active18ValC{
        }
        ///ACTIVE19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> active19{}; 
        namespace Active19ValC{
        }
        ///ACTIVE20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> active20{}; 
        namespace Active20ValC{
        }
        ///ACTIVE21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> active21{}; 
        namespace Active21ValC{
        }
        ///ACTIVE22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> active22{}; 
        namespace Active22ValC{
        }
        ///ACTIVE23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> active23{}; 
        namespace Active23ValC{
        }
        ///ACTIVE24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> active24{}; 
        namespace Active24ValC{
        }
        ///ACTIVE25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> active25{}; 
        namespace Active25ValC{
        }
        ///ACTIVE26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> active26{}; 
        namespace Active26ValC{
        }
        ///ACTIVE27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> active27{}; 
        namespace Active27ValC{
        }
        ///ACTIVE28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> active28{}; 
        namespace Active28ValC{
        }
        ///ACTIVE29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> active29{}; 
        namespace Active29ValC{
        }
        ///ACTIVE30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> active30{}; 
        namespace Active30ValC{
        }
        ///ACTIVE31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> active31{}; 
        namespace Active31ValC{
        }
    }
    namespace Noneiabr1{    ///<IABR1
        using Addr = Register::Address<0xe000e304,0xffff0000,0,unsigned>;
        ///ACTIVE32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> active32{}; 
        namespace Active32ValC{
        }
        ///ACTIVE33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> active33{}; 
        namespace Active33ValC{
        }
        ///ACTIVE34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> active34{}; 
        namespace Active34ValC{
        }
        ///ACTIVE35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> active35{}; 
        namespace Active35ValC{
        }
        ///ACTIVE36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> active36{}; 
        namespace Active36ValC{
        }
        ///ACTIVE37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> active37{}; 
        namespace Active37ValC{
        }
        ///ACTIVE38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active38{}; 
        namespace Active38ValC{
        }
        ///ACTIVE39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> active39{}; 
        namespace Active39ValC{
        }
        ///ACTIVE40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> active40{}; 
        namespace Active40ValC{
        }
        ///ACTIVE41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> active41{}; 
        namespace Active41ValC{
        }
        ///ACTIVE42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> active42{}; 
        namespace Active42ValC{
        }
        ///ACTIVE43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> active43{}; 
        namespace Active43ValC{
        }
        ///ACTIVE44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> active44{}; 
        namespace Active44ValC{
        }
        ///ACTIVE45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> active45{}; 
        namespace Active45ValC{
        }
        ///ACTIVE46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> active46{}; 
        namespace Active46ValC{
        }
        ///ACTIVE47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> active47{}; 
        namespace Active47ValC{
        }
    }
    namespace Noneip0{    ///<IP0
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///PRI_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        namespace Pri0ValC{
        }
        ///PRI_1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        namespace Pri1ValC{
        }
        ///PRI_2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        namespace Pri2ValC{
        }
        ///PRI_3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
        namespace Pri3ValC{
        }
    }
    namespace Noneip1{    ///<IP1
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///PRI_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        namespace Pri4ValC{
        }
        ///PRI_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        namespace Pri5ValC{
        }
        ///PRI_6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        namespace Pri6ValC{
        }
        ///PRI_7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
        namespace Pri7ValC{
        }
    }
    namespace Noneip2{    ///<IP2
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///PRI_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        namespace Pri8ValC{
        }
        ///PRI_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        namespace Pri9ValC{
        }
        ///PRI_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        namespace Pri10ValC{
        }
        ///PRI_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
        namespace Pri11ValC{
        }
    }
    namespace Noneip3{    ///<IP3
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///PRI_12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        namespace Pri12ValC{
        }
        ///PRI_13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        namespace Pri13ValC{
        }
        ///PRI_14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        namespace Pri14ValC{
        }
        ///PRI_15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
        namespace Pri15ValC{
        }
    }
    namespace Noneip4{    ///<IP4
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///PRI_16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        namespace Pri16ValC{
        }
        ///PRI_17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        namespace Pri17ValC{
        }
        ///PRI_18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        namespace Pri18ValC{
        }
        ///PRI_19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
        namespace Pri19ValC{
        }
    }
    namespace Noneip5{    ///<IP5
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///PRI_20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        namespace Pri20ValC{
        }
        ///PRI_21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        namespace Pri21ValC{
        }
        ///PRI_22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        namespace Pri22ValC{
        }
        ///PRI_23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
        namespace Pri23ValC{
        }
    }
    namespace Noneip6{    ///<IP6
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///PRI_24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        namespace Pri24ValC{
        }
        ///PRI_25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        namespace Pri25ValC{
        }
        ///PRI_26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        namespace Pri26ValC{
        }
        ///PRI_27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
        namespace Pri27ValC{
        }
    }
    namespace Noneip7{    ///<IP7
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///PRI_28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        namespace Pri28ValC{
        }
        ///PRI_29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        namespace Pri29ValC{
        }
        ///PRI_30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        namespace Pri30ValC{
        }
        ///PRI_31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
        namespace Pri31ValC{
        }
    }
    namespace Noneip8{    ///<IP8
        using Addr = Register::Address<0xe000e420,0x00000000,0,unsigned>;
        ///PRI_32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri32{}; 
        namespace Pri32ValC{
        }
        ///PRI_33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri33{}; 
        namespace Pri33ValC{
        }
        ///PRI_34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri34{}; 
        namespace Pri34ValC{
        }
        ///PRI_35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri35{}; 
        namespace Pri35ValC{
        }
    }
    namespace Noneip9{    ///<IP9
        using Addr = Register::Address<0xe000e424,0x00000000,0,unsigned>;
        ///PRI_36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri36{}; 
        namespace Pri36ValC{
        }
        ///PRI_37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri37{}; 
        namespace Pri37ValC{
        }
        ///PRI_38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri38{}; 
        namespace Pri38ValC{
        }
        ///PRI_39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri39{}; 
        namespace Pri39ValC{
        }
    }
    namespace Noneip10{    ///<IP10
        using Addr = Register::Address<0xe000e428,0x00000000,0,unsigned>;
        ///PRI_40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri40{}; 
        namespace Pri40ValC{
        }
        ///PRI_41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri41{}; 
        namespace Pri41ValC{
        }
        ///PRI_42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri42{}; 
        namespace Pri42ValC{
        }
        ///PRI_43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri43{}; 
        namespace Pri43ValC{
        }
    }
    namespace Noneip11{    ///<IP11
        using Addr = Register::Address<0xe000e42c,0x00000000,0,unsigned>;
        ///PRI_44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri44{}; 
        namespace Pri44ValC{
        }
        ///PRI_45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri45{}; 
        namespace Pri45ValC{
        }
        ///PRI_46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri46{}; 
        namespace Pri46ValC{
        }
        ///PRI_47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri47{}; 
        namespace Pri47ValC{
        }
    }
    namespace Nonecpuid{    ///<CPUID
        using Addr = Register::Address<0xe000ed00,0x000f0000,0,unsigned>;
        ///REVISION
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        namespace RevisionValC{
        }
        ///PARTNO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        namespace PartnoValC{
        }
        ///VARIANT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        namespace VariantValC{
        }
        ///IMPLEMENTER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
        namespace ImplementerValC{
        }
    }
    namespace Noneicsr{    ///<ICSR
        using Addr = Register::Address<0xe000ed04,0x61000600,0,unsigned>;
        ///VECTACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        namespace VectactiveValC{
        }
        ///RETTOBASE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rettobase{}; 
        namespace RettobaseValC{
        }
        ///VECTPENDING
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        namespace VectpendingValC{
        }
        ///ISRPENDING
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        namespace IsrpendingValC{
        }
        ///ISRPREEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isrpreempt{}; 
        namespace IsrpreemptValC{
        }
        ///PENDSTCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pendstclr{}; 
        namespace PendstclrValC{
        }
        ///PENDSTSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pendstset{}; 
        namespace PendstsetValC{
        }
        ///PENDSVCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pendsvclr{}; 
        namespace PendsvclrValC{
        }
        ///PENDSVSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pendsvset{}; 
        namespace PendsvsetValC{
        }
        ///NMIPENDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmipendset{}; 
        namespace NmipendsetValC{
        }
    }
    namespace Nonevtor{    ///<VTOR
        using Addr = Register::Address<0xe000ed08,0xc000007f,0,unsigned>;
        ///TBLOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
        namespace TbloffValC{
        }
        ///TBLBASE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tblbase{}; 
        namespace TblbaseValC{
        }
    }
    namespace Noneaircr{    ///<AIRCR
        using Addr = Register::Address<0xe000ed0c,0x000078f8,0,unsigned>;
        ///VECTRESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vectreset{}; 
        namespace VectresetValC{
        }
        ///VECTCLRACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        namespace VectclractiveValC{
        }
        ///SYSRESETREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysresetreq{}; 
        namespace SysresetreqValC{
        }
        ///PRIGROUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prigroup{}; 
        namespace PrigroupValC{
        }
        ///ENDIANESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> endianess{}; 
        namespace EndianessValC{
        }
        ///VECTKEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkey{}; 
        namespace VectkeyValC{
        }
    }
    namespace Noneshp0{    ///<SHP0
        using Addr = Register::Address<0xe000ed18,0x00000000,0,unsigned>;
        ///PRI_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        namespace Pri4ValC{
        }
        ///PRI_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        namespace Pri5ValC{
        }
        ///PRI_6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        namespace Pri6ValC{
        }
        ///PRI_7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
        namespace Pri7ValC{
        }
    }
    namespace Noneshp1{    ///<SHP1
        using Addr = Register::Address<0xe000ed1c,0x00000000,0,unsigned>;
        ///PRI_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        namespace Pri8ValC{
        }
        ///PRI_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        namespace Pri9ValC{
        }
        ///PRI_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        namespace Pri10ValC{
        }
        ///PRI_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
        namespace Pri11ValC{
        }
    }
    namespace Noneshp2{    ///<SHP2
        using Addr = Register::Address<0xe000ed20,0x00000000,0,unsigned>;
        ///PRI_12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        namespace Pri12ValC{
        }
        ///PRI_13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        namespace Pri13ValC{
        }
        ///PRI_14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        namespace Pri14ValC{
        }
        ///PRI_15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
        namespace Pri15ValC{
        }
    }
    namespace Noneshcsr{    ///<SHCSR
        using Addr = Register::Address<0xe000ed24,0xfff80274,0,unsigned>;
        ///MEMFAULTACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> memfaultact{}; 
        namespace MemfaultactValC{
        }
        ///BUSFAULTACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busfaultact{}; 
        namespace BusfaultactValC{
        }
        ///USGFAULTACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usgfaultact{}; 
        namespace UsgfaultactValC{
        }
        ///SVCALLACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> svcallact{}; 
        namespace SvcallactValC{
        }
        ///MONITORACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monitoract{}; 
        namespace MonitoractValC{
        }
        ///PENDSVACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pendsvact{}; 
        namespace PendsvactValC{
        }
        ///SYSTICKACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> systickact{}; 
        namespace SystickactValC{
        }
        ///USGFAULTPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usgfaultpended{}; 
        namespace UsgfaultpendedValC{
        }
        ///MEMFAULTPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> memfaultpended{}; 
        namespace MemfaultpendedValC{
        }
        ///BUSFAULTPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busfaultpended{}; 
        namespace BusfaultpendedValC{
        }
        ///SVCALLPENDED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> svcallpended{}; 
        namespace SvcallpendedValC{
        }
        ///MEMFAULTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> memfaultena{}; 
        namespace MemfaultenaValC{
        }
        ///BUSFAULTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> busfaultena{}; 
        namespace BusfaultenaValC{
        }
        ///USGFAULTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usgfaultena{}; 
        namespace UsgfaultenaValC{
        }
    }
    namespace Nonestir{    ///<STIR
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0,unsigned>;
        ///INTID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
        namespace IntidValC{
        }
    }
}
