#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt Controller
    namespace NonenvicIser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///no description available
        enum class Setena0Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 16 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 16 interrupt; read: Reserved iv 16 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Setena0Val> setena0{}; 
        namespace Setena0ValC{
            constexpr Register::FieldValue<decltype(setena0),Setena0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena0),Setena0Val::v1> v1{};
        }
        ///no description available
        enum class Setena1Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 17 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 17 interrupt; read: Reserved iv 17 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Setena1Val> setena1{}; 
        namespace Setena1ValC{
            constexpr Register::FieldValue<decltype(setena1),Setena1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena1),Setena1Val::v1> v1{};
        }
        ///no description available
        enum class Setena2Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 18 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 18 interrupt; read: Reserved iv 18 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Setena2Val> setena2{}; 
        namespace Setena2ValC{
            constexpr Register::FieldValue<decltype(setena2),Setena2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena2),Setena2Val::v1> v1{};
        }
        ///no description available
        enum class Setena3Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 19 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 19 interrupt; read: Reserved iv 19 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Setena3Val> setena3{}; 
        namespace Setena3ValC{
            constexpr Register::FieldValue<decltype(setena3),Setena3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena3),Setena3Val::v1> v1{};
        }
        ///no description available
        enum class Setena4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 20 interrupt; read: Reserved iv 20 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Setena4Val> setena4{}; 
        namespace Setena4ValC{
            constexpr Register::FieldValue<decltype(setena4),Setena4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena4),Setena4Val::v1> v1{};
        }
        ///no description available
        enum class Setena5Val {
            v0=0x00000000,     ///<write: no effect; read: Command complete and read collision interrupt disabled
            v1=0x00000001,     ///<write: enable Command complete and read collision interrupt; read: Command complete and read collision interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Setena5Val> setena5{}; 
        namespace Setena5ValC{
            constexpr Register::FieldValue<decltype(setena5),Setena5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena5),Setena5Val::v1> v1{};
        }
        ///no description available
        enum class Setena6Val {
            v0=0x00000000,     ///<write: no effect; read: Low-voltage detect, low-voltage warning interrupt disabled
            v1=0x00000001,     ///<write: enable Low-voltage detect, low-voltage warning interrupt; read: Low-voltage detect, low-voltage warning interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Setena6Val> setena6{}; 
        namespace Setena6ValC{
            constexpr Register::FieldValue<decltype(setena6),Setena6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena6),Setena6Val::v1> v1{};
        }
        ///no description available
        enum class Setena7Val {
            v0=0x00000000,     ///<write: no effect; read: Low Leakage Wakeup interrupt disabled
            v1=0x00000001,     ///<write: enable Low Leakage Wakeup interrupt; read: Low Leakage Wakeup interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Setena7Val> setena7{}; 
        namespace Setena7ValC{
            constexpr Register::FieldValue<decltype(setena7),Setena7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena7),Setena7Val::v1> v1{};
        }
        ///no description available
        enum class Setena8Val {
            v0=0x00000000,     ///<write: no effect; read: Inter-Integrated Circuit 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Inter-Integrated Circuit 0 interrupt; read: Inter-Integrated Circuit 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Setena8Val> setena8{}; 
        namespace Setena8ValC{
            constexpr Register::FieldValue<decltype(setena8),Setena8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena8),Setena8Val::v1> v1{};
        }
        ///no description available
        enum class Setena9Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 25 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 25 interrupt; read: Reserved iv 25 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Setena9Val> setena9{}; 
        namespace Setena9ValC{
            constexpr Register::FieldValue<decltype(setena9),Setena9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena9),Setena9Val::v1> v1{};
        }
        ///no description available
        enum class Setena10Val {
            v0=0x00000000,     ///<write: no effect; read: Serial Peripheral Interface 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Serial Peripheral Interface 0 interrupt; read: Serial Peripheral Interface 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Setena10Val> setena10{}; 
        namespace Setena10ValC{
            constexpr Register::FieldValue<decltype(setena10),Setena10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena10),Setena10Val::v1> v1{};
        }
        ///no description available
        enum class Setena11Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 27 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 27 interrupt; read: Reserved iv 27 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Setena11Val> setena11{}; 
        namespace Setena11ValC{
            constexpr Register::FieldValue<decltype(setena11),Setena11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena11),Setena11Val::v1> v1{};
        }
        ///no description available
        enum class Setena12Val {
            v0=0x00000000,     ///<write: no effect; read: LPUART0 status and error interrupt disabled
            v1=0x00000001,     ///<write: enable LPUART0 status and error interrupt; read: LPUART0 status and error interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Setena12Val> setena12{}; 
        namespace Setena12ValC{
            constexpr Register::FieldValue<decltype(setena12),Setena12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena12),Setena12Val::v1> v1{};
        }
        ///no description available
        enum class Setena13Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 29 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 29 interrupt; read: Reserved iv 29 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Setena13Val> setena13{}; 
        namespace Setena13ValC{
            constexpr Register::FieldValue<decltype(setena13),Setena13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena13),Setena13Val::v1> v1{};
        }
        ///no description available
        enum class Setena14Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 30 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 30 interrupt; read: Reserved iv 30 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Setena14Val> setena14{}; 
        namespace Setena14ValC{
            constexpr Register::FieldValue<decltype(setena14),Setena14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena14),Setena14Val::v1> v1{};
        }
        ///no description available
        enum class Setena15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-Digital Converter 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Analog-to-Digital Converter 0 interrupt; read: Analog-to-Digital Converter 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Setena15Val> setena15{}; 
        namespace Setena15ValC{
            constexpr Register::FieldValue<decltype(setena15),Setena15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena15),Setena15Val::v1> v1{};
        }
        ///no description available
        enum class Setena16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Comparator 0 interrupt; read: Comparator 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Setena16Val> setena16{}; 
        namespace Setena16ValC{
            constexpr Register::FieldValue<decltype(setena16),Setena16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena16),Setena16Val::v1> v1{};
        }
        ///no description available
        enum class Setena17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Timer/PWM module 0 interrupt; read: Timer/PWM module 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Setena17Val> setena17{}; 
        namespace Setena17ValC{
            constexpr Register::FieldValue<decltype(setena17),Setena17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena17),Setena17Val::v1> v1{};
        }
        ///no description available
        enum class Setena18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 1 interrupt disabled
            v1=0x00000001,     ///<write: enable Timer/PWM module 1 interrupt; read: Timer/PWM module 1 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Setena18Val> setena18{}; 
        namespace Setena18ValC{
            constexpr Register::FieldValue<decltype(setena18),Setena18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena18),Setena18Val::v1> v1{};
        }
        ///no description available
        enum class Setena19Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 35 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 35 interrupt; read: Reserved iv 35 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Setena19Val> setena19{}; 
        namespace Setena19ValC{
            constexpr Register::FieldValue<decltype(setena19),Setena19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena19),Setena19Val::v1> v1{};
        }
        ///no description available
        enum class Setena20Val {
            v0=0x00000000,     ///<write: no effect; read: Real-time counter interrupt disabled
            v1=0x00000001,     ///<write: enable Real-time counter interrupt; read: Real-time counter interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Setena20Val> setena20{}; 
        namespace Setena20ValC{
            constexpr Register::FieldValue<decltype(setena20),Setena20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena20),Setena20Val::v1> v1{};
        }
        ///no description available
        enum class Setena21Val {
            v0=0x00000000,     ///<write: no effect; read: RTC seconds interrupt disabled
            v1=0x00000001,     ///<write: enable RTC seconds interrupt; read: RTC seconds interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Setena21Val> setena21{}; 
        namespace Setena21ValC{
            constexpr Register::FieldValue<decltype(setena21),Setena21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena21),Setena21Val::v1> v1{};
        }
        ///no description available
        enum class Setena22Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 38 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 38 interrupt; read: Reserved iv 38 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Setena22Val> setena22{}; 
        namespace Setena22ValC{
            constexpr Register::FieldValue<decltype(setena22),Setena22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena22),Setena22Val::v1> v1{};
        }
        ///no description available
        enum class Setena23Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 39 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 39 interrupt; read: Reserved iv 39 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Setena23Val> setena23{}; 
        namespace Setena23ValC{
            constexpr Register::FieldValue<decltype(setena23),Setena23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena23),Setena23Val::v1> v1{};
        }
        ///no description available
        enum class Setena24Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 40 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 40 interrupt; read: Reserved iv 40 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Setena24Val> setena24{}; 
        namespace Setena24ValC{
            constexpr Register::FieldValue<decltype(setena24),Setena24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena24),Setena24Val::v1> v1{};
        }
        ///no description available
        enum class Setena25Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 41 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 41 interrupt; read: Reserved iv 41 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Setena25Val> setena25{}; 
        namespace Setena25ValC{
            constexpr Register::FieldValue<decltype(setena25),Setena25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena25),Setena25Val::v1> v1{};
        }
        ///no description available
        enum class Setena26Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 42 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 42 interrupt; read: Reserved iv 42 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Setena26Val> setena26{}; 
        namespace Setena26ValC{
            constexpr Register::FieldValue<decltype(setena26),Setena26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena26),Setena26Val::v1> v1{};
        }
        ///no description available
        enum class Setena27Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 43 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 43 interrupt; read: Reserved iv 43 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Setena27Val> setena27{}; 
        namespace Setena27ValC{
            constexpr Register::FieldValue<decltype(setena27),Setena27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena27),Setena27Val::v1> v1{};
        }
        ///no description available
        enum class Setena28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt disabled
            v1=0x00000001,     ///<write: enable Low-Power Timer interrupt; read: Low-Power Timer interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Setena28Val> setena28{}; 
        namespace Setena28ValC{
            constexpr Register::FieldValue<decltype(setena28),Setena28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena28),Setena28Val::v1> v1{};
        }
        ///no description available
        enum class Setena29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 45 interrupt; read: Reserved iv 45 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Setena29Val> setena29{}; 
        namespace Setena29ValC{
            constexpr Register::FieldValue<decltype(setena29),Setena29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena29),Setena29Val::v1> v1{};
        }
        ///no description available
        enum class Setena30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA Pin detect interrupt disabled
            v1=0x00000001,     ///<write: enable PORTA Pin detect interrupt; read: PORTA Pin detect interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Setena30Val> setena30{}; 
        namespace Setena30ValC{
            constexpr Register::FieldValue<decltype(setena30),Setena30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena30),Setena30Val::v1> v1{};
        }
        ///no description available
        enum class Setena31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTB Pin detect interrupt disabled
            v1=0x00000001,     ///<write: enable PORTB Pin detect interrupt; read: PORTB Pin detect interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Setena31Val> setena31{}; 
        namespace Setena31ValC{
            constexpr Register::FieldValue<decltype(setena31),Setena31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setena31),Setena31Val::v1> v1{};
        }
    }
    namespace NonenvicIcer{    ///<Interrupt Clear Enable Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///no description available
        enum class Clrena0Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 16 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 16 interrupt; read: Reserved iv 16 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Clrena0Val> clrena0{}; 
        namespace Clrena0ValC{
            constexpr Register::FieldValue<decltype(clrena0),Clrena0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena0),Clrena0Val::v1> v1{};
        }
        ///no description available
        enum class Clrena1Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 17 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 17 interrupt; read: Reserved iv 17 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Clrena1Val> clrena1{}; 
        namespace Clrena1ValC{
            constexpr Register::FieldValue<decltype(clrena1),Clrena1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena1),Clrena1Val::v1> v1{};
        }
        ///no description available
        enum class Clrena2Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 18 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 18 interrupt; read: Reserved iv 18 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Clrena2Val> clrena2{}; 
        namespace Clrena2ValC{
            constexpr Register::FieldValue<decltype(clrena2),Clrena2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena2),Clrena2Val::v1> v1{};
        }
        ///no description available
        enum class Clrena3Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 19 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 19 interrupt; read: Reserved iv 19 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Clrena3Val> clrena3{}; 
        namespace Clrena3ValC{
            constexpr Register::FieldValue<decltype(clrena3),Clrena3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena3),Clrena3Val::v1> v1{};
        }
        ///no description available
        enum class Clrena4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 20 interrupt; read: Reserved iv 20 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Clrena4Val> clrena4{}; 
        namespace Clrena4ValC{
            constexpr Register::FieldValue<decltype(clrena4),Clrena4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena4),Clrena4Val::v1> v1{};
        }
        ///no description available
        enum class Clrena5Val {
            v0=0x00000000,     ///<write: no effect; read: Command complete and read collision interrupt disabled
            v1=0x00000001,     ///<write: disable Command complete and read collision interrupt; read: Command complete and read collision interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Clrena5Val> clrena5{}; 
        namespace Clrena5ValC{
            constexpr Register::FieldValue<decltype(clrena5),Clrena5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena5),Clrena5Val::v1> v1{};
        }
        ///no description available
        enum class Clrena6Val {
            v0=0x00000000,     ///<write: no effect; read: Low-voltage detect, low-voltage warning interrupt disabled
            v1=0x00000001,     ///<write: disable Low-voltage detect, low-voltage warning interrupt; read: Low-voltage detect, low-voltage warning interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Clrena6Val> clrena6{}; 
        namespace Clrena6ValC{
            constexpr Register::FieldValue<decltype(clrena6),Clrena6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena6),Clrena6Val::v1> v1{};
        }
        ///no description available
        enum class Clrena7Val {
            v0=0x00000000,     ///<write: no effect; read: Low Leakage Wakeup interrupt disabled
            v1=0x00000001,     ///<write: disable Low Leakage Wakeup interrupt; read: Low Leakage Wakeup interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Clrena7Val> clrena7{}; 
        namespace Clrena7ValC{
            constexpr Register::FieldValue<decltype(clrena7),Clrena7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena7),Clrena7Val::v1> v1{};
        }
        ///no description available
        enum class Clrena8Val {
            v0=0x00000000,     ///<write: no effect; read: Inter-Integrated Circuit 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Inter-Integrated Circuit 0 interrupt; read: Inter-Integrated Circuit 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Clrena8Val> clrena8{}; 
        namespace Clrena8ValC{
            constexpr Register::FieldValue<decltype(clrena8),Clrena8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena8),Clrena8Val::v1> v1{};
        }
        ///no description available
        enum class Clrena9Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 25 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 25 interrupt; read: Reserved iv 25 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Clrena9Val> clrena9{}; 
        namespace Clrena9ValC{
            constexpr Register::FieldValue<decltype(clrena9),Clrena9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena9),Clrena9Val::v1> v1{};
        }
        ///no description available
        enum class Clrena10Val {
            v0=0x00000000,     ///<write: no effect; read: Serial Peripheral Interface 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Serial Peripheral Interface 0 interrupt; read: Serial Peripheral Interface 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Clrena10Val> clrena10{}; 
        namespace Clrena10ValC{
            constexpr Register::FieldValue<decltype(clrena10),Clrena10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena10),Clrena10Val::v1> v1{};
        }
        ///no description available
        enum class Clrena11Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 27 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 27 interrupt; read: Reserved iv 27 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Clrena11Val> clrena11{}; 
        namespace Clrena11ValC{
            constexpr Register::FieldValue<decltype(clrena11),Clrena11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena11),Clrena11Val::v1> v1{};
        }
        ///no description available
        enum class Clrena12Val {
            v0=0x00000000,     ///<write: no effect; read: LPUART0 status and error interrupt disabled
            v1=0x00000001,     ///<write: disable LPUART0 status and error interrupt; read: LPUART0 status and error interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Clrena12Val> clrena12{}; 
        namespace Clrena12ValC{
            constexpr Register::FieldValue<decltype(clrena12),Clrena12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena12),Clrena12Val::v1> v1{};
        }
        ///no description available
        enum class Clrena13Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 29 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 29 interrupt; read: Reserved iv 29 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Clrena13Val> clrena13{}; 
        namespace Clrena13ValC{
            constexpr Register::FieldValue<decltype(clrena13),Clrena13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena13),Clrena13Val::v1> v1{};
        }
        ///no description available
        enum class Clrena14Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 30 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 30 interrupt; read: Reserved iv 30 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Clrena14Val> clrena14{}; 
        namespace Clrena14ValC{
            constexpr Register::FieldValue<decltype(clrena14),Clrena14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena14),Clrena14Val::v1> v1{};
        }
        ///no description available
        enum class Clrena15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-Digital Converter 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Analog-to-Digital Converter 0 interrupt; read: Analog-to-Digital Converter 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Clrena15Val> clrena15{}; 
        namespace Clrena15ValC{
            constexpr Register::FieldValue<decltype(clrena15),Clrena15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena15),Clrena15Val::v1> v1{};
        }
        ///no description available
        enum class Clrena16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Comparator 0 interrupt; read: Comparator 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Clrena16Val> clrena16{}; 
        namespace Clrena16ValC{
            constexpr Register::FieldValue<decltype(clrena16),Clrena16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena16),Clrena16Val::v1> v1{};
        }
        ///no description available
        enum class Clrena17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Timer/PWM module 0 interrupt; read: Timer/PWM module 0 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Clrena17Val> clrena17{}; 
        namespace Clrena17ValC{
            constexpr Register::FieldValue<decltype(clrena17),Clrena17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena17),Clrena17Val::v1> v1{};
        }
        ///no description available
        enum class Clrena18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 1 interrupt disabled
            v1=0x00000001,     ///<write: disable Timer/PWM module 1 interrupt; read: Timer/PWM module 1 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Clrena18Val> clrena18{}; 
        namespace Clrena18ValC{
            constexpr Register::FieldValue<decltype(clrena18),Clrena18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena18),Clrena18Val::v1> v1{};
        }
        ///no description available
        enum class Clrena19Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 35 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 35 interrupt; read: Reserved iv 35 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Clrena19Val> clrena19{}; 
        namespace Clrena19ValC{
            constexpr Register::FieldValue<decltype(clrena19),Clrena19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena19),Clrena19Val::v1> v1{};
        }
        ///no description available
        enum class Clrena20Val {
            v0=0x00000000,     ///<write: no effect; read: Real-time counter interrupt disabled
            v1=0x00000001,     ///<write: disable Real-time counter interrupt; read: Real-time counter interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Clrena20Val> clrena20{}; 
        namespace Clrena20ValC{
            constexpr Register::FieldValue<decltype(clrena20),Clrena20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena20),Clrena20Val::v1> v1{};
        }
        ///no description available
        enum class Clrena21Val {
            v0=0x00000000,     ///<write: no effect; read: RTC seconds interrupt disabled
            v1=0x00000001,     ///<write: disable RTC seconds interrupt; read: RTC seconds interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Clrena21Val> clrena21{}; 
        namespace Clrena21ValC{
            constexpr Register::FieldValue<decltype(clrena21),Clrena21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena21),Clrena21Val::v1> v1{};
        }
        ///no description available
        enum class Clrena22Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 38 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 38 interrupt; read: Reserved iv 38 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Clrena22Val> clrena22{}; 
        namespace Clrena22ValC{
            constexpr Register::FieldValue<decltype(clrena22),Clrena22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena22),Clrena22Val::v1> v1{};
        }
        ///no description available
        enum class Clrena23Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 39 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 39 interrupt; read: Reserved iv 39 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Clrena23Val> clrena23{}; 
        namespace Clrena23ValC{
            constexpr Register::FieldValue<decltype(clrena23),Clrena23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena23),Clrena23Val::v1> v1{};
        }
        ///no description available
        enum class Clrena24Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 40 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 40 interrupt; read: Reserved iv 40 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Clrena24Val> clrena24{}; 
        namespace Clrena24ValC{
            constexpr Register::FieldValue<decltype(clrena24),Clrena24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena24),Clrena24Val::v1> v1{};
        }
        ///no description available
        enum class Clrena25Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 41 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 41 interrupt; read: Reserved iv 41 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Clrena25Val> clrena25{}; 
        namespace Clrena25ValC{
            constexpr Register::FieldValue<decltype(clrena25),Clrena25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena25),Clrena25Val::v1> v1{};
        }
        ///no description available
        enum class Clrena26Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 42 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 42 interrupt; read: Reserved iv 42 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Clrena26Val> clrena26{}; 
        namespace Clrena26ValC{
            constexpr Register::FieldValue<decltype(clrena26),Clrena26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena26),Clrena26Val::v1> v1{};
        }
        ///no description available
        enum class Clrena27Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 43 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 43 interrupt; read: Reserved iv 43 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Clrena27Val> clrena27{}; 
        namespace Clrena27ValC{
            constexpr Register::FieldValue<decltype(clrena27),Clrena27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena27),Clrena27Val::v1> v1{};
        }
        ///no description available
        enum class Clrena28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt disabled
            v1=0x00000001,     ///<write: disable Low-Power Timer interrupt; read: Low-Power Timer interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Clrena28Val> clrena28{}; 
        namespace Clrena28ValC{
            constexpr Register::FieldValue<decltype(clrena28),Clrena28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena28),Clrena28Val::v1> v1{};
        }
        ///no description available
        enum class Clrena29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 45 interrupt; read: Reserved iv 45 interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Clrena29Val> clrena29{}; 
        namespace Clrena29ValC{
            constexpr Register::FieldValue<decltype(clrena29),Clrena29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena29),Clrena29Val::v1> v1{};
        }
        ///no description available
        enum class Clrena30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA Pin detect interrupt disabled
            v1=0x00000001,     ///<write: disable PORTA Pin detect interrupt; read: PORTA Pin detect interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Clrena30Val> clrena30{}; 
        namespace Clrena30ValC{
            constexpr Register::FieldValue<decltype(clrena30),Clrena30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena30),Clrena30Val::v1> v1{};
        }
        ///no description available
        enum class Clrena31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTB Pin detect interrupt disabled
            v1=0x00000001,     ///<write: disable PORTB Pin detect interrupt; read: PORTB Pin detect interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Clrena31Val> clrena31{}; 
        namespace Clrena31ValC{
            constexpr Register::FieldValue<decltype(clrena31),Clrena31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrena31),Clrena31Val::v1> v1{};
        }
    }
    namespace NonenvicIspr{    ///<Interrupt Set Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///no description available
        enum class Setpend0Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 16 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 16 interrupt state to pending; read: Reserved iv 16 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Setpend0Val> setpend0{}; 
        namespace Setpend0ValC{
            constexpr Register::FieldValue<decltype(setpend0),Setpend0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend0),Setpend0Val::v1> v1{};
        }
        ///no description available
        enum class Setpend1Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 17 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 17 interrupt state to pending; read: Reserved iv 17 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Setpend1Val> setpend1{}; 
        namespace Setpend1ValC{
            constexpr Register::FieldValue<decltype(setpend1),Setpend1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend1),Setpend1Val::v1> v1{};
        }
        ///no description available
        enum class Setpend2Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 18 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 18 interrupt state to pending; read: Reserved iv 18 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Setpend2Val> setpend2{}; 
        namespace Setpend2ValC{
            constexpr Register::FieldValue<decltype(setpend2),Setpend2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend2),Setpend2Val::v1> v1{};
        }
        ///no description available
        enum class Setpend3Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 19 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 19 interrupt state to pending; read: Reserved iv 19 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Setpend3Val> setpend3{}; 
        namespace Setpend3ValC{
            constexpr Register::FieldValue<decltype(setpend3),Setpend3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend3),Setpend3Val::v1> v1{};
        }
        ///no description available
        enum class Setpend4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 20 interrupt state to pending; read: Reserved iv 20 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Setpend4Val> setpend4{}; 
        namespace Setpend4ValC{
            constexpr Register::FieldValue<decltype(setpend4),Setpend4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend4),Setpend4Val::v1> v1{};
        }
        ///no description available
        enum class Setpend5Val {
            v0=0x00000000,     ///<write: no effect; read: Command complete and read collision interrupt is not pending
            v1=0x00000001,     ///<write: changes the Command complete and read collision interrupt state to pending; read: Command complete and read collision interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Setpend5Val> setpend5{}; 
        namespace Setpend5ValC{
            constexpr Register::FieldValue<decltype(setpend5),Setpend5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend5),Setpend5Val::v1> v1{};
        }
        ///no description available
        enum class Setpend6Val {
            v0=0x00000000,     ///<write: no effect; read: Low-voltage detect, low-voltage warning interrupt is not pending
            v1=0x00000001,     ///<write: changes the Low-voltage detect, low-voltage warning interrupt state to pending; read: Low-voltage detect, low-voltage warning interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Setpend6Val> setpend6{}; 
        namespace Setpend6ValC{
            constexpr Register::FieldValue<decltype(setpend6),Setpend6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend6),Setpend6Val::v1> v1{};
        }
        ///no description available
        enum class Setpend7Val {
            v0=0x00000000,     ///<write: no effect; read: Low Leakage Wakeup interrupt is not pending
            v1=0x00000001,     ///<write: changes the Low Leakage Wakeup interrupt state to pending; read: Low Leakage Wakeup interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Setpend7Val> setpend7{}; 
        namespace Setpend7ValC{
            constexpr Register::FieldValue<decltype(setpend7),Setpend7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend7),Setpend7Val::v1> v1{};
        }
        ///no description available
        enum class Setpend8Val {
            v0=0x00000000,     ///<write: no effect; read: Inter-Integrated Circuit 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Inter-Integrated Circuit 0 interrupt state to pending; read: Inter-Integrated Circuit 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Setpend8Val> setpend8{}; 
        namespace Setpend8ValC{
            constexpr Register::FieldValue<decltype(setpend8),Setpend8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend8),Setpend8Val::v1> v1{};
        }
        ///no description available
        enum class Setpend9Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 25 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 25 interrupt state to pending; read: Reserved iv 25 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Setpend9Val> setpend9{}; 
        namespace Setpend9ValC{
            constexpr Register::FieldValue<decltype(setpend9),Setpend9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend9),Setpend9Val::v1> v1{};
        }
        ///no description available
        enum class Setpend10Val {
            v0=0x00000000,     ///<write: no effect; read: Serial Peripheral Interface 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Serial Peripheral Interface 0 interrupt state to pending; read: Serial Peripheral Interface 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Setpend10Val> setpend10{}; 
        namespace Setpend10ValC{
            constexpr Register::FieldValue<decltype(setpend10),Setpend10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend10),Setpend10Val::v1> v1{};
        }
        ///no description available
        enum class Setpend11Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 27 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 27 interrupt state to pending; read: Reserved iv 27 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Setpend11Val> setpend11{}; 
        namespace Setpend11ValC{
            constexpr Register::FieldValue<decltype(setpend11),Setpend11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend11),Setpend11Val::v1> v1{};
        }
        ///no description available
        enum class Setpend12Val {
            v0=0x00000000,     ///<write: no effect; read: LPUART0 status and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the LPUART0 status and error interrupt state to pending; read: LPUART0 status and error interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Setpend12Val> setpend12{}; 
        namespace Setpend12ValC{
            constexpr Register::FieldValue<decltype(setpend12),Setpend12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend12),Setpend12Val::v1> v1{};
        }
        ///no description available
        enum class Setpend13Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 29 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 29 interrupt state to pending; read: Reserved iv 29 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Setpend13Val> setpend13{}; 
        namespace Setpend13ValC{
            constexpr Register::FieldValue<decltype(setpend13),Setpend13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend13),Setpend13Val::v1> v1{};
        }
        ///no description available
        enum class Setpend14Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 30 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 30 interrupt state to pending; read: Reserved iv 30 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Setpend14Val> setpend14{}; 
        namespace Setpend14ValC{
            constexpr Register::FieldValue<decltype(setpend14),Setpend14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend14),Setpend14Val::v1> v1{};
        }
        ///no description available
        enum class Setpend15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-Digital Converter 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Analog-to-Digital Converter 0 interrupt state to pending; read: Analog-to-Digital Converter 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Setpend15Val> setpend15{}; 
        namespace Setpend15ValC{
            constexpr Register::FieldValue<decltype(setpend15),Setpend15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend15),Setpend15Val::v1> v1{};
        }
        ///no description available
        enum class Setpend16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Comparator 0 interrupt state to pending; read: Comparator 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Setpend16Val> setpend16{}; 
        namespace Setpend16ValC{
            constexpr Register::FieldValue<decltype(setpend16),Setpend16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend16),Setpend16Val::v1> v1{};
        }
        ///no description available
        enum class Setpend17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Timer/PWM module 0 interrupt state to pending; read: Timer/PWM module 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Setpend17Val> setpend17{}; 
        namespace Setpend17ValC{
            constexpr Register::FieldValue<decltype(setpend17),Setpend17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend17),Setpend17Val::v1> v1{};
        }
        ///no description available
        enum class Setpend18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 1 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Timer/PWM module 1 interrupt state to pending; read: Timer/PWM module 1 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Setpend18Val> setpend18{}; 
        namespace Setpend18ValC{
            constexpr Register::FieldValue<decltype(setpend18),Setpend18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend18),Setpend18Val::v1> v1{};
        }
        ///no description available
        enum class Setpend19Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 35 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 35 interrupt state to pending; read: Reserved iv 35 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Setpend19Val> setpend19{}; 
        namespace Setpend19ValC{
            constexpr Register::FieldValue<decltype(setpend19),Setpend19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend19),Setpend19Val::v1> v1{};
        }
        ///no description available
        enum class Setpend20Val {
            v0=0x00000000,     ///<write: no effect; read: Real-time counter interrupt is not pending
            v1=0x00000001,     ///<write: changes the Real-time counter interrupt state to pending; read: Real-time counter interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Setpend20Val> setpend20{}; 
        namespace Setpend20ValC{
            constexpr Register::FieldValue<decltype(setpend20),Setpend20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend20),Setpend20Val::v1> v1{};
        }
        ///no description available
        enum class Setpend21Val {
            v0=0x00000000,     ///<write: no effect; read: RTC seconds interrupt is not pending
            v1=0x00000001,     ///<write: changes the RTC seconds interrupt state to pending; read: RTC seconds interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Setpend21Val> setpend21{}; 
        namespace Setpend21ValC{
            constexpr Register::FieldValue<decltype(setpend21),Setpend21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend21),Setpend21Val::v1> v1{};
        }
        ///no description available
        enum class Setpend22Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 38 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 38 interrupt state to pending; read: Reserved iv 38 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Setpend22Val> setpend22{}; 
        namespace Setpend22ValC{
            constexpr Register::FieldValue<decltype(setpend22),Setpend22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend22),Setpend22Val::v1> v1{};
        }
        ///no description available
        enum class Setpend23Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 39 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 39 interrupt state to pending; read: Reserved iv 39 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Setpend23Val> setpend23{}; 
        namespace Setpend23ValC{
            constexpr Register::FieldValue<decltype(setpend23),Setpend23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend23),Setpend23Val::v1> v1{};
        }
        ///no description available
        enum class Setpend24Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 40 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 40 interrupt state to pending; read: Reserved iv 40 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Setpend24Val> setpend24{}; 
        namespace Setpend24ValC{
            constexpr Register::FieldValue<decltype(setpend24),Setpend24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend24),Setpend24Val::v1> v1{};
        }
        ///no description available
        enum class Setpend25Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 41 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 41 interrupt state to pending; read: Reserved iv 41 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Setpend25Val> setpend25{}; 
        namespace Setpend25ValC{
            constexpr Register::FieldValue<decltype(setpend25),Setpend25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend25),Setpend25Val::v1> v1{};
        }
        ///no description available
        enum class Setpend26Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 42 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 42 interrupt state to pending; read: Reserved iv 42 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Setpend26Val> setpend26{}; 
        namespace Setpend26ValC{
            constexpr Register::FieldValue<decltype(setpend26),Setpend26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend26),Setpend26Val::v1> v1{};
        }
        ///no description available
        enum class Setpend27Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 43 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 43 interrupt state to pending; read: Reserved iv 43 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Setpend27Val> setpend27{}; 
        namespace Setpend27ValC{
            constexpr Register::FieldValue<decltype(setpend27),Setpend27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend27),Setpend27Val::v1> v1{};
        }
        ///no description available
        enum class Setpend28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt is not pending
            v1=0x00000001,     ///<write: changes the Low-Power Timer interrupt state to pending; read: Low-Power Timer interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Setpend28Val> setpend28{}; 
        namespace Setpend28ValC{
            constexpr Register::FieldValue<decltype(setpend28),Setpend28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend28),Setpend28Val::v1> v1{};
        }
        ///no description available
        enum class Setpend29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 45 interrupt state to pending; read: Reserved iv 45 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Setpend29Val> setpend29{}; 
        namespace Setpend29ValC{
            constexpr Register::FieldValue<decltype(setpend29),Setpend29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend29),Setpend29Val::v1> v1{};
        }
        ///no description available
        enum class Setpend30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA Pin detect interrupt is not pending
            v1=0x00000001,     ///<write: changes the PORTA Pin detect interrupt state to pending; read: PORTA Pin detect interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Setpend30Val> setpend30{}; 
        namespace Setpend30ValC{
            constexpr Register::FieldValue<decltype(setpend30),Setpend30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend30),Setpend30Val::v1> v1{};
        }
        ///no description available
        enum class Setpend31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTB Pin detect interrupt is not pending
            v1=0x00000001,     ///<write: changes the PORTB Pin detect interrupt state to pending; read: PORTB Pin detect interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Setpend31Val> setpend31{}; 
        namespace Setpend31ValC{
            constexpr Register::FieldValue<decltype(setpend31),Setpend31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(setpend31),Setpend31Val::v1> v1{};
        }
    }
    namespace NonenvicIcpr{    ///<Interrupt Clear Pending Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///no description available
        enum class Clrpend0Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 16 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 16 interrupt; read: Reserved iv 16 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Clrpend0Val> clrpend0{}; 
        namespace Clrpend0ValC{
            constexpr Register::FieldValue<decltype(clrpend0),Clrpend0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend0),Clrpend0Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend1Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 17 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 17 interrupt; read: Reserved iv 17 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Clrpend1Val> clrpend1{}; 
        namespace Clrpend1ValC{
            constexpr Register::FieldValue<decltype(clrpend1),Clrpend1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend1),Clrpend1Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend2Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 18 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 18 interrupt; read: Reserved iv 18 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Clrpend2Val> clrpend2{}; 
        namespace Clrpend2ValC{
            constexpr Register::FieldValue<decltype(clrpend2),Clrpend2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend2),Clrpend2Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend3Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 19 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 19 interrupt; read: Reserved iv 19 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Clrpend3Val> clrpend3{}; 
        namespace Clrpend3ValC{
            constexpr Register::FieldValue<decltype(clrpend3),Clrpend3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend3),Clrpend3Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 20 interrupt; read: Reserved iv 20 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Clrpend4Val> clrpend4{}; 
        namespace Clrpend4ValC{
            constexpr Register::FieldValue<decltype(clrpend4),Clrpend4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend4),Clrpend4Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend5Val {
            v0=0x00000000,     ///<write: no effect; read: Command complete and read collision interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Command complete and read collision interrupt; read: Command complete and read collision interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Clrpend5Val> clrpend5{}; 
        namespace Clrpend5ValC{
            constexpr Register::FieldValue<decltype(clrpend5),Clrpend5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend5),Clrpend5Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend6Val {
            v0=0x00000000,     ///<write: no effect; read: Low-voltage detect, low-voltage warning interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Low-voltage detect, low-voltage warning interrupt; read: Low-voltage detect, low-voltage warning interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Clrpend6Val> clrpend6{}; 
        namespace Clrpend6ValC{
            constexpr Register::FieldValue<decltype(clrpend6),Clrpend6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend6),Clrpend6Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend7Val {
            v0=0x00000000,     ///<write: no effect; read: Low Leakage Wakeup interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Low Leakage Wakeup interrupt; read: Low Leakage Wakeup interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Clrpend7Val> clrpend7{}; 
        namespace Clrpend7ValC{
            constexpr Register::FieldValue<decltype(clrpend7),Clrpend7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend7),Clrpend7Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend8Val {
            v0=0x00000000,     ///<write: no effect; read: Inter-Integrated Circuit 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Inter-Integrated Circuit 0 interrupt; read: Inter-Integrated Circuit 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Clrpend8Val> clrpend8{}; 
        namespace Clrpend8ValC{
            constexpr Register::FieldValue<decltype(clrpend8),Clrpend8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend8),Clrpend8Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend9Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 25 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 25 interrupt; read: Reserved iv 25 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Clrpend9Val> clrpend9{}; 
        namespace Clrpend9ValC{
            constexpr Register::FieldValue<decltype(clrpend9),Clrpend9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend9),Clrpend9Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend10Val {
            v0=0x00000000,     ///<write: no effect; read: Serial Peripheral Interface 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Serial Peripheral Interface 0 interrupt; read: Serial Peripheral Interface 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Clrpend10Val> clrpend10{}; 
        namespace Clrpend10ValC{
            constexpr Register::FieldValue<decltype(clrpend10),Clrpend10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend10),Clrpend10Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend11Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 27 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 27 interrupt; read: Reserved iv 27 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Clrpend11Val> clrpend11{}; 
        namespace Clrpend11ValC{
            constexpr Register::FieldValue<decltype(clrpend11),Clrpend11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend11),Clrpend11Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend12Val {
            v0=0x00000000,     ///<write: no effect; read: LPUART0 status and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the LPUART0 status and error interrupt; read: LPUART0 status and error interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Clrpend12Val> clrpend12{}; 
        namespace Clrpend12ValC{
            constexpr Register::FieldValue<decltype(clrpend12),Clrpend12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend12),Clrpend12Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend13Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 29 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 29 interrupt; read: Reserved iv 29 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Clrpend13Val> clrpend13{}; 
        namespace Clrpend13ValC{
            constexpr Register::FieldValue<decltype(clrpend13),Clrpend13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend13),Clrpend13Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend14Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 30 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 30 interrupt; read: Reserved iv 30 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Clrpend14Val> clrpend14{}; 
        namespace Clrpend14ValC{
            constexpr Register::FieldValue<decltype(clrpend14),Clrpend14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend14),Clrpend14Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-Digital Converter 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Analog-to-Digital Converter 0 interrupt; read: Analog-to-Digital Converter 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Clrpend15Val> clrpend15{}; 
        namespace Clrpend15ValC{
            constexpr Register::FieldValue<decltype(clrpend15),Clrpend15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend15),Clrpend15Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Comparator 0 interrupt; read: Comparator 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Clrpend16Val> clrpend16{}; 
        namespace Clrpend16ValC{
            constexpr Register::FieldValue<decltype(clrpend16),Clrpend16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend16),Clrpend16Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Timer/PWM module 0 interrupt; read: Timer/PWM module 0 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Clrpend17Val> clrpend17{}; 
        namespace Clrpend17ValC{
            constexpr Register::FieldValue<decltype(clrpend17),Clrpend17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend17),Clrpend17Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer/PWM module 1 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Timer/PWM module 1 interrupt; read: Timer/PWM module 1 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Clrpend18Val> clrpend18{}; 
        namespace Clrpend18ValC{
            constexpr Register::FieldValue<decltype(clrpend18),Clrpend18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend18),Clrpend18Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend19Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 35 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 35 interrupt; read: Reserved iv 35 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Clrpend19Val> clrpend19{}; 
        namespace Clrpend19ValC{
            constexpr Register::FieldValue<decltype(clrpend19),Clrpend19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend19),Clrpend19Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend20Val {
            v0=0x00000000,     ///<write: no effect; read: Real-time counter interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Real-time counter interrupt; read: Real-time counter interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Clrpend20Val> clrpend20{}; 
        namespace Clrpend20ValC{
            constexpr Register::FieldValue<decltype(clrpend20),Clrpend20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend20),Clrpend20Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend21Val {
            v0=0x00000000,     ///<write: no effect; read: RTC seconds interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the RTC seconds interrupt; read: RTC seconds interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Clrpend21Val> clrpend21{}; 
        namespace Clrpend21ValC{
            constexpr Register::FieldValue<decltype(clrpend21),Clrpend21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend21),Clrpend21Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend22Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 38 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 38 interrupt; read: Reserved iv 38 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Clrpend22Val> clrpend22{}; 
        namespace Clrpend22ValC{
            constexpr Register::FieldValue<decltype(clrpend22),Clrpend22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend22),Clrpend22Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend23Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 39 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 39 interrupt; read: Reserved iv 39 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Clrpend23Val> clrpend23{}; 
        namespace Clrpend23ValC{
            constexpr Register::FieldValue<decltype(clrpend23),Clrpend23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend23),Clrpend23Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend24Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 40 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 40 interrupt; read: Reserved iv 40 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Clrpend24Val> clrpend24{}; 
        namespace Clrpend24ValC{
            constexpr Register::FieldValue<decltype(clrpend24),Clrpend24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend24),Clrpend24Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend25Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 41 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 41 interrupt; read: Reserved iv 41 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Clrpend25Val> clrpend25{}; 
        namespace Clrpend25ValC{
            constexpr Register::FieldValue<decltype(clrpend25),Clrpend25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend25),Clrpend25Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend26Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 42 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 42 interrupt; read: Reserved iv 42 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Clrpend26Val> clrpend26{}; 
        namespace Clrpend26ValC{
            constexpr Register::FieldValue<decltype(clrpend26),Clrpend26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend26),Clrpend26Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend27Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 43 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 43 interrupt; read: Reserved iv 43 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Clrpend27Val> clrpend27{}; 
        namespace Clrpend27ValC{
            constexpr Register::FieldValue<decltype(clrpend27),Clrpend27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend27),Clrpend27Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Low-Power Timer interrupt; read: Low-Power Timer interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Clrpend28Val> clrpend28{}; 
        namespace Clrpend28ValC{
            constexpr Register::FieldValue<decltype(clrpend28),Clrpend28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend28),Clrpend28Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 45 interrupt; read: Reserved iv 45 interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Clrpend29Val> clrpend29{}; 
        namespace Clrpend29ValC{
            constexpr Register::FieldValue<decltype(clrpend29),Clrpend29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend29),Clrpend29Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA Pin detect interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the PORTA Pin detect interrupt; read: PORTA Pin detect interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Clrpend30Val> clrpend30{}; 
        namespace Clrpend30ValC{
            constexpr Register::FieldValue<decltype(clrpend30),Clrpend30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend30),Clrpend30Val::v1> v1{};
        }
        ///no description available
        enum class Clrpend31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTB Pin detect interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the PORTB Pin detect interrupt; read: PORTB Pin detect interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Clrpend31Val> clrpend31{}; 
        namespace Clrpend31ValC{
            constexpr Register::FieldValue<decltype(clrpend31),Clrpend31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(clrpend31),Clrpend31Val::v1> v1{};
        }
    }
    namespace NonenvicIpr0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Reserved iv 16 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri0{}; 
        namespace Pri0ValC{
        }
        ///Priority of the Reserved iv 17 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri1{}; 
        namespace Pri1ValC{
        }
        ///Priority of the Reserved iv 18 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri2{}; 
        namespace Pri2ValC{
        }
        ///Priority of the Reserved iv 19 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri3{}; 
        namespace Pri3ValC{
        }
    }
    namespace NonenvicIpr1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Reserved iv 20 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri4{}; 
        namespace Pri4ValC{
        }
        ///Priority of the Command complete and read collision interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri5{}; 
        namespace Pri5ValC{
        }
        ///Priority of the Low-voltage detect, low-voltage warning interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri6{}; 
        namespace Pri6ValC{
        }
        ///Priority of the Low Leakage Wakeup interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri7{}; 
        namespace Pri7ValC{
        }
    }
    namespace NonenvicIpr2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Inter-Integrated Circuit 0 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri8{}; 
        namespace Pri8ValC{
        }
        ///Priority of the Reserved iv 25 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri9{}; 
        namespace Pri9ValC{
        }
        ///Priority of the Serial Peripheral Interface 0 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri10{}; 
        namespace Pri10ValC{
        }
        ///Priority of the Reserved iv 27 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri11{}; 
        namespace Pri11ValC{
        }
    }
    namespace NonenvicIpr3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f,0,unsigned>;
        ///Priority of the LPUART0 status and error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri12{}; 
        namespace Pri12ValC{
        }
        ///Priority of the Reserved iv 29 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri13{}; 
        namespace Pri13ValC{
        }
        ///Priority of the Reserved iv 30 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri14{}; 
        namespace Pri14ValC{
        }
        ///Priority of the Analog-to-Digital Converter 0 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri15{}; 
        namespace Pri15ValC{
        }
    }
    namespace NonenvicIpr4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Comparator 0 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri16{}; 
        namespace Pri16ValC{
        }
        ///Priority of the Timer/PWM module 0 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri17{}; 
        namespace Pri17ValC{
        }
        ///Priority of the Timer/PWM module 1 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri18{}; 
        namespace Pri18ValC{
        }
        ///Priority of the Reserved iv 35 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri19{}; 
        namespace Pri19ValC{
        }
    }
    namespace NonenvicIpr5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Real-time counter interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri20{}; 
        namespace Pri20ValC{
        }
        ///Priority of the RTC seconds interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri21{}; 
        namespace Pri21ValC{
        }
        ///Priority of the Reserved iv 38 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri22{}; 
        namespace Pri22ValC{
        }
        ///Priority of the Reserved iv 39 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri23{}; 
        namespace Pri23ValC{
        }
    }
    namespace NonenvicIpr6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Reserved iv 40 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri24{}; 
        namespace Pri24ValC{
        }
        ///Priority of the Reserved iv 41 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri25{}; 
        namespace Pri25ValC{
        }
        ///Priority of the Reserved iv 42 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri26{}; 
        namespace Pri26ValC{
        }
        ///Priority of the Reserved iv 43 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri27{}; 
        namespace Pri27ValC{
        }
    }
    namespace NonenvicIpr7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f,0,unsigned>;
        ///Priority of the Low-Power Timer interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri28{}; 
        namespace Pri28ValC{
        }
        ///Priority of the Reserved iv 45 interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri29{}; 
        namespace Pri29ValC{
        }
        ///Priority of the PORTA Pin detect interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri30{}; 
        namespace Pri30ValC{
        }
        ///Priority of the PORTB Pin detect interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri31{}; 
        namespace Pri31ValC{
        }
    }
}
