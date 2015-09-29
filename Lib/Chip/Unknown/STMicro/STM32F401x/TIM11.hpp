#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose-timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40014800,0xfffffc78,0,unsigned>;
        ///Clock division
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        ///Auto-reload preload enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///Update request source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///Update disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Counter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Nonedier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001480c,0xfffffffc,0,unsigned>;
        ///Capture/Compare 1 interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Update interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40014810,0xfffffdfc,0,unsigned>;
        ///Capture/Compare 1 overcapture               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Capture/compare 1 interrupt               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Update interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40014814,0xfffffffc,0,unsigned>;
        ///Capture/compare 1               generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Update generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Noneccmr1Output{    ///<capture/compare mode register 1 (output           mode)
        using Addr = Register::Address<0x40014818,0xffffff80,0,unsigned>;
        ///Output Compare 1 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///Output Compare 1 preload               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///Output Compare 1 fast               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///Capture/Compare 1               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Noneccmr1Input{    ///<capture/compare mode register 1 (input           mode)
        using Addr = Register::Address<0x40014818,0xffffff00,0,unsigned>;
        ///Input capture 1 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> icpcs{}; 
        ///Capture/Compare 1               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Noneccer{    ///<capture/compare enable           register
        using Addr = Register::Address<0x40014820,0xfffffff4,0,unsigned>;
        ///Capture/Compare 1 output               Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        ///Capture/Compare 1 output               Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///Capture/Compare 1 output               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40014824,0xffff0000,0,unsigned>;
        ///counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40014828,0xffff0000,0,unsigned>;
        ///Prescaler value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4001482c,0xffff0000,0,unsigned>;
        ///Auto-reload value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Noneccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40014834,0xffff0000,0,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
    }
    namespace Noneor{    ///<option register
        using Addr = Register::Address<0x40014850,0xfffffffc,0,unsigned>;
        ///Input 1 remapping               capability
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rmp{}; 
    }
}
