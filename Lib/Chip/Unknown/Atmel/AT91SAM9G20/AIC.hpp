#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced Interrupt Controller
    namespace AicSmr0{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff000,0xffffff98,0,unsigned>;
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
    namespace AicSmr1{    ///<Source Mode Register
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
    namespace AicSmr2{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff008,0xffffff98,0,unsigned>;
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
    namespace AicSmr3{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff00c,0xffffff98,0,unsigned>;
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
    namespace AicSmr4{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff010,0xffffff98,0,unsigned>;
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
    namespace AicSmr5{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff014,0xffffff98,0,unsigned>;
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
    namespace AicSmr6{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff018,0xffffff98,0,unsigned>;
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
    namespace AicSmr7{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff01c,0xffffff98,0,unsigned>;
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
    namespace AicSmr8{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff020,0xffffff98,0,unsigned>;
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
    namespace AicSmr9{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff024,0xffffff98,0,unsigned>;
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
    namespace AicSmr10{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff028,0xffffff98,0,unsigned>;
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
    namespace AicSmr11{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff02c,0xffffff98,0,unsigned>;
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
    namespace AicSmr12{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff030,0xffffff98,0,unsigned>;
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
    namespace AicSmr13{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff034,0xffffff98,0,unsigned>;
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
    namespace AicSmr14{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff038,0xffffff98,0,unsigned>;
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
    namespace AicSmr15{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff03c,0xffffff98,0,unsigned>;
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
    namespace AicSmr16{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff040,0xffffff98,0,unsigned>;
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
    namespace AicSmr17{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff044,0xffffff98,0,unsigned>;
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
    namespace AicSmr18{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff048,0xffffff98,0,unsigned>;
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
    namespace AicSmr19{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff04c,0xffffff98,0,unsigned>;
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
    namespace AicSmr20{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff050,0xffffff98,0,unsigned>;
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
    namespace AicSmr21{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff054,0xffffff98,0,unsigned>;
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
    namespace AicSmr22{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff058,0xffffff98,0,unsigned>;
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
    namespace AicSmr23{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff05c,0xffffff98,0,unsigned>;
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
    namespace AicSmr24{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff060,0xffffff98,0,unsigned>;
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
    namespace AicSmr25{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff064,0xffffff98,0,unsigned>;
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
    namespace AicSmr26{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff068,0xffffff98,0,unsigned>;
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
    namespace AicSmr27{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff06c,0xffffff98,0,unsigned>;
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
    namespace AicSmr28{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff070,0xffffff98,0,unsigned>;
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
    namespace AicSmr29{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff074,0xffffff98,0,unsigned>;
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
    namespace AicSmr30{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff078,0xffffff98,0,unsigned>;
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
    namespace AicSmr31{    ///<Source Mode Register
        using Addr = Register::Address<0xfffff07c,0xffffff98,0,unsigned>;
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
    namespace AicSvr0{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff080,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr1{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff084,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr2{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff088,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr3{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff08c,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr4{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff090,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr5{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff094,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr6{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff098,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr7{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff09c,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr8{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0a0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr9{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0a4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr10{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0a8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr11{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0ac,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr12{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0b0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr13{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0b4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr14{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0b8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr15{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0bc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr16{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0c0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr17{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0c4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr18{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0c8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr19{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0cc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr20{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0d0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr21{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0d4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr22{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0d8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr23{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0dc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr24{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0e0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr25{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0e4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr26{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0e8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr27{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0ec,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr28{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0f0,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr29{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0f4,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr30{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0f8,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicSvr31{    ///<Source Vector Register
        using Addr = Register::Address<0xfffff0fc,0x00000000,0,unsigned>;
        ///Source Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vector{}; 
    }
    namespace AicIvr{    ///<Interrupt Vector Register
        using Addr = Register::Address<0xfffff100,0x00000000,0,unsigned>;
        ///Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> irqv{}; 
    }
    namespace AicFvr{    ///<FIQ Interrupt Vector Register
        using Addr = Register::Address<0xfffff104,0x00000000,0,unsigned>;
        ///FIQ Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fiqv{}; 
    }
    namespace AicIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xfffff108,0xffffffe0,0,unsigned>;
        ///Current Interrupt Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqid{}; 
    }
    namespace AicIpr{    ///<Interrupt Pending Register
        using Addr = Register::Address<0xfffff10c,0x00000000,0,unsigned>;
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
    namespace AicImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffff110,0x00000000,0,unsigned>;
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicCisr{    ///<Core Interrupt Status Register
        using Addr = Register::Address<0xfffff114,0xfffffffc,0,unsigned>;
        ///NFIQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nfiq{}; 
        ///NIRQ Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nirq{}; 
    }
    namespace AicIecr{    ///<Interrupt Enable Command Register
        using Addr = Register::Address<0xfffff120,0x00000000,0,unsigned>;
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicIdcr{    ///<Interrupt Disable Command Register
        using Addr = Register::Address<0xfffff124,0x00000000,0,unsigned>;
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicIccr{    ///<Interrupt Clear Command Register
        using Addr = Register::Address<0xfffff128,0x00000000,0,unsigned>;
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicIscr{    ///<Interrupt Set Command Register
        using Addr = Register::Address<0xfffff12c,0x00000000,0,unsigned>;
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fiq{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicEoicr{    ///<End of Interrupt Command Register
        using Addr = Register::Address<0xfffff130,0xffffffff,0,unsigned>;
    }
    namespace AicSpu{    ///<Spurious Interrupt Vector Register
        using Addr = Register::Address<0xfffff134,0x00000000,0,unsigned>;
        ///Spurious Interrupt Vector Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sivr{}; 
    }
    namespace AicDcr{    ///<Debug Control Register
        using Addr = Register::Address<0xfffff138,0xfffffffc,0,unsigned>;
        ///Protection Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prot{}; 
        ///General Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gmsk{}; 
    }
    namespace AicFfer{    ///<Fast Forcing Enable Register
        using Addr = Register::Address<0xfffff140,0x00000001,0,unsigned>;
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Fast Forcing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicFfdr{    ///<Fast Forcing Disable Register
        using Addr = Register::Address<0xfffff144,0x00000001,0,unsigned>;
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Fast Forcing Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace AicFfsr{    ///<Fast Forcing Status Register
        using Addr = Register::Address<0xfffff148,0x00000001,0,unsigned>;
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Fast Forcing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
}
