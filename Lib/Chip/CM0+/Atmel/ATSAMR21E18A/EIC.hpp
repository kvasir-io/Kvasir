#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt Controller
    namespace EicConfig0{    ///<Configuration n
        using Addr = Register::Address<0x40001818,0x00000000,0,unsigned>;
        ///Input Sense n Configuration
        enum class Sense0Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Sense0Val> sense0{}; 
        namespace Sense0ValC{
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::none> none{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::both> both{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::high> high{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::low> low{};
        }
        ///Filter n Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> filten0{}; 
        namespace Filten0ValC{
        }
        ///Input Sense 1 Configuration
        enum class Sense1Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Sense1Val> sense1{}; 
        namespace Sense1ValC{
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::none> none{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::both> both{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::high> high{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::low> low{};
        }
        ///Filter 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> filten1{}; 
        namespace Filten1ValC{
        }
        ///Input Sense 2 Configuration
        enum class Sense2Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Sense2Val> sense2{}; 
        namespace Sense2ValC{
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::none> none{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::both> both{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::high> high{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::low> low{};
        }
        ///Filter 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> filten2{}; 
        namespace Filten2ValC{
        }
        ///Input Sense 3 Configuration
        enum class Sense3Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Sense3Val> sense3{}; 
        namespace Sense3ValC{
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::none> none{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::both> both{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::high> high{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::low> low{};
        }
        ///Filter 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> filten3{}; 
        namespace Filten3ValC{
        }
        ///Input Sense 4 Configuration
        enum class Sense4Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Sense4Val> sense4{}; 
        namespace Sense4ValC{
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::none> none{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::both> both{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::high> high{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::low> low{};
        }
        ///Filter 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filten4{}; 
        namespace Filten4ValC{
        }
        ///Input Sense 5 Configuration
        enum class Sense5Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Sense5Val> sense5{}; 
        namespace Sense5ValC{
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::none> none{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::both> both{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::high> high{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::low> low{};
        }
        ///Filter 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> filten5{}; 
        namespace Filten5ValC{
        }
        ///Input Sense 6 Configuration
        enum class Sense6Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,Sense6Val> sense6{}; 
        namespace Sense6ValC{
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::none> none{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::both> both{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::high> high{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::low> low{};
        }
        ///Filter 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> filten6{}; 
        namespace Filten6ValC{
        }
        ///Input Sense 7 Configuration
        enum class Sense7Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,Sense7Val> sense7{}; 
        namespace Sense7ValC{
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::none> none{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::both> both{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::high> high{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::low> low{};
        }
        ///Filter 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> filten7{}; 
        namespace Filten7ValC{
        }
    }
    namespace EicConfig1{    ///<Configuration n
        using Addr = Register::Address<0x4000181c,0x00000000,0,unsigned>;
        ///Input Sense n Configuration
        enum class Sense0Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Sense0Val> sense0{}; 
        namespace Sense0ValC{
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::none> none{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::both> both{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::high> high{};
            constexpr Register::FieldValue<decltype(sense0),Sense0Val::low> low{};
        }
        ///Filter n Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> filten0{}; 
        namespace Filten0ValC{
        }
        ///Input Sense 1 Configuration
        enum class Sense1Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Sense1Val> sense1{}; 
        namespace Sense1ValC{
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::none> none{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::both> both{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::high> high{};
            constexpr Register::FieldValue<decltype(sense1),Sense1Val::low> low{};
        }
        ///Filter 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> filten1{}; 
        namespace Filten1ValC{
        }
        ///Input Sense 2 Configuration
        enum class Sense2Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Sense2Val> sense2{}; 
        namespace Sense2ValC{
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::none> none{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::both> both{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::high> high{};
            constexpr Register::FieldValue<decltype(sense2),Sense2Val::low> low{};
        }
        ///Filter 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> filten2{}; 
        namespace Filten2ValC{
        }
        ///Input Sense 3 Configuration
        enum class Sense3Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Sense3Val> sense3{}; 
        namespace Sense3ValC{
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::none> none{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::both> both{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::high> high{};
            constexpr Register::FieldValue<decltype(sense3),Sense3Val::low> low{};
        }
        ///Filter 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> filten3{}; 
        namespace Filten3ValC{
        }
        ///Input Sense 4 Configuration
        enum class Sense4Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Sense4Val> sense4{}; 
        namespace Sense4ValC{
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::none> none{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::both> both{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::high> high{};
            constexpr Register::FieldValue<decltype(sense4),Sense4Val::low> low{};
        }
        ///Filter 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filten4{}; 
        namespace Filten4ValC{
        }
        ///Input Sense 5 Configuration
        enum class Sense5Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Sense5Val> sense5{}; 
        namespace Sense5ValC{
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::none> none{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::both> both{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::high> high{};
            constexpr Register::FieldValue<decltype(sense5),Sense5Val::low> low{};
        }
        ///Filter 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> filten5{}; 
        namespace Filten5ValC{
        }
        ///Input Sense 6 Configuration
        enum class Sense6Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,Sense6Val> sense6{}; 
        namespace Sense6ValC{
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::none> none{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::both> both{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::high> high{};
            constexpr Register::FieldValue<decltype(sense6),Sense6Val::low> low{};
        }
        ///Filter 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> filten6{}; 
        namespace Filten6ValC{
        }
        ///Input Sense 7 Configuration
        enum class Sense7Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,Sense7Val> sense7{}; 
        namespace Sense7ValC{
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::none> none{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::both> both{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::high> high{};
            constexpr Register::FieldValue<decltype(sense7),Sense7Val::low> low{};
        }
        ///Filter 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> filten7{}; 
        namespace Filten7ValC{
        }
    }
    namespace EicCtrl{    ///<Control
        using Addr = Register::Address<0x40001800,0xfffffffc,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace EicEvctrl{    ///<Event Control
        using Addr = Register::Address<0x40001804,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extinteo0{}; 
        namespace Extinteo0ValC{
        }
        ///External Interrupt 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extinteo1{}; 
        namespace Extinteo1ValC{
        }
        ///External Interrupt 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extinteo2{}; 
        namespace Extinteo2ValC{
        }
        ///External Interrupt 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extinteo3{}; 
        namespace Extinteo3ValC{
        }
        ///External Interrupt 4 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extinteo4{}; 
        namespace Extinteo4ValC{
        }
        ///External Interrupt 5 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extinteo5{}; 
        namespace Extinteo5ValC{
        }
        ///External Interrupt 6 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extinteo6{}; 
        namespace Extinteo6ValC{
        }
        ///External Interrupt 7 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extinteo7{}; 
        namespace Extinteo7ValC{
        }
        ///External Interrupt 8 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extinteo8{}; 
        namespace Extinteo8ValC{
        }
        ///External Interrupt 9 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extinteo9{}; 
        namespace Extinteo9ValC{
        }
        ///External Interrupt 10 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extinteo10{}; 
        namespace Extinteo10ValC{
        }
        ///External Interrupt 11 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extinteo11{}; 
        namespace Extinteo11ValC{
        }
        ///External Interrupt 12 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extinteo12{}; 
        namespace Extinteo12ValC{
        }
        ///External Interrupt 13 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extinteo13{}; 
        namespace Extinteo13ValC{
        }
        ///External Interrupt 14 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extinteo14{}; 
        namespace Extinteo14ValC{
        }
        ///External Interrupt 15 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extinteo15{}; 
        namespace Extinteo15ValC{
        }
    }
    namespace EicIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001808,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
        ///External Interrupt 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///External Interrupt 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///External Interrupt 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///External Interrupt 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        ///External Interrupt 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        ///External Interrupt 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        ///External Interrupt 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
        ///External Interrupt 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        namespace Extint8ValC{
        }
        ///External Interrupt 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        namespace Extint9ValC{
        }
        ///External Interrupt 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        namespace Extint10ValC{
        }
        ///External Interrupt 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        namespace Extint11ValC{
        }
        ///External Interrupt 12 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        namespace Extint12ValC{
        }
        ///External Interrupt 13 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        namespace Extint13ValC{
        }
        ///External Interrupt 14 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        namespace Extint14ValC{
        }
        ///External Interrupt 15 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
        namespace Extint15ValC{
        }
    }
    namespace EicIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x4000180c,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
        ///External Interrupt 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///External Interrupt 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///External Interrupt 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///External Interrupt 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        ///External Interrupt 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        ///External Interrupt 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        ///External Interrupt 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
        ///External Interrupt 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        namespace Extint8ValC{
        }
        ///External Interrupt 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        namespace Extint9ValC{
        }
        ///External Interrupt 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        namespace Extint10ValC{
        }
        ///External Interrupt 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        namespace Extint11ValC{
        }
        ///External Interrupt 12 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        namespace Extint12ValC{
        }
        ///External Interrupt 13 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        namespace Extint13ValC{
        }
        ///External Interrupt 14 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        namespace Extint14ValC{
        }
        ///External Interrupt 15 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
        namespace Extint15ValC{
        }
    }
    namespace EicIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001810,0xffff0000,0,unsigned>;
        ///External Interrupt 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
        ///External Interrupt 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///External Interrupt 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///External Interrupt 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///External Interrupt 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        ///External Interrupt 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        ///External Interrupt 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        ///External Interrupt 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
        ///External Interrupt 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        namespace Extint8ValC{
        }
        ///External Interrupt 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        namespace Extint9ValC{
        }
        ///External Interrupt 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        namespace Extint10ValC{
        }
        ///External Interrupt 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        namespace Extint11ValC{
        }
        ///External Interrupt 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        namespace Extint12ValC{
        }
        ///External Interrupt 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        namespace Extint13ValC{
        }
        ///External Interrupt 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        namespace Extint14ValC{
        }
        ///External Interrupt 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
        namespace Extint15ValC{
        }
    }
    namespace EicNmictrl{    ///<Non-Maskable Interrupt Control
        using Addr = Register::Address<0x40001802,0xfffffff0,0,unsigned char>;
        ///Non-Maskable Interrupt Sense
        enum class NmisenseVal {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,NmisenseVal> nmisense{}; 
        namespace NmisenseValC{
            constexpr Register::FieldValue<decltype(nmisense),NmisenseVal::none> none{};
            constexpr Register::FieldValue<decltype(nmisense),NmisenseVal::rise> rise{};
            constexpr Register::FieldValue<decltype(nmisense),NmisenseVal::fall> fall{};
            constexpr Register::FieldValue<decltype(nmisense),NmisenseVal::both> both{};
            constexpr Register::FieldValue<decltype(nmisense),NmisenseVal::high> high{};
            constexpr Register::FieldValue<decltype(nmisense),NmisenseVal::low> low{};
        }
        ///Non-Maskable Interrupt Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nmifilten{}; 
        namespace NmifiltenValC{
        }
    }
    namespace EicNmiflag{    ///<Non-Maskable Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001803,0xfffffffe,0,unsigned char>;
        ///Non-Maskable Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
        namespace NmiValC{
        }
    }
    namespace EicStatus{    ///<Status
        using Addr = Register::Address<0x40001801,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
        namespace SyncbusyValC{
        }
    }
    namespace EicWakeup{    ///<Wake-Up Enable
        using Addr = Register::Address<0x40001814,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeupen0{}; 
        namespace Wakeupen0ValC{
        }
        ///External Interrupt 1 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeupen1{}; 
        namespace Wakeupen1ValC{
        }
        ///External Interrupt 2 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeupen2{}; 
        namespace Wakeupen2ValC{
        }
        ///External Interrupt 3 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeupen3{}; 
        namespace Wakeupen3ValC{
        }
        ///External Interrupt 4 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeupen4{}; 
        namespace Wakeupen4ValC{
        }
        ///External Interrupt 5 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wakeupen5{}; 
        namespace Wakeupen5ValC{
        }
        ///External Interrupt 6 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wakeupen6{}; 
        namespace Wakeupen6ValC{
        }
        ///External Interrupt 7 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wakeupen7{}; 
        namespace Wakeupen7ValC{
        }
        ///External Interrupt 8 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wakeupen8{}; 
        namespace Wakeupen8ValC{
        }
        ///External Interrupt 9 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wakeupen9{}; 
        namespace Wakeupen9ValC{
        }
        ///External Interrupt 10 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wakeupen10{}; 
        namespace Wakeupen10ValC{
        }
        ///External Interrupt 11 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wakeupen11{}; 
        namespace Wakeupen11ValC{
        }
        ///External Interrupt 12 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wakeupen12{}; 
        namespace Wakeupen12ValC{
        }
        ///External Interrupt 13 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeupen13{}; 
        namespace Wakeupen13ValC{
        }
        ///External Interrupt 14 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wakeupen14{}; 
        namespace Wakeupen14ValC{
        }
        ///External Interrupt 15 Wake-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wakeupen15{}; 
        namespace Wakeupen15ValC{
        }
    }
}
