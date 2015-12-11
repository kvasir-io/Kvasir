#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Factory Information Configuration Registers
    namespace Nonecodepagesize{    ///<Code memory page size
        using Addr = Register::Address<0x10000010,0x00000000,0,unsigned>;
        ///Code memory page size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> codepagesize{}; 
    }
    namespace Nonecodesize{    ///<Code memory size
        using Addr = Register::Address<0x10000014,0x00000000,0,unsigned>;
        ///Code memory size in number of pages
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> codesize{}; 
    }
    namespace Noneconfigid{    ///<Configuration identifier
        using Addr = Register::Address<0x1000005c,0x00000000,0,unsigned>;
        ///Identification number for the HW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hwid{}; 
        ///Deprecated field -  Identification number for the FW that is pre-loaded into the chip
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> fwid{}; 
    }
    namespace Nonedeviceid0{    ///<Description collection[0]:  Device identifier
        using Addr = Register::Address<0x10000060,0x00000000,0,unsigned>;
        ///64 bit unique device identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
    namespace Nonedeviceid1{    ///<Description collection[0]:  Device identifier
        using Addr = Register::Address<0x10000064,0x00000000,0,unsigned>;
        ///64 bit unique device identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
    namespace Noneer0{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x10000080,0x00000000,0,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace Noneer1{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x10000084,0x00000000,0,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace Noneer2{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x10000088,0x00000000,0,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace Noneer3{    ///<Description collection[0]:  Encryption Root, word 0
        using Addr = Register::Address<0x1000008c,0x00000000,0,unsigned>;
        ///Encryption Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> er{}; 
    }
    namespace Noneir0{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x10000090,0x00000000,0,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace Noneir1{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x10000094,0x00000000,0,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace Noneir2{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x10000098,0x00000000,0,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace Noneir3{    ///<Description collection[0]:  Identity Root, word 0
        using Addr = Register::Address<0x1000009c,0x00000000,0,unsigned>;
        ///Identity Root, word n
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ir{}; 
    }
    namespace Nonedeviceaddrtype{    ///<Device address type
        using Addr = Register::Address<0x100000a0,0xfffffffe,0,unsigned>;
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
    }
    namespace Nonedeviceaddr0{    ///<Description collection[0]:  Device address 0
        using Addr = Register::Address<0x100000a4,0x00000000,0,unsigned>;
        ///48 bit device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceaddr{}; 
    }
    namespace Nonedeviceaddr1{    ///<Description collection[0]:  Device address 0
        using Addr = Register::Address<0x100000a8,0x00000000,0,unsigned>;
        ///48 bit device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceaddr{}; 
    }
}
