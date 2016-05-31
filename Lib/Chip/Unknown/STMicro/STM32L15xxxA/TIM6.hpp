#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Basic timers
    namespace Tim6Cr1{    ///<TIM6 control register 1
        using Addr = Register::Address<0x40001000,0xffffff70,0x00000000,unsigned>;
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
    namespace Tim6Cr2{    ///<TIM6 control register 2
        using Addr = Register::Address<0x40001004,0xffffff8f,0x00000000,unsigned>;
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Tim6Dier{    ///<TIM6 DMA/Interrupt enable           register
        using Addr = Register::Address<0x4000100c,0xfffffefe,0x00000000,unsigned>;
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim6Sr{    ///<TIM6 status register
        using Addr = Register::Address<0x40001010,0xfffffffe,0x00000000,unsigned>;
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim6Egr{    ///<TIM6 event generation register
        using Addr = Register::Address<0x40001014,0xfffffffe,0x00000000,unsigned>;
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim6Cnt{    ///<TIM6 counter
        using Addr = Register::Address<0x40001024,0xffff0000,0x00000000,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Tim6Psc{    ///<TIM6 prescaler
        using Addr = Register::Address<0x40001028,0xffff0000,0x00000000,unsigned>;
        ///Prescaler valueThe counter clock               frequency CK_CNT is equal to fCK_PSC / (PSC[15:0] +               1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim6Arr{    ///<TIM6 auto-reload register
        using Addr = Register::Address<0x4000102c,0xffff0000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
}
