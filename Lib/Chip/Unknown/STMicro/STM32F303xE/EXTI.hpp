#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External interrupt/event       controller
    namespace Noneimr1{    ///<Interrupt mask register
        using Addr = Register::Address<0x40010400,0x00000000,0,unsigned>;
        ///Interrupt Mask on line 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        ///Interrupt Mask on line 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        ///Interrupt Mask on line 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        ///Interrupt Mask on line 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        ///Interrupt Mask on line 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        ///Interrupt Mask on line 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        ///Interrupt Mask on line 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        ///Interrupt Mask on line 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        ///Interrupt Mask on line 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        ///Interrupt Mask on line 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        ///Interrupt Mask on line 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        ///Interrupt Mask on line 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        ///Interrupt Mask on line 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        ///Interrupt Mask on line 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        ///Interrupt Mask on line 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        ///Interrupt Mask on line 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        ///Interrupt Mask on line 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        ///Interrupt Mask on line 17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        ///Interrupt Mask on line 18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        ///Interrupt Mask on line 19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        ///Interrupt Mask on line 20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        ///Interrupt Mask on line 21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        ///Interrupt Mask on line 22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        ///Interrupt Mask on line 23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        ///Interrupt Mask on line 24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        ///Interrupt Mask on line 25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        ///Interrupt Mask on line 26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        ///Interrupt Mask on line 27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        ///Interrupt Mask on line 28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mr28{}; 
        ///Interrupt Mask on line 29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mr29{}; 
        ///Interrupt Mask on line 30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mr30{}; 
        ///Interrupt Mask on line 31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mr31{}; 
    }
    namespace Noneemr1{    ///<Event mask register
        using Addr = Register::Address<0x40010404,0x00000000,0,unsigned>;
        ///Event Mask on line 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        ///Event Mask on line 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        ///Event Mask on line 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        ///Event Mask on line 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        ///Event Mask on line 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        ///Event Mask on line 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        ///Event Mask on line 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        ///Event Mask on line 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        ///Event Mask on line 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        ///Event Mask on line 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        ///Event Mask on line 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        ///Event Mask on line 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        ///Event Mask on line 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        ///Event Mask on line 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        ///Event Mask on line 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        ///Event Mask on line 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        ///Event Mask on line 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        ///Event Mask on line 17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        ///Event Mask on line 18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        ///Event Mask on line 19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        ///Event Mask on line 20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        ///Event Mask on line 21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        ///Event Mask on line 22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        ///Event Mask on line 23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        ///Event Mask on line 24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        ///Event Mask on line 25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        ///Event Mask on line 26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        ///Event Mask on line 27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        ///Event Mask on line 28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mr28{}; 
        ///Event Mask on line 29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mr29{}; 
        ///Event Mask on line 30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mr30{}; 
        ///Event Mask on line 31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mr31{}; 
    }
    namespace Nonertsr1{    ///<Rising Trigger selection           register
        using Addr = Register::Address<0x40010408,0x1f800000,0,unsigned>;
        ///Rising trigger event configuration of               line 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr0{}; 
        ///Rising trigger event configuration of               line 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr1{}; 
        ///Rising trigger event configuration of               line 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tr2{}; 
        ///Rising trigger event configuration of               line 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tr3{}; 
        ///Rising trigger event configuration of               line 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tr4{}; 
        ///Rising trigger event configuration of               line 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tr5{}; 
        ///Rising trigger event configuration of               line 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tr6{}; 
        ///Rising trigger event configuration of               line 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tr7{}; 
        ///Rising trigger event configuration of               line 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tr8{}; 
        ///Rising trigger event configuration of               line 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tr9{}; 
        ///Rising trigger event configuration of               line 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tr10{}; 
        ///Rising trigger event configuration of               line 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tr11{}; 
        ///Rising trigger event configuration of               line 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tr12{}; 
        ///Rising trigger event configuration of               line 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tr13{}; 
        ///Rising trigger event configuration of               line 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tr14{}; 
        ///Rising trigger event configuration of               line 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tr15{}; 
        ///Rising trigger event configuration of               line 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tr16{}; 
        ///Rising trigger event configuration of               line 17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr17{}; 
        ///Rising trigger event configuration of               line 18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tr18{}; 
        ///Rising trigger event configuration of               line 19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr19{}; 
        ///Rising trigger event configuration of               line 20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tr20{}; 
        ///Rising trigger event configuration of               line 21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tr21{}; 
        ///Rising trigger event configuration of               line 22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tr22{}; 
        ///Rising trigger event configuration of               line 29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tr29{}; 
        ///Rising trigger event configuration of               line 30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tr30{}; 
        ///Rising trigger event configuration of               line 31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tr31{}; 
    }
    namespace Noneftsr1{    ///<Falling Trigger selection           register
        using Addr = Register::Address<0x4001040c,0x1f800000,0,unsigned>;
        ///Falling trigger event configuration of               line 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr0{}; 
        ///Falling trigger event configuration of               line 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr1{}; 
        ///Falling trigger event configuration of               line 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tr2{}; 
        ///Falling trigger event configuration of               line 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tr3{}; 
        ///Falling trigger event configuration of               line 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tr4{}; 
        ///Falling trigger event configuration of               line 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tr5{}; 
        ///Falling trigger event configuration of               line 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tr6{}; 
        ///Falling trigger event configuration of               line 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tr7{}; 
        ///Falling trigger event configuration of               line 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tr8{}; 
        ///Falling trigger event configuration of               line 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tr9{}; 
        ///Falling trigger event configuration of               line 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tr10{}; 
        ///Falling trigger event configuration of               line 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tr11{}; 
        ///Falling trigger event configuration of               line 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tr12{}; 
        ///Falling trigger event configuration of               line 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tr13{}; 
        ///Falling trigger event configuration of               line 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tr14{}; 
        ///Falling trigger event configuration of               line 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tr15{}; 
        ///Falling trigger event configuration of               line 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tr16{}; 
        ///Falling trigger event configuration of               line 17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr17{}; 
        ///Falling trigger event configuration of               line 18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tr18{}; 
        ///Falling trigger event configuration of               line 19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr19{}; 
        ///Falling trigger event configuration of               line 20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tr20{}; 
        ///Falling trigger event configuration of               line 21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tr21{}; 
        ///Falling trigger event configuration of               line 22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tr22{}; 
        ///Falling trigger event configuration of               line 29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tr29{}; 
        ///Falling trigger event configuration of               line 30.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tr30{}; 
        ///Falling trigger event configuration of               line 31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tr31{}; 
    }
    namespace Noneswier1{    ///<Software interrupt event           register
        using Addr = Register::Address<0x40010410,0x1f800000,0,unsigned>;
        ///Software Interrupt on line               0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swier0{}; 
        ///Software Interrupt on line               1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swier1{}; 
        ///Software Interrupt on line               2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swier2{}; 
        ///Software Interrupt on line               3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swier3{}; 
        ///Software Interrupt on line               4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swier4{}; 
        ///Software Interrupt on line               5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swier5{}; 
        ///Software Interrupt on line               6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swier6{}; 
        ///Software Interrupt on line               7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swier7{}; 
        ///Software Interrupt on line               8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swier8{}; 
        ///Software Interrupt on line               9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swier9{}; 
        ///Software Interrupt on line               10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swier10{}; 
        ///Software Interrupt on line               11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swier11{}; 
        ///Software Interrupt on line               12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> swier12{}; 
        ///Software Interrupt on line               13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> swier13{}; 
        ///Software Interrupt on line               14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swier14{}; 
        ///Software Interrupt on line               15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swier15{}; 
        ///Software Interrupt on line               16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swier16{}; 
        ///Software Interrupt on line               17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swier17{}; 
        ///Software Interrupt on line               18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> swier18{}; 
        ///Software Interrupt on line               19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> swier19{}; 
        ///Software Interrupt on line               20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> swier20{}; 
        ///Software Interrupt on line               21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> swier21{}; 
        ///Software Interrupt on line               22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> swier22{}; 
        ///Software Interrupt on line               29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> swier29{}; 
        ///Software Interrupt on line               309
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swier30{}; 
        ///Software Interrupt on line               319
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swier31{}; 
    }
    namespace Nonepr1{    ///<Pending register
        using Addr = Register::Address<0x40010414,0x1f800000,0,unsigned>;
        ///Pending bit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr0{}; 
        ///Pending bit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pr1{}; 
        ///Pending bit 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pr2{}; 
        ///Pending bit 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pr3{}; 
        ///Pending bit 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pr4{}; 
        ///Pending bit 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pr5{}; 
        ///Pending bit 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pr6{}; 
        ///Pending bit 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pr7{}; 
        ///Pending bit 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pr8{}; 
        ///Pending bit 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pr9{}; 
        ///Pending bit 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pr10{}; 
        ///Pending bit 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pr11{}; 
        ///Pending bit 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pr12{}; 
        ///Pending bit 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pr13{}; 
        ///Pending bit 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pr14{}; 
        ///Pending bit 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pr15{}; 
        ///Pending bit 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pr16{}; 
        ///Pending bit 17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pr17{}; 
        ///Pending bit 18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pr18{}; 
        ///Pending bit 19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pr19{}; 
        ///Pending bit 20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pr20{}; 
        ///Pending bit 21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pr21{}; 
        ///Pending bit 22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pr22{}; 
        ///Pending bit 29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pr29{}; 
        ///Pending bit 30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pr30{}; 
        ///Pending bit 31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pr31{}; 
    }
    namespace Noneimr2{    ///<Interrupt mask register
        using Addr = Register::Address<0x40010418,0xfffffff0,0,unsigned>;
        ///Interrupt Mask on external/internal line               32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr32{}; 
        ///Interrupt Mask on external/internal line               33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr33{}; 
        ///Interrupt Mask on external/internal line               34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr34{}; 
        ///Interrupt Mask on external/internal line               35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr35{}; 
    }
    namespace Noneemr2{    ///<Event mask register
        using Addr = Register::Address<0x4001041c,0xfffffff0,0,unsigned>;
        ///Event mask on external/internal line               32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr32{}; 
        ///Event mask on external/internal line               33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr33{}; 
        ///Event mask on external/internal line               34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr34{}; 
        ///Event mask on external/internal line               35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr35{}; 
    }
    namespace Nonertsr2{    ///<Rising Trigger selection           register
        using Addr = Register::Address<0x40010420,0xfffffffc,0,unsigned>;
        ///Rising trigger event configuration bit               of line 32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr32{}; 
        ///Rising trigger event configuration bit               of line 33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr33{}; 
    }
    namespace Noneftsr2{    ///<Falling Trigger selection           register
        using Addr = Register::Address<0x40010424,0xfffffffc,0,unsigned>;
        ///Falling trigger event configuration bit               of line 32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr32{}; 
        ///Falling trigger event configuration bit               of line 33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr33{}; 
    }
    namespace Noneswier2{    ///<Software interrupt event           register
        using Addr = Register::Address<0x40010428,0xfffffffc,0,unsigned>;
        ///Software interrupt on line               32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swier32{}; 
        ///Software interrupt on line               33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swier33{}; 
    }
    namespace Nonepr2{    ///<Pending register
        using Addr = Register::Address<0x4001042c,0xfffffffc,0,unsigned>;
        ///Pending bit on line 32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr32{}; 
        ///Pending bit on line 33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pr33{}; 
    }
}
