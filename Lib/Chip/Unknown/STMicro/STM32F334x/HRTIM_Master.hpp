#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Resolution Timer: Master
      Timers
    namespace Nonemcr{    ///<Master Timer Control Register
        using Addr = Register::Address<0x40017400,0x11c000c0,0,unsigned>;
        ///Burst DMA Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> brstdma{}; 
        ///Master Timer Repetition
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mrepu{}; 
        ///Preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> preen{}; 
        ///AC Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> dacsync{}; 
        ///Timer E counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tecen{}; 
        ///Timer D counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdcen{}; 
        ///Timer C counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tccen{}; 
        ///Timer B counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbcen{}; 
        ///Timer A counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tacen{}; 
        ///Master Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcen{}; 
        ///Synchronization source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> syncSrc{}; 
        ///Synchronization output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> syncOut{}; 
        ///Synchronization Starts
              Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> syncstrtm{}; 
        ///Synchronization Resets
              Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> syncrstm{}; 
        ///ynchronization input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> syncIn{}; 
        ///Half mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> half{}; 
        ///Master Re-triggerable mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> retrig{}; 
        ///Master Continuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cont{}; 
        ///HRTIM Master Clock
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckPsc{}; 
    }
    namespace Nonemisr{    ///<Master Timer Interrupt Status
          Register
        using Addr = Register::Address<0x40017404,0xffffff80,0,unsigned>;
        ///Master Update Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mupd{}; 
        ///Sync Input Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sync{}; 
        ///Master Repetition Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrep{}; 
        ///Master Compare 4 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcmp4{}; 
        ///Master Compare 3 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mcmp3{}; 
        ///Master Compare 2 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcmp2{}; 
        ///Master Compare 1 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmp1{}; 
    }
    namespace Nonemicr{    ///<Master Timer Interrupt Clear
          Register
        using Addr = Register::Address<0x40017408,0xffffff80,0,unsigned>;
        ///Master update Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mupdc{}; 
        ///Sync Input Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncc{}; 
        ///Repetition Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrepc{}; 
        ///Master Compare 4 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcmp4c{}; 
        ///Master Compare 3 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mcmp3c{}; 
        ///Master Compare 2 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcmp2c{}; 
        ///Master Compare 1 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmp1c{}; 
    }
    namespace Nonemdier4{    ///<MDIER4
        using Addr = Register::Address<0x4001740c,0xff80ff80,0,unsigned>;
        ///MUPDDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mupdde{}; 
        ///SYNCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> syncde{}; 
        ///MREPDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrepde{}; 
        ///MCMP4DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mcmp4de{}; 
        ///MCMP3DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcmp3de{}; 
        ///MCMP2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mcmp2de{}; 
        ///MCMP1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcmp1de{}; 
        ///MUPDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mupdie{}; 
        ///SYNCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncie{}; 
        ///MREPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrepie{}; 
        ///MCMP4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcmp4ie{}; 
        ///MCMP3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mcmp3ie{}; 
        ///MCMP2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcmp2ie{}; 
        ///MCMP1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmp1ie{}; 
    }
    namespace Nonemcntr{    ///<Master Timer Counter Register
        using Addr = Register::Address<0x40017410,0xffff0000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Nonemper{    ///<Master Timer Period Register
        using Addr = Register::Address<0x40017414,0xffff0000,0,unsigned>;
        ///Master Timer Period value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mper{}; 
    }
    namespace Nonemrep{    ///<Master Timer Repetition
          Register
        using Addr = Register::Address<0x40017418,0xffffff00,0,unsigned>;
        ///Master Timer Repetition counter
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mrep{}; 
    }
    namespace Nonemcmp1r{    ///<Master Timer Compare 1
          Register
        using Addr = Register::Address<0x4001741c,0xffff0000,0,unsigned>;
        ///Master Timer Compare 1
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp1{}; 
    }
    namespace Nonemcmp2r{    ///<Master Timer Compare 2
          Register
        using Addr = Register::Address<0x40017424,0xffff0000,0,unsigned>;
        ///Master Timer Compare 2
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp2{}; 
    }
    namespace Nonemcmp3r{    ///<Master Timer Compare 3
          Register
        using Addr = Register::Address<0x40017428,0xffff0000,0,unsigned>;
        ///Master Timer Compare 3
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp3{}; 
    }
    namespace Nonemcmp4r{    ///<Master Timer Compare 4
          Register
        using Addr = Register::Address<0x4001742c,0xffff0000,0,unsigned>;
        ///Master Timer Compare 4
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp4{}; 
    }
}
