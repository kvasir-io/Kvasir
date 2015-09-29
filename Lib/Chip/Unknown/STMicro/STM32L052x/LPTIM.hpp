#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low power timer
    namespace Noneisr{    ///<Interrupt and Status Register
        using Addr = Register::Address<0x40007c00,0xffffff80,0,unsigned>;
        ///Counter direction change up to
              down
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> down{}; 
        ///Counter direction change down to
              up
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> up{}; 
        ///Autoreload register update
              OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arrok{}; 
        ///Compare register update OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpok{}; 
        ///External trigger edge
              event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exttrig{}; 
        ///Autoreload match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arrm{}; 
        ///Compare match
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpm{}; 
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40007c04,0xffffff80,0,unsigned>;
        ///Direction change to down Clear
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> downcf{}; 
        ///Direction change to UP Clear
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> upcf{}; 
        ///Autoreload register update OK Clear
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arrokcf{}; 
        ///Compare register update OK Clear
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpokcf{}; 
        ///External trigger valid edge Clear
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exttrigcf{}; 
        ///Autoreload match Clear
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arrmcf{}; 
        ///compare match Clear Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpmcf{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40007c08,0xffffff80,0,unsigned>;
        ///Direction change to down Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> downie{}; 
        ///Direction change to UP Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> upie{}; 
        ///Autoreload register update OK Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arrokie{}; 
        ///Compare register update OK Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpokie{}; 
        ///External trigger valid edge Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exttrigie{}; 
        ///Autoreload match Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arrmie{}; 
        ///Compare match Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpmie{}; 
    }
    namespace Nonecfgr{    ///<Configuration Register
        using Addr = Register::Address<0x40007c0c,0xfe011120,0,unsigned>;
        ///Encoder mode enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> enc{}; 
        ///counter mode enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> countmode{}; 
        ///Registers update mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> preload{}; 
        ///Waveform shape polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wavpol{}; 
        ///Waveform shape
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wave{}; 
        ///Timeout enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timout{}; 
        ///Trigger enable and
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> trigen{}; 
        ///Trigger selector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> trigsel{}; 
        ///Clock prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> presc{}; 
        ///Configurable digital filter for
              trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> trgflt{}; 
        ///Configurable digital filter for external
              clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ckflt{}; 
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> ckpol{}; 
        ///Clock selector
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cksel{}; 
    }
    namespace Nonecr{    ///<Control Register
        using Addr = Register::Address<0x40007c10,0xfffffff8,0,unsigned>;
        ///Timer start in continuous
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cntstrt{}; 
        ///LPTIM start in single mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sngstrt{}; 
        ///LPTIM Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonecmp{    ///<Compare Register
        using Addr = Register::Address<0x40007c14,0xffff0000,0,unsigned>;
        ///Compare value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
    namespace Nonearr{    ///<Autoreload Register
        using Addr = Register::Address<0x40007c18,0xffff0000,0,unsigned>;
        ///Auto reload value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Nonecnt{    ///<Counter Register
        using Addr = Register::Address<0x40007c1c,0xffff0000,0,unsigned>;
        ///Counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
