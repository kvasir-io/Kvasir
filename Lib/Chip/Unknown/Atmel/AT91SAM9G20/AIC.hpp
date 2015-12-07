#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced Interrupt Controller
    namespace AicSmr0{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff000,0xffffff98,0,unsigned>;
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
    namespace AicSmr1{    ///<Source Mode Register
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
    namespace AicSmr2{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff008,0xffffff98,0,unsigned>;
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
    namespace AicSmr3{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff00c,0xffffff98,0,unsigned>;
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
    namespace AicSmr4{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff010,0xffffff98,0,unsigned>;
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
    namespace AicSmr5{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff014,0xffffff98,0,unsigned>;
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
    namespace AicSmr6{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff018,0xffffff98,0,unsigned>;
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
    namespace AicSmr7{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff01c,0xffffff98,0,unsigned>;
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
    namespace AicSmr8{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff020,0xffffff98,0,unsigned>;
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
    namespace AicSmr9{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff024,0xffffff98,0,unsigned>;
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
    namespace AicSmr10{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff028,0xffffff98,0,unsigned>;
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
    namespace AicSmr11{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff02c,0xffffff98,0,unsigned>;
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
    namespace AicSmr12{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff030,0xffffff98,0,unsigned>;
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
    namespace AicSmr13{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff034,0xffffff98,0,unsigned>;
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
    namespace AicSmr14{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff038,0xffffff98,0,unsigned>;
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
    namespace AicSmr15{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff03c,0xffffff98,0,unsigned>;
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
    namespace AicSmr16{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff040,0xffffff98,0,unsigned>;
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
    namespace AicSmr17{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff044,0xffffff98,0,unsigned>;
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
    namespace AicSmr18{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff048,0xffffff98,0,unsigned>;
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
    namespace AicSmr19{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff04c,0xffffff98,0,unsigned>;
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
    namespace AicSmr20{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff050,0xffffff98,0,unsigned>;
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
    namespace AicSmr21{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff054,0xffffff98,0,unsigned>;
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
    namespace AicSmr22{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff058,0xffffff98,0,unsigned>;
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
    namespace AicSmr23{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff05c,0xffffff98,0,unsigned>;
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
    namespace AicSmr24{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff060,0xffffff98,0,unsigned>;
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
    namespace AicSmr25{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff064,0xffffff98,0,unsigned>;
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
    namespace AicSmr26{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff068,0xffffff98,0,unsigned>;
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
    namespace AicSmr27{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff06c,0xffffff98,0,unsigned>;
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
    namespace AicSmr28{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff070,0xffffff98,0,unsigned>;
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
    namespace AicSmr29{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff074,0xffffff98,0,unsigned>;
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
    namespace AicSmr30{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff078,0xffffff98,0,unsigned>;
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
    namespace AicSmr31{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff07c,0xffffff98,0,unsigned>;
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
    namespace AicSvr0{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff080,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr1{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff084,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr2{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff088,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr3{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff08c,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr4{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff090,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr5{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff094,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr6{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff098,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr7{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff09c,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr8{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0a0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr9{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0a4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr10{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0a8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr11{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0ac,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr12{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0b0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr13{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0b4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr14{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0b8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr15{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0bc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr16{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0c0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr17{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0c4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr18{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0c8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr19{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0cc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr20{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0d0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr21{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0d4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr22{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0d8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr23{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0dc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr24{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0e0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr25{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0e4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr26{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0e8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr27{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0ec,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr28{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0f0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr29{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0f4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr30{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0f8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicSvr31{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0fc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
        namespace VectorValC{
        }
    }
    namespace AicIvr{    ///<Interrupt Vector Register
        using Addr = Register::Address<0xfffff100,0x00000000,0,unsigned>;
        ///Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> irqv{}; 
        namespace IrqvValC{
        }
    }
    namespace AicFvr{    ///<FIQ Interrupt Vector Register
        using Addr = Register::Address<0xfffff104,0x00000000,0,unsigned>;
        ///FIQ Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fiqv{}; 
        namespace FiqvValC{
        }
    }
    namespace AicIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffff108,0xffffffe0,0,unsigned>;
        ///Current Interrupt Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqid{}; 
        namespace IrqidValC{
        }
    }
    namespace AicIpr{    ///<Interrupt Pending Register
        using Addr = Register::Address<0xfffff10c,0x00000000,0,unsigned>;
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
    namespace AicImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffff110,0x00000000,0,unsigned>;
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        namespace FiqValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicCisr{    ///<Core Interrupt Status Register
        using Addr = Register::Address<0xfffff114,0xfffffffc,0,unsigned>;
        ///NFIQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nfiq{}; 
        namespace NfiqValC{
        }
        ///NIRQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nirq{}; 
        namespace NirqValC{
        }
    }
    namespace AicIecr{    ///<Interrupt Enable Command Register
        using Addr = Register::Address<0xfffff120,0x00000000,0,unsigned>;
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        namespace FiqValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicIdcr{    ///<Interrupt Disable Command Register
        using Addr = Register::Address<0xfffff124,0x00000000,0,unsigned>;
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        namespace FiqValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicIccr{    ///<Interrupt Clear Command Register
        using Addr = Register::Address<0xfffff128,0x00000000,0,unsigned>;
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        namespace FiqValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicIscr{    ///<Interrupt Set Command Register
        using Addr = Register::Address<0xfffff12c,0x00000000,0,unsigned>;
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        namespace FiqValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicEoicr{    ///<End of Interrupt Command Register
        using Addr = Register::Address<0xfffff130,0xffffffff,0,unsigned>;
    }
    namespace AicSpu{    ///<Spurious Interrupt Vector Register
        using Addr = Register::Address<0xfffff134,0x00000000,0,unsigned>;
        ///Spurious Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sivr{}; 
        namespace SivrValC{
        }
    }
    namespace AicDcr{    ///<Debug Control Register
        using Addr = Register::Address<0xfffff138,0xfffffffc,0,unsigned>;
        ///Protection Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
        ///General Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gmsk{}; 
        namespace GmskValC{
        }
    }
    namespace AicFfer{    ///<Fast Forcing Enable Register
        using Addr = Register::Address<0xfffff140,0x00000001,0,unsigned>;
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicFfdr{    ///<Fast Forcing Disable Register
        using Addr = Register::Address<0xfffff144,0x00000001,0,unsigned>;
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
    namespace AicFfsr{    ///<Fast Forcing Status Register
        using Addr = Register::Address<0xfffff148,0x00000001,0,unsigned>;
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        namespace SysValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        namespace Pid2ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        namespace Pid3ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        namespace Pid4ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        namespace Pid5ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        namespace Pid6ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        namespace Pid7ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        namespace Pid8ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        namespace Pid9ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        namespace Pid10ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        namespace Pid11ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        namespace Pid12ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        namespace Pid13ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        namespace Pid14ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        namespace Pid15ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        namespace Pid16ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        namespace Pid17ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        namespace Pid18ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        namespace Pid19ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        namespace Pid20ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        namespace Pid21ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        namespace Pid22ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        namespace Pid23ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        namespace Pid24ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        namespace Pid25ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        namespace Pid26ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        namespace Pid27ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        namespace Pid28ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        namespace Pid29ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        namespace Pid30ValC{
        }
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
        namespace Pid31ValC{
        }
    }
}
