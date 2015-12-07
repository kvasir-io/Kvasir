#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External interrupt/event       controller
    namespace Noneimr{    ///<Interrupt mask register           (EXTI_IMR)
        using Addr = Register::Address<0x40010400,0xf0000000,0,unsigned>;
        ///Interrupt Mask on line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        namespace Mr0ValC{
        }
        ///Interrupt Mask on line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        namespace Mr1ValC{
        }
        ///Interrupt Mask on line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        namespace Mr2ValC{
        }
        ///Interrupt Mask on line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        namespace Mr3ValC{
        }
        ///Interrupt Mask on line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        namespace Mr4ValC{
        }
        ///Interrupt Mask on line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        namespace Mr5ValC{
        }
        ///Interrupt Mask on line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        namespace Mr6ValC{
        }
        ///Interrupt Mask on line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        namespace Mr7ValC{
        }
        ///Interrupt Mask on line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        namespace Mr8ValC{
        }
        ///Interrupt Mask on line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        namespace Mr9ValC{
        }
        ///Interrupt Mask on line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        namespace Mr10ValC{
        }
        ///Interrupt Mask on line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        namespace Mr11ValC{
        }
        ///Interrupt Mask on line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        namespace Mr12ValC{
        }
        ///Interrupt Mask on line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        namespace Mr13ValC{
        }
        ///Interrupt Mask on line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        namespace Mr14ValC{
        }
        ///Interrupt Mask on line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        namespace Mr15ValC{
        }
        ///Interrupt Mask on line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        namespace Mr16ValC{
        }
        ///Interrupt Mask on line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        namespace Mr17ValC{
        }
        ///Interrupt Mask on line 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        namespace Mr18ValC{
        }
        ///Interrupt Mask on line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        namespace Mr19ValC{
        }
        ///Interrupt Mask on line 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        namespace Mr20ValC{
        }
        ///Interrupt Mask on line 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        namespace Mr21ValC{
        }
        ///Interrupt Mask on line 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        namespace Mr22ValC{
        }
        ///Interrupt Mask on line 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        namespace Mr23ValC{
        }
        ///Interrupt Mask on line 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        namespace Mr24ValC{
        }
        ///Interrupt Mask on line 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        namespace Mr25ValC{
        }
        ///Interrupt Mask on line 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        namespace Mr26ValC{
        }
        ///Interrupt Mask on line 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        namespace Mr27ValC{
        }
    }
    namespace Noneemr{    ///<Event mask register (EXTI_EMR)
        using Addr = Register::Address<0x40010404,0xf0000000,0,unsigned>;
        ///Event Mask on line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        namespace Mr0ValC{
        }
        ///Event Mask on line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        namespace Mr1ValC{
        }
        ///Event Mask on line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        namespace Mr2ValC{
        }
        ///Event Mask on line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        namespace Mr3ValC{
        }
        ///Event Mask on line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        namespace Mr4ValC{
        }
        ///Event Mask on line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        namespace Mr5ValC{
        }
        ///Event Mask on line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        namespace Mr6ValC{
        }
        ///Event Mask on line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        namespace Mr7ValC{
        }
        ///Event Mask on line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        namespace Mr8ValC{
        }
        ///Event Mask on line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        namespace Mr9ValC{
        }
        ///Event Mask on line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        namespace Mr10ValC{
        }
        ///Event Mask on line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        namespace Mr11ValC{
        }
        ///Event Mask on line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        namespace Mr12ValC{
        }
        ///Event Mask on line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        namespace Mr13ValC{
        }
        ///Event Mask on line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        namespace Mr14ValC{
        }
        ///Event Mask on line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        namespace Mr15ValC{
        }
        ///Event Mask on line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        namespace Mr16ValC{
        }
        ///Event Mask on line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        namespace Mr17ValC{
        }
        ///Event Mask on line 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        namespace Mr18ValC{
        }
        ///Event Mask on line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        namespace Mr19ValC{
        }
        ///Event Mask on line 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        namespace Mr20ValC{
        }
        ///Event Mask on line 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        namespace Mr21ValC{
        }
        ///Event Mask on line 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        namespace Mr22ValC{
        }
        ///Event Mask on line 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        namespace Mr23ValC{
        }
        ///Event Mask on line 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        namespace Mr24ValC{
        }
        ///Event Mask on line 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        namespace Mr25ValC{
        }
        ///Event Mask on line 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        namespace Mr26ValC{
        }
        ///Event Mask on line 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        namespace Mr27ValC{
        }
    }
    namespace Nonertsr{    ///<Rising Trigger selection register           (EXTI_RTSR)
        using Addr = Register::Address<0x40010408,0xfff40000,0,unsigned>;
        ///Rising trigger event configuration of               line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr0{}; 
        namespace Tr0ValC{
        }
        ///Rising trigger event configuration of               line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr1{}; 
        namespace Tr1ValC{
        }
        ///Rising trigger event configuration of               line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tr2{}; 
        namespace Tr2ValC{
        }
        ///Rising trigger event configuration of               line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tr3{}; 
        namespace Tr3ValC{
        }
        ///Rising trigger event configuration of               line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tr4{}; 
        namespace Tr4ValC{
        }
        ///Rising trigger event configuration of               line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tr5{}; 
        namespace Tr5ValC{
        }
        ///Rising trigger event configuration of               line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tr6{}; 
        namespace Tr6ValC{
        }
        ///Rising trigger event configuration of               line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tr7{}; 
        namespace Tr7ValC{
        }
        ///Rising trigger event configuration of               line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tr8{}; 
        namespace Tr8ValC{
        }
        ///Rising trigger event configuration of               line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tr9{}; 
        namespace Tr9ValC{
        }
        ///Rising trigger event configuration of               line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tr10{}; 
        namespace Tr10ValC{
        }
        ///Rising trigger event configuration of               line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tr11{}; 
        namespace Tr11ValC{
        }
        ///Rising trigger event configuration of               line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tr12{}; 
        namespace Tr12ValC{
        }
        ///Rising trigger event configuration of               line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tr13{}; 
        namespace Tr13ValC{
        }
        ///Rising trigger event configuration of               line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tr14{}; 
        namespace Tr14ValC{
        }
        ///Rising trigger event configuration of               line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tr15{}; 
        namespace Tr15ValC{
        }
        ///Rising trigger event configuration of               line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tr16{}; 
        namespace Tr16ValC{
        }
        ///Rising trigger event configuration of               line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr17{}; 
        namespace Tr17ValC{
        }
        ///Rising trigger event configuration of               line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr19{}; 
        namespace Tr19ValC{
        }
    }
    namespace Noneftsr{    ///<Falling Trigger selection register           (EXTI_FTSR)
        using Addr = Register::Address<0x4001040c,0xfff40000,0,unsigned>;
        ///Falling trigger event configuration of               line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr0{}; 
        namespace Tr0ValC{
        }
        ///Falling trigger event configuration of               line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr1{}; 
        namespace Tr1ValC{
        }
        ///Falling trigger event configuration of               line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tr2{}; 
        namespace Tr2ValC{
        }
        ///Falling trigger event configuration of               line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tr3{}; 
        namespace Tr3ValC{
        }
        ///Falling trigger event configuration of               line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tr4{}; 
        namespace Tr4ValC{
        }
        ///Falling trigger event configuration of               line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tr5{}; 
        namespace Tr5ValC{
        }
        ///Falling trigger event configuration of               line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tr6{}; 
        namespace Tr6ValC{
        }
        ///Falling trigger event configuration of               line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tr7{}; 
        namespace Tr7ValC{
        }
        ///Falling trigger event configuration of               line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tr8{}; 
        namespace Tr8ValC{
        }
        ///Falling trigger event configuration of               line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tr9{}; 
        namespace Tr9ValC{
        }
        ///Falling trigger event configuration of               line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tr10{}; 
        namespace Tr10ValC{
        }
        ///Falling trigger event configuration of               line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tr11{}; 
        namespace Tr11ValC{
        }
        ///Falling trigger event configuration of               line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tr12{}; 
        namespace Tr12ValC{
        }
        ///Falling trigger event configuration of               line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tr13{}; 
        namespace Tr13ValC{
        }
        ///Falling trigger event configuration of               line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tr14{}; 
        namespace Tr14ValC{
        }
        ///Falling trigger event configuration of               line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tr15{}; 
        namespace Tr15ValC{
        }
        ///Falling trigger event configuration of               line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tr16{}; 
        namespace Tr16ValC{
        }
        ///Falling trigger event configuration of               line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr17{}; 
        namespace Tr17ValC{
        }
        ///Falling trigger event configuration of               line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr19{}; 
        namespace Tr19ValC{
        }
    }
    namespace Noneswier{    ///<Software interrupt event register           (EXTI_SWIER)
        using Addr = Register::Address<0x40010410,0xfff40000,0,unsigned>;
        ///Software Interrupt on line               0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swier0{}; 
        namespace Swier0ValC{
        }
        ///Software Interrupt on line               1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swier1{}; 
        namespace Swier1ValC{
        }
        ///Software Interrupt on line               2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swier2{}; 
        namespace Swier2ValC{
        }
        ///Software Interrupt on line               3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swier3{}; 
        namespace Swier3ValC{
        }
        ///Software Interrupt on line               4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swier4{}; 
        namespace Swier4ValC{
        }
        ///Software Interrupt on line               5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swier5{}; 
        namespace Swier5ValC{
        }
        ///Software Interrupt on line               6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swier6{}; 
        namespace Swier6ValC{
        }
        ///Software Interrupt on line               7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swier7{}; 
        namespace Swier7ValC{
        }
        ///Software Interrupt on line               8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swier8{}; 
        namespace Swier8ValC{
        }
        ///Software Interrupt on line               9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swier9{}; 
        namespace Swier9ValC{
        }
        ///Software Interrupt on line               10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swier10{}; 
        namespace Swier10ValC{
        }
        ///Software Interrupt on line               11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swier11{}; 
        namespace Swier11ValC{
        }
        ///Software Interrupt on line               12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> swier12{}; 
        namespace Swier12ValC{
        }
        ///Software Interrupt on line               13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> swier13{}; 
        namespace Swier13ValC{
        }
        ///Software Interrupt on line               14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swier14{}; 
        namespace Swier14ValC{
        }
        ///Software Interrupt on line               15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swier15{}; 
        namespace Swier15ValC{
        }
        ///Software Interrupt on line               16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swier16{}; 
        namespace Swier16ValC{
        }
        ///Software Interrupt on line               17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swier17{}; 
        namespace Swier17ValC{
        }
        ///Software Interrupt on line               19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> swier19{}; 
        namespace Swier19ValC{
        }
    }
    namespace Nonepr{    ///<Pending register (EXTI_PR)
        using Addr = Register::Address<0x40010414,0xfff40000,0,unsigned>;
        ///Pending bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr0{}; 
        namespace Pr0ValC{
        }
        ///Pending bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pr1{}; 
        namespace Pr1ValC{
        }
        ///Pending bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pr2{}; 
        namespace Pr2ValC{
        }
        ///Pending bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pr3{}; 
        namespace Pr3ValC{
        }
        ///Pending bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pr4{}; 
        namespace Pr4ValC{
        }
        ///Pending bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pr5{}; 
        namespace Pr5ValC{
        }
        ///Pending bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pr6{}; 
        namespace Pr6ValC{
        }
        ///Pending bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pr7{}; 
        namespace Pr7ValC{
        }
        ///Pending bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pr8{}; 
        namespace Pr8ValC{
        }
        ///Pending bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pr9{}; 
        namespace Pr9ValC{
        }
        ///Pending bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pr10{}; 
        namespace Pr10ValC{
        }
        ///Pending bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pr11{}; 
        namespace Pr11ValC{
        }
        ///Pending bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pr12{}; 
        namespace Pr12ValC{
        }
        ///Pending bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pr13{}; 
        namespace Pr13ValC{
        }
        ///Pending bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pr14{}; 
        namespace Pr14ValC{
        }
        ///Pending bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pr15{}; 
        namespace Pr15ValC{
        }
        ///Pending bit 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pr16{}; 
        namespace Pr16ValC{
        }
        ///Pending bit 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pr17{}; 
        namespace Pr17ValC{
        }
        ///Pending bit 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pr19{}; 
        namespace Pr19ValC{
        }
    }
}
