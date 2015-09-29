#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace Nonefrwtr{    ///<Flash Read Wait Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///Read Wait Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace Nonefstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xffffffc0,0,unsigned>;
        ///Flash Program Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgms{}; 
        ///Flash Sector Erase Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sers{}; 
        ///Flash Erase Suspend Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esps{}; 
        ///Flash Chip Erase Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cers{}; 
        ///Flash Hang flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        ///Flash Rdy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace Noneficr{    ///<Flash Interrupt Control Register
        using Addr = Register::Address<0x40000020,0xfffffffc,0,unsigned>;
        ///HANG Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        ///RDY Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace Nonefisr{    ///<Flash Interrupt Status Register
        using Addr = Register::Address<0x40000024,0xfffffffc,0,unsigned>;
        ///HANG Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        ///RDY Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
    }
    namespace Noneficlr{    ///<Flash Interrupt Clear Register
        using Addr = Register::Address<0x40000028,0xfffffffc,0,unsigned>;
        ///HANG Interrupt Clear 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangc{}; 
        ///RDY Interrupt Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyc{}; 
    }
    namespace Nonefstr1{    ///<Flash Status Register 1
        using Addr = Register::Address<0x40000088,0xffffffc0,0,unsigned>;
        ///Flash Program Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgms{}; 
        ///Flash Sector Erase Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sers{}; 
        ///Flash Erase Suspend Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esps{}; 
        ///Flash Chip Erase Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cers{}; 
        ///Flash Hang flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        ///Flash Rdy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace Nonecrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xffe0fc00,0,unsigned>;
        ///CR Temperature Trimming Data Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ttrmm{}; 
        ///CR Trimming Data Mirror
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
    }
}
