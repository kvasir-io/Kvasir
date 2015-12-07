#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpiodPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff003,0xffffff00,0,unsigned char>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pdo{}; 
        namespace PdoValC{
        }
    }
    namespace GpiodPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff013,0xffffff00,0,unsigned char>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pdi{}; 
        namespace PdiValC{
        }
    }
    namespace GpiodPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff017,0xffffff00,0,unsigned char>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pdd{}; 
        namespace PddValC{
        }
    }
    namespace GpiodGacr{    ///<GPIO Attribute Checker Register
        using Addr = Register::Address<0x400ff01f,0xffffff78,0,unsigned char>;
        ///Attribute Check Byte
        enum class AcbVal {
            v000=0x00000000,     ///<User nonsecure: Read + Write; User Secure: Read + Write; Privileged Secure: Read + Write
            v001=0x00000001,     ///<User nonsecure: Read; User Secure: Read + Write; Privileged Secure: Read + Write
            v010=0x00000002,     ///<User nonsecure: None; User Secure: Read + Write; Privileged Secure: Read + Write
            v011=0x00000003,     ///<User nonsecure: Read; User Secure: Read; Privileged Secure: Read + Write
            v100=0x00000004,     ///<User nonsecure: None; User Secure: Read; Privileged Secure: Read + Write
            v101=0x00000005,     ///<User nonsecure: None; User Secure: None; Privileged Secure: Read + Write
            v110=0x00000006,     ///<User nonsecure: None; User Secure: None; Privileged Secure: Read
            v111=0x00000007,     ///<User nonsecure: None; User Secure: None; Privileged Secure: None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AcbVal> acb{}; 
        namespace AcbValC{
            constexpr Register::FieldValue<decltype(acb),AcbVal::v000> v000{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v001> v001{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v010> v010{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v011> v011{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v100> v100{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v101> v101{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v110> v110{};
            constexpr Register::FieldValue<decltype(acb),AcbVal::v111> v111{};
        }
        ///Read-Only Byte
        enum class RobVal {
            v0=0x00000000,     ///<Writes to the ACB are allowed.
            v1=0x00000001,     ///<Writes to the ACB are ignored.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RobVal> rob{}; 
        namespace RobValC{
            constexpr Register::FieldValue<decltype(rob),RobVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rob),RobVal::v1> v1{};
        }
    }
}
