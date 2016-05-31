#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Basic timers
    namespace Tim18Cr1{    ///<control register 1
        using Addr = Register::Address<0x40009c00,0xffffff70,0x00000000,unsigned>;
        ///Auto-reload preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///One-pulse mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///Update request source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///Update disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Tim18Cr2{    ///<control register 2
        using Addr = Register::Address<0x40009c04,0xffffff8f,0x00000000,unsigned>;
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Tim18Dier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x40009c0c,0xfffffefe,0x00000000,unsigned>;
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim18Sr{    ///<status register
        using Addr = Register::Address<0x40009c10,0xfffffffe,0x00000000,unsigned>;
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim18Egr{    ///<event generation register
        using Addr = Register::Address<0x40009c14,0xfffffffe,0x00000000,unsigned>;
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim18Cnt{    ///<counter
        using Addr = Register::Address<0x40009c24,0xffff0000,0x00000000,unsigned>;
        ///Low counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Tim18Psc{    ///<prescaler
        using Addr = Register::Address<0x40009c28,0xffff0000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim18Arr{    ///<auto-reload register
        using Addr = Register::Address<0x40009c2c,0xffff0000,0x00000000,unsigned>;
        ///Low Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
}
