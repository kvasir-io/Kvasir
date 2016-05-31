#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Basic timers
    namespace Tim6Cr1{    ///<control register 1
        using Addr = Register::Address<0x40001000,0xfffff770,0x00000000,unsigned>;
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Update disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Update request source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///One-pulse mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///Auto-reload preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///UIF status bit remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uifremap{}; 
    }
    namespace Tim6Cr2{    ///<control register 2
        using Addr = Register::Address<0x40001004,0xffffff8f,0x00000000,unsigned>;
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Tim6Dier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4000100c,0xfffffefe,0x00000000,unsigned>;
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim6Sr{    ///<status register
        using Addr = Register::Address<0x40001010,0xfffffffe,0x00000000,unsigned>;
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim6Egr{    ///<event generation register
        using Addr = Register::Address<0x40001014,0xfffffffe,0x00000000,unsigned>;
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim6Cnt{    ///<counter
        using Addr = Register::Address<0x40001024,0x7fff0000,0x00000000,unsigned>;
        ///Low counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///UIF Copy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uifcpy{}; 
    }
    namespace Tim6Psc{    ///<prescaler
        using Addr = Register::Address<0x40001028,0xffff0000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim6Arr{    ///<auto-reload register
        using Addr = Register::Address<0x4000102c,0xffff0000,0x00000000,unsigned>;
        ///Low Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
}
