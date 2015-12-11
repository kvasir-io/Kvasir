#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace Nonefaszr{    ///<Flash Access Size Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///Access Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace Nonefrwtr{    ///<Flash Read Wait Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace Nonefstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xfffffff8,0,unsigned>;
        ///Flash ECC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        ///Flash Hang
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        ///Flash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace Nonefsyndn{    ///<Flash Sync Down Register
        using Addr = Register::Address<0x40000010,0xfffffff8,0,unsigned>;
        ///Sync Down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
    }
    namespace Nonefbfcr{    ///<Flash Buffer Control Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        ///Buffer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
    }
    namespace Noneficr{    ///<Flash Interrupt Control Register
        using Addr = Register::Address<0x40000020,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Flash HANG Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        ///Flash RDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace Nonefisr{    ///<Flash Interrupt Status Register
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errif{}; 
        ///Flash HANG Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        ///Flash RDY Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
    }
    namespace Noneficlr{    ///<Flash Interrupt Clear Register
        using Addr = Register::Address<0x40000028,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erric{}; 
        ///Flash HANG Interrupt Clear 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangic{}; 
        ///Flash RDY Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyic{}; 
    }
    namespace Nonedfctrlr{    ///<Dual Flash mode Control Register
        using Addr = Register::Address<0x40000030,0x0000fffc,0,unsigned>;
        ///Write Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> wkey{}; 
        ///Re-Map Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rme{}; 
        ///Dual Flash mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfe{}; 
    }
    namespace Nonecrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xffe0fc00,0,unsigned>;
        ///Temperature CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ttrmm{}; 
        ///CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
    }
    namespace Nonefgpdm1{    ///<Flash General Purpose Data Mirror Register1
        using Addr = Register::Address<0x40000110,0x00000000,0,unsigned>;
        ///General Purpose Data1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd1{}; 
    }
    namespace Nonefgpdm2{    ///<Flash General Purpose Data Mirror Register2
        using Addr = Register::Address<0x40000114,0x00000000,0,unsigned>;
        ///General Purpose Data2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd2{}; 
    }
    namespace Nonefgpdm3{    ///<Flash General Purpose Data Mirror Register3
        using Addr = Register::Address<0x40000118,0x00000000,0,unsigned>;
        ///General Purpose Data3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd3{}; 
    }
    namespace Nonefgpdm4{    ///<Flash General Purpose Data Mirror Register4
        using Addr = Register::Address<0x4000011c,0x00000000,0,unsigned>;
        ///General Purpose Data4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd4{}; 
    }
}
