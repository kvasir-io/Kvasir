#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General-purpose-timers
    namespace Tim17Cr1{    ///<control register 1
        using Addr = Register::Address<0x40014800,0xfffffc70,0x00000000,unsigned>;
        ///Clock division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
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
    namespace Tim17Cr2{    ///<control register 2
        using Addr = Register::Address<0x40014804,0xfffffcf2,0x00000000,unsigned>;
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ois1n{}; 
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ois1{}; 
        ///Capture/compare DMA              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ccds{}; 
        ///Capture/compare control update              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ccus{}; 
        ///Capture/compare preloaded              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccpc{}; 
    }
    namespace Tim17Dier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001480c,0xffffbc1c,0x00000000,unsigned>;
        ///Trigger DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tde{}; 
        ///Capture/Compare 1 DMA request              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1de{}; 
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Break interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bie{}; 
        ///Trigger interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///COM interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comie{}; 
        ///Capture/Compare 1 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim17Sr{    ///<status register
        using Addr = Register::Address<0x40014810,0xfffffd1c,0x00000000,unsigned>;
        ///Capture/Compare 1 overcapture              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Break interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bif{}; 
        ///Trigger interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///COM interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comif{}; 
        ///Capture/compare 1 interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim17Egr{    ///<event generation register
        using Addr = Register::Address<0x40014814,0xffffff1c,0x00000000,unsigned>;
        ///Break generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bg{}; 
        ///Trigger generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///Capture/Compare control update              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comg{}; 
        ///Capture/compare 1              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim17Ccmr1Output{    ///<capture/compare mode register (output          mode)
        using Addr = Register::Address<0x40014818,0xffffff80,0x00000000,unsigned>;
        ///Output Compare 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///Output Compare 1 preload              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///Output Compare 1 fast              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///Capture/Compare 1              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Tim17Ccmr1Input{    ///<capture/compare mode register 1 (input          mode)
        using Addr = Register::Address<0x40014818,0xffffff00,0x00000000,unsigned>;
        ///Input capture 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1psc{}; 
        ///Capture/Compare 1              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Tim17Ccer{    ///<capture/compare enable          register
        using Addr = Register::Address<0x40014820,0xfffffff0,0x00000000,unsigned>;
        ///Capture/Compare 1 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        ///Capture/Compare 1 complementary output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc1ne{}; 
        ///Capture/Compare 1 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///Capture/Compare 1 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Tim17Cnt{    ///<counter
        using Addr = Register::Address<0x40014824,0xffff0000,0x00000000,unsigned>;
        ///counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Tim17Psc{    ///<prescaler
        using Addr = Register::Address<0x40014828,0xffff0000,0x00000000,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim17Arr{    ///<auto-reload register
        using Addr = Register::Address<0x4001482c,0xffff0000,0x00000000,unsigned>;
        ///Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Tim17Rcr{    ///<repetition counter register
        using Addr = Register::Address<0x40014830,0xffffff00,0x00000000,unsigned>;
        ///Repetition counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rep{}; 
    }
    namespace Tim17Ccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40014834,0xffff0000,0x00000000,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
    }
    namespace Tim17Bdtr{    ///<break and dead-time register
        using Addr = Register::Address<0x40014844,0xffff0000,0x00000000,unsigned>;
        ///Main output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> moe{}; 
        ///Automatic output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aoe{}; 
        ///Break polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Break enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bke{}; 
        ///Off-state selection for Run              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ossr{}; 
        ///Off-state selection for Idle              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ossi{}; 
        ///Lock configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Dead-time generator setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtg{}; 
    }
    namespace Tim17Dcr{    ///<DMA control register
        using Addr = Register::Address<0x40014848,0xffffe0e0,0x00000000,unsigned>;
        ///DMA burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dbl{}; 
        ///DMA base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dba{}; 
    }
    namespace Tim17Dmar{    ///<DMA address for full transfer
        using Addr = Register::Address<0x4001484c,0xffff0000,0x00000000,unsigned>;
        ///DMA register for burst              accesses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dmab{}; 
    }
}
