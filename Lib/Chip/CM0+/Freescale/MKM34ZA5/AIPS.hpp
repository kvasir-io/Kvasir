#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AIPS-Lite Bridge
    namespace AipsPacra{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000020,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrb{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000024,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacre{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000040,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrf{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000044,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrg{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000048,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrh{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000004c,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacri{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000050,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrj{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000054,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrk{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000058,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrl{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000005c,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrm{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000060,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrn{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000064,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacro{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000068,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
    namespace AipsPacrp{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000006c,0x00000000,0x00000000,unsigned>;
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class Ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ro7Val> ro7{}; 
        namespace Ro7ValC{
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro7)::Type,Ro7Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class Ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro6Val> ro6{}; 
        namespace Ro6ValC{
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro6)::Type,Ro6Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class Ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ro5Val> ro5{}; 
        namespace Ro5ValC{
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro5)::Type,Ro5Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class Ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro4Val> ro4{}; 
        namespace Ro4ValC{
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro4)::Type,Ro4Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class Ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class Ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class Ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        ///Attribute Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class Ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
    }
}
