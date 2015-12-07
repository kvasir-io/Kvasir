#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System ROM
    namespace RomEntry0{    ///<Entry
        using Addr = Register::Address<0xf0002000,0x00000000,0,unsigned>;
        ///ENTRY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> entry{}; 
        namespace EntryValC{
        }
    }
    namespace RomEntry1{    ///<Entry
        using Addr = Register::Address<0xf0002004,0x00000000,0,unsigned>;
        ///ENTRY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> entry{}; 
        namespace EntryValC{
        }
    }
    namespace RomEntry2{    ///<Entry
        using Addr = Register::Address<0xf0002008,0x00000000,0,unsigned>;
        ///ENTRY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> entry{}; 
        namespace EntryValC{
        }
    }
    namespace RomTablemark{    ///<End of Table Marker Register
        using Addr = Register::Address<0xf000200c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mark{}; 
        namespace MarkValC{
        }
    }
    namespace RomSysaccess{    ///<System Access Register
        using Addr = Register::Address<0xf0002fcc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sysaccess{}; 
        namespace SysaccessValC{
        }
    }
    namespace RomPeriphid4{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fd0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid5{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fd4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid6{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fd8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid7{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fdc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid0{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fe0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid1{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fe4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid2{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fe8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomPeriphid3{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0002fec,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace RomCompid0{    ///<Component ID Register
        using Addr = Register::Address<0xf0002ff0,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
    namespace RomCompid1{    ///<Component ID Register
        using Addr = Register::Address<0xf0002ff4,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
    namespace RomCompid2{    ///<Component ID Register
        using Addr = Register::Address<0xf0002ff8,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
    namespace RomCompid3{    ///<Component ID Register
        using Addr = Register::Address<0xf0002ffc,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
}
