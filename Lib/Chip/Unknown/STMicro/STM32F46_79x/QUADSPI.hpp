#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//QuadSPI interface
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0xa0001000,0x0020e020,0,unsigned>;
        ///Clock prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> prescaler{}; 
        ///Polling match mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmm{}; 
        ///Automatic poll mode stop
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> apms{}; 
        ///TimeOut interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> toie{}; 
        ///Status match interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> smie{}; 
        ///FIFO threshold interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ftie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> teie{}; 
        ///IFO threshold level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fthres{}; 
        ///FLASH memory selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fsel{}; 
        ///Dual-flash mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dfm{}; 
        ///Sample shift
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sshift{}; 
        ///Timeout counter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcen{}; 
        ///DMA enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Abort request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> abort{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonedcr{    ///<device configuration register
        using Addr = Register::Address<0xa0001004,0xffe0f8fe,0,unsigned>;
        ///FLASH memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> fsize{}; 
        ///Chip select high time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> csht{}; 
        ///Mode 0 / mode 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckmode{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0xa0001008,0xffff80c0,0,unsigned>;
        ///FIFO level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> flevel{}; 
        ///Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Timeout flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tof{}; 
        ///Status match flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smf{}; 
        ///FIFO threshold flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///Transfer complete flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcf{}; 
        ///Transfer error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tef{}; 
    }
    namespace Nonefcr{    ///<flag clear register
        using Addr = Register::Address<0xa000100c,0xffffffe4,0,unsigned>;
        ///Clear timeout flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctof{}; 
        ///Clear status match flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csmf{}; 
        ///Clear transfer complete
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcf{}; 
        ///Clear transfer error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctef{}; 
    }
    namespace Nonedlr{    ///<data length register
        using Addr = Register::Address<0xa0001010,0x00000000,0,unsigned>;
        ///Data length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dl{}; 
    }
    namespace Noneccr{    ///<communication configuration
          register
        using Addr = Register::Address<0xa0001014,0x20800000,0,unsigned>;
        ///Double data rate mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ddrm{}; 
        ///DDR hold half cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dhhc{}; 
        ///Send instruction only once
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sioo{}; 
        ///Functional mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> fmode{}; 
        ///Data mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> dmode{}; 
        ///Number of dummy cycles
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> dcyc{}; 
        ///Alternate bytes size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> absize{}; 
        ///Alternate bytes mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> abmode{}; 
        ///Address size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> adsize{}; 
        ///Address mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> admode{}; 
        ///Instruction mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> imode{}; 
        ///Instruction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> instruction{}; 
    }
    namespace Nonear{    ///<address register
        using Addr = Register::Address<0xa0001018,0x00000000,0,unsigned>;
        ///Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneabr{    ///<ABR
        using Addr = Register::Address<0xa000101c,0x00000000,0,unsigned>;
        ///ALTERNATE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alternate{}; 
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0xa0001020,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonepsmkr{    ///<polling status mask register
        using Addr = Register::Address<0xa0001024,0x00000000,0,unsigned>;
        ///Status mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonepsmar{    ///<polling status match register
        using Addr = Register::Address<0xa0001028,0x00000000,0,unsigned>;
        ///Status match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonepir{    ///<polling interval register
        using Addr = Register::Address<0xa000102c,0xffff0000,0,unsigned>;
        ///Polling interval
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> interval{}; 
    }
    namespace Nonelptr{    ///<low-power timeout register
        using Addr = Register::Address<0xa0001030,0xffff0000,0,unsigned>;
        ///Timeout period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeout{}; 
    }
}
