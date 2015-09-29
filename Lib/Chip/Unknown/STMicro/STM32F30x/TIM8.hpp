#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced-timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40013400,0xfffff400,0,unsigned>;
        ///Counter enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Update disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Update request source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///One-pulse mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Center-aligned mode
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cms{}; 
        ///Auto-reload preload enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///Clock division
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        ///UIF status bit remapping
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uifremap{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40013404,0xff0a8002,0,unsigned>;
        ///Capture/compare preloaded
              control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccpc{}; 
        ///Capture/compare control update
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ccus{}; 
        ///Capture/compare DMA
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ccds{}; 
        ///Master mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
        ///TI1 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        ///Output Idle state 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ois1{}; 
        ///Output Idle state 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ois1n{}; 
        ///Output Idle state 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ois2{}; 
        ///Output Idle state 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ois2n{}; 
        ///Output Idle state 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ois3{}; 
        ///Output Idle state 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ois3n{}; 
        ///Output Idle state 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ois4{}; 
        ///Output Idle state 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ois5{}; 
        ///Output Idle state 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ois6{}; 
        ///Master mode selection 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mms2{}; 
    }
    namespace Nonesmcr{    ///<slave mode control register
        using Addr = Register::Address<0x40013408,0xfffe0000,0,unsigned>;
        ///Slave mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
        ///OCREF clear selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> occs{}; 
        ///Trigger selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///Master/Slave mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        ///External trigger filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        ///External trigger prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etps{}; 
        ///External clock enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ece{}; 
        ///External trigger polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> etp{}; 
        ///Slave mode selection bit 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sms3{}; 
    }
    namespace Nonedier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001340c,0xffff8000,0,unsigned>;
        ///Trigger DMA request enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tde{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> comde{}; 
        ///Capture/Compare 4 DMA request
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4de{}; 
        ///Capture/Compare 3 DMA request
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3de{}; 
        ///Capture/Compare 2 DMA request
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2de{}; 
        ///Capture/Compare 1 DMA request
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1de{}; 
        ///Update DMA request enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Break interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bie{}; 
        ///Trigger interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///COM interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comie{}; 
        ///Capture/Compare 4 interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4ie{}; 
        ///Capture/Compare 3 interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3ie{}; 
        ///Capture/Compare 2 interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        ///Capture/Compare 1 interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Update interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40013410,0xfffce000,0,unsigned>;
        ///Update interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
        ///Capture/compare 1 interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Capture/Compare 2 interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        ///Capture/Compare 3 interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3if{}; 
        ///Capture/Compare 4 interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4if{}; 
        ///COM interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comif{}; 
        ///Trigger interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///Break interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bif{}; 
        ///Break 2 interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b2if{}; 
        ///Capture/Compare 1 overcapture
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Capture/compare 2 overcapture
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2of{}; 
        ///Capture/Compare 3 overcapture
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3of{}; 
        ///Capture/Compare 4 overcapture
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4of{}; 
        ///Capture/Compare 5 interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> c5if{}; 
        ///Capture/Compare 6 interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> c6if{}; 
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40013414,0xfffffe00,0,unsigned>;
        ///Update generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
        ///Capture/compare 1
              generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Capture/compare 2
              generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        ///Capture/compare 3
              generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3g{}; 
        ///Capture/compare 4
              generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4g{}; 
        ///Capture/Compare control update
              generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comg{}; 
        ///Trigger generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///Break generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bg{}; 
        ///Break 2 generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b2g{}; 
    }
    namespace Noneccmr1Output{    ///<capture/compare mode register (output
          mode)
        using Addr = Register::Address<0x40013418,0xfefe0000,0,unsigned>;
        ///Output Compare 2 clear
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc2ce{}; 
        ///Output Compare 2 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        ///Output Compare 2 preload
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        ///Output Compare 2 fast
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        ///Capture/Compare 2
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Output Compare 1 clear
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc1ce{}; 
        ///Output Compare 1 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///Output Compare 1 preload
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///Output Compare 1 fast
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///Capture/Compare 1
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        ///Output Compare 1 mode bit
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc1m3{}; 
        ///Output Compare 2 mode bit
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> oc2m3{}; 
    }
    namespace Noneccmr1Input{    ///<capture/compare mode register 1 (input
          mode)
        using Addr = Register::Address<0x40013418,0xffff0000,0,unsigned>;
        ///Input capture 2 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
        ///Input capture 2 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2pcs{}; 
        ///Capture/Compare 2
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Input capture 1 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1pcs{}; 
        ///Capture/Compare 1
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Noneccmr2Output{    ///<capture/compare mode register (output
          mode)
        using Addr = Register::Address<0x4001341c,0xfefe0000,0,unsigned>;
        ///Output compare 4 clear
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc4ce{}; 
        ///Output compare 4 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc4m{}; 
        ///Output compare 4 preload
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc4pe{}; 
        ///Output compare 4 fast
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc4fe{}; 
        ///Capture/Compare 4
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///Output compare 3 clear
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc3ce{}; 
        ///Output compare 3 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc3m{}; 
        ///Output compare 3 preload
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc3pe{}; 
        ///Output compare 3 fast
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc3fe{}; 
        ///Capture/Compare 3
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
        ///Output Compare 3 mode bit
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc3m3{}; 
        ///Output Compare 4 mode bit
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> oc4m3{}; 
    }
    namespace Noneccmr2Input{    ///<capture/compare mode register 2 (input
          mode)
        using Addr = Register::Address<0x4001341c,0xffff0000,0,unsigned>;
        ///Input capture 4 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4f{}; 
        ///Input capture 4 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic4psc{}; 
        ///Capture/Compare 4
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///Input capture 3 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic3f{}; 
        ///Input capture 3 prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic3psc{}; 
        ///Capture/compare 3
              selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Noneccer{    ///<capture/compare enable
          register
        using Addr = Register::Address<0x40013420,0xffcc4000,0,unsigned>;
        ///Capture/Compare 1 output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
        ///Capture/Compare 1 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///Capture/Compare 1 complementary output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc1ne{}; 
        ///Capture/Compare 1 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        ///Capture/Compare 2 output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        ///Capture/Compare 2 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        ///Capture/Compare 2 complementary output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cc2ne{}; 
        ///Capture/Compare 2 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc2np{}; 
        ///Capture/Compare 3 output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc3e{}; 
        ///Capture/Compare 3 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc3p{}; 
        ///Capture/Compare 3 complementary output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc3ne{}; 
        ///Capture/Compare 3 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3np{}; 
        ///Capture/Compare 4 output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4e{}; 
        ///Capture/Compare 3 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc4p{}; 
        ///Capture/Compare 4 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cc4np{}; 
        ///Capture/Compare 5 output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cc5e{}; 
        ///Capture/Compare 5 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cc5p{}; 
        ///Capture/Compare 6 output
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cc6e{}; 
        ///Capture/Compare 6 output
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cc6p{}; 
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40013424,0x7fff0000,0,unsigned>;
        ///counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///UIF copy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uifcpy{}; 
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40013428,0xffff0000,0,unsigned>;
        ///Prescaler value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4001342c,0xffff0000,0,unsigned>;
        ///Auto-reload value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Nonercr{    ///<repetition counter register
        using Addr = Register::Address<0x40013430,0xffff0000,0,unsigned>;
        ///Repetition counter value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rep{}; 
    }
    namespace Noneccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40013434,0xffff0000,0,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
    }
    namespace Noneccr2{    ///<capture/compare register 2
        using Addr = Register::Address<0x40013438,0xffff0000,0,unsigned>;
        ///Capture/Compare 2 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr2{}; 
    }
    namespace Noneccr3{    ///<capture/compare register 3
        using Addr = Register::Address<0x4001343c,0xffff0000,0,unsigned>;
        ///Capture/Compare 3 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr3{}; 
    }
    namespace Noneccr4{    ///<capture/compare register 4
        using Addr = Register::Address<0x40013440,0xffff0000,0,unsigned>;
        ///Capture/Compare 3 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr4{}; 
    }
    namespace Nonebdtr{    ///<break and dead-time register
        using Addr = Register::Address<0x40013444,0xfc000000,0,unsigned>;
        ///Dead-time generator setup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtg{}; 
        ///Lock configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Off-state selection for Idle
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ossi{}; 
        ///Off-state selection for Run
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ossr{}; 
        ///Break enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bke{}; 
        ///Break polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Automatic output enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aoe{}; 
        ///Main output enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> moe{}; 
        ///Break filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> bkf{}; 
        ///Break 2 filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> bk2f{}; 
        ///Break 2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> bk2e{}; 
        ///Break 2 polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bk2p{}; 
    }
    namespace Nonedcr{    ///<DMA control register
        using Addr = Register::Address<0x40013448,0xffffe0e0,0,unsigned>;
        ///DMA burst length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dbl{}; 
        ///DMA base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dba{}; 
    }
    namespace Nonedmar{    ///<DMA address for full transfer
        using Addr = Register::Address<0x4001344c,0xffff0000,0,unsigned>;
        ///DMA register for burst
              accesses
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dmab{}; 
    }
    namespace Noneccmr3Output{    ///<capture/compare mode register 3 (output
          mode)
        using Addr = Register::Address<0x40013454,0xfefe0303,0,unsigned>;
        ///Output compare 5 fast
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc5fe{}; 
        ///Output compare 5 preload
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc5pe{}; 
        ///Output compare 5 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc5m{}; 
        ///Output compare 5 clear
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc5ce{}; 
        ///Output compare 6 fast
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc6fe{}; 
        ///Output compare 6 preload
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc6pe{}; 
        ///Output compare 6 mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc6m{}; 
        ///Output compare 6 clear
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc6ce{}; 
        ///Outout Compare 5 mode bit
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc5m3{}; 
        ///Outout Compare 6 mode bit
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> oc6m3{}; 
    }
    namespace Noneccr5{    ///<capture/compare register 5
        using Addr = Register::Address<0x40013458,0x1fff0000,0,unsigned>;
        ///Capture/Compare 5 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr5{}; 
        ///Group Channel 5 and Channel
              1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> gc5c1{}; 
        ///Group Channel 5 and Channel
              2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> gc5c2{}; 
        ///Group Channel 5 and Channel
              3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> gc5c3{}; 
    }
    namespace Noneccr6{    ///<capture/compare register 6
        using Addr = Register::Address<0x4001345c,0xffff0000,0,unsigned>;
        ///Capture/Compare 6 value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr6{}; 
    }
    namespace Noneor{    ///<option registers
        using Addr = Register::Address<0x40013460,0xfffffff0,0,unsigned>;
        ///TIM8_ETR_ADC2 remapping
              capability
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tim8EtrAdc2Rmp{}; 
        ///TIM8_ETR_ADC3 remapping
              capability
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tim8EtrAdc3Rmp{}; 
    }
}
