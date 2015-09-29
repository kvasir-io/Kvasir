#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40010800,0xfffffc70,0,unsigned>;
        ///Clock division
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        ///Auto-reload preload enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///One-pulse mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> omp{}; 
        ///Update request source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///Update disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Counter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40010804,0xffffff8f,0,unsigned>;
        ///Master mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Nonesmcr{    ///<slave mode control register
        using Addr = Register::Address<0x40010808,0xffffff08,0,unsigned>;
        ///Master/Slave mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        ///Trigger selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///Slave mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
    }
    namespace Nonedier{    ///<Interrupt enable register
        using Addr = Register::Address<0x4001080c,0xffffffb8,0,unsigned>;
        ///Trigger interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Capture/Compare 2 interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        ///Capture/Compare 1 interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Update interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40010810,0xfffff9b8,0,unsigned>;
        ///Capture/compare 2 overcapture               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2of{}; 
        ///Capture/compare 1 overcapture               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Trigger interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///Capture/Compare 2 interrupt               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        ///Capture/Compare 1 interrupt               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Update interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40010814,0xffffffb8,0,unsigned>;
        ///Trigger generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///Capture/Compare 2               generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        ///Capture/Compare 1               generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Update generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Noneccmr1Output{    ///<capture/compare mode register           1
        using Addr = Register::Address<0x40010818,0xffff0200,0,unsigned>;
        ///Output compare 2 clear               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc2ce{}; 
        ///Output compare 2 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        ///Output compare 2 preload               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        ///Output compare 2 fast               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        ///Capture/Compare 2               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Output compare 1 clear               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc1ce{}; 
        ///Output compare 1 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///Output compare 1 preload               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///Output compare 1 fast               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///Capture/Compare 1               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Noneccmr1Input{    ///<capture/compare mode register 1 (input           mode)
        using Addr = Register::Address<0x40010818,0xffff0000,0,unsigned>;
        ///Input capture 2 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
        ///Input capture 2 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2pcs{}; 
        ///Capture/Compare 2               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Input capture 1 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> icpcs{}; 
        ///Capture/Compare 1               selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40010824,0xffff0000,0,unsigned>;
        ///TIM9 counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40010828,0xffff0000,0,unsigned>;
        ///TIM9 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4001082c,0xffff0000,0,unsigned>;
        ///Auto-reload value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Noneccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40010834,0xffff0000,0,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
    }
    namespace Noneccr2{    ///<capture/compare register 2
        using Addr = Register::Address<0x40010838,0xffff0000,0,unsigned>;
        ///Capture/Compare 2 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr2{}; 
    }
    namespace Noneor{    ///<option register
        using Addr = Register::Address<0x40010850,0xfffffffc,0,unsigned>;
        ///TIM9 Input 1 remapping               capability
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ti1Rmp{}; 
    }
}
