#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Factory Information Configuration Registers
    namespace FicrCodepagesize{    ///<Code memory page size
        using Addr = Register::Address<0x10000010,0x00000000,0x00000000,unsigned>;
        ///Code memory page size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> codepagesize{}; 
    }
    namespace FicrCodesize{    ///<Code memory size
        using Addr = Register::Address<0x10000014,0x00000000,0x00000000,unsigned>;
        ///Code memory size in number of pages
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> codesize{}; 
    }
    namespace FicrConfigid{    ///<Configuration identifier
        using Addr = Register::Address<0x1000005c,0x00000000,0x00000000,unsigned>;
        ///Identification number for the HW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hwid{}; 
        ///Deprecated field -  Identification number for the FW that is pre-loaded into the chip
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> fwid{}; 
    }
    namespace FicrDeviceaddrtype{    ///<Device address type
        using Addr = Register::Address<0x100000a0,0xfffffffe,0x00000000,unsigned>;
        ///Device address type
        enum class DeviceaddrtypeVal {
            public_=0x00000000,     ///<Public address
            random=0x00000001,     ///<Random address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DeviceaddrtypeVal> deviceaddrtype{}; 
        namespace DeviceaddrtypeValC{
            constexpr Register::FieldValue<decltype(deviceaddrtype)::Type,DeviceaddrtypeVal::public_> public_{};
            constexpr Register::FieldValue<decltype(deviceaddrtype)::Type,DeviceaddrtypeVal::random> random{};
        }
    }
    namespace FicrDeviceid0{    ///<Description collection[0]:  Device identifier
        using Addr = Register::Address<0x10000060,0x00000000,0x00000000,unsigned>;
        ///64 bit unique device identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
    namespace FicrDeviceid1{    ///<Description collection[0]:  Device identifier
        using Addr = Register::Address<0x10000064,0x00000000,0x00000000,unsigned>;
        ///64 bit unique device identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
    namespace FicrEr0{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x10000080,0x00000000,0x00000000,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace FicrEr1{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x10000084,0x00000000,0x00000000,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace FicrEr2{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x10000088,0x00000000,0x00000000,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace FicrEr3{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x1000008c,0x00000000,0x00000000,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace FicrIr0{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x10000090,0x00000000,0x00000000,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace FicrIr1{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x10000094,0x00000000,0x00000000,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace FicrIr2{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x10000098,0x00000000,0x00000000,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace FicrIr3{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x1000009c,0x00000000,0x00000000,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace FicrDeviceaddr0{    ///<Description collection[0]:  Device address 0
        using Addr = Register::Address<0x100000a4,0x00000000,0x00000000,unsigned>;
        ///48 bit device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceaddr{}; 
    }
    namespace FicrDeviceaddr1{    ///<Description collection[0]:  Device address 0
        using Addr = Register::Address<0x100000a8,0x00000000,0x00000000,unsigned>;
        ///48 bit device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceaddr{}; 
    }
}
