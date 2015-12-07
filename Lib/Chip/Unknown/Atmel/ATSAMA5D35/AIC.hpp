#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced Interrupt Controller
    namespace AicSsr{    ///<Source Select Register
        using Addr = Register::Address<0xfffff000,0xffffff80,0,unsigned>;
        ///Interrupt line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> intsel{}; 
        namespace IntselValC{
        }
    }
    namespace AicSmr{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff004,0xffffff98,0,unsigned>;
        ///Priority Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Interrupt Source Type
        enum class SrctypeVal {
            intLevelSensitive=0x00000000,     ///<High level Sensitive for internal sourceLow level Sensitive for external source
            intEdgeTriggered=0x00000001,     ///<Positive edge triggered for internal sourceNegative edge triggered for external source
            extHighLevel=0x00000002,     ///<High level Sensitive for internal sourceHigh level Sensitive for external source
            extPositiveEdge=0x00000003,     ///<Positive edge triggered for internal sourcePositive edge triggered for external source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,SrctypeVal> srctype{}; 
        namespace SrctypeValC{
            constexpr Register::FieldValue<decltype(srctype),SrctypeVal::intLevelSensitive> intLevelSensitive{};
            constexpr Register::FieldValue<decltype(srctype),SrctypeVal::intEdgeTriggered> intEdgeTriggered{};
            constexpr Register::FieldValue<decltype(srctype),SrctypeVal::extHighLevel> extHighLevel{};
            constexpr Register::FieldValue<decltype(srctype),SrctypeVal::extPositiveEdge> extPositiveEdge{};
        }
    }
    namespace AicSvr{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff008,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicIvr{    ///<Interrupt Vector Register
        using Addr = Register::Address<0xfffff010,0x00000000,0,unsigned>;
        ///Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> irqv{}; 
        namespace IrqvValC{
        }
    }
    namespace AicFvr{    ///<FIQ Interrupt Vector Register
        using Addr = Register::Address<0xfffff014,0x00000000,0,unsigned>;
        ///FIQ Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fiqv{}; 
        namespace FiqvValC{
        }
    }
    namespace AicIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffff018,0xffffff80,0,unsigned>;
        ///Current Interrupt Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> irqid{}; 
        namespace IrqidValC{
        }
    }
    namespace AicIpr0{    ///<Interrupt Pending Register 0
        using Addr = Register::Address<0xfffff020,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        namespace FiqValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicIpr1{    ///<Interrupt Pending Register 1
        using Addr = Register::Address<0xfffff024,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid32{}; 
        namespace Pid32ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid33{}; 
        namespace Pid33ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid34{}; 
        namespace Pid34ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid35{}; 
        namespace Pid35ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid36{}; 
        namespace Pid36ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid37{}; 
        namespace Pid37ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid38{}; 
        namespace Pid38ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid39{}; 
        namespace Pid39ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid40{}; 
        namespace Pid40ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid41{}; 
        namespace Pid41ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid42{}; 
        namespace Pid42ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid43{}; 
        namespace Pid43ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid44{}; 
        namespace Pid44ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid45{}; 
        namespace Pid45ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid46{}; 
        namespace Pid46ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid47{}; 
        namespace Pid47ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid48{}; 
        namespace Pid48ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid49{}; 
        namespace Pid49ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid50{}; 
        namespace Pid50ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid51{}; 
        namespace Pid51ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid52{}; 
        namespace Pid52ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid53{}; 
        namespace Pid53ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid54{}; 
        namespace Pid54ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid55{}; 
        namespace Pid55ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid56{}; 
        namespace Pid56ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid57{}; 
        namespace Pid57ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid58{}; 
        namespace Pid58ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid59{}; 
        namespace Pid59ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid60{}; 
        namespace Pid60ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid61{}; 
        namespace Pid61ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid62{}; 
        namespace Pid62ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid63{}; 
        namespace Pid63ValC{
        }
    }
    namespace AicIpr2{    ///<Interrupt Pending Register 2
        using Addr = Register::Address<0xfffff028,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid64{}; 
        namespace Pid64ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid65{}; 
        namespace Pid65ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid66{}; 
        namespace Pid66ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid67{}; 
        namespace Pid67ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid68{}; 
        namespace Pid68ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid69{}; 
        namespace Pid69ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid70{}; 
        namespace Pid70ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid71{}; 
        namespace Pid71ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid72{}; 
        namespace Pid72ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid73{}; 
        namespace Pid73ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid74{}; 
        namespace Pid74ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid75{}; 
        namespace Pid75ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid76{}; 
        namespace Pid76ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid77{}; 
        namespace Pid77ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid78{}; 
        namespace Pid78ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid79{}; 
        namespace Pid79ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid80{}; 
        namespace Pid80ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid81{}; 
        namespace Pid81ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid82{}; 
        namespace Pid82ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid83{}; 
        namespace Pid83ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid84{}; 
        namespace Pid84ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid85{}; 
        namespace Pid85ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid86{}; 
        namespace Pid86ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid87{}; 
        namespace Pid87ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid88{}; 
        namespace Pid88ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid89{}; 
        namespace Pid89ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid90{}; 
        namespace Pid90ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid91{}; 
        namespace Pid91ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid92{}; 
        namespace Pid92ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid93{}; 
        namespace Pid93ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid94{}; 
        namespace Pid94ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid95{}; 
        namespace Pid95ValC{
        }
    }
    namespace AicIpr3{    ///<Interrupt Pending Register 3
        using Addr = Register::Address<0xfffff02c,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid96{}; 
        namespace Pid96ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid97{}; 
        namespace Pid97ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid98{}; 
        namespace Pid98ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid99{}; 
        namespace Pid99ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid100{}; 
        namespace Pid100ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid101{}; 
        namespace Pid101ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid102{}; 
        namespace Pid102ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid103{}; 
        namespace Pid103ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid104{}; 
        namespace Pid104ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid105{}; 
        namespace Pid105ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid106{}; 
        namespace Pid106ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid107{}; 
        namespace Pid107ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid108{}; 
        namespace Pid108ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid109{}; 
        namespace Pid109ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid110{}; 
        namespace Pid110ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid111{}; 
        namespace Pid111ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid112{}; 
        namespace Pid112ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid113{}; 
        namespace Pid113ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid114{}; 
        namespace Pid114ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid115{}; 
        namespace Pid115ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid116{}; 
        namespace Pid116ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid117{}; 
        namespace Pid117ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid118{}; 
        namespace Pid118ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid119{}; 
        namespace Pid119ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid120{}; 
        namespace Pid120ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid121{}; 
        namespace Pid121ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid122{}; 
        namespace Pid122ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid123{}; 
        namespace Pid123ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid124{}; 
        namespace Pid124ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid125{}; 
        namespace Pid125ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid126{}; 
        namespace Pid126ValC{
        }
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid127{}; 
        namespace Pid127ValC{
        }
    }
    namespace AicImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffff030,0xfffffffe,0,unsigned>;
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intm{}; 
        namespace IntmValC{
        }
    }
    namespace AicCisr{    ///<Core Interrupt Status Register
        using Addr = Register::Address<0xfffff034,0xfffffffc,0,unsigned>;
        ///NFIQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nfiq{}; 
        namespace NfiqValC{
        }
        ///NIRQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nirq{}; 
        namespace NirqValC{
        }
    }
    namespace AicEoicr{    ///<End of Interrupt Command Register
        using Addr = Register::Address<0xfffff038,0xfffffffe,0,unsigned>;
        ///Interrupt Processing Complete Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endit{}; 
        namespace EnditValC{
        }
    }
    namespace AicSpu{    ///<Spurious Interrupt Vector Register
        using Addr = Register::Address<0xfffff03c,0x00000000,0,unsigned>;
        ///Spurious Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sivr{}; 
        namespace SivrValC{
        }
    }
    namespace AicIecr{    ///<Interrupt Enable Command Register
        using Addr = Register::Address<0xfffff040,0xfffffffe,0,unsigned>;
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
        namespace IntenValC{
        }
    }
    namespace AicIdcr{    ///<Interrupt Disable Command Register
        using Addr = Register::Address<0xfffff044,0xfffffffe,0,unsigned>;
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intd{}; 
        namespace IntdValC{
        }
    }
    namespace AicIccr{    ///<Interrupt Clear Command Register
        using Addr = Register::Address<0xfffff048,0xfffffffe,0,unsigned>;
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intclr{}; 
        namespace IntclrValC{
        }
    }
    namespace AicIscr{    ///<Interrupt Set Command Register
        using Addr = Register::Address<0xfffff04c,0xfffffffe,0,unsigned>;
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intset{}; 
        namespace IntsetValC{
        }
    }
    namespace AicFfer{    ///<Fast Forcing Enable Register
        using Addr = Register::Address<0xfffff050,0xfffffffe,0,unsigned>;
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ffen{}; 
        namespace FfenValC{
        }
    }
    namespace AicFfdr{    ///<Fast Forcing Disable Register
        using Addr = Register::Address<0xfffff054,0xfffffffe,0,unsigned>;
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ffdis{}; 
        namespace FfdisValC{
        }
    }
    namespace AicFfsr{    ///<Fast Forcing Status Register
        using Addr = Register::Address<0xfffff058,0xfffffffe,0,unsigned>;
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ffs{}; 
        namespace FfsValC{
        }
    }
    namespace AicDcr{    ///<Debug Control Register
        using Addr = Register::Address<0xfffff06c,0xfffffffc,0,unsigned>;
        ///Protection Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
        ///General Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gmsk{}; 
        namespace GmskValC{
        }
    }
    namespace AicWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xfffff0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace AicWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xfffff0e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
