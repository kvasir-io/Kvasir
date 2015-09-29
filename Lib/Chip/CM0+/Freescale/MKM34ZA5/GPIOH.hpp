#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpiohPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff043,0xffffff00,0,unsigned char>;
        ///Port Data Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace GpiohPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff053,0xffffff00,0,unsigned char>;
        ///Port Data Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace GpiohPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff057,0xffffff00,0,unsigned char>;
        ///Port Data Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
    namespace GpiohGacr{    ///<GPIO Attribute Checker Register
        using Addr = Register::Address<0x400ff05f,0xffffff78,0,unsigned char>;
        ///Attribute Check Byte
        enum class acbVal {
            v000=0x00000000,     ///<User nonsecure: Read + Write; User Secure: Read + Write; Privileged Secure: Read + Write
            v001=0x00000001,     ///<User nonsecure: Read; User Secure: Read + Write; Privileged Secure: Read + Write
            v010=0x00000002,     ///<User nonsecure: None; User Secure: Read + Write; Privileged Secure: Read + Write
            v011=0x00000003,     ///<User nonsecure: Read; User Secure: Read; Privileged Secure: Read + Write
            v100=0x00000004,     ///<User nonsecure: None; User Secure: Read; Privileged Secure: Read + Write
            v101=0x00000005,     ///<User nonsecure: None; User Secure: None; Privileged Secure: Read + Write
            v110=0x00000006,     ///<User nonsecure: None; User Secure: None; Privileged Secure: Read
            v111=0x00000007,     ///<User nonsecure: None; User Secure: None; Privileged Secure: None
        };
        namespace acbValC{
            constexpr MPL::Value<acbVal,acbVal::v000> v000{};
            constexpr MPL::Value<acbVal,acbVal::v001> v001{};
            constexpr MPL::Value<acbVal,acbVal::v010> v010{};
            constexpr MPL::Value<acbVal,acbVal::v011> v011{};
            constexpr MPL::Value<acbVal,acbVal::v100> v100{};
            constexpr MPL::Value<acbVal,acbVal::v101> v101{};
            constexpr MPL::Value<acbVal,acbVal::v110> v110{};
            constexpr MPL::Value<acbVal,acbVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,acbVal> acb{}; 
        ///Read-Only Byte
        enum class robVal {
            v0=0x00000000,     ///<Writes to the ACB are allowed.
            v1=0x00000001,     ///<Writes to the ACB are ignored.
        };
        namespace robValC{
            constexpr MPL::Value<robVal,robVal::v0> v0{};
            constexpr MPL::Value<robVal,robVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,robVal> rob{}; 
    }
}
