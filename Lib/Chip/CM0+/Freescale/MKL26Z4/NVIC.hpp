#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt Controller
    namespace NonenvicIser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///no description available
        enum class setena0Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 0 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: enable DMA channel 0 transfer complete and error interrupt; read: DMA channel 0 transfer complete and error interrupt enabled
        };
        namespace setena0ValC{
            constexpr MPL::Value<setena0Val,setena0Val::v0> v0{};
            constexpr MPL::Value<setena0Val,setena0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,setena0Val> setena0{}; 
        ///no description available
        enum class setena1Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 1 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: enable DMA channel 1 transfer complete and error interrupt; read: DMA channel 1 transfer complete and error interrupt enabled
        };
        namespace setena1ValC{
            constexpr MPL::Value<setena1Val,setena1Val::v0> v0{};
            constexpr MPL::Value<setena1Val,setena1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,setena1Val> setena1{}; 
        ///no description available
        enum class setena2Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 2 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: enable DMA channel 2 transfer complete and error interrupt; read: DMA channel 2 transfer complete and error interrupt enabled
        };
        namespace setena2ValC{
            constexpr MPL::Value<setena2Val,setena2Val::v0> v0{};
            constexpr MPL::Value<setena2Val,setena2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,setena2Val> setena2{}; 
        ///no description available
        enum class setena3Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 3 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: enable DMA channel 3 transfer complete and error interrupt; read: DMA channel 3 transfer complete and error interrupt enabled
        };
        namespace setena3ValC{
            constexpr MPL::Value<setena3Val,setena3Val::v0> v0{};
            constexpr MPL::Value<setena3Val,setena3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,setena3Val> setena3{}; 
        ///no description available
        enum class setena4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 20 interrupt; read: Reserved iv 20 interrupt enabled
        };
        namespace setena4ValC{
            constexpr MPL::Value<setena4Val,setena4Val::v0> v0{};
            constexpr MPL::Value<setena4Val,setena4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setena4Val> setena4{}; 
        ///no description available
        enum class setena5Val {
            v0=0x00000000,     ///<write: no effect; read: FTFA command complete and read collision interrupt disabled
            v1=0x00000001,     ///<write: enable FTFA command complete and read collision interrupt; read: FTFA command complete and read collision interrupt enabled
        };
        namespace setena5ValC{
            constexpr MPL::Value<setena5Val,setena5Val::v0> v0{};
            constexpr MPL::Value<setena5Val,setena5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setena5Val> setena5{}; 
        ///no description available
        enum class setena6Val {
            v0=0x00000000,     ///<write: no effect; read: low-voltage detect and low-voltage warning interrupt disabled
            v1=0x00000001,     ///<write: enable low-voltage detect and low-voltage warning interrupt; read: low-voltage detect and low-voltage warning interrupt enabled
        };
        namespace setena6ValC{
            constexpr MPL::Value<setena6Val,setena6Val::v0> v0{};
            constexpr MPL::Value<setena6Val,setena6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,setena6Val> setena6{}; 
        ///no description available
        enum class setena7Val {
            v0=0x00000000,     ///<write: no effect; read: low leakage wakeup interrupt disabled
            v1=0x00000001,     ///<write: enable low leakage wakeup interrupt; read: low leakage wakeup interrupt enabled
        };
        namespace setena7ValC{
            constexpr MPL::Value<setena7Val,setena7Val::v0> v0{};
            constexpr MPL::Value<setena7Val,setena7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,setena7Val> setena7{}; 
        ///no description available
        enum class setena8Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 0 interrupt disabled
            v1=0x00000001,     ///<write: enable inter-integrated circuit 0 interrupt; read: inter-integrated circuit 0 interrupt enabled
        };
        namespace setena8ValC{
            constexpr MPL::Value<setena8Val,setena8Val::v0> v0{};
            constexpr MPL::Value<setena8Val,setena8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,setena8Val> setena8{}; 
        ///no description available
        enum class setena9Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 1 interrupt disabled
            v1=0x00000001,     ///<write: enable inter-integrated circuit 1 interrupt; read: inter-integrated circuit 1 interrupt enabled
        };
        namespace setena9ValC{
            constexpr MPL::Value<setena9Val,setena9Val::v0> v0{};
            constexpr MPL::Value<setena9Val,setena9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,setena9Val> setena9{}; 
        ///no description available
        enum class setena10Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 0 interrupt disabled
            v1=0x00000001,     ///<write: enable serial peripheral interface 0 interrupt; read: serial peripheral interface 0 interrupt enabled
        };
        namespace setena10ValC{
            constexpr MPL::Value<setena10Val,setena10Val::v0> v0{};
            constexpr MPL::Value<setena10Val,setena10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,setena10Val> setena10{}; 
        ///no description available
        enum class setena11Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 1 interrupt disabled
            v1=0x00000001,     ///<write: enable serial peripheral interface 1 interrupt; read: serial peripheral interface 1 interrupt enabled
        };
        namespace setena11ValC{
            constexpr MPL::Value<setena11Val,setena11Val::v0> v0{};
            constexpr MPL::Value<setena11Val,setena11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,setena11Val> setena11{}; 
        ///no description available
        enum class setena12Val {
            v0=0x00000000,     ///<write: no effect; read: UART0 status and error interrupt disabled
            v1=0x00000001,     ///<write: enable UART0 status and error interrupt; read: UART0 status and error interrupt enabled
        };
        namespace setena12ValC{
            constexpr MPL::Value<setena12Val,setena12Val::v0> v0{};
            constexpr MPL::Value<setena12Val,setena12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,setena12Val> setena12{}; 
        ///no description available
        enum class setena13Val {
            v0=0x00000000,     ///<write: no effect; read: UART1 status and error interrupt disabled
            v1=0x00000001,     ///<write: enable UART1 status and error interrupt; read: UART1 status and error interrupt enabled
        };
        namespace setena13ValC{
            constexpr MPL::Value<setena13Val,setena13Val::v0> v0{};
            constexpr MPL::Value<setena13Val,setena13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,setena13Val> setena13{}; 
        ///no description available
        enum class setena14Val {
            v0=0x00000000,     ///<write: no effect; read: UART2 status and error interrupt disabled
            v1=0x00000001,     ///<write: enable UART2 status and error interrupt; read: UART2 status and error interrupt enabled
        };
        namespace setena14ValC{
            constexpr MPL::Value<setena14Val,setena14Val::v0> v0{};
            constexpr MPL::Value<setena14Val,setena14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,setena14Val> setena14{}; 
        ///no description available
        enum class setena15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-digital converter 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Analog-to-digital converter 0 interrupt; read: Analog-to-digital converter 0 interrupt enabled
        };
        namespace setena15ValC{
            constexpr MPL::Value<setena15Val,setena15Val::v0> v0{};
            constexpr MPL::Value<setena15Val,setena15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,setena15Val> setena15{}; 
        ///no description available
        enum class setena16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Comparator 0 interrupt; read: Comparator 0 interrupt enabled
        };
        namespace setena16ValC{
            constexpr MPL::Value<setena16Val,setena16Val::v0> v0{};
            constexpr MPL::Value<setena16Val,setena16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,setena16Val> setena16{}; 
        ///no description available
        enum class setena17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 0 interrupt disabled
            v1=0x00000001,     ///<write: enable Timer PWM module 0 interrupt; read: Timer PWM module 0 interrupt enabled
        };
        namespace setena17ValC{
            constexpr MPL::Value<setena17Val,setena17Val::v0> v0{};
            constexpr MPL::Value<setena17Val,setena17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,setena17Val> setena17{}; 
        ///no description available
        enum class setena18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 1 interrupt disabled
            v1=0x00000001,     ///<write: enable Timer PWM module 1 interrupt; read: Timer PWM module 1 interrupt enabled
        };
        namespace setena18ValC{
            constexpr MPL::Value<setena18Val,setena18Val::v0> v0{};
            constexpr MPL::Value<setena18Val,setena18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,setena18Val> setena18{}; 
        ///no description available
        enum class setena19Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 2 interrupt disabled
            v1=0x00000001,     ///<write: enable Timer PWM module 2 interrupt; read: Timer PWM module 2 interrupt enabled
        };
        namespace setena19ValC{
            constexpr MPL::Value<setena19Val,setena19Val::v0> v0{};
            constexpr MPL::Value<setena19Val,setena19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,setena19Val> setena19{}; 
        ///no description available
        enum class setena20Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock alarm interrupt disabled
            v1=0x00000001,     ///<write: enable real time clock alarm interrupt; read: real time clock alarm interrupt enabled
        };
        namespace setena20ValC{
            constexpr MPL::Value<setena20Val,setena20Val::v0> v0{};
            constexpr MPL::Value<setena20Val,setena20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,setena20Val> setena20{}; 
        ///no description available
        enum class setena21Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock seconds interrupt disabled
            v1=0x00000001,     ///<write: enable real time clock seconds interrupt; read: real time clock seconds interrupt enabled
        };
        namespace setena21ValC{
            constexpr MPL::Value<setena21Val,setena21Val::v0> v0{};
            constexpr MPL::Value<setena21Val,setena21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,setena21Val> setena21{}; 
        ///no description available
        enum class setena22Val {
            v0=0x00000000,     ///<write: no effect; read: periodic interrupt timer all channels interrupt disabled
            v1=0x00000001,     ///<write: enable periodic interrupt timer all channels interrupt; read: periodic interrupt timer all channels interrupt enabled
        };
        namespace setena22ValC{
            constexpr MPL::Value<setena22Val,setena22Val::v0> v0{};
            constexpr MPL::Value<setena22Val,setena22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,setena22Val> setena22{}; 
        ///no description available
        enum class setena23Val {
            v0=0x00000000,     ///<write: no effect; read: integrated interchip sound 0 interrupt disabled
            v1=0x00000001,     ///<write: enable integrated interchip sound 0 interrupt; read: integrated interchip sound 0 interrupt enabled
        };
        namespace setena23ValC{
            constexpr MPL::Value<setena23Val,setena23Val::v0> v0{};
            constexpr MPL::Value<setena23Val,setena23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,setena23Val> setena23{}; 
        ///no description available
        enum class setena24Val {
            v0=0x00000000,     ///<write: no effect; read: universal serial bus on the go interrupt disabled
            v1=0x00000001,     ///<write: enable universal serial bus on the go interrupt; read: universal serial bus on the go interrupt enabled
        };
        namespace setena24ValC{
            constexpr MPL::Value<setena24Val,setena24Val::v0> v0{};
            constexpr MPL::Value<setena24Val,setena24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,setena24Val> setena24{}; 
        ///no description available
        enum class setena25Val {
            v0=0x00000000,     ///<write: no effect; read: digital-to-analog converter 0 interrupt disabled
            v1=0x00000001,     ///<write: enable digital-to-analog converter 0 interrupt; read: digital-to-analog converter 0 interrupt enabled
        };
        namespace setena25ValC{
            constexpr MPL::Value<setena25Val,setena25Val::v0> v0{};
            constexpr MPL::Value<setena25Val,setena25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,setena25Val> setena25{}; 
        ///no description available
        enum class setena26Val {
            v0=0x00000000,     ///<write: no effect; read: touch sensing input interrupt disabled
            v1=0x00000001,     ///<write: enable touch sensing input interrupt; read: touch sensing input interrupt enabled
        };
        namespace setena26ValC{
            constexpr MPL::Value<setena26Val,setena26Val::v0> v0{};
            constexpr MPL::Value<setena26Val,setena26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,setena26Val> setena26{}; 
        ///no description available
        enum class setena27Val {
            v0=0x00000000,     ///<write: no effect; read: multipurpose clock generator interrupt disabled
            v1=0x00000001,     ///<write: enable multipurpose clock generator interrupt; read: multipurpose clock generator interrupt enabled
        };
        namespace setena27ValC{
            constexpr MPL::Value<setena27Val,setena27Val::v0> v0{};
            constexpr MPL::Value<setena27Val,setena27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,setena27Val> setena27{}; 
        ///no description available
        enum class setena28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt disabled
            v1=0x00000001,     ///<write: enable Low-Power Timer interrupt; read: Low-Power Timer interrupt enabled
        };
        namespace setena28ValC{
            constexpr MPL::Value<setena28Val,setena28Val::v0> v0{};
            constexpr MPL::Value<setena28Val,setena28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,setena28Val> setena28{}; 
        ///no description available
        enum class setena29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt disabled
            v1=0x00000001,     ///<write: enable Reserved iv 45 interrupt; read: Reserved iv 45 interrupt enabled
        };
        namespace setena29ValC{
            constexpr MPL::Value<setena29Val,setena29Val::v0> v0{};
            constexpr MPL::Value<setena29Val,setena29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,setena29Val> setena29{}; 
        ///no description available
        enum class setena30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA pin detect interrupt disabled
            v1=0x00000001,     ///<write: enable PORTA pin detect interrupt; read: PORTA pin detect interrupt enabled
        };
        namespace setena30ValC{
            constexpr MPL::Value<setena30Val,setena30Val::v0> v0{};
            constexpr MPL::Value<setena30Val,setena30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,setena30Val> setena30{}; 
        ///no description available
        enum class setena31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTC and PORTD pin detect interrupt disabled
            v1=0x00000001,     ///<write: enable PORTC and PORTD pin detect interrupt; read: PORTC and PORTD pin detect interrupt enabled
        };
        namespace setena31ValC{
            constexpr MPL::Value<setena31Val,setena31Val::v0> v0{};
            constexpr MPL::Value<setena31Val,setena31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,setena31Val> setena31{}; 
    }
    namespace NonenvicIcer{    ///<Interrupt Clear Enable Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///no description available
        enum class clrena0Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 0 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: disable DMA channel 0 transfer complete and error interrupt; read: DMA channel 0 transfer complete and error interrupt enabled
        };
        namespace clrena0ValC{
            constexpr MPL::Value<clrena0Val,clrena0Val::v0> v0{};
            constexpr MPL::Value<clrena0Val,clrena0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,clrena0Val> clrena0{}; 
        ///no description available
        enum class clrena1Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 1 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: disable DMA channel 1 transfer complete and error interrupt; read: DMA channel 1 transfer complete and error interrupt enabled
        };
        namespace clrena1ValC{
            constexpr MPL::Value<clrena1Val,clrena1Val::v0> v0{};
            constexpr MPL::Value<clrena1Val,clrena1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,clrena1Val> clrena1{}; 
        ///no description available
        enum class clrena2Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 2 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: disable DMA channel 2 transfer complete and error interrupt; read: DMA channel 2 transfer complete and error interrupt enabled
        };
        namespace clrena2ValC{
            constexpr MPL::Value<clrena2Val,clrena2Val::v0> v0{};
            constexpr MPL::Value<clrena2Val,clrena2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,clrena2Val> clrena2{}; 
        ///no description available
        enum class clrena3Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 3 transfer complete and error interrupt disabled
            v1=0x00000001,     ///<write: disable DMA channel 3 transfer complete and error interrupt; read: DMA channel 3 transfer complete and error interrupt enabled
        };
        namespace clrena3ValC{
            constexpr MPL::Value<clrena3Val,clrena3Val::v0> v0{};
            constexpr MPL::Value<clrena3Val,clrena3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrena3Val> clrena3{}; 
        ///no description available
        enum class clrena4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 20 interrupt; read: Reserved iv 20 interrupt enabled
        };
        namespace clrena4ValC{
            constexpr MPL::Value<clrena4Val,clrena4Val::v0> v0{};
            constexpr MPL::Value<clrena4Val,clrena4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,clrena4Val> clrena4{}; 
        ///no description available
        enum class clrena5Val {
            v0=0x00000000,     ///<write: no effect; read: FTFA command complete and read collision interrupt disabled
            v1=0x00000001,     ///<write: disable FTFA command complete and read collision interrupt; read: FTFA command complete and read collision interrupt enabled
        };
        namespace clrena5ValC{
            constexpr MPL::Value<clrena5Val,clrena5Val::v0> v0{};
            constexpr MPL::Value<clrena5Val,clrena5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,clrena5Val> clrena5{}; 
        ///no description available
        enum class clrena6Val {
            v0=0x00000000,     ///<write: no effect; read: low-voltage detect and low-voltage warning interrupt disabled
            v1=0x00000001,     ///<write: disable low-voltage detect and low-voltage warning interrupt; read: low-voltage detect and low-voltage warning interrupt enabled
        };
        namespace clrena6ValC{
            constexpr MPL::Value<clrena6Val,clrena6Val::v0> v0{};
            constexpr MPL::Value<clrena6Val,clrena6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,clrena6Val> clrena6{}; 
        ///no description available
        enum class clrena7Val {
            v0=0x00000000,     ///<write: no effect; read: low leakage wakeup interrupt disabled
            v1=0x00000001,     ///<write: disable low leakage wakeup interrupt; read: low leakage wakeup interrupt enabled
        };
        namespace clrena7ValC{
            constexpr MPL::Value<clrena7Val,clrena7Val::v0> v0{};
            constexpr MPL::Value<clrena7Val,clrena7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,clrena7Val> clrena7{}; 
        ///no description available
        enum class clrena8Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 0 interrupt disabled
            v1=0x00000001,     ///<write: disable inter-integrated circuit 0 interrupt; read: inter-integrated circuit 0 interrupt enabled
        };
        namespace clrena8ValC{
            constexpr MPL::Value<clrena8Val,clrena8Val::v0> v0{};
            constexpr MPL::Value<clrena8Val,clrena8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,clrena8Val> clrena8{}; 
        ///no description available
        enum class clrena9Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 1 interrupt disabled
            v1=0x00000001,     ///<write: disable inter-integrated circuit 1 interrupt; read: inter-integrated circuit 1 interrupt enabled
        };
        namespace clrena9ValC{
            constexpr MPL::Value<clrena9Val,clrena9Val::v0> v0{};
            constexpr MPL::Value<clrena9Val,clrena9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,clrena9Val> clrena9{}; 
        ///no description available
        enum class clrena10Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 0 interrupt disabled
            v1=0x00000001,     ///<write: disable serial peripheral interface 0 interrupt; read: serial peripheral interface 0 interrupt enabled
        };
        namespace clrena10ValC{
            constexpr MPL::Value<clrena10Val,clrena10Val::v0> v0{};
            constexpr MPL::Value<clrena10Val,clrena10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,clrena10Val> clrena10{}; 
        ///no description available
        enum class clrena11Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 1 interrupt disabled
            v1=0x00000001,     ///<write: disable serial peripheral interface 1 interrupt; read: serial peripheral interface 1 interrupt enabled
        };
        namespace clrena11ValC{
            constexpr MPL::Value<clrena11Val,clrena11Val::v0> v0{};
            constexpr MPL::Value<clrena11Val,clrena11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,clrena11Val> clrena11{}; 
        ///no description available
        enum class clrena12Val {
            v0=0x00000000,     ///<write: no effect; read: UART0 status and error interrupt disabled
            v1=0x00000001,     ///<write: disable UART0 status and error interrupt; read: UART0 status and error interrupt enabled
        };
        namespace clrena12ValC{
            constexpr MPL::Value<clrena12Val,clrena12Val::v0> v0{};
            constexpr MPL::Value<clrena12Val,clrena12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,clrena12Val> clrena12{}; 
        ///no description available
        enum class clrena13Val {
            v0=0x00000000,     ///<write: no effect; read: UART1 status and error interrupt disabled
            v1=0x00000001,     ///<write: disable UART1 status and error interrupt; read: UART1 status and error interrupt enabled
        };
        namespace clrena13ValC{
            constexpr MPL::Value<clrena13Val,clrena13Val::v0> v0{};
            constexpr MPL::Value<clrena13Val,clrena13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,clrena13Val> clrena13{}; 
        ///no description available
        enum class clrena14Val {
            v0=0x00000000,     ///<write: no effect; read: UART2 status and error interrupt disabled
            v1=0x00000001,     ///<write: disable UART2 status and error interrupt; read: UART2 status and error interrupt enabled
        };
        namespace clrena14ValC{
            constexpr MPL::Value<clrena14Val,clrena14Val::v0> v0{};
            constexpr MPL::Value<clrena14Val,clrena14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,clrena14Val> clrena14{}; 
        ///no description available
        enum class clrena15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-digital converter 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Analog-to-digital converter 0 interrupt; read: Analog-to-digital converter 0 interrupt enabled
        };
        namespace clrena15ValC{
            constexpr MPL::Value<clrena15Val,clrena15Val::v0> v0{};
            constexpr MPL::Value<clrena15Val,clrena15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,clrena15Val> clrena15{}; 
        ///no description available
        enum class clrena16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Comparator 0 interrupt; read: Comparator 0 interrupt enabled
        };
        namespace clrena16ValC{
            constexpr MPL::Value<clrena16Val,clrena16Val::v0> v0{};
            constexpr MPL::Value<clrena16Val,clrena16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,clrena16Val> clrena16{}; 
        ///no description available
        enum class clrena17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 0 interrupt disabled
            v1=0x00000001,     ///<write: disable Timer PWM module 0 interrupt; read: Timer PWM module 0 interrupt enabled
        };
        namespace clrena17ValC{
            constexpr MPL::Value<clrena17Val,clrena17Val::v0> v0{};
            constexpr MPL::Value<clrena17Val,clrena17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,clrena17Val> clrena17{}; 
        ///no description available
        enum class clrena18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 1 interrupt disabled
            v1=0x00000001,     ///<write: disable Timer PWM module 1 interrupt; read: Timer PWM module 1 interrupt enabled
        };
        namespace clrena18ValC{
            constexpr MPL::Value<clrena18Val,clrena18Val::v0> v0{};
            constexpr MPL::Value<clrena18Val,clrena18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,clrena18Val> clrena18{}; 
        ///no description available
        enum class clrena19Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 2 interrupt disabled
            v1=0x00000001,     ///<write: disable Timer PWM module 2 interrupt; read: Timer PWM module 2 interrupt enabled
        };
        namespace clrena19ValC{
            constexpr MPL::Value<clrena19Val,clrena19Val::v0> v0{};
            constexpr MPL::Value<clrena19Val,clrena19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,clrena19Val> clrena19{}; 
        ///no description available
        enum class clrena20Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock alarm interrupt disabled
            v1=0x00000001,     ///<write: disable real time clock alarm interrupt; read: real time clock alarm interrupt enabled
        };
        namespace clrena20ValC{
            constexpr MPL::Value<clrena20Val,clrena20Val::v0> v0{};
            constexpr MPL::Value<clrena20Val,clrena20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,clrena20Val> clrena20{}; 
        ///no description available
        enum class clrena21Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock seconds interrupt disabled
            v1=0x00000001,     ///<write: disable real time clock seconds interrupt; read: real time clock seconds interrupt enabled
        };
        namespace clrena21ValC{
            constexpr MPL::Value<clrena21Val,clrena21Val::v0> v0{};
            constexpr MPL::Value<clrena21Val,clrena21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,clrena21Val> clrena21{}; 
        ///no description available
        enum class clrena22Val {
            v0=0x00000000,     ///<write: no effect; read: periodic interrupt timer all channels interrupt disabled
            v1=0x00000001,     ///<write: disable periodic interrupt timer all channels interrupt; read: periodic interrupt timer all channels interrupt enabled
        };
        namespace clrena22ValC{
            constexpr MPL::Value<clrena22Val,clrena22Val::v0> v0{};
            constexpr MPL::Value<clrena22Val,clrena22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,clrena22Val> clrena22{}; 
        ///no description available
        enum class clrena23Val {
            v0=0x00000000,     ///<write: no effect; read: integrated interchip sound 0 interrupt disabled
            v1=0x00000001,     ///<write: disable integrated interchip sound 0 interrupt; read: integrated interchip sound 0 interrupt enabled
        };
        namespace clrena23ValC{
            constexpr MPL::Value<clrena23Val,clrena23Val::v0> v0{};
            constexpr MPL::Value<clrena23Val,clrena23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,clrena23Val> clrena23{}; 
        ///no description available
        enum class clrena24Val {
            v0=0x00000000,     ///<write: no effect; read: universal serial bus on the go interrupt disabled
            v1=0x00000001,     ///<write: disable universal serial bus on the go interrupt; read: universal serial bus on the go interrupt enabled
        };
        namespace clrena24ValC{
            constexpr MPL::Value<clrena24Val,clrena24Val::v0> v0{};
            constexpr MPL::Value<clrena24Val,clrena24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,clrena24Val> clrena24{}; 
        ///no description available
        enum class clrena25Val {
            v0=0x00000000,     ///<write: no effect; read: digital-to-analog converter 0 interrupt disabled
            v1=0x00000001,     ///<write: disable digital-to-analog converter 0 interrupt; read: digital-to-analog converter 0 interrupt enabled
        };
        namespace clrena25ValC{
            constexpr MPL::Value<clrena25Val,clrena25Val::v0> v0{};
            constexpr MPL::Value<clrena25Val,clrena25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,clrena25Val> clrena25{}; 
        ///no description available
        enum class clrena26Val {
            v0=0x00000000,     ///<write: no effect; read: touch sensing input interrupt disabled
            v1=0x00000001,     ///<write: disable touch sensing input interrupt; read: touch sensing input interrupt enabled
        };
        namespace clrena26ValC{
            constexpr MPL::Value<clrena26Val,clrena26Val::v0> v0{};
            constexpr MPL::Value<clrena26Val,clrena26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,clrena26Val> clrena26{}; 
        ///no description available
        enum class clrena27Val {
            v0=0x00000000,     ///<write: no effect; read: multipurpose clock generator interrupt disabled
            v1=0x00000001,     ///<write: disable multipurpose clock generator interrupt; read: multipurpose clock generator interrupt enabled
        };
        namespace clrena27ValC{
            constexpr MPL::Value<clrena27Val,clrena27Val::v0> v0{};
            constexpr MPL::Value<clrena27Val,clrena27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,clrena27Val> clrena27{}; 
        ///no description available
        enum class clrena28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt disabled
            v1=0x00000001,     ///<write: disable Low-Power Timer interrupt; read: Low-Power Timer interrupt enabled
        };
        namespace clrena28ValC{
            constexpr MPL::Value<clrena28Val,clrena28Val::v0> v0{};
            constexpr MPL::Value<clrena28Val,clrena28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,clrena28Val> clrena28{}; 
        ///no description available
        enum class clrena29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt disabled
            v1=0x00000001,     ///<write: disable Reserved iv 45 interrupt; read: Reserved iv 45 interrupt enabled
        };
        namespace clrena29ValC{
            constexpr MPL::Value<clrena29Val,clrena29Val::v0> v0{};
            constexpr MPL::Value<clrena29Val,clrena29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,clrena29Val> clrena29{}; 
        ///no description available
        enum class clrena30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA pin detect interrupt disabled
            v1=0x00000001,     ///<write: disable PORTA pin detect interrupt; read: PORTA pin detect interrupt enabled
        };
        namespace clrena30ValC{
            constexpr MPL::Value<clrena30Val,clrena30Val::v0> v0{};
            constexpr MPL::Value<clrena30Val,clrena30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,clrena30Val> clrena30{}; 
        ///no description available
        enum class clrena31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTC and PORTD pin detect interrupt disabled
            v1=0x00000001,     ///<write: disable PORTC and PORTD pin detect interrupt; read: PORTC and PORTD pin detect interrupt enabled
        };
        namespace clrena31ValC{
            constexpr MPL::Value<clrena31Val,clrena31Val::v0> v0{};
            constexpr MPL::Value<clrena31Val,clrena31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,clrena31Val> clrena31{}; 
    }
    namespace NonenvicIspr{    ///<Interrupt Set Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///no description available
        enum class setpend0Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 0 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the DMA channel 0 transfer complete and error interrupt state to pending; read: DMA channel 0 transfer complete and error interrupt is pending
        };
        namespace setpend0ValC{
            constexpr MPL::Value<setpend0Val,setpend0Val::v0> v0{};
            constexpr MPL::Value<setpend0Val,setpend0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,setpend0Val> setpend0{}; 
        ///no description available
        enum class setpend1Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 1 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the DMA channel 1 transfer complete and error interrupt state to pending; read: DMA channel 1 transfer complete and error interrupt is pending
        };
        namespace setpend1ValC{
            constexpr MPL::Value<setpend1Val,setpend1Val::v0> v0{};
            constexpr MPL::Value<setpend1Val,setpend1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,setpend1Val> setpend1{}; 
        ///no description available
        enum class setpend2Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 2 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the DMA channel 2 transfer complete and error interrupt state to pending; read: DMA channel 2 transfer complete and error interrupt is pending
        };
        namespace setpend2ValC{
            constexpr MPL::Value<setpend2Val,setpend2Val::v0> v0{};
            constexpr MPL::Value<setpend2Val,setpend2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,setpend2Val> setpend2{}; 
        ///no description available
        enum class setpend3Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 3 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the DMA channel 3 transfer complete and error interrupt state to pending; read: DMA channel 3 transfer complete and error interrupt is pending
        };
        namespace setpend3ValC{
            constexpr MPL::Value<setpend3Val,setpend3Val::v0> v0{};
            constexpr MPL::Value<setpend3Val,setpend3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,setpend3Val> setpend3{}; 
        ///no description available
        enum class setpend4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 20 interrupt state to pending; read: Reserved iv 20 interrupt is pending
        };
        namespace setpend4ValC{
            constexpr MPL::Value<setpend4Val,setpend4Val::v0> v0{};
            constexpr MPL::Value<setpend4Val,setpend4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,setpend4Val> setpend4{}; 
        ///no description available
        enum class setpend5Val {
            v0=0x00000000,     ///<write: no effect; read: FTFA command complete and read collision interrupt is not pending
            v1=0x00000001,     ///<write: changes the FTFA command complete and read collision interrupt state to pending; read: FTFA command complete and read collision interrupt is pending
        };
        namespace setpend5ValC{
            constexpr MPL::Value<setpend5Val,setpend5Val::v0> v0{};
            constexpr MPL::Value<setpend5Val,setpend5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,setpend5Val> setpend5{}; 
        ///no description available
        enum class setpend6Val {
            v0=0x00000000,     ///<write: no effect; read: low-voltage detect and low-voltage warning interrupt is not pending
            v1=0x00000001,     ///<write: changes the low-voltage detect and low-voltage warning interrupt state to pending; read: low-voltage detect and low-voltage warning interrupt is pending
        };
        namespace setpend6ValC{
            constexpr MPL::Value<setpend6Val,setpend6Val::v0> v0{};
            constexpr MPL::Value<setpend6Val,setpend6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,setpend6Val> setpend6{}; 
        ///no description available
        enum class setpend7Val {
            v0=0x00000000,     ///<write: no effect; read: low leakage wakeup interrupt is not pending
            v1=0x00000001,     ///<write: changes the low leakage wakeup interrupt state to pending; read: low leakage wakeup interrupt is pending
        };
        namespace setpend7ValC{
            constexpr MPL::Value<setpend7Val,setpend7Val::v0> v0{};
            constexpr MPL::Value<setpend7Val,setpend7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,setpend7Val> setpend7{}; 
        ///no description available
        enum class setpend8Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the inter-integrated circuit 0 interrupt state to pending; read: inter-integrated circuit 0 interrupt is pending
        };
        namespace setpend8ValC{
            constexpr MPL::Value<setpend8Val,setpend8Val::v0> v0{};
            constexpr MPL::Value<setpend8Val,setpend8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,setpend8Val> setpend8{}; 
        ///no description available
        enum class setpend9Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 1 interrupt is not pending
            v1=0x00000001,     ///<write: changes the inter-integrated circuit 1 interrupt state to pending; read: inter-integrated circuit 1 interrupt is pending
        };
        namespace setpend9ValC{
            constexpr MPL::Value<setpend9Val,setpend9Val::v0> v0{};
            constexpr MPL::Value<setpend9Val,setpend9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,setpend9Val> setpend9{}; 
        ///no description available
        enum class setpend10Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the serial peripheral interface 0 interrupt state to pending; read: serial peripheral interface 0 interrupt is pending
        };
        namespace setpend10ValC{
            constexpr MPL::Value<setpend10Val,setpend10Val::v0> v0{};
            constexpr MPL::Value<setpend10Val,setpend10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,setpend10Val> setpend10{}; 
        ///no description available
        enum class setpend11Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 1 interrupt is not pending
            v1=0x00000001,     ///<write: changes the serial peripheral interface 1 interrupt state to pending; read: serial peripheral interface 1 interrupt is pending
        };
        namespace setpend11ValC{
            constexpr MPL::Value<setpend11Val,setpend11Val::v0> v0{};
            constexpr MPL::Value<setpend11Val,setpend11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,setpend11Val> setpend11{}; 
        ///no description available
        enum class setpend12Val {
            v0=0x00000000,     ///<write: no effect; read: UART0 status and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the UART0 status and error interrupt state to pending; read: UART0 status and error interrupt is pending
        };
        namespace setpend12ValC{
            constexpr MPL::Value<setpend12Val,setpend12Val::v0> v0{};
            constexpr MPL::Value<setpend12Val,setpend12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,setpend12Val> setpend12{}; 
        ///no description available
        enum class setpend13Val {
            v0=0x00000000,     ///<write: no effect; read: UART1 status and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the UART1 status and error interrupt state to pending; read: UART1 status and error interrupt is pending
        };
        namespace setpend13ValC{
            constexpr MPL::Value<setpend13Val,setpend13Val::v0> v0{};
            constexpr MPL::Value<setpend13Val,setpend13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,setpend13Val> setpend13{}; 
        ///no description available
        enum class setpend14Val {
            v0=0x00000000,     ///<write: no effect; read: UART2 status and error interrupt is not pending
            v1=0x00000001,     ///<write: changes the UART2 status and error interrupt state to pending; read: UART2 status and error interrupt is pending
        };
        namespace setpend14ValC{
            constexpr MPL::Value<setpend14Val,setpend14Val::v0> v0{};
            constexpr MPL::Value<setpend14Val,setpend14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,setpend14Val> setpend14{}; 
        ///no description available
        enum class setpend15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-digital converter 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Analog-to-digital converter 0 interrupt state to pending; read: Analog-to-digital converter 0 interrupt is pending
        };
        namespace setpend15ValC{
            constexpr MPL::Value<setpend15Val,setpend15Val::v0> v0{};
            constexpr MPL::Value<setpend15Val,setpend15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,setpend15Val> setpend15{}; 
        ///no description available
        enum class setpend16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Comparator 0 interrupt state to pending; read: Comparator 0 interrupt is pending
        };
        namespace setpend16ValC{
            constexpr MPL::Value<setpend16Val,setpend16Val::v0> v0{};
            constexpr MPL::Value<setpend16Val,setpend16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,setpend16Val> setpend16{}; 
        ///no description available
        enum class setpend17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Timer PWM module 0 interrupt state to pending; read: Timer PWM module 0 interrupt is pending
        };
        namespace setpend17ValC{
            constexpr MPL::Value<setpend17Val,setpend17Val::v0> v0{};
            constexpr MPL::Value<setpend17Val,setpend17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,setpend17Val> setpend17{}; 
        ///no description available
        enum class setpend18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 1 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Timer PWM module 1 interrupt state to pending; read: Timer PWM module 1 interrupt is pending
        };
        namespace setpend18ValC{
            constexpr MPL::Value<setpend18Val,setpend18Val::v0> v0{};
            constexpr MPL::Value<setpend18Val,setpend18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,setpend18Val> setpend18{}; 
        ///no description available
        enum class setpend19Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 2 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Timer PWM module 2 interrupt state to pending; read: Timer PWM module 2 interrupt is pending
        };
        namespace setpend19ValC{
            constexpr MPL::Value<setpend19Val,setpend19Val::v0> v0{};
            constexpr MPL::Value<setpend19Val,setpend19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,setpend19Val> setpend19{}; 
        ///no description available
        enum class setpend20Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock alarm interrupt is not pending
            v1=0x00000001,     ///<write: changes the real time clock alarm interrupt state to pending; read: real time clock alarm interrupt is pending
        };
        namespace setpend20ValC{
            constexpr MPL::Value<setpend20Val,setpend20Val::v0> v0{};
            constexpr MPL::Value<setpend20Val,setpend20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,setpend20Val> setpend20{}; 
        ///no description available
        enum class setpend21Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock seconds interrupt is not pending
            v1=0x00000001,     ///<write: changes the real time clock seconds interrupt state to pending; read: real time clock seconds interrupt is pending
        };
        namespace setpend21ValC{
            constexpr MPL::Value<setpend21Val,setpend21Val::v0> v0{};
            constexpr MPL::Value<setpend21Val,setpend21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,setpend21Val> setpend21{}; 
        ///no description available
        enum class setpend22Val {
            v0=0x00000000,     ///<write: no effect; read: periodic interrupt timer all channels interrupt is not pending
            v1=0x00000001,     ///<write: changes the periodic interrupt timer all channels interrupt state to pending; read: periodic interrupt timer all channels interrupt is pending
        };
        namespace setpend22ValC{
            constexpr MPL::Value<setpend22Val,setpend22Val::v0> v0{};
            constexpr MPL::Value<setpend22Val,setpend22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,setpend22Val> setpend22{}; 
        ///no description available
        enum class setpend23Val {
            v0=0x00000000,     ///<write: no effect; read: integrated interchip sound 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the integrated interchip sound 0 interrupt state to pending; read: integrated interchip sound 0 interrupt is pending
        };
        namespace setpend23ValC{
            constexpr MPL::Value<setpend23Val,setpend23Val::v0> v0{};
            constexpr MPL::Value<setpend23Val,setpend23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,setpend23Val> setpend23{}; 
        ///no description available
        enum class setpend24Val {
            v0=0x00000000,     ///<write: no effect; read: universal serial bus on the go interrupt is not pending
            v1=0x00000001,     ///<write: changes the universal serial bus on the go interrupt state to pending; read: universal serial bus on the go interrupt is pending
        };
        namespace setpend24ValC{
            constexpr MPL::Value<setpend24Val,setpend24Val::v0> v0{};
            constexpr MPL::Value<setpend24Val,setpend24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,setpend24Val> setpend24{}; 
        ///no description available
        enum class setpend25Val {
            v0=0x00000000,     ///<write: no effect; read: digital-to-analog converter 0 interrupt is not pending
            v1=0x00000001,     ///<write: changes the digital-to-analog converter 0 interrupt state to pending; read: digital-to-analog converter 0 interrupt is pending
        };
        namespace setpend25ValC{
            constexpr MPL::Value<setpend25Val,setpend25Val::v0> v0{};
            constexpr MPL::Value<setpend25Val,setpend25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,setpend25Val> setpend25{}; 
        ///no description available
        enum class setpend26Val {
            v0=0x00000000,     ///<write: no effect; read: touch sensing input interrupt is not pending
            v1=0x00000001,     ///<write: changes the touch sensing input interrupt state to pending; read: touch sensing input interrupt is pending
        };
        namespace setpend26ValC{
            constexpr MPL::Value<setpend26Val,setpend26Val::v0> v0{};
            constexpr MPL::Value<setpend26Val,setpend26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,setpend26Val> setpend26{}; 
        ///no description available
        enum class setpend27Val {
            v0=0x00000000,     ///<write: no effect; read: multipurpose clock generator interrupt is not pending
            v1=0x00000001,     ///<write: changes the multipurpose clock generator interrupt state to pending; read: multipurpose clock generator interrupt is pending
        };
        namespace setpend27ValC{
            constexpr MPL::Value<setpend27Val,setpend27Val::v0> v0{};
            constexpr MPL::Value<setpend27Val,setpend27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,setpend27Val> setpend27{}; 
        ///no description available
        enum class setpend28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt is not pending
            v1=0x00000001,     ///<write: changes the Low-Power Timer interrupt state to pending; read: Low-Power Timer interrupt is pending
        };
        namespace setpend28ValC{
            constexpr MPL::Value<setpend28Val,setpend28Val::v0> v0{};
            constexpr MPL::Value<setpend28Val,setpend28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,setpend28Val> setpend28{}; 
        ///no description available
        enum class setpend29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt is not pending
            v1=0x00000001,     ///<write: changes the Reserved iv 45 interrupt state to pending; read: Reserved iv 45 interrupt is pending
        };
        namespace setpend29ValC{
            constexpr MPL::Value<setpend29Val,setpend29Val::v0> v0{};
            constexpr MPL::Value<setpend29Val,setpend29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,setpend29Val> setpend29{}; 
        ///no description available
        enum class setpend30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA pin detect interrupt is not pending
            v1=0x00000001,     ///<write: changes the PORTA pin detect interrupt state to pending; read: PORTA pin detect interrupt is pending
        };
        namespace setpend30ValC{
            constexpr MPL::Value<setpend30Val,setpend30Val::v0> v0{};
            constexpr MPL::Value<setpend30Val,setpend30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,setpend30Val> setpend30{}; 
        ///no description available
        enum class setpend31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTC and PORTD pin detect interrupt is not pending
            v1=0x00000001,     ///<write: changes the PORTC and PORTD pin detect interrupt state to pending; read: PORTC and PORTD pin detect interrupt is pending
        };
        namespace setpend31ValC{
            constexpr MPL::Value<setpend31Val,setpend31Val::v0> v0{};
            constexpr MPL::Value<setpend31Val,setpend31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,setpend31Val> setpend31{}; 
    }
    namespace NonenvicIcpr{    ///<Interrupt Clear Pending Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///no description available
        enum class clrpend0Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 0 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the DMA channel 0 transfer complete and error interrupt; read: DMA channel 0 transfer complete and error interrupt is pending
        };
        namespace clrpend0ValC{
            constexpr MPL::Value<clrpend0Val,clrpend0Val::v0> v0{};
            constexpr MPL::Value<clrpend0Val,clrpend0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,clrpend0Val> clrpend0{}; 
        ///no description available
        enum class clrpend1Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 1 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the DMA channel 1 transfer complete and error interrupt; read: DMA channel 1 transfer complete and error interrupt is pending
        };
        namespace clrpend1ValC{
            constexpr MPL::Value<clrpend1Val,clrpend1Val::v0> v0{};
            constexpr MPL::Value<clrpend1Val,clrpend1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,clrpend1Val> clrpend1{}; 
        ///no description available
        enum class clrpend2Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 2 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the DMA channel 2 transfer complete and error interrupt; read: DMA channel 2 transfer complete and error interrupt is pending
        };
        namespace clrpend2ValC{
            constexpr MPL::Value<clrpend2Val,clrpend2Val::v0> v0{};
            constexpr MPL::Value<clrpend2Val,clrpend2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,clrpend2Val> clrpend2{}; 
        ///no description available
        enum class clrpend3Val {
            v0=0x00000000,     ///<write: no effect; read: DMA channel 3 transfer complete and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the DMA channel 3 transfer complete and error interrupt; read: DMA channel 3 transfer complete and error interrupt is pending
        };
        namespace clrpend3ValC{
            constexpr MPL::Value<clrpend3Val,clrpend3Val::v0> v0{};
            constexpr MPL::Value<clrpend3Val,clrpend3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clrpend3Val> clrpend3{}; 
        ///no description available
        enum class clrpend4Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 20 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 20 interrupt; read: Reserved iv 20 interrupt is pending
        };
        namespace clrpend4ValC{
            constexpr MPL::Value<clrpend4Val,clrpend4Val::v0> v0{};
            constexpr MPL::Value<clrpend4Val,clrpend4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,clrpend4Val> clrpend4{}; 
        ///no description available
        enum class clrpend5Val {
            v0=0x00000000,     ///<write: no effect; read: FTFA command complete and read collision interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the FTFA command complete and read collision interrupt; read: FTFA command complete and read collision interrupt is pending
        };
        namespace clrpend5ValC{
            constexpr MPL::Value<clrpend5Val,clrpend5Val::v0> v0{};
            constexpr MPL::Value<clrpend5Val,clrpend5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,clrpend5Val> clrpend5{}; 
        ///no description available
        enum class clrpend6Val {
            v0=0x00000000,     ///<write: no effect; read: low-voltage detect and low-voltage warning interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the low-voltage detect and low-voltage warning interrupt; read: low-voltage detect and low-voltage warning interrupt is pending
        };
        namespace clrpend6ValC{
            constexpr MPL::Value<clrpend6Val,clrpend6Val::v0> v0{};
            constexpr MPL::Value<clrpend6Val,clrpend6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,clrpend6Val> clrpend6{}; 
        ///no description available
        enum class clrpend7Val {
            v0=0x00000000,     ///<write: no effect; read: low leakage wakeup interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the low leakage wakeup interrupt; read: low leakage wakeup interrupt is pending
        };
        namespace clrpend7ValC{
            constexpr MPL::Value<clrpend7Val,clrpend7Val::v0> v0{};
            constexpr MPL::Value<clrpend7Val,clrpend7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,clrpend7Val> clrpend7{}; 
        ///no description available
        enum class clrpend8Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the inter-integrated circuit 0 interrupt; read: inter-integrated circuit 0 interrupt is pending
        };
        namespace clrpend8ValC{
            constexpr MPL::Value<clrpend8Val,clrpend8Val::v0> v0{};
            constexpr MPL::Value<clrpend8Val,clrpend8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,clrpend8Val> clrpend8{}; 
        ///no description available
        enum class clrpend9Val {
            v0=0x00000000,     ///<write: no effect; read: inter-integrated circuit 1 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the inter-integrated circuit 1 interrupt; read: inter-integrated circuit 1 interrupt is pending
        };
        namespace clrpend9ValC{
            constexpr MPL::Value<clrpend9Val,clrpend9Val::v0> v0{};
            constexpr MPL::Value<clrpend9Val,clrpend9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,clrpend9Val> clrpend9{}; 
        ///no description available
        enum class clrpend10Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the serial peripheral interface 0 interrupt; read: serial peripheral interface 0 interrupt is pending
        };
        namespace clrpend10ValC{
            constexpr MPL::Value<clrpend10Val,clrpend10Val::v0> v0{};
            constexpr MPL::Value<clrpend10Val,clrpend10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,clrpend10Val> clrpend10{}; 
        ///no description available
        enum class clrpend11Val {
            v0=0x00000000,     ///<write: no effect; read: serial peripheral interface 1 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the serial peripheral interface 1 interrupt; read: serial peripheral interface 1 interrupt is pending
        };
        namespace clrpend11ValC{
            constexpr MPL::Value<clrpend11Val,clrpend11Val::v0> v0{};
            constexpr MPL::Value<clrpend11Val,clrpend11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,clrpend11Val> clrpend11{}; 
        ///no description available
        enum class clrpend12Val {
            v0=0x00000000,     ///<write: no effect; read: UART0 status and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the UART0 status and error interrupt; read: UART0 status and error interrupt is pending
        };
        namespace clrpend12ValC{
            constexpr MPL::Value<clrpend12Val,clrpend12Val::v0> v0{};
            constexpr MPL::Value<clrpend12Val,clrpend12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,clrpend12Val> clrpend12{}; 
        ///no description available
        enum class clrpend13Val {
            v0=0x00000000,     ///<write: no effect; read: UART1 status and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the UART1 status and error interrupt; read: UART1 status and error interrupt is pending
        };
        namespace clrpend13ValC{
            constexpr MPL::Value<clrpend13Val,clrpend13Val::v0> v0{};
            constexpr MPL::Value<clrpend13Val,clrpend13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,clrpend13Val> clrpend13{}; 
        ///no description available
        enum class clrpend14Val {
            v0=0x00000000,     ///<write: no effect; read: UART2 status and error interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the UART2 status and error interrupt; read: UART2 status and error interrupt is pending
        };
        namespace clrpend14ValC{
            constexpr MPL::Value<clrpend14Val,clrpend14Val::v0> v0{};
            constexpr MPL::Value<clrpend14Val,clrpend14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,clrpend14Val> clrpend14{}; 
        ///no description available
        enum class clrpend15Val {
            v0=0x00000000,     ///<write: no effect; read: Analog-to-digital converter 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Analog-to-digital converter 0 interrupt; read: Analog-to-digital converter 0 interrupt is pending
        };
        namespace clrpend15ValC{
            constexpr MPL::Value<clrpend15Val,clrpend15Val::v0> v0{};
            constexpr MPL::Value<clrpend15Val,clrpend15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,clrpend15Val> clrpend15{}; 
        ///no description available
        enum class clrpend16Val {
            v0=0x00000000,     ///<write: no effect; read: Comparator 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Comparator 0 interrupt; read: Comparator 0 interrupt is pending
        };
        namespace clrpend16ValC{
            constexpr MPL::Value<clrpend16Val,clrpend16Val::v0> v0{};
            constexpr MPL::Value<clrpend16Val,clrpend16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,clrpend16Val> clrpend16{}; 
        ///no description available
        enum class clrpend17Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Timer PWM module 0 interrupt; read: Timer PWM module 0 interrupt is pending
        };
        namespace clrpend17ValC{
            constexpr MPL::Value<clrpend17Val,clrpend17Val::v0> v0{};
            constexpr MPL::Value<clrpend17Val,clrpend17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,clrpend17Val> clrpend17{}; 
        ///no description available
        enum class clrpend18Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 1 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Timer PWM module 1 interrupt; read: Timer PWM module 1 interrupt is pending
        };
        namespace clrpend18ValC{
            constexpr MPL::Value<clrpend18Val,clrpend18Val::v0> v0{};
            constexpr MPL::Value<clrpend18Val,clrpend18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,clrpend18Val> clrpend18{}; 
        ///no description available
        enum class clrpend19Val {
            v0=0x00000000,     ///<write: no effect; read: Timer PWM module 2 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Timer PWM module 2 interrupt; read: Timer PWM module 2 interrupt is pending
        };
        namespace clrpend19ValC{
            constexpr MPL::Value<clrpend19Val,clrpend19Val::v0> v0{};
            constexpr MPL::Value<clrpend19Val,clrpend19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,clrpend19Val> clrpend19{}; 
        ///no description available
        enum class clrpend20Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock alarm interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the real time clock alarm interrupt; read: real time clock alarm interrupt is pending
        };
        namespace clrpend20ValC{
            constexpr MPL::Value<clrpend20Val,clrpend20Val::v0> v0{};
            constexpr MPL::Value<clrpend20Val,clrpend20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,clrpend20Val> clrpend20{}; 
        ///no description available
        enum class clrpend21Val {
            v0=0x00000000,     ///<write: no effect; read: real time clock seconds interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the real time clock seconds interrupt; read: real time clock seconds interrupt is pending
        };
        namespace clrpend21ValC{
            constexpr MPL::Value<clrpend21Val,clrpend21Val::v0> v0{};
            constexpr MPL::Value<clrpend21Val,clrpend21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,clrpend21Val> clrpend21{}; 
        ///no description available
        enum class clrpend22Val {
            v0=0x00000000,     ///<write: no effect; read: periodic interrupt timer all channels interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the periodic interrupt timer all channels interrupt; read: periodic interrupt timer all channels interrupt is pending
        };
        namespace clrpend22ValC{
            constexpr MPL::Value<clrpend22Val,clrpend22Val::v0> v0{};
            constexpr MPL::Value<clrpend22Val,clrpend22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,clrpend22Val> clrpend22{}; 
        ///no description available
        enum class clrpend23Val {
            v0=0x00000000,     ///<write: no effect; read: integrated interchip sound 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the integrated interchip sound 0 interrupt; read: integrated interchip sound 0 interrupt is pending
        };
        namespace clrpend23ValC{
            constexpr MPL::Value<clrpend23Val,clrpend23Val::v0> v0{};
            constexpr MPL::Value<clrpend23Val,clrpend23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,clrpend23Val> clrpend23{}; 
        ///no description available
        enum class clrpend24Val {
            v0=0x00000000,     ///<write: no effect; read: universal serial bus on the go interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the universal serial bus on the go interrupt; read: universal serial bus on the go interrupt is pending
        };
        namespace clrpend24ValC{
            constexpr MPL::Value<clrpend24Val,clrpend24Val::v0> v0{};
            constexpr MPL::Value<clrpend24Val,clrpend24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,clrpend24Val> clrpend24{}; 
        ///no description available
        enum class clrpend25Val {
            v0=0x00000000,     ///<write: no effect; read: digital-to-analog converter 0 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the digital-to-analog converter 0 interrupt; read: digital-to-analog converter 0 interrupt is pending
        };
        namespace clrpend25ValC{
            constexpr MPL::Value<clrpend25Val,clrpend25Val::v0> v0{};
            constexpr MPL::Value<clrpend25Val,clrpend25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,clrpend25Val> clrpend25{}; 
        ///no description available
        enum class clrpend26Val {
            v0=0x00000000,     ///<write: no effect; read: touch sensing input interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the touch sensing input interrupt; read: touch sensing input interrupt is pending
        };
        namespace clrpend26ValC{
            constexpr MPL::Value<clrpend26Val,clrpend26Val::v0> v0{};
            constexpr MPL::Value<clrpend26Val,clrpend26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,clrpend26Val> clrpend26{}; 
        ///no description available
        enum class clrpend27Val {
            v0=0x00000000,     ///<write: no effect; read: multipurpose clock generator interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the multipurpose clock generator interrupt; read: multipurpose clock generator interrupt is pending
        };
        namespace clrpend27ValC{
            constexpr MPL::Value<clrpend27Val,clrpend27Val::v0> v0{};
            constexpr MPL::Value<clrpend27Val,clrpend27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,clrpend27Val> clrpend27{}; 
        ///no description available
        enum class clrpend28Val {
            v0=0x00000000,     ///<write: no effect; read: Low-Power Timer interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Low-Power Timer interrupt; read: Low-Power Timer interrupt is pending
        };
        namespace clrpend28ValC{
            constexpr MPL::Value<clrpend28Val,clrpend28Val::v0> v0{};
            constexpr MPL::Value<clrpend28Val,clrpend28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,clrpend28Val> clrpend28{}; 
        ///no description available
        enum class clrpend29Val {
            v0=0x00000000,     ///<write: no effect; read: Reserved iv 45 interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the Reserved iv 45 interrupt; read: Reserved iv 45 interrupt is pending
        };
        namespace clrpend29ValC{
            constexpr MPL::Value<clrpend29Val,clrpend29Val::v0> v0{};
            constexpr MPL::Value<clrpend29Val,clrpend29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,clrpend29Val> clrpend29{}; 
        ///no description available
        enum class clrpend30Val {
            v0=0x00000000,     ///<write: no effect; read: PORTA pin detect interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the PORTA pin detect interrupt; read: PORTA pin detect interrupt is pending
        };
        namespace clrpend30ValC{
            constexpr MPL::Value<clrpend30Val,clrpend30Val::v0> v0{};
            constexpr MPL::Value<clrpend30Val,clrpend30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,clrpend30Val> clrpend30{}; 
        ///no description available
        enum class clrpend31Val {
            v0=0x00000000,     ///<write: no effect; read: PORTC and PORTD pin detect interrupt is not pending
            v1=0x00000001,     ///<write: removes pending state from the PORTC and PORTD pin detect interrupt; read: PORTC and PORTD pin detect interrupt is pending
        };
        namespace clrpend31ValC{
            constexpr MPL::Value<clrpend31Val,clrpend31Val::v0> v0{};
            constexpr MPL::Value<clrpend31Val,clrpend31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,clrpend31Val> clrpend31{}; 
    }
    namespace NonenvicIpr0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0x00000000,0,unsigned>;
        ///Priority of the DMA channel 0 transfer complete and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
        ///Priority of the DMA channel 1 transfer complete and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri1{}; 
        ///Priority of the DMA channel 2 transfer complete and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri2{}; 
        ///Priority of the DMA channel 3 transfer complete and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace NonenvicIpr1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e404,0x00000000,0,unsigned>;
        ///Priority of the Reserved iv 20 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///Priority of the FTFA command complete and read collision interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///Priority of the low-voltage detect and low-voltage warning interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
        ///Priority of the low leakage wakeup interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace NonenvicIpr2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e408,0x00000000,0,unsigned>;
        ///Priority of the inter-integrated circuit 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
        ///Priority of the inter-integrated circuit 1 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri9{}; 
        ///Priority of the serial peripheral interface 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri10{}; 
        ///Priority of the serial peripheral interface 1 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace NonenvicIpr3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e40c,0x00000000,0,unsigned>;
        ///Priority of the UART0 status and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
        ///Priority of the UART1 status and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri13{}; 
        ///Priority of the UART2 status and error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of the Analog-to-digital converter 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace NonenvicIpr4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e410,0x00000000,0,unsigned>;
        ///Priority of the Comparator 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
        ///Priority of the Timer PWM module 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri17{}; 
        ///Priority of the Timer PWM module 1 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri18{}; 
        ///Priority of the Timer PWM module 2 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace NonenvicIpr5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e414,0x00000000,0,unsigned>;
        ///Priority of the real time clock alarm interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
        ///Priority of the real time clock seconds interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri21{}; 
        ///Priority of the periodic interrupt timer all channels interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri22{}; 
        ///Priority of the integrated interchip sound 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace NonenvicIpr6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e418,0x00000000,0,unsigned>;
        ///Priority of the universal serial bus on the go interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
        ///Priority of the digital-to-analog converter 0 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri25{}; 
        ///Priority of the touch sensing input interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri26{}; 
        ///Priority of the multipurpose clock generator interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace NonenvicIpr7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e41c,0x00000000,0,unsigned>;
        ///Priority of the Low-Power Timer interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
        ///Priority of the Reserved iv 45 interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri29{}; 
        ///Priority of the PORTA pin detect interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri30{}; 
        ///Priority of the PORTC and PORTD pin detect interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
}
