#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt Controller
    namespace EicConfig0{    ///<Configuration n
        using Addr = Register::Address<0x40001818,0x00000000,0,unsigned>;
        ///Input Sense n Configuration
        enum class sense0Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        namespace sense0ValC{
            constexpr MPL::Value<sense0Val,sense0Val::none> none{};
            constexpr MPL::Value<sense0Val,sense0Val::rise> rise{};
            constexpr MPL::Value<sense0Val,sense0Val::fall> fall{};
            constexpr MPL::Value<sense0Val,sense0Val::both> both{};
            constexpr MPL::Value<sense0Val,sense0Val::high> high{};
            constexpr MPL::Value<sense0Val,sense0Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,sense0Val> sense0{}; 
        ///Filter n Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> filten0{}; 
        ///Input Sense 1 Configuration
        enum class sense1Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense1ValC{
            constexpr MPL::Value<sense1Val,sense1Val::none> none{};
            constexpr MPL::Value<sense1Val,sense1Val::rise> rise{};
            constexpr MPL::Value<sense1Val,sense1Val::fall> fall{};
            constexpr MPL::Value<sense1Val,sense1Val::both> both{};
            constexpr MPL::Value<sense1Val,sense1Val::high> high{};
            constexpr MPL::Value<sense1Val,sense1Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,sense1Val> sense1{}; 
        ///Filter 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> filten1{}; 
        ///Input Sense 2 Configuration
        enum class sense2Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense2ValC{
            constexpr MPL::Value<sense2Val,sense2Val::none> none{};
            constexpr MPL::Value<sense2Val,sense2Val::rise> rise{};
            constexpr MPL::Value<sense2Val,sense2Val::fall> fall{};
            constexpr MPL::Value<sense2Val,sense2Val::both> both{};
            constexpr MPL::Value<sense2Val,sense2Val::high> high{};
            constexpr MPL::Value<sense2Val,sense2Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,sense2Val> sense2{}; 
        ///Filter 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> filten2{}; 
        ///Input Sense 3 Configuration
        enum class sense3Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense3ValC{
            constexpr MPL::Value<sense3Val,sense3Val::none> none{};
            constexpr MPL::Value<sense3Val,sense3Val::rise> rise{};
            constexpr MPL::Value<sense3Val,sense3Val::fall> fall{};
            constexpr MPL::Value<sense3Val,sense3Val::both> both{};
            constexpr MPL::Value<sense3Val,sense3Val::high> high{};
            constexpr MPL::Value<sense3Val,sense3Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sense3Val> sense3{}; 
        ///Filter 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> filten3{}; 
        ///Input Sense 4 Configuration
        enum class sense4Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense4ValC{
            constexpr MPL::Value<sense4Val,sense4Val::none> none{};
            constexpr MPL::Value<sense4Val,sense4Val::rise> rise{};
            constexpr MPL::Value<sense4Val,sense4Val::fall> fall{};
            constexpr MPL::Value<sense4Val,sense4Val::both> both{};
            constexpr MPL::Value<sense4Val,sense4Val::high> high{};
            constexpr MPL::Value<sense4Val,sense4Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,sense4Val> sense4{}; 
        ///Filter 4 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filten4{}; 
        ///Input Sense 5 Configuration
        enum class sense5Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense5ValC{
            constexpr MPL::Value<sense5Val,sense5Val::none> none{};
            constexpr MPL::Value<sense5Val,sense5Val::rise> rise{};
            constexpr MPL::Value<sense5Val,sense5Val::fall> fall{};
            constexpr MPL::Value<sense5Val,sense5Val::both> both{};
            constexpr MPL::Value<sense5Val,sense5Val::high> high{};
            constexpr MPL::Value<sense5Val,sense5Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,sense5Val> sense5{}; 
        ///Filter 5 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> filten5{}; 
        ///Input Sense 6 Configuration
        enum class sense6Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense6ValC{
            constexpr MPL::Value<sense6Val,sense6Val::none> none{};
            constexpr MPL::Value<sense6Val,sense6Val::rise> rise{};
            constexpr MPL::Value<sense6Val,sense6Val::fall> fall{};
            constexpr MPL::Value<sense6Val,sense6Val::both> both{};
            constexpr MPL::Value<sense6Val,sense6Val::high> high{};
            constexpr MPL::Value<sense6Val,sense6Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,sense6Val> sense6{}; 
        ///Filter 6 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> filten6{}; 
        ///Input Sense 7 Configuration
        enum class sense7Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense7ValC{
            constexpr MPL::Value<sense7Val,sense7Val::none> none{};
            constexpr MPL::Value<sense7Val,sense7Val::rise> rise{};
            constexpr MPL::Value<sense7Val,sense7Val::fall> fall{};
            constexpr MPL::Value<sense7Val,sense7Val::both> both{};
            constexpr MPL::Value<sense7Val,sense7Val::high> high{};
            constexpr MPL::Value<sense7Val,sense7Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,sense7Val> sense7{}; 
        ///Filter 7 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> filten7{}; 
    }
    namespace EicConfig1{    ///<Configuration n
        using Addr = Register::Address<0x4000181c,0x00000000,0,unsigned>;
        ///Input Sense n Configuration
        enum class sense0Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        namespace sense0ValC{
            constexpr MPL::Value<sense0Val,sense0Val::none> none{};
            constexpr MPL::Value<sense0Val,sense0Val::rise> rise{};
            constexpr MPL::Value<sense0Val,sense0Val::fall> fall{};
            constexpr MPL::Value<sense0Val,sense0Val::both> both{};
            constexpr MPL::Value<sense0Val,sense0Val::high> high{};
            constexpr MPL::Value<sense0Val,sense0Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,sense0Val> sense0{}; 
        ///Filter n Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> filten0{}; 
        ///Input Sense 1 Configuration
        enum class sense1Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense1ValC{
            constexpr MPL::Value<sense1Val,sense1Val::none> none{};
            constexpr MPL::Value<sense1Val,sense1Val::rise> rise{};
            constexpr MPL::Value<sense1Val,sense1Val::fall> fall{};
            constexpr MPL::Value<sense1Val,sense1Val::both> both{};
            constexpr MPL::Value<sense1Val,sense1Val::high> high{};
            constexpr MPL::Value<sense1Val,sense1Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,sense1Val> sense1{}; 
        ///Filter 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> filten1{}; 
        ///Input Sense 2 Configuration
        enum class sense2Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense2ValC{
            constexpr MPL::Value<sense2Val,sense2Val::none> none{};
            constexpr MPL::Value<sense2Val,sense2Val::rise> rise{};
            constexpr MPL::Value<sense2Val,sense2Val::fall> fall{};
            constexpr MPL::Value<sense2Val,sense2Val::both> both{};
            constexpr MPL::Value<sense2Val,sense2Val::high> high{};
            constexpr MPL::Value<sense2Val,sense2Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,sense2Val> sense2{}; 
        ///Filter 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> filten2{}; 
        ///Input Sense 3 Configuration
        enum class sense3Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense3ValC{
            constexpr MPL::Value<sense3Val,sense3Val::none> none{};
            constexpr MPL::Value<sense3Val,sense3Val::rise> rise{};
            constexpr MPL::Value<sense3Val,sense3Val::fall> fall{};
            constexpr MPL::Value<sense3Val,sense3Val::both> both{};
            constexpr MPL::Value<sense3Val,sense3Val::high> high{};
            constexpr MPL::Value<sense3Val,sense3Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sense3Val> sense3{}; 
        ///Filter 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> filten3{}; 
        ///Input Sense 4 Configuration
        enum class sense4Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense4ValC{
            constexpr MPL::Value<sense4Val,sense4Val::none> none{};
            constexpr MPL::Value<sense4Val,sense4Val::rise> rise{};
            constexpr MPL::Value<sense4Val,sense4Val::fall> fall{};
            constexpr MPL::Value<sense4Val,sense4Val::both> both{};
            constexpr MPL::Value<sense4Val,sense4Val::high> high{};
            constexpr MPL::Value<sense4Val,sense4Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,sense4Val> sense4{}; 
        ///Filter 4 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filten4{}; 
        ///Input Sense 5 Configuration
        enum class sense5Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense5ValC{
            constexpr MPL::Value<sense5Val,sense5Val::none> none{};
            constexpr MPL::Value<sense5Val,sense5Val::rise> rise{};
            constexpr MPL::Value<sense5Val,sense5Val::fall> fall{};
            constexpr MPL::Value<sense5Val,sense5Val::both> both{};
            constexpr MPL::Value<sense5Val,sense5Val::high> high{};
            constexpr MPL::Value<sense5Val,sense5Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,sense5Val> sense5{}; 
        ///Filter 5 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> filten5{}; 
        ///Input Sense 6 Configuration
        enum class sense6Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense6ValC{
            constexpr MPL::Value<sense6Val,sense6Val::none> none{};
            constexpr MPL::Value<sense6Val,sense6Val::rise> rise{};
            constexpr MPL::Value<sense6Val,sense6Val::fall> fall{};
            constexpr MPL::Value<sense6Val,sense6Val::both> both{};
            constexpr MPL::Value<sense6Val,sense6Val::high> high{};
            constexpr MPL::Value<sense6Val,sense6Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,sense6Val> sense6{}; 
        ///Filter 6 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> filten6{}; 
        ///Input Sense 7 Configuration
        enum class sense7Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        namespace sense7ValC{
            constexpr MPL::Value<sense7Val,sense7Val::none> none{};
            constexpr MPL::Value<sense7Val,sense7Val::rise> rise{};
            constexpr MPL::Value<sense7Val,sense7Val::fall> fall{};
            constexpr MPL::Value<sense7Val,sense7Val::both> both{};
            constexpr MPL::Value<sense7Val,sense7Val::high> high{};
            constexpr MPL::Value<sense7Val,sense7Val::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,sense7Val> sense7{}; 
        ///Filter 7 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> filten7{}; 
    }
    namespace EicCtrl{    ///<Control
        using Addr = Register::Address<0x40001800,0xfffffffc,0,unsigned char>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace EicEvctrl{    ///<Event Control
        using Addr = Register::Address<0x40001804,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extinteo0{}; 
        ///External Interrupt 1 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extinteo1{}; 
        ///External Interrupt 2 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extinteo2{}; 
        ///External Interrupt 3 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extinteo3{}; 
        ///External Interrupt 4 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extinteo4{}; 
        ///External Interrupt 5 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extinteo5{}; 
        ///External Interrupt 6 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extinteo6{}; 
        ///External Interrupt 7 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extinteo7{}; 
        ///External Interrupt 8 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extinteo8{}; 
        ///External Interrupt 9 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extinteo9{}; 
        ///External Interrupt 10 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extinteo10{}; 
        ///External Interrupt 11 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extinteo11{}; 
        ///External Interrupt 12 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extinteo12{}; 
        ///External Interrupt 13 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extinteo13{}; 
        ///External Interrupt 14 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extinteo14{}; 
        ///External Interrupt 15 Event Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extinteo15{}; 
    }
    namespace EicIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001808,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        ///External Interrupt 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        ///External Interrupt 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        ///External Interrupt 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        ///External Interrupt 4 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        ///External Interrupt 5 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        ///External Interrupt 6 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        ///External Interrupt 7 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        ///External Interrupt 8 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        ///External Interrupt 9 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        ///External Interrupt 10 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        ///External Interrupt 11 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        ///External Interrupt 12 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        ///External Interrupt 13 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        ///External Interrupt 14 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        ///External Interrupt 15 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
    }
    namespace EicIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x4000180c,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        ///External Interrupt 1 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        ///External Interrupt 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        ///External Interrupt 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        ///External Interrupt 4 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        ///External Interrupt 5 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        ///External Interrupt 6 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        ///External Interrupt 7 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        ///External Interrupt 8 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        ///External Interrupt 9 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        ///External Interrupt 10 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        ///External Interrupt 11 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        ///External Interrupt 12 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        ///External Interrupt 13 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        ///External Interrupt 14 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        ///External Interrupt 15 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
    }
    namespace EicIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001810,0xffff0000,0,unsigned>;
        ///External Interrupt 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        ///External Interrupt 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        ///External Interrupt 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        ///External Interrupt 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        ///External Interrupt 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        ///External Interrupt 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        ///External Interrupt 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        ///External Interrupt 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        ///External Interrupt 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        ///External Interrupt 9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        ///External Interrupt 10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        ///External Interrupt 11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        ///External Interrupt 12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        ///External Interrupt 13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        ///External Interrupt 14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        ///External Interrupt 15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
    }
    namespace EicNmictrl{    ///<Non-Maskable Interrupt Control
        using Addr = Register::Address<0x40001802,0xfffffff0,0,unsigned char>;
        ///Non-Maskable Interrupt Sense
        enum class nmisenseVal {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        namespace nmisenseValC{
            constexpr MPL::Value<nmisenseVal,nmisenseVal::none> none{};
            constexpr MPL::Value<nmisenseVal,nmisenseVal::rise> rise{};
            constexpr MPL::Value<nmisenseVal,nmisenseVal::fall> fall{};
            constexpr MPL::Value<nmisenseVal,nmisenseVal::both> both{};
            constexpr MPL::Value<nmisenseVal,nmisenseVal::high> high{};
            constexpr MPL::Value<nmisenseVal,nmisenseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,nmisenseVal> nmisense{}; 
        ///Non-Maskable Interrupt Filter Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nmifilten{}; 
    }
    namespace EicNmiflag{    ///<Non-Maskable Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001803,0xfffffffe,0,unsigned char>;
        ///Non-Maskable Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
    }
    namespace EicStatus{    ///<Status
        using Addr = Register::Address<0x40001801,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
    namespace EicWakeup{    ///<Wake-Up Enable
        using Addr = Register::Address<0x40001814,0xffff0000,0,unsigned>;
        ///External Interrupt 0 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeupen0{}; 
        ///External Interrupt 1 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeupen1{}; 
        ///External Interrupt 2 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeupen2{}; 
        ///External Interrupt 3 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeupen3{}; 
        ///External Interrupt 4 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeupen4{}; 
        ///External Interrupt 5 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wakeupen5{}; 
        ///External Interrupt 6 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wakeupen6{}; 
        ///External Interrupt 7 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wakeupen7{}; 
        ///External Interrupt 8 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wakeupen8{}; 
        ///External Interrupt 9 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wakeupen9{}; 
        ///External Interrupt 10 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wakeupen10{}; 
        ///External Interrupt 11 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wakeupen11{}; 
        ///External Interrupt 12 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wakeupen12{}; 
        ///External Interrupt 13 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wakeupen13{}; 
        ///External Interrupt 14 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wakeupen14{}; 
        ///External Interrupt 15 Wake-up Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wakeupen15{}; 
    }
}
