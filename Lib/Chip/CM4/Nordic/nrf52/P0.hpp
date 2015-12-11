#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO Port 1
    namespace Noneout{    ///<Write GPIO port
        using Addr = Register::Address<0x50000504,0x00000000,0,unsigned>;
        ///P0.0 pin
        enum class Pin0Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::low> low{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::high> high{};
        }
        }
        ///P0.1 pin
        enum class Pin1Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::low> low{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::high> high{};
        }
        }
        ///P0.2 pin
        enum class Pin2Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::low> low{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::high> high{};
        }
        }
        ///P0.3 pin
        enum class Pin3Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::low> low{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::high> high{};
        }
        }
        ///P0.4 pin
        enum class Pin4Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::low> low{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::high> high{};
        }
        }
        ///P0.5 pin
        enum class Pin5Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::low> low{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::high> high{};
        }
        }
        ///P0.6 pin
        enum class Pin6Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::low> low{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::high> high{};
        }
        }
        ///P0.7 pin
        enum class Pin7Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::low> low{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::high> high{};
        }
        }
        ///P0.8 pin
        enum class Pin8Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::low> low{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::high> high{};
        }
        }
        ///P0.9 pin
        enum class Pin9Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::low> low{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::high> high{};
        }
        }
        ///P0.10 pin
        enum class Pin10Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::low> low{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::high> high{};
        }
        }
        ///P0.11 pin
        enum class Pin11Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::low> low{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::high> high{};
        }
        }
        ///P0.12 pin
        enum class Pin12Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::low> low{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::high> high{};
        }
        }
        ///P0.13 pin
        enum class Pin13Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::low> low{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::high> high{};
        }
        }
        ///P0.14 pin
        enum class Pin14Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::low> low{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::high> high{};
        }
        }
        ///P0.15 pin
        enum class Pin15Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::low> low{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::high> high{};
        }
        }
        ///P0.16 pin
        enum class Pin16Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::low> low{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::high> high{};
        }
        }
        ///P0.17 pin
        enum class Pin17Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::low> low{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::high> high{};
        }
        }
        ///P0.18 pin
        enum class Pin18Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::low> low{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::high> high{};
        }
        }
        ///P0.19 pin
        enum class Pin19Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::low> low{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::high> high{};
        }
        }
        ///P0.20 pin
        enum class Pin20Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::low> low{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::high> high{};
        }
        }
        ///P0.21 pin
        enum class Pin21Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::low> low{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::high> high{};
        }
        }
        ///P0.22 pin
        enum class Pin22Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::low> low{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::high> high{};
        }
        }
        ///P0.23 pin
        enum class Pin23Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::low> low{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::high> high{};
        }
        }
        ///P0.24 pin
        enum class Pin24Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::low> low{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::high> high{};
        }
        }
        ///P0.25 pin
        enum class Pin25Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::low> low{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::high> high{};
        }
        }
        ///P0.26 pin
        enum class Pin26Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::low> low{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::high> high{};
        }
        }
        ///P0.27 pin
        enum class Pin27Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::low> low{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::high> high{};
        }
        }
        ///P0.28 pin
        enum class Pin28Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::low> low{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::high> high{};
        }
        }
        ///P0.29 pin
        enum class Pin29Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::low> low{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::high> high{};
        }
        }
        ///P0.30 pin
        enum class Pin30Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::low> low{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::high> high{};
        }
        }
        ///P0.31 pin
        enum class Pin31Val {
            low=0x00000000,     ///<Pin driver is low
            high=0x00000001,     ///<Pin driver is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::low> low{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::high> high{};
        }
        }
    }
    namespace Noneoutset{    ///<Set individual bits in GPIO port
        using Addr = Register::Address<0x50000508,0x00000000,0,unsigned>;
        ///P0.0 pin
        enum class Pin0Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::low> low{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::high> high{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::set> set{};
        }
        }
        ///P0.1 pin
        enum class Pin1Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::low> low{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::high> high{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::set> set{};
        }
        }
        ///P0.2 pin
        enum class Pin2Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::low> low{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::high> high{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::set> set{};
        }
        }
        ///P0.3 pin
        enum class Pin3Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::low> low{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::high> high{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::set> set{};
        }
        }
        ///P0.4 pin
        enum class Pin4Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::low> low{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::high> high{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::set> set{};
        }
        }
        ///P0.5 pin
        enum class Pin5Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::low> low{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::high> high{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::set> set{};
        }
        }
        ///P0.6 pin
        enum class Pin6Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::low> low{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::high> high{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::set> set{};
        }
        }
        ///P0.7 pin
        enum class Pin7Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::low> low{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::high> high{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::set> set{};
        }
        }
        ///P0.8 pin
        enum class Pin8Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::low> low{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::high> high{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::set> set{};
        }
        }
        ///P0.9 pin
        enum class Pin9Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::low> low{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::high> high{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::set> set{};
        }
        }
        ///P0.10 pin
        enum class Pin10Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::low> low{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::high> high{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::set> set{};
        }
        }
        ///P0.11 pin
        enum class Pin11Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::low> low{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::high> high{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::set> set{};
        }
        }
        ///P0.12 pin
        enum class Pin12Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::low> low{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::high> high{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::set> set{};
        }
        }
        ///P0.13 pin
        enum class Pin13Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::low> low{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::high> high{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::set> set{};
        }
        }
        ///P0.14 pin
        enum class Pin14Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::low> low{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::high> high{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::set> set{};
        }
        }
        ///P0.15 pin
        enum class Pin15Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::low> low{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::high> high{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::set> set{};
        }
        }
        ///P0.16 pin
        enum class Pin16Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::low> low{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::high> high{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::set> set{};
        }
        }
        ///P0.17 pin
        enum class Pin17Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::low> low{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::high> high{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::set> set{};
        }
        }
        ///P0.18 pin
        enum class Pin18Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::low> low{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::high> high{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::set> set{};
        }
        }
        ///P0.19 pin
        enum class Pin19Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::low> low{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::high> high{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::set> set{};
        }
        }
        ///P0.20 pin
        enum class Pin20Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::low> low{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::high> high{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::set> set{};
        }
        }
        ///P0.21 pin
        enum class Pin21Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::low> low{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::high> high{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::set> set{};
        }
        }
        ///P0.22 pin
        enum class Pin22Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::low> low{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::high> high{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::set> set{};
        }
        }
        ///P0.23 pin
        enum class Pin23Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::low> low{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::high> high{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::set> set{};
        }
        }
        ///P0.24 pin
        enum class Pin24Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::low> low{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::high> high{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::set> set{};
        }
        }
        ///P0.25 pin
        enum class Pin25Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::low> low{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::high> high{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::set> set{};
        }
        }
        ///P0.26 pin
        enum class Pin26Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::low> low{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::high> high{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::set> set{};
        }
        }
        ///P0.27 pin
        enum class Pin27Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::low> low{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::high> high{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::set> set{};
        }
        }
        ///P0.28 pin
        enum class Pin28Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::low> low{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::high> high{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::set> set{};
        }
        }
        ///P0.29 pin
        enum class Pin29Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::low> low{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::high> high{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::set> set{};
        }
        }
        ///P0.30 pin
        enum class Pin30Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::low> low{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::high> high{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::set> set{};
        }
        }
        ///P0.31 pin
        enum class Pin31Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            set=0x00000001,     ///<Write: writing a '1' sets the pin high; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::low> low{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::high> high{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::set> set{};
        }
        }
    }
    namespace Noneoutclr{    ///<Clear individual bits in GPIO port
        using Addr = Register::Address<0x5000050c,0x00000000,0,unsigned>;
        ///P0.0 pin
        enum class Pin0Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::low> low{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::high> high{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::clear> clear{};
        }
        }
        ///P0.1 pin
        enum class Pin1Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::low> low{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::high> high{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::clear> clear{};
        }
        }
        ///P0.2 pin
        enum class Pin2Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::low> low{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::high> high{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::clear> clear{};
        }
        }
        ///P0.3 pin
        enum class Pin3Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::low> low{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::high> high{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::clear> clear{};
        }
        }
        ///P0.4 pin
        enum class Pin4Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::low> low{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::high> high{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::clear> clear{};
        }
        }
        ///P0.5 pin
        enum class Pin5Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::low> low{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::high> high{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::clear> clear{};
        }
        }
        ///P0.6 pin
        enum class Pin6Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::low> low{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::high> high{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::clear> clear{};
        }
        }
        ///P0.7 pin
        enum class Pin7Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::low> low{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::high> high{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::clear> clear{};
        }
        }
        ///P0.8 pin
        enum class Pin8Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::low> low{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::high> high{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::clear> clear{};
        }
        }
        ///P0.9 pin
        enum class Pin9Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::low> low{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::high> high{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::clear> clear{};
        }
        }
        ///P0.10 pin
        enum class Pin10Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::low> low{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::high> high{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::clear> clear{};
        }
        }
        ///P0.11 pin
        enum class Pin11Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::low> low{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::high> high{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::clear> clear{};
        }
        }
        ///P0.12 pin
        enum class Pin12Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::low> low{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::high> high{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::clear> clear{};
        }
        }
        ///P0.13 pin
        enum class Pin13Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::low> low{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::high> high{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::clear> clear{};
        }
        }
        ///P0.14 pin
        enum class Pin14Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::low> low{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::high> high{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::clear> clear{};
        }
        }
        ///P0.15 pin
        enum class Pin15Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::low> low{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::high> high{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::clear> clear{};
        }
        }
        ///P0.16 pin
        enum class Pin16Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::low> low{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::high> high{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::clear> clear{};
        }
        }
        ///P0.17 pin
        enum class Pin17Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::low> low{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::high> high{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::clear> clear{};
        }
        }
        ///P0.18 pin
        enum class Pin18Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::low> low{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::high> high{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::clear> clear{};
        }
        }
        ///P0.19 pin
        enum class Pin19Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::low> low{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::high> high{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::clear> clear{};
        }
        }
        ///P0.20 pin
        enum class Pin20Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::low> low{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::high> high{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::clear> clear{};
        }
        }
        ///P0.21 pin
        enum class Pin21Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::low> low{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::high> high{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::clear> clear{};
        }
        }
        ///P0.22 pin
        enum class Pin22Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::low> low{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::high> high{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::clear> clear{};
        }
        }
        ///P0.23 pin
        enum class Pin23Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::low> low{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::high> high{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::clear> clear{};
        }
        }
        ///P0.24 pin
        enum class Pin24Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::low> low{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::high> high{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::clear> clear{};
        }
        }
        ///P0.25 pin
        enum class Pin25Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::low> low{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::high> high{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::clear> clear{};
        }
        }
        ///P0.26 pin
        enum class Pin26Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::low> low{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::high> high{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::clear> clear{};
        }
        }
        ///P0.27 pin
        enum class Pin27Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::low> low{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::high> high{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::clear> clear{};
        }
        }
        ///P0.28 pin
        enum class Pin28Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::low> low{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::high> high{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::clear> clear{};
        }
        }
        ///P0.29 pin
        enum class Pin29Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::low> low{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::high> high{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::clear> clear{};
        }
        }
        ///P0.30 pin
        enum class Pin30Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::low> low{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::high> high{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::clear> clear{};
        }
        }
        ///P0.31 pin
        enum class Pin31Val {
            low=0x00000000,     ///<Read: pin driver is low
            high=0x00000001,     ///<Read: pin driver is high
            clear=0x00000001,     ///<Write: writing a '1' sets the pin low; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::low> low{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::high> high{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::clear> clear{};
        }
        }
    }
    namespace Nonein{    ///<Read GPIO port
        using Addr = Register::Address<0x50000510,0x00000000,0,unsigned>;
        ///P0.0 pin
        enum class Pin0Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::low> low{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::high> high{};
        }
        }
        ///P0.1 pin
        enum class Pin1Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::low> low{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::high> high{};
        }
        }
        ///P0.2 pin
        enum class Pin2Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::low> low{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::high> high{};
        }
        }
        ///P0.3 pin
        enum class Pin3Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::low> low{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::high> high{};
        }
        }
        ///P0.4 pin
        enum class Pin4Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::low> low{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::high> high{};
        }
        }
        ///P0.5 pin
        enum class Pin5Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::low> low{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::high> high{};
        }
        }
        ///P0.6 pin
        enum class Pin6Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::low> low{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::high> high{};
        }
        }
        ///P0.7 pin
        enum class Pin7Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::low> low{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::high> high{};
        }
        }
        ///P0.8 pin
        enum class Pin8Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::low> low{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::high> high{};
        }
        }
        ///P0.9 pin
        enum class Pin9Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::low> low{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::high> high{};
        }
        }
        ///P0.10 pin
        enum class Pin10Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::low> low{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::high> high{};
        }
        }
        ///P0.11 pin
        enum class Pin11Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::low> low{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::high> high{};
        }
        }
        ///P0.12 pin
        enum class Pin12Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::low> low{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::high> high{};
        }
        }
        ///P0.13 pin
        enum class Pin13Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::low> low{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::high> high{};
        }
        }
        ///P0.14 pin
        enum class Pin14Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::low> low{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::high> high{};
        }
        }
        ///P0.15 pin
        enum class Pin15Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::low> low{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::high> high{};
        }
        }
        ///P0.16 pin
        enum class Pin16Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::low> low{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::high> high{};
        }
        }
        ///P0.17 pin
        enum class Pin17Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::low> low{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::high> high{};
        }
        }
        ///P0.18 pin
        enum class Pin18Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::low> low{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::high> high{};
        }
        }
        ///P0.19 pin
        enum class Pin19Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::low> low{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::high> high{};
        }
        }
        ///P0.20 pin
        enum class Pin20Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::low> low{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::high> high{};
        }
        }
        ///P0.21 pin
        enum class Pin21Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::low> low{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::high> high{};
        }
        }
        ///P0.22 pin
        enum class Pin22Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::low> low{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::high> high{};
        }
        }
        ///P0.23 pin
        enum class Pin23Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::low> low{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::high> high{};
        }
        }
        ///P0.24 pin
        enum class Pin24Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::low> low{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::high> high{};
        }
        }
        ///P0.25 pin
        enum class Pin25Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::low> low{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::high> high{};
        }
        }
        ///P0.26 pin
        enum class Pin26Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::low> low{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::high> high{};
        }
        }
        ///P0.27 pin
        enum class Pin27Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::low> low{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::high> high{};
        }
        }
        ///P0.28 pin
        enum class Pin28Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::low> low{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::high> high{};
        }
        }
        ///P0.29 pin
        enum class Pin29Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::low> low{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::high> high{};
        }
        }
        ///P0.30 pin
        enum class Pin30Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::low> low{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::high> high{};
        }
        }
        ///P0.31 pin
        enum class Pin31Val {
            low=0x00000000,     ///<Pin input is low
            high=0x00000001,     ///<Pin input is high
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::low> low{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::high> high{};
        }
        }
    }
    namespace Nonedir{    ///<Direction of GPIO pins
        using Addr = Register::Address<0x50000514,0x00000000,0,unsigned>;
        ///P0.0 pin
        enum class Pin0Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::input> input{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::output> output{};
        }
        }
        ///P0.1 pin
        enum class Pin1Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::input> input{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::output> output{};
        }
        }
        ///P0.2 pin
        enum class Pin2Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::input> input{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::output> output{};
        }
        }
        ///P0.3 pin
        enum class Pin3Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::input> input{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::output> output{};
        }
        }
        ///P0.4 pin
        enum class Pin4Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::input> input{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::output> output{};
        }
        }
        ///P0.5 pin
        enum class Pin5Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::input> input{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::output> output{};
        }
        }
        ///P0.6 pin
        enum class Pin6Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::input> input{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::output> output{};
        }
        }
        ///P0.7 pin
        enum class Pin7Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::input> input{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::output> output{};
        }
        }
        ///P0.8 pin
        enum class Pin8Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::input> input{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::output> output{};
        }
        }
        ///P0.9 pin
        enum class Pin9Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::input> input{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::output> output{};
        }
        }
        ///P0.10 pin
        enum class Pin10Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::input> input{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::output> output{};
        }
        }
        ///P0.11 pin
        enum class Pin11Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::input> input{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::output> output{};
        }
        }
        ///P0.12 pin
        enum class Pin12Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::input> input{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::output> output{};
        }
        }
        ///P0.13 pin
        enum class Pin13Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::input> input{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::output> output{};
        }
        }
        ///P0.14 pin
        enum class Pin14Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::input> input{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::output> output{};
        }
        }
        ///P0.15 pin
        enum class Pin15Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::input> input{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::output> output{};
        }
        }
        ///P0.16 pin
        enum class Pin16Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::input> input{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::output> output{};
        }
        }
        ///P0.17 pin
        enum class Pin17Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::input> input{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::output> output{};
        }
        }
        ///P0.18 pin
        enum class Pin18Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::input> input{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::output> output{};
        }
        }
        ///P0.19 pin
        enum class Pin19Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::input> input{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::output> output{};
        }
        }
        ///P0.20 pin
        enum class Pin20Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::input> input{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::output> output{};
        }
        }
        ///P0.21 pin
        enum class Pin21Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::input> input{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::output> output{};
        }
        }
        ///P0.22 pin
        enum class Pin22Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::input> input{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::output> output{};
        }
        }
        ///P0.23 pin
        enum class Pin23Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::input> input{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::output> output{};
        }
        }
        ///P0.24 pin
        enum class Pin24Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::input> input{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::output> output{};
        }
        }
        ///P0.25 pin
        enum class Pin25Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::input> input{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::output> output{};
        }
        }
        ///P0.26 pin
        enum class Pin26Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::input> input{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::output> output{};
        }
        }
        ///P0.27 pin
        enum class Pin27Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::input> input{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::output> output{};
        }
        }
        ///P0.28 pin
        enum class Pin28Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::input> input{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::output> output{};
        }
        }
        ///P0.29 pin
        enum class Pin29Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::input> input{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::output> output{};
        }
        }
        ///P0.30 pin
        enum class Pin30Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::input> input{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::output> output{};
        }
        }
        ///P0.31 pin
        enum class Pin31Val {
            input=0x00000000,     ///<Pin set as input
            output=0x00000001,     ///<Pin set as output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::input> input{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::output> output{};
        }
        }
    }
    namespace Nonedirset{    ///<DIR set register
        using Addr = Register::Address<0x50000518,0x00000000,0,unsigned>;
        ///Set as output pin 0
        enum class Pin0Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::input> input{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::output> output{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::set> set{};
        }
        }
        ///Set as output pin 1
        enum class Pin1Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::input> input{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::output> output{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::set> set{};
        }
        }
        ///Set as output pin 2
        enum class Pin2Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::input> input{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::output> output{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::set> set{};
        }
        }
        ///Set as output pin 3
        enum class Pin3Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::input> input{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::output> output{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::set> set{};
        }
        }
        ///Set as output pin 4
        enum class Pin4Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::input> input{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::output> output{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::set> set{};
        }
        }
        ///Set as output pin 5
        enum class Pin5Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::input> input{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::output> output{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::set> set{};
        }
        }
        ///Set as output pin 6
        enum class Pin6Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::input> input{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::output> output{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::set> set{};
        }
        }
        ///Set as output pin 7
        enum class Pin7Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::input> input{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::output> output{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::set> set{};
        }
        }
        ///Set as output pin 8
        enum class Pin8Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::input> input{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::output> output{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::set> set{};
        }
        }
        ///Set as output pin 9
        enum class Pin9Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::input> input{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::output> output{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::set> set{};
        }
        }
        ///Set as output pin 10
        enum class Pin10Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::input> input{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::output> output{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::set> set{};
        }
        }
        ///Set as output pin 11
        enum class Pin11Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::input> input{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::output> output{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::set> set{};
        }
        }
        ///Set as output pin 12
        enum class Pin12Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::input> input{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::output> output{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::set> set{};
        }
        }
        ///Set as output pin 13
        enum class Pin13Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::input> input{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::output> output{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::set> set{};
        }
        }
        ///Set as output pin 14
        enum class Pin14Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::input> input{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::output> output{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::set> set{};
        }
        }
        ///Set as output pin 15
        enum class Pin15Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::input> input{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::output> output{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::set> set{};
        }
        }
        ///Set as output pin 16
        enum class Pin16Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::input> input{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::output> output{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::set> set{};
        }
        }
        ///Set as output pin 17
        enum class Pin17Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::input> input{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::output> output{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::set> set{};
        }
        }
        ///Set as output pin 18
        enum class Pin18Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::input> input{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::output> output{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::set> set{};
        }
        }
        ///Set as output pin 19
        enum class Pin19Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::input> input{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::output> output{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::set> set{};
        }
        }
        ///Set as output pin 20
        enum class Pin20Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::input> input{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::output> output{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::set> set{};
        }
        }
        ///Set as output pin 21
        enum class Pin21Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::input> input{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::output> output{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::set> set{};
        }
        }
        ///Set as output pin 22
        enum class Pin22Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::input> input{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::output> output{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::set> set{};
        }
        }
        ///Set as output pin 23
        enum class Pin23Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::input> input{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::output> output{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::set> set{};
        }
        }
        ///Set as output pin 24
        enum class Pin24Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::input> input{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::output> output{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::set> set{};
        }
        }
        ///Set as output pin 25
        enum class Pin25Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::input> input{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::output> output{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::set> set{};
        }
        }
        ///Set as output pin 26
        enum class Pin26Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::input> input{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::output> output{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::set> set{};
        }
        }
        ///Set as output pin 27
        enum class Pin27Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::input> input{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::output> output{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::set> set{};
        }
        }
        ///Set as output pin 28
        enum class Pin28Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::input> input{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::output> output{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::set> set{};
        }
        }
        ///Set as output pin 29
        enum class Pin29Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::input> input{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::output> output{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::set> set{};
        }
        }
        ///Set as output pin 30
        enum class Pin30Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::input> input{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::output> output{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::set> set{};
        }
        }
        ///Set as output pin 31
        enum class Pin31Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            set=0x00000001,     ///<Write: writing a '1' sets pin to output; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::input> input{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::output> output{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::set> set{};
        }
        }
    }
    namespace Nonedirclr{    ///<DIR clear register
        using Addr = Register::Address<0x5000051c,0x00000000,0,unsigned>;
        ///Set as input pin 0
        enum class Pin0Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pin0Val> pin0{}; 
        namespace Pin0ValC{
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::input> input{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::output> output{};
            constexpr Register::FieldValue<decltype(pin0)::Type,Pin0Val::clear> clear{};
        }
        }
        ///Set as input pin 1
        enum class Pin1Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pin1Val> pin1{}; 
        namespace Pin1ValC{
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::input> input{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::output> output{};
            constexpr Register::FieldValue<decltype(pin1)::Type,Pin1Val::clear> clear{};
        }
        }
        ///Set as input pin 2
        enum class Pin2Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pin2Val> pin2{}; 
        namespace Pin2ValC{
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::input> input{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::output> output{};
            constexpr Register::FieldValue<decltype(pin2)::Type,Pin2Val::clear> clear{};
        }
        }
        ///Set as input pin 3
        enum class Pin3Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pin3Val> pin3{}; 
        namespace Pin3ValC{
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::input> input{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::output> output{};
            constexpr Register::FieldValue<decltype(pin3)::Type,Pin3Val::clear> clear{};
        }
        }
        ///Set as input pin 4
        enum class Pin4Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pin4Val> pin4{}; 
        namespace Pin4ValC{
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::input> input{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::output> output{};
            constexpr Register::FieldValue<decltype(pin4)::Type,Pin4Val::clear> clear{};
        }
        }
        ///Set as input pin 5
        enum class Pin5Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pin5Val> pin5{}; 
        namespace Pin5ValC{
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::input> input{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::output> output{};
            constexpr Register::FieldValue<decltype(pin5)::Type,Pin5Val::clear> clear{};
        }
        }
        ///Set as input pin 6
        enum class Pin6Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pin6Val> pin6{}; 
        namespace Pin6ValC{
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::input> input{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::output> output{};
            constexpr Register::FieldValue<decltype(pin6)::Type,Pin6Val::clear> clear{};
        }
        }
        ///Set as input pin 7
        enum class Pin7Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pin7Val> pin7{}; 
        namespace Pin7ValC{
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::input> input{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::output> output{};
            constexpr Register::FieldValue<decltype(pin7)::Type,Pin7Val::clear> clear{};
        }
        }
        ///Set as input pin 8
        enum class Pin8Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Pin8Val> pin8{}; 
        namespace Pin8ValC{
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::input> input{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::output> output{};
            constexpr Register::FieldValue<decltype(pin8)::Type,Pin8Val::clear> clear{};
        }
        }
        ///Set as input pin 9
        enum class Pin9Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Pin9Val> pin9{}; 
        namespace Pin9ValC{
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::input> input{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::output> output{};
            constexpr Register::FieldValue<decltype(pin9)::Type,Pin9Val::clear> clear{};
        }
        }
        ///Set as input pin 10
        enum class Pin10Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pin10Val> pin10{}; 
        namespace Pin10ValC{
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::input> input{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::output> output{};
            constexpr Register::FieldValue<decltype(pin10)::Type,Pin10Val::clear> clear{};
        }
        }
        ///Set as input pin 11
        enum class Pin11Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Pin11Val> pin11{}; 
        namespace Pin11ValC{
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::input> input{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::output> output{};
            constexpr Register::FieldValue<decltype(pin11)::Type,Pin11Val::clear> clear{};
        }
        }
        ///Set as input pin 12
        enum class Pin12Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pin12Val> pin12{}; 
        namespace Pin12ValC{
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::input> input{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::output> output{};
            constexpr Register::FieldValue<decltype(pin12)::Type,Pin12Val::clear> clear{};
        }
        }
        ///Set as input pin 13
        enum class Pin13Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pin13Val> pin13{}; 
        namespace Pin13ValC{
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::input> input{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::output> output{};
            constexpr Register::FieldValue<decltype(pin13)::Type,Pin13Val::clear> clear{};
        }
        }
        ///Set as input pin 14
        enum class Pin14Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Pin14Val> pin14{}; 
        namespace Pin14ValC{
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::input> input{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::output> output{};
            constexpr Register::FieldValue<decltype(pin14)::Type,Pin14Val::clear> clear{};
        }
        }
        ///Set as input pin 15
        enum class Pin15Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pin15Val> pin15{}; 
        namespace Pin15ValC{
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::input> input{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::output> output{};
            constexpr Register::FieldValue<decltype(pin15)::Type,Pin15Val::clear> clear{};
        }
        }
        ///Set as input pin 16
        enum class Pin16Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pin16Val> pin16{}; 
        namespace Pin16ValC{
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::input> input{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::output> output{};
            constexpr Register::FieldValue<decltype(pin16)::Type,Pin16Val::clear> clear{};
        }
        }
        ///Set as input pin 17
        enum class Pin17Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Pin17Val> pin17{}; 
        namespace Pin17ValC{
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::input> input{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::output> output{};
            constexpr Register::FieldValue<decltype(pin17)::Type,Pin17Val::clear> clear{};
        }
        }
        ///Set as input pin 18
        enum class Pin18Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pin18Val> pin18{}; 
        namespace Pin18ValC{
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::input> input{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::output> output{};
            constexpr Register::FieldValue<decltype(pin18)::Type,Pin18Val::clear> clear{};
        }
        }
        ///Set as input pin 19
        enum class Pin19Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Pin19Val> pin19{}; 
        namespace Pin19ValC{
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::input> input{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::output> output{};
            constexpr Register::FieldValue<decltype(pin19)::Type,Pin19Val::clear> clear{};
        }
        }
        ///Set as input pin 20
        enum class Pin20Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Pin20Val> pin20{}; 
        namespace Pin20ValC{
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::input> input{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::output> output{};
            constexpr Register::FieldValue<decltype(pin20)::Type,Pin20Val::clear> clear{};
        }
        }
        ///Set as input pin 21
        enum class Pin21Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Pin21Val> pin21{}; 
        namespace Pin21ValC{
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::input> input{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::output> output{};
            constexpr Register::FieldValue<decltype(pin21)::Type,Pin21Val::clear> clear{};
        }
        }
        ///Set as input pin 22
        enum class Pin22Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Pin22Val> pin22{}; 
        namespace Pin22ValC{
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::input> input{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::output> output{};
            constexpr Register::FieldValue<decltype(pin22)::Type,Pin22Val::clear> clear{};
        }
        }
        ///Set as input pin 23
        enum class Pin23Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Pin23Val> pin23{}; 
        namespace Pin23ValC{
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::input> input{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::output> output{};
            constexpr Register::FieldValue<decltype(pin23)::Type,Pin23Val::clear> clear{};
        }
        }
        ///Set as input pin 24
        enum class Pin24Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pin24Val> pin24{}; 
        namespace Pin24ValC{
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::input> input{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::output> output{};
            constexpr Register::FieldValue<decltype(pin24)::Type,Pin24Val::clear> clear{};
        }
        }
        ///Set as input pin 25
        enum class Pin25Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pin25Val> pin25{}; 
        namespace Pin25ValC{
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::input> input{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::output> output{};
            constexpr Register::FieldValue<decltype(pin25)::Type,Pin25Val::clear> clear{};
        }
        }
        ///Set as input pin 26
        enum class Pin26Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pin26Val> pin26{}; 
        namespace Pin26ValC{
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::input> input{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::output> output{};
            constexpr Register::FieldValue<decltype(pin26)::Type,Pin26Val::clear> clear{};
        }
        }
        ///Set as input pin 27
        enum class Pin27Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pin27Val> pin27{}; 
        namespace Pin27ValC{
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::input> input{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::output> output{};
            constexpr Register::FieldValue<decltype(pin27)::Type,Pin27Val::clear> clear{};
        }
        }
        ///Set as input pin 28
        enum class Pin28Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Pin28Val> pin28{}; 
        namespace Pin28ValC{
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::input> input{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::output> output{};
            constexpr Register::FieldValue<decltype(pin28)::Type,Pin28Val::clear> clear{};
        }
        }
        ///Set as input pin 29
        enum class Pin29Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Pin29Val> pin29{}; 
        namespace Pin29ValC{
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::input> input{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::output> output{};
            constexpr Register::FieldValue<decltype(pin29)::Type,Pin29Val::clear> clear{};
        }
        }
        ///Set as input pin 30
        enum class Pin30Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pin30Val> pin30{}; 
        namespace Pin30ValC{
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::input> input{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::output> output{};
            constexpr Register::FieldValue<decltype(pin30)::Type,Pin30Val::clear> clear{};
        }
        }
        ///Set as input pin 31
        enum class Pin31Val {
            input=0x00000000,     ///<Read: pin set as input
            output=0x00000001,     ///<Read: pin set as output
            clear=0x00000001,     ///<Write: writing a '1' sets pin to input; writing a '0' has no effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pin31Val> pin31{}; 
        namespace Pin31ValC{
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::input> input{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::output> output{};
            constexpr Register::FieldValue<decltype(pin31)::Type,Pin31Val::clear> clear{};
        }
        }
    }
    namespace Nonelatch{    ///<Latch indicating which GPIO pins have met the criteria set in PIN_CNF[n].SENSE register
        using Addr = Register::Address<0x50000520,0x00000000,0,unsigned>;
        ///Register holding a '1' for each GPIO pins which has met the criteria set in PIN_CNF[n].SENSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> latch{}; 
    }
    namespace Nonedetectmode{    ///<Select between default DETECT signal behaviour and LDETECT mode
        using Addr = Register::Address<0x50000524,0xfffffffe,0,unsigned>;
        ///Select between default DETECT signal behaviour and LDETECT mode
        enum class DetectmodeVal {
            default_=0x00000000,     ///<Use default behaviour
            ldetect=0x00000001,     ///<Use LDETECT behaviour
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DetectmodeVal> detectmode{}; 
        namespace DetectmodeValC{
            constexpr Register::FieldValue<decltype(detectmode)::Type,DetectmodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(detectmode)::Type,DetectmodeVal::ldetect> ldetect{};
        }
        }
    }
    namespace NonepinCnf0{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000700,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf1{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000704,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf2{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000708,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf3{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000070c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf4{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000710,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf5{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000714,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf6{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000718,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf7{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000071c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf8{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000720,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf9{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000724,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf10{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000728,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf11{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000072c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf12{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000730,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf13{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000734,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf14{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000738,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf15{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000073c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf16{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000740,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf17{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000744,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf18{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000748,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf19{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000074c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf20{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000750,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf21{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000754,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf22{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000758,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf23{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000075c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf24{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000760,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf25{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000764,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf26{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000768,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf27{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000076c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf28{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000770,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf29{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000774,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf30{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x50000778,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
    namespace NonepinCnf31{    ///<Description collection[0]:  Configuration of GPIO pins
        using Addr = Register::Address<0x5000077c,0xfffcf8f0,0,unsigned>;
        ///Pin direction
        enum class DirVal {
            input=0x00000000,     ///<Configure pin as an input pin
            output=0x00000001,     ///<Configure pin as an output pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DirVal> dir{}; 
        namespace DirValC{
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::input> input{};
            constexpr Register::FieldValue<decltype(dir)::Type,DirVal::output> output{};
        }
        }
        ///Connect or disconnect input buffer
        enum class InputVal {
            connect=0x00000000,     ///<Connect input buffer
            disconnect=0x00000001,     ///<Disconnect input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,InputVal> input{}; 
        namespace InputValC{
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::connect> connect{};
            constexpr Register::FieldValue<decltype(input)::Type,InputVal::disconnect> disconnect{};
        }
        }
        ///Pull configuration
        enum class PullVal {
            disabled=0x00000000,     ///<No pull
            pulldown=0x00000001,     ///<Pull down on pin
            pullup=0x00000003,     ///<Pull up on pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PullVal> pull{}; 
        namespace PullValC{
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pulldown> pulldown{};
            constexpr Register::FieldValue<decltype(pull)::Type,PullVal::pullup> pullup{};
        }
        }
        ///Drive configuration
        enum class DriveVal {
            s0s1=0x00000000,     ///<Standard '0', standard '1'
            h0s1=0x00000001,     ///<High drive '0', standard '1'
            s0h1=0x00000002,     ///<Standard '0', high drive '1'
            h0h1=0x00000003,     ///<High drive '0', high 'drive '1''
            d0s1=0x00000004,     ///<Disconnect '0' standard '1'
            d0h1=0x00000005,     ///<Disconnect '0', high drive '1'
            s0d1=0x00000006,     ///<Standard '0'. disconnect '1'
            h0d1=0x00000007,     ///<High drive '0', disconnect '1'
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DriveVal> drive{}; 
        namespace DriveValC{
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0s1> s0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0s1> h0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0h1> s0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0h1> h0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0s1> d0s1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::d0h1> d0h1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::s0d1> s0d1{};
            constexpr Register::FieldValue<decltype(drive)::Type,DriveVal::h0d1> h0d1{};
        }
        }
        ///Pin sensing mechanism
        enum class SenseVal {
            disabled=0x00000000,     ///<Disabled
            high=0x00000002,     ///<Sense for high level
            low=0x00000003,     ///<Sense for low level
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,SenseVal> sense{}; 
        namespace SenseValC{
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::high> high{};
            constexpr Register::FieldValue<decltype(sense)::Type,SenseVal::low> low{};
        }
        }
    }
}
