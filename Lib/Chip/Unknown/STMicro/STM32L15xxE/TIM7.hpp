#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Basic timers
    namespace Tim7Cr1{    ///<TIM6 control register 1
        using Addr = Register::Address<0x40001400,0xffffff70,0x00000000,unsigned>;
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
    namespace Tim7Cr2{    ///<TIM6 control register 2
        using Addr = Register::Address<0x40001404,0xffffff8f,0x00000000,unsigned>;
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Tim7Dier{    ///<TIM6 DMA/Interrupt enable          register
        using Addr = Register::Address<0x4000140c,0xfffffefe,0x00000000,unsigned>;
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim7Sr{    ///<TIM6 status register
        using Addr = Register::Address<0x40001410,0xfffffffe,0x00000000,unsigned>;
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim7Egr{    ///<TIM6 event generation register
        using Addr = Register::Address<0x40001414,0xfffffffe,0x00000000,unsigned>;
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim7Cnt{    ///<TIM6 counter
        using Addr = Register::Address<0x40001424,0xffff0000,0x00000000,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Tim7Psc{    ///<TIM6 prescaler
        using Addr = Register::Address<0x40001428,0xffff0000,0x00000000,unsigned>;
        ///Prescaler valueThe counter clock              frequency CK_CNT is equal to fCK_PSC / (PSC[15:0] +              1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim7Arr{    ///<TIM6 auto-reload register
        using Addr = Register::Address<0x4000142c,0xffff0000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
}
