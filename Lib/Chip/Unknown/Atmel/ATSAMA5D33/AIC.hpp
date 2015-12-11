#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced Interrupt Controller
    namespace AicSsr{    ///<Source Select Register
        using Addr = Register::Address<0xfffff000,0xffffff80,0,unsigned>;
        ///Interrupt line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> intsel{}; 
    }
    namespace AicSmr{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff004,0xffffff98,0,unsigned>;
        ///Priority Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Interrupt Source Type
        enum class SrctypeVal {
            intLevelSensitive=0x00000000,     ///<High level Sensitive for internal sourceLow level Sensitive for external source
            intEdgeTriggered=0x00000001,     ///<Positive edge triggered for internal sourceNegative edge triggered for external source
            extHighLevel=0x00000002,     ///<High level Sensitive for internal sourceHigh level Sensitive for external source
            extPositiveEdge=0x00000003,     ///<Positive edge triggered for internal sourcePositive edge triggered for external source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,SrctypeVal> srctype{}; 
        namespace SrctypeValC{
            constexpr Register::FieldValue<decltype(srctype)::Type,SrctypeVal::intLevelSensitive> intLevelSensitive{};
            constexpr Register::FieldValue<decltype(srctype)::Type,SrctypeVal::intEdgeTriggered> intEdgeTriggered{};
            constexpr Register::FieldValue<decltype(srctype)::Type,SrctypeVal::extHighLevel> extHighLevel{};
            constexpr Register::FieldValue<decltype(srctype)::Type,SrctypeVal::extPositiveEdge> extPositiveEdge{};
        }
        }
    }
    namespace AicSvr{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff008,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicIvr{    ///<Interrupt Vector Register
        using Addr = Register::Address<0xfffff010,0x00000000,0,unsigned>;
        ///Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> irqv{}; 
    }
    namespace AicFvr{    ///<FIQ Interrupt Vector Register
        using Addr = Register::Address<0xfffff014,0x00000000,0,unsigned>;
        ///FIQ Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fiqv{}; 
    }
    namespace AicIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffff018,0xffffff80,0,unsigned>;
        ///Current Interrupt Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> irqid{}; 
    }
    namespace AicIpr0{    ///<Interrupt Pending Register 0
        using Addr = Register::Address<0xfffff020,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicIpr1{    ///<Interrupt Pending Register 1
        using Addr = Register::Address<0xfffff024,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid32{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid33{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid34{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid35{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid36{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid37{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid38{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid39{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid40{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid41{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid42{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid43{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid44{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid45{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid46{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid47{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid48{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid49{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid50{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid51{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid52{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid53{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid54{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid55{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid56{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid57{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid58{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid59{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid60{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid61{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid62{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid63{}; 
    }
    namespace AicIpr2{    ///<Interrupt Pending Register 2
        using Addr = Register::Address<0xfffff028,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid64{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid65{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid66{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid67{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid68{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid69{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid70{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid71{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid72{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid73{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid74{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid75{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid76{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid77{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid78{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid79{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid80{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid81{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid82{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid83{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid84{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid85{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid86{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid87{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid88{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid89{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid90{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid91{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid92{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid93{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid94{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid95{}; 
    }
    namespace AicIpr3{    ///<Interrupt Pending Register 3
        using Addr = Register::Address<0xfffff02c,0x00000000,0,unsigned>;
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid96{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid97{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid98{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid99{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid100{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid101{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid102{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid103{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid104{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid105{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid106{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid107{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid108{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid109{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid110{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid111{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid112{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid113{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid114{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid115{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid116{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid117{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid118{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid119{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid120{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid121{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid122{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid123{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid124{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid125{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid126{}; 
        ///Interrupt Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid127{}; 
    }
    namespace AicImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffff030,0xfffffffe,0,unsigned>;
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intm{}; 
    }
    namespace AicCisr{    ///<Core Interrupt Status Register
        using Addr = Register::Address<0xfffff034,0xfffffffc,0,unsigned>;
        ///NFIQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nfiq{}; 
        ///NIRQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nirq{}; 
    }
    namespace AicEoicr{    ///<End of Interrupt Command Register
        using Addr = Register::Address<0xfffff038,0xfffffffe,0,unsigned>;
        ///Interrupt Processing Complete Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endit{}; 
    }
    namespace AicSpu{    ///<Spurious Interrupt Vector Register
        using Addr = Register::Address<0xfffff03c,0x00000000,0,unsigned>;
        ///Spurious Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sivr{}; 
    }
    namespace AicIecr{    ///<Interrupt Enable Command Register
        using Addr = Register::Address<0xfffff040,0xfffffffe,0,unsigned>;
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace AicIdcr{    ///<Interrupt Disable Command Register
        using Addr = Register::Address<0xfffff044,0xfffffffe,0,unsigned>;
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intd{}; 
    }
    namespace AicIccr{    ///<Interrupt Clear Command Register
        using Addr = Register::Address<0xfffff048,0xfffffffe,0,unsigned>;
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intclr{}; 
    }
    namespace AicIscr{    ///<Interrupt Set Command Register
        using Addr = Register::Address<0xfffff04c,0xfffffffe,0,unsigned>;
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intset{}; 
    }
    namespace AicFfer{    ///<Fast Forcing Enable Register
        using Addr = Register::Address<0xfffff050,0xfffffffe,0,unsigned>;
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ffen{}; 
    }
    namespace AicFfdr{    ///<Fast Forcing Disable Register
        using Addr = Register::Address<0xfffff054,0xfffffffe,0,unsigned>;
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ffdis{}; 
    }
    namespace AicFfsr{    ///<Fast Forcing Status Register
        using Addr = Register::Address<0xfffff058,0xfffffffe,0,unsigned>;
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ffs{}; 
    }
    namespace AicDcr{    ///<Debug Control Register
        using Addr = Register::Address<0xfffff06c,0xfffffffc,0,unsigned>;
        ///Protection Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prot{}; 
        ///General Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gmsk{}; 
    }
    namespace AicWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xfffff0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace AicWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xfffff0e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
