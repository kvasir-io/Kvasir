#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10503 Chapter title=LPC43xx SerialGPIO (SGPIO) Modification date=10/7/2011 Major revision=0 Minor revision=3 
    namespace SgpioMaskA{    ///<Mask for pattern match function of slice A
        using Addr = Register::Address<0x40101200,0x00000000,0x00000000,unsigned>;
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskA0{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskA1{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskA2{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskA3{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskA4{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskA5{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskA6{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskA7{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskA8{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskA9{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskA10{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskA11{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskA12{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskA13{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskA14{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskA15{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskA16{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskA17{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskA18{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskA19{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskA20{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskA21{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskA22{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskA23{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskA24{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskA25{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskA26{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskA27{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskA28{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskA29{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskA30{}; 
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskA31{}; 
    }
    namespace SgpioMaskH{    ///<Mask for pattern match function of slice H
        using Addr = Register::Address<0x40101204,0x00000000,0x00000000,unsigned>;
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskH0{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskH1{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskH2{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskH3{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskH4{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskH5{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskH6{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskH7{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskH8{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskH9{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskH10{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskH11{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskH12{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskH13{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskH14{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskH15{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskH16{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskH17{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskH18{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskH19{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskH20{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskH21{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskH22{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskH23{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskH24{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskH25{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskH26{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskH27{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskH28{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskH29{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskH30{}; 
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskH31{}; 
    }
    namespace SgpioMaskI{    ///<Mask for pattern match function of slice I
        using Addr = Register::Address<0x40101208,0x00000000,0x00000000,unsigned>;
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskI0{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskI1{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskI2{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskI3{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskI4{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskI5{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskI6{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskI7{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskI8{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskI9{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskI10{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskI11{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskI12{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskI13{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskI14{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskI15{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskI16{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskI17{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskI18{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskI19{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskI20{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskI21{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskI22{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskI23{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskI24{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskI25{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskI26{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskI27{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskI28{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskI29{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskI30{}; 
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskI31{}; 
    }
    namespace SgpioMaskP{    ///<Mask for pattern match function of slice P
        using Addr = Register::Address<0x4010120c,0x00000000,0x00000000,unsigned>;
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskP0{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskP1{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskP2{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskP3{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskP4{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskP5{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskP6{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskP7{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskP8{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskP9{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskP10{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskP11{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskP12{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskP13{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskP14{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskP15{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskP16{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskP17{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskP18{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskP19{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskP20{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskP21{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskP22{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskP23{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskP24{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskP25{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskP26{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskP27{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskP28{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskP29{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskP30{}; 
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskP31{}; 
    }
    namespace SgpioGpioInreg{    ///<GPIO input status register
        using Addr = Register::Address<0x40101210,0x00000000,0x00000000,unsigned>;
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioIn0{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioIn1{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioIn2{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioIn3{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioIn4{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioIn5{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioIn6{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioIn7{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioIn8{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpioIn9{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioIn10{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpioIn11{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpioIn12{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpioIn13{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpioIn14{}; 
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpioIn15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioGpioOutreg{    ///<GPIO output control register
        using Addr = Register::Address<0x40101214,0x00000000,0x00000000,unsigned>;
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioOut0{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioOut1{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioOut2{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioOut3{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioOut4{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioOut5{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioOut6{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioOut7{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioOut8{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpioOut9{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioOut10{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpioOut11{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpioOut12{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpioOut13{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpioOut14{}; 
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpioOut15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioGpioOenreg{    ///<GPIO OE control register
        using Addr = Register::Address<0x40101218,0x00000000,0x00000000,unsigned>;
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioOe0{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioOe1{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioOe2{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioOe3{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioOe4{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioOe5{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioOe6{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioOe7{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioOe8{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpioOe9{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioOe10{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpioOe11{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpioOe12{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpioOe13{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpioOe14{}; 
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpioOe15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCtrlEnabled{    ///<Enables the slice COUNT counter
        using Addr = Register::Address<0x4010121c,0x00000000,0x00000000,unsigned>;
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrlEnabled0{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrlEnabled1{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlEnabled2{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrlEnabled3{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrlEnabled4{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrlEnabled5{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrlEnabled6{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrlEnabled7{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrlEnabled8{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrlEnabled9{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrlEnabled10{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrlEnabled11{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrlEnabled12{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrlEnabled13{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrlEnabled14{}; 
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrlEnabled15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCtrlDisabled{    ///<Disables the slice COUNT counter
        using Addr = Register::Address<0x40101220,0x00000000,0x00000000,unsigned>;
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrlDisabledn0{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrlDisabledn1{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlDisabledn2{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrlDisabledn3{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrlDisabledn4{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrlDisabledn5{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrlDisabledn6{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrlDisabledn7{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrlDisabledn8{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrlDisabledn9{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrlDisabledn10{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrlDisabledn11{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrlDisabledn12{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrlDisabledn13{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrlDisabledn14{}; 
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrlDisabledn15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioClrEn0{    ///<Shift clock interrupt clear mask
        using Addr = Register::Address<0x40101f00,0x00000000,0x00000000,unsigned>;
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrSci0{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrSci1{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrSci2{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrSci3{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrSci4{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrSci5{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrSci6{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrSci7{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrSci8{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrSci9{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrSci10{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrSci11{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrSci12{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrSci13{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrSci14{}; 
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrSci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetEn0{    ///<Shift clock interrupt set mask
        using Addr = Register::Address<0x40101f04,0x00000000,0x00000000,unsigned>;
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setSci0{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setSci1{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setSci2{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setSci3{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setSci4{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setSci5{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setSci6{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setSci7{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setSci8{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setSci9{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setSci10{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setSci11{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setSci12{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setSci13{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setSci14{}; 
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setSci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioEnable0{    ///<Shift clock interrupt enable
        using Addr = Register::Address<0x40101f08,0x00000000,0x00000000,unsigned>;
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enableSci0{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enableSci1{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enableSci2{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enableSci3{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enableSci4{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enableSci5{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enableSci6{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enableSci7{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enableSci8{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enableSci9{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enableSci10{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enableSci11{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enableSci12{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enableSci13{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enableSci14{}; 
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enableSci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioStatus0{    ///<Shift clock interrupt status
        using Addr = Register::Address<0x40101f0c,0x00000000,0x00000000,unsigned>;
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusSci0{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusSci1{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusSci2{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusSci3{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusSci4{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusSci5{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusSci6{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusSci7{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusSci8{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusSci9{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusSci10{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusSci11{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusSci12{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusSci13{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusSci14{}; 
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusSci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCtrStatus0{    ///<Shift clock interrupt clear status
        using Addr = Register::Address<0x40101f10,0x00000000,0x00000000,unsigned>;
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusSci0{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusSci1{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusSci2{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusSci3{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusSci4{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusSci5{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusSci6{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusSci7{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusSci8{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusSci9{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusSci10{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusSci11{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusSci12{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusSci13{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusSci14{}; 
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusSci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetStatus0{    ///<Shift clock interrupt set status
        using Addr = Register::Address<0x40101f14,0x00000000,0x00000000,unsigned>;
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusSci0{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusSci1{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusSci2{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusSci3{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusSci4{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusSci5{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusSci6{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusSci7{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusSci8{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusSci9{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusSci10{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusSci11{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusSci12{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusSci13{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusSci14{}; 
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusSci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioClrEn1{    ///<Capture clock interrupt clear mask
        using Addr = Register::Address<0x40101f20,0x00000000,0x00000000,unsigned>;
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEnCci0{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrEnCci1{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrEnCci2{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrEnCci3{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrEnCci4{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrEnCci5{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrEnCci6{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrEnCci7{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrEnCci8{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrEnCci9{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrEnCci10{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrEnCci11{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrEnCci12{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrEnCci13{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrEnCci14{}; 
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrEnCci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetEn1{    ///<Capture clock interrupt set mask
        using Addr = Register::Address<0x40101f24,0x00000000,0x00000000,unsigned>;
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEnCci0{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setEnCci1{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setEnCci2{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setEnCci3{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setEnCci4{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setEnCci5{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setEnCci6{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setEnCci7{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setEnCci8{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setEnCci9{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setEnCci10{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setEnCci11{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setEnCci12{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setEnCci13{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setEnCci14{}; 
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setEnCci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioEnable1{    ///<Capture clock interrupt enable
        using Addr = Register::Address<0x40101f28,0x00000000,0x00000000,unsigned>;
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enableCci0{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enableCci1{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enableCci2{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enableCci3{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enableCci4{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enableCci5{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enableCci6{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enableCci7{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enableCci8{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enableCci9{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enableCci10{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enableCci11{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enableCci12{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enableCci13{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enableCci14{}; 
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enableCci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioStatus1{    ///<Capture clock interrupt status
        using Addr = Register::Address<0x40101f2c,0x00000000,0x00000000,unsigned>;
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusCci0{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusCci1{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusCci2{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusCci3{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusCci4{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusCci5{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusCci6{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusCci7{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusCci8{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusCci9{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusCci10{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusCci11{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusCci12{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusCci13{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusCci14{}; 
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusCci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCtrStatus1{    ///<Capture clock interrupt clear status
        using Addr = Register::Address<0x40101f30,0x00000000,0x00000000,unsigned>;
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusCci0{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusCci1{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusCci2{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusCci3{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusCci4{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusCci5{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusCci6{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusCci7{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusCci8{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusCci9{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusCci10{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusCci11{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusCci12{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusCci13{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusCci14{}; 
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusCci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetStatus1{    ///<Capture clock interrupt set status
        using Addr = Register::Address<0x40101f34,0x00000000,0x00000000,unsigned>;
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusCci0{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusCci1{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusCci2{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusCci3{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusCci4{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusCci5{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusCci6{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusCci7{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusCci8{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusCci9{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusCci10{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusCci11{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusCci12{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusCci13{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusCci14{}; 
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusCci15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioClrEn2{    ///<Pattern match interrupt clear mask
        using Addr = Register::Address<0x40101f40,0x00000000,0x00000000,unsigned>;
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEn2Pmi0{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrEn2Pmi1{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrEn2Pmi2{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrEn2Pmi3{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrEn2Pmi4{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrEn2Pmi5{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrEn2Pmi6{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrEn2Pmi7{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrEn2Pmi8{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrEn2Pmi9{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrEn2Pmi10{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrEn2Pmi11{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrEn2Pmi12{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrEn2Pmi13{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrEn2Pmi14{}; 
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrEn2Pmi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetEn2{    ///<Pattern match interrupt set mask
        using Addr = Register::Address<0x40101f44,0x00000000,0x00000000,unsigned>;
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEnPmi0{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setEnPmi1{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setEnPmi2{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setEnPmi3{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setEnPmi4{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setEnPmi5{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setEnPmi6{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setEnPmi7{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setEnPmi8{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setEnPmi9{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setEnPmi10{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setEnPmi11{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setEnPmi12{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setEnPmi13{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setEnPmi14{}; 
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setEnPmi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioEnable2{    ///<Pattern match interrupt enable
        using Addr = Register::Address<0x40101f48,0x00000000,0x00000000,unsigned>;
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enablePmi0{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enablePmi1{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enablePmi2{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enablePmi3{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enablePmi4{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enablePmi5{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enablePmi6{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enablePmi7{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enablePmi8{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enablePmi9{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enablePmi10{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enablePmi11{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enablePmi12{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enablePmi13{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enablePmi14{}; 
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enablePmi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioStatus2{    ///<Pattern match interrupt status
        using Addr = Register::Address<0x40101f4c,0x00000000,0x00000000,unsigned>;
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusPmi0{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusPmi1{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusPmi2{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusPmi3{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusPmi4{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusPmi5{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusPmi6{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusPmi7{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusPmi8{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusPmi9{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusPmi10{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusPmi11{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusPmi12{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusPmi13{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusPmi14{}; 
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusPmi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCtrStatus2{    ///<Pattern match interrupt clear status
        using Addr = Register::Address<0x40101f50,0x00000000,0x00000000,unsigned>;
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusPmi0{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusPmi1{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusPmi2{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusPmi3{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusPmi4{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusPmi5{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusPmi6{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusPmi7{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusPmi8{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusPmi9{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusPmi10{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusPmi11{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusPmi12{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusPmi13{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusPmi14{}; 
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusPmi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetStatus2{    ///<Pattern match interrupt set status
        using Addr = Register::Address<0x40101f54,0x00000000,0x00000000,unsigned>;
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusPmi0{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusPmi1{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusPmi2{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusPmi3{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusPmi4{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusPmi5{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusPmi6{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusPmi7{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusPmi8{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusPmi9{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusPmi10{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusPmi11{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusPmi12{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusPmi13{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusPmi14{}; 
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusPmi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioClrEn3{    ///<Input interrupt clear mask
        using Addr = Register::Address<0x40101f60,0x00000000,0x00000000,unsigned>;
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEnInpi0{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrEnInpi1{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrEnInpi2{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrEnInpi3{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrEnInpi4{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrEnInpi5{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrEnInpi6{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrEnInpi7{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrEnInpi8{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrEnInpi9{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrEnInpi10{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrEnInpi11{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrEnInpi12{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrEnInpi13{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrEnInpi14{}; 
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrEnInpi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetEn3{    ///<Input bit match interrupt set mask
        using Addr = Register::Address<0x40101f64,0x00000000,0x00000000,unsigned>;
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEnInpi0{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setEnInpi1{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setEnInpi2{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setEnInpi3{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setEnInpi4{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setEnInpi5{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setEnInpi6{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setEnInpi7{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setEnInpi8{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setEnInpi9{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setEnInpi10{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setEnInpi11{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setEnInpi12{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setEnInpi13{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setEnInpi14{}; 
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setEnInpi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioEnable3{    ///<Input bit match interrupt enable
        using Addr = Register::Address<0x40101f68,0x00000000,0x00000000,unsigned>;
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable3Inpi0{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable3Inpi1{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enable3Inpi2{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enable3Inpi3{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enable3Inpi4{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enable3Inpi5{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enable3Inpi6{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enable3Inpi7{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enable3Inpi8{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enable3Inpi9{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enable3Inpi10{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enable3Inpi11{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enable3Inpi12{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enable3Inpi13{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enable3Inpi14{}; 
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enable3Inpi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioStatus3{    ///<Input bit match interrupt status
        using Addr = Register::Address<0x40101f6c,0x00000000,0x00000000,unsigned>;
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusInpi0{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusInpi1{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusInpi2{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusInpi3{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusInpi4{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusInpi5{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusInpi6{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusInpi7{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusInpi8{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusInpi9{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusInpi10{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusInpi11{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusInpi12{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusInpi13{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusInpi14{}; 
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusInpi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCtrStatus3{    ///<Input bit match interrupt clear status
        using Addr = Register::Address<0x40101f70,0x00000000,0x00000000,unsigned>;
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusInpi0{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusInpi1{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusInpi2{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusInpi3{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusInpi4{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusInpi5{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusInpi6{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusInpi7{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusInpi8{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusInpi9{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusInpi10{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusInpi11{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusInpi12{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusInpi13{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusInpi14{}; 
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusInpi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSetStatus3{    ///<Shift clock interrupt set status
        using Addr = Register::Address<0x40101f74,0x00000000,0x00000000,unsigned>;
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusInpi0{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusInpi1{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusInpi2{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusInpi3{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusInpi4{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusInpi5{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusInpi6{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusInpi7{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusInpi8{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusInpi9{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusInpi10{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusInpi11{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusInpi12{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusInpi13{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusInpi14{}; 
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusInpi15{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg0{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101000,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg1{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101004,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg2{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101008,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg3{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x4010100c,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg4{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101010,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg5{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101014,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg6{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101018,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg7{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x4010101c,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg8{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101020,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg9{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101024,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg10{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101028,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg11{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x4010102c,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg12{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101030,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg13{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101034,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg14{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x40101038,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioOutMuxCfg15{    ///<Pin multiplexer configurationregisters.
        using Addr = Register::Address<0x4010103c,0x00000000,0x00000000,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg)::Type,PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg)::Type,PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg0{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101040,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg1{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101044,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg2{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101048,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg3{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010104c,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg4{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101050,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg5{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101054,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg6{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101058,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg7{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010105c,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg8{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101060,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg9{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101064,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg10{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101068,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg11{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010106c,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg12{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101070,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg13{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101074,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg14{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101078,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSgpioMuxCfg15{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010107c,0x00000000,0x00000000,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable)::Type,ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode)::Type,ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode)::Type,ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode)::Type,QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode)::Type,QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode)::Type,QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable)::Type,ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder)::Type,ConcatorderVal::v8Slices> v8Slices{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg0{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101080,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg1{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101084,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg2{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101088,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg3{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x4010108c,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg4{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101090,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg5{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101094,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg6{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101098,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg7{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x4010109c,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg8{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010a0,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg9{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010a4,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg10{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010a8,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg11{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010ac,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg12{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010b0,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg13{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010b4,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg14{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010b8,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioSliceMuxCfg15{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010bc,0x00000000,0x00000000,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode)::Type,MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode)::Type,ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode)::Type,ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk)::Type,InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode)::Type,DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode)::Type,ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier)::Type,InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioReg0{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010c0,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg1{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010c4,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg2{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010c8,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg3{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010cc,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg4{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010d0,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg5{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010d4,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg6{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010d8,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg7{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010dc,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg8{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010e0,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg9{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010e4,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg10{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010e8,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg11{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010ec,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg12{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010f0,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg13{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010f4,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg14{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010f8,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioReg15{    ///<Slice data registers. Eachtime COUNT0 reaches 0x0 the register shifts loading bit 31 withdata captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010fc,0x00000000,0x00000000,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
    }
    namespace SgpioRegSs0{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101100,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs1{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101104,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs2{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101108,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs3{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x4010110c,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs4{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101110,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs5{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101114,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs6{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101118,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs7{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x4010111c,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs8{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101120,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs9{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101124,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs10{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101128,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs11{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x4010112c,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs12{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101130,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs13{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101134,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs14{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x40101138,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioRegSs15{    ///<Slice data shadow registers. Each time POSreaches 0x0 the contents of REG_SS is exchanged with the contentof REG
        using Addr = Register::Address<0x4010113c,0x00000000,0x00000000,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
    }
    namespace SgpioPreset0{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101140,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset1{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101144,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset2{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101148,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset3{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010114c,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset4{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101150,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset5{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101154,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset6{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101158,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset7{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010115c,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset8{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101160,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset9{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101164,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset10{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101168,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset11{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010116c,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset12{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101170,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset13{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101174,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset14{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101178,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPreset15{    ///<Reload valueof COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010117c,0x00000000,0x00000000,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount0{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101180,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount1{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101184,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount2{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101188,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount3{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x4010118c,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount4{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101190,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount5{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101194,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount6{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101198,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount7{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x4010119c,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount8{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011a0,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount9{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011a4,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount10{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011a8,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount11{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011ac,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount12{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011b0,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount13{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011b4,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount14{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011b8,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioCount15{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011bc,0x00000000,0x00000000,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos0{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011c0,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos1{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011c4,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos2{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011c8,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos3{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011cc,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos4{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011d0,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos5{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011d4,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos6{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011d8,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos7{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011dc,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos8{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011e0,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos9{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011e4,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos10{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011e8,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos11{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011ec,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos12{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011f0,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos13{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011f4,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos14{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011f8,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SgpioPos15{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011fc,0x00000000,0x00000000,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
