#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Micro Trace Buffer
    namespace MtbPosition{    ///<MTB Position Register
        using Addr = Register::Address<0xf0000000,0x00000003,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///Trace Packet Address Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> pointer{}; 
    }
    namespace MtbMaster{    ///<MTB Master Register
        using Addr = Register::Address<0xf0000004,0x7ffffc00,0,unsigned>;
        ///Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Trace start input enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstarten{}; 
        ///Trace stop input enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstopen{}; 
        ///Special Function Register Write Privilege bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sfrwpriv{}; 
        ///RAM privilege bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rampriv{}; 
        ///Halt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> haltreq{}; 
        ///Main trace enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace MtbFlow{    ///<MTB Flow Register
        using Addr = Register::Address<0xf0000008,0x00000004,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> autostop{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autohalt{}; 
        ///WATERMARK value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> watermark{}; 
    }
    namespace MtbBase{    ///<MTB Base Register
        using Addr = Register::Address<0xf000000c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baseaddr{}; 
    }
    namespace MtbModectrl{    ///<Integration Mode Control Register
        using Addr = Register::Address<0xf0000f00,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> modectrl{}; 
    }
    namespace MtbTagset{    ///<Claim TAG Set Register
        using Addr = Register::Address<0xf0000fa0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tagset{}; 
    }
    namespace MtbTagclear{    ///<Claim TAG Clear Register
        using Addr = Register::Address<0xf0000fa4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tagclear{}; 
    }
    namespace MtbLockaccess{    ///<Lock Access Register
        using Addr = Register::Address<0xf0000fb0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lockaccess{}; 
    }
    namespace MtbLockstat{    ///<Lock Status Register
        using Addr = Register::Address<0xf0000fb4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lockstat{}; 
    }
    namespace MtbAuthstat{    ///<Authentication Status Register
        using Addr = Register::Address<0xf0000fb8,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bit0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bit1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bit2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bit3{}; 
    }
    namespace MtbDevicearch{    ///<Device Architecture Register
        using Addr = Register::Address<0xf0000fbc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicearch{}; 
    }
    namespace MtbDevicecfg{    ///<Device Configuration Register
        using Addr = Register::Address<0xf0000fc8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicecfg{}; 
    }
    namespace MtbDevicetypid{    ///<Device Type Identifier Register
        using Addr = Register::Address<0xf0000fcc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicetypid{}; 
    }
    namespace MtbPeriphid4{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fd0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid5{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fd4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid6{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fd8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid7{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fdc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid0{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fe0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid1{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fe4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid2{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fe8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbPeriphid3{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fec,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbCompid0{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ff0,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
    namespace MtbCompid1{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ff4,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
    namespace MtbCompid2{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ff8,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
    namespace MtbCompid3{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ffc,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
}
