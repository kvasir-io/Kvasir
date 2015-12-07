#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace Nonefaszr{    ///<Flash Access Size Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///Access Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
        namespace AszValC{
        }
    }
    namespace Nonefrwtr{    ///<Flash Read Wait Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
        namespace RwtValC{
        }
    }
    namespace Nonefstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xfffffff8,0,unsigned>;
        ///Flash ECC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Flash Hang
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        namespace HngValC{
        }
        ///Flash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
        namespace RdyValC{
        }
    }
    namespace Nonefsyndn{    ///<Flash Sync Down Register
        using Addr = Register::Address<0x40000010,0xfffffff8,0,unsigned>;
        ///Sync Down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
        namespace SdValC{
        }
    }
    namespace Nonefbfcr{    ///<Flash Buffer Control Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        namespace BsValC{
        }
        ///Buffer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
    }
    namespace Noneficr{    ///<Flash Interrupt Control Register
        using Addr = Register::Address<0x40000020,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///Flash HANG Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        namespace HangieValC{
        }
        ///Flash RDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
        namespace RdyieValC{
        }
    }
    namespace Nonefisr{    ///<Flash Interrupt Status Register
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errif{}; 
        namespace ErrifValC{
        }
        ///Flash HANG Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        namespace HangifValC{
        }
        ///Flash RDY Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
        namespace RdyifValC{
        }
    }
    namespace Noneficlr{    ///<Flash Interrupt Clear Register
        using Addr = Register::Address<0x40000028,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erric{}; 
        namespace ErricValC{
        }
        ///Flash HANG Interrupt Clear 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangic{}; 
        namespace HangicValC{
        }
        ///Flash RDY Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyic{}; 
        namespace RdyicValC{
        }
    }
    namespace Nonedfctrlr{    ///<Dual Flash mode Control Register
        using Addr = Register::Address<0x40000030,0x0000fffc,0,unsigned>;
        ///Write Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> wkey{}; 
        namespace WkeyValC{
        }
        ///Re-Map Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rme{}; 
        namespace RmeValC{
        }
        ///Dual Flash mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfe{}; 
        namespace DfeValC{
        }
    }
    namespace Nonecrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xffe0fc00,0,unsigned>;
        ///Temperature CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ttrmm{}; 
        namespace TtrmmValC{
        }
        ///CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
        namespace TrmmValC{
        }
    }
    namespace Nonefgpdm1{    ///<Flash General Purpose Data Mirror Register1
        using Addr = Register::Address<0x40000110,0x00000000,0,unsigned>;
        ///General Purpose Data1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd1{}; 
        namespace Gpd1ValC{
        }
    }
    namespace Nonefgpdm2{    ///<Flash General Purpose Data Mirror Register2
        using Addr = Register::Address<0x40000114,0x00000000,0,unsigned>;
        ///General Purpose Data2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd2{}; 
        namespace Gpd2ValC{
        }
    }
    namespace Nonefgpdm3{    ///<Flash General Purpose Data Mirror Register3
        using Addr = Register::Address<0x40000118,0x00000000,0,unsigned>;
        ///General Purpose Data3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd3{}; 
        namespace Gpd3ValC{
        }
    }
    namespace Nonefgpdm4{    ///<Flash General Purpose Data Mirror Register4
        using Addr = Register::Address<0x4000011c,0x00000000,0,unsigned>;
        ///General Purpose Data4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpd4{}; 
        namespace Gpd4ValC{
        }
    }
}
