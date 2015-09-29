#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Basic-timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40001000,0xffffff70,0,unsigned>;
        ///Auto-reload preload enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///One-pulse mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///Update request source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///Update disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Counter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40001004,0xffffff8f,0,unsigned>;
        ///Master mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Nonedier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4000100c,0xfffffefe,0,unsigned>;
        ///Update DMA request enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Update interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40001010,0xfffffffe,0,unsigned>;
        ///Update interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40001014,0xfffffffe,0,unsigned>;
        ///Update generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40001024,0xffff0000,0,unsigned>;
        ///Low counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40001028,0xffff0000,0,unsigned>;
        ///Prescaler value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4000102c,0xffff0000,0,unsigned>;
        ///Low Auto-reload value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
}
