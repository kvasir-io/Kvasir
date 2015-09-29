#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AIPS-Lite Bridge
    namespace AipsPacra{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000020,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrb{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000024,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacre{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000040,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrf{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000044,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrg{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000048,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrh{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000004c,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacri{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000050,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrj{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000054,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrk{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000058,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrl{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000005c,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrm{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000060,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrn{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000064,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacro{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x40000068,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
    namespace AipsPacrp{    ///<Peripheral Access Control Register
        using Addr = Register::Address<0x4000006c,0x00000000,0,unsigned>;
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ac7{}; 
        ///Read Only
        enum class ro7Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro7ValC{
            constexpr MPL::Value<ro7Val,ro7Val::v0> v0{};
            constexpr MPL::Value<ro7Val,ro7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ro7Val> ro7{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ac6{}; 
        ///Read Only
        enum class ro6Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro6ValC{
            constexpr MPL::Value<ro6Val,ro6Val::v0> v0{};
            constexpr MPL::Value<ro6Val,ro6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro6Val> ro6{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ac5{}; 
        ///Read Only
        enum class ro5Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro5ValC{
            constexpr MPL::Value<ro5Val,ro5Val::v0> v0{};
            constexpr MPL::Value<ro5Val,ro5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ro5Val> ro5{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ac4{}; 
        ///Read Only
        enum class ro4Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro4ValC{
            constexpr MPL::Value<ro4Val,ro4Val::v0> v0{};
            constexpr MPL::Value<ro4Val,ro4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro4Val> ro4{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ac3{}; 
        ///Read Only
        enum class ro3Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ro3Val> ro3{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ac2{}; 
        ///Read Only
        enum class ro2Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ac1{}; 
        ///Read Only
        enum class ro1Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Attribute Check
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ac0{}; 
        ///Read Only
        enum class ro0Val {
            v0=0x00000000,     ///<Writes to corresponding AC field are allowed.
            v1=0x00000001,     ///<Writes to corresponding AC field are ignored.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro0Val> ro0{}; 
    }
}
