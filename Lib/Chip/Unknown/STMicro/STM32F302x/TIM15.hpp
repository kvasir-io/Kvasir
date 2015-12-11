#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40014000,0xfffff470,0,unsigned>;
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
        ///Clock division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        ///UIF status bit remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uifremap{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40014004,0xfffff802,0,unsigned>;
        ///Capture/compare preloaded               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccpc{}; 
        ///Capture/compare control update               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ccus{}; 
        ///Capture/compare DMA               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ccds{}; 
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
        ///TI1 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ois1{}; 
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ois1n{}; 
        ///Output Idle state 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ois2{}; 
    }
    namespace Nonesmcr{    ///<slave mode control register
        using Addr = Register::Address<0x40014008,0xfffeff08,0,unsigned>;
        ///Slave mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///Master/Slave mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        ///Slave mode selection bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sms3{}; 
    }
    namespace Nonedier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001400c,0xffff9818,0,unsigned>;
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
        ///Capture/Compare 1 interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Capture/Compare 2 interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        ///COM interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comie{}; 
        ///Trigger interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Break interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bie{}; 
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Capture/Compare 1 DMA request               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1de{}; 
        ///Capture/Compare 2 DMA request               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2de{}; 
        ///COM DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> comde{}; 
        ///Trigger DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tde{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40014010,0xfffff918,0,unsigned>;
        ///Capture/compare 2 overcapture               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2of{}; 
        ///Capture/Compare 1 overcapture               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Break interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bif{}; 
        ///Trigger interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///COM interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comif{}; 
        ///Capture/Compare 2 interrupt               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        ///Capture/compare 1 interrupt               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40014014,0xffffff18,0,unsigned>;
        ///Break generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bg{}; 
        ///Trigger generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///Capture/Compare control update               generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comg{}; 
        ///Capture/compare 2               generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        ///Capture/compare 1               generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Noneccmr1Output{    ///<capture/compare mode register (output           mode)
        using Addr = Register::Address<0x40014018,0xfefe8080,0,unsigned>;
        ///Capture/Compare 1               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        ///Output Compare 1 fast               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///Output Compare 1 preload               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///Output Compare 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///Capture/Compare 2               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Output Compare 2 fast               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        ///Output Compare 2 preload               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        ///Output Compare 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        ///Output Compare 1 mode bit               3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc1m3{}; 
        ///Output Compare 2 mode bit               3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> oc2m3{}; 
    }
    namespace Noneccmr1Input{    ///<capture/compare mode register 1 (input           mode)
        using Addr = Register::Address<0x40014018,0xffff0000,0,unsigned>;
        ///Input capture 2 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
        ///Input capture 2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2psc{}; 
        ///Capture/Compare 2               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Input capture 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1psc{}; 
        ///Capture/Compare 1               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Noneccer{    ///<capture/compare enable           register
        using Addr = Register::Address<0x40014020,0xffffff40,0,unsigned>;
        ///Capture/Compare 2 output               Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc2np{}; 
        ///Capture/Compare 2 output               Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        ///Capture/Compare 2 output               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        ///Capture/Compare 1 output               Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        ///Capture/Compare 1 complementary output               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc1ne{}; 
        ///Capture/Compare 1 output               Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///Capture/Compare 1 output               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40014024,0x7fff0000,0,unsigned>;
        ///counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///UIF copy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uifcpy{}; 
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40014028,0xffff0000,0,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4001402c,0xffff0000,0,unsigned>;
        ///Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Nonercr{    ///<repetition counter register
        using Addr = Register::Address<0x40014030,0xffffff00,0,unsigned>;
        ///Repetition counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rep{}; 
    }
    namespace Noneccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40014034,0xffff0000,0,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
    }
    namespace Noneccr2{    ///<capture/compare register 2
        using Addr = Register::Address<0x40014038,0xffff0000,0,unsigned>;
        ///Capture/Compare 2 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr2{}; 
    }
    namespace Nonebdtr{    ///<break and dead-time register
        using Addr = Register::Address<0x40014044,0xfff00000,0,unsigned>;
        ///Main output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> moe{}; 
        ///Automatic output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aoe{}; 
        ///Break polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Break enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bke{}; 
        ///Off-state selection for Run               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ossr{}; 
        ///Off-state selection for Idle               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ossi{}; 
        ///Lock configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Dead-time generator setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtg{}; 
        ///Break filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> bkf{}; 
    }
    namespace Nonedcr{    ///<DMA control register
        using Addr = Register::Address<0x40014048,0xffffe0e0,0,unsigned>;
        ///DMA burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dbl{}; 
        ///DMA base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dba{}; 
    }
    namespace Nonedmar{    ///<DMA address for full transfer
        using Addr = Register::Address<0x4001404c,0xffff0000,0,unsigned>;
        ///DMA register for burst               accesses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dmab{}; 
    }
}
