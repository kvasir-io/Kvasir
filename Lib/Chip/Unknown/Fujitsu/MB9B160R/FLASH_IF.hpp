#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace Nonefaszr{    ///<Flash Access Size Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///Access Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace Nonefrwtr{    ///<Flash Read Wait Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///Read Wait Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace Nonefstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xfffffff8,0,unsigned>;
        ///Flash ECC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        ///Flash Hang flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        ///Flash Rdy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace Nonefsyndn{    ///<Flash Sync Down Register
        using Addr = Register::Address<0x40000010,0xfffffff8,0,unsigned>;
        ///Sync Down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
    }
    namespace Nonefbfcr{    ///<Flash Buffer Control Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///Buffer Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        ///Buffer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
    }
    namespace Noneficr{    ///<Flash Interrupt Control Register
        using Addr = Register::Address<0x40000020,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        ///HANG Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        ///RDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace Nonefisr{    ///<Flash Interrupt Status Register
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errif{}; 
        ///HANG Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        ///RDY Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
    }
    namespace Noneficlr{    ///<Flash Interrupt Clear Register
        using Addr = Register::Address<0x40000028,0xfffffff8,0,unsigned>;
        ///Flash ECC Error Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erric{}; 
        ///HANG Interrupt Clear 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangic{}; 
        ///RDY Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyic{}; 
    }
    namespace Nonecrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xffe0fc00,0,unsigned>;
        ///CR Temperature Trimming Data Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ttrmm{}; 
        ///CR Trimming Data Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
    }
}
