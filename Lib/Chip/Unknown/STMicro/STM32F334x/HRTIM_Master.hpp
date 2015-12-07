#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Resolution Timer: Master
      Timers
    namespace Nonemcr{    ///<Master Timer Control Register
        using Addr = Register::Address<0x40017400,0x11c000c0,0,unsigned>;
        ///Burst DMA Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> brstdma{}; 
        namespace BrstdmaValC{
        }
        ///Master Timer Repetition
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mrepu{}; 
        namespace MrepuValC{
        }
        ///Preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> preen{}; 
        namespace PreenValC{
        }
        ///AC Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> dacsync{}; 
        namespace DacsyncValC{
        }
        ///Timer E counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tecen{}; 
        namespace TecenValC{
        }
        ///Timer D counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdcen{}; 
        namespace TdcenValC{
        }
        ///Timer C counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tccen{}; 
        namespace TccenValC{
        }
        ///Timer B counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbcen{}; 
        namespace TbcenValC{
        }
        ///Timer A counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tacen{}; 
        namespace TacenValC{
        }
        ///Master Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcen{}; 
        namespace McenValC{
        }
        ///Synchronization source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> syncSrc{}; 
        namespace SyncsrcValC{
        }
        ///Synchronization output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> syncOut{}; 
        namespace SyncoutValC{
        }
        ///Synchronization Starts
              Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> syncstrtm{}; 
        namespace SyncstrtmValC{
        }
        ///Synchronization Resets
              Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> syncrstm{}; 
        namespace SyncrstmValC{
        }
        ///ynchronization input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> syncIn{}; 
        namespace SyncinValC{
        }
        ///Half mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> half{}; 
        namespace HalfValC{
        }
        ///Master Re-triggerable mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> retrig{}; 
        namespace RetrigValC{
        }
        ///Master Continuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cont{}; 
        namespace ContValC{
        }
        ///HRTIM Master Clock
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckPsc{}; 
        namespace CkpscValC{
        }
    }
    namespace Nonemisr{    ///<Master Timer Interrupt Status
          Register
        using Addr = Register::Address<0x40017404,0xffffff80,0,unsigned>;
        ///Master Update Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mupd{}; 
        namespace MupdValC{
        }
        ///Sync Input Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sync{}; 
        namespace SyncValC{
        }
        ///Master Repetition Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrep{}; 
        namespace MrepValC{
        }
        ///Master Compare 4 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcmp4{}; 
        namespace Mcmp4ValC{
        }
        ///Master Compare 3 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mcmp3{}; 
        namespace Mcmp3ValC{
        }
        ///Master Compare 2 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcmp2{}; 
        namespace Mcmp2ValC{
        }
        ///Master Compare 1 Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmp1{}; 
        namespace Mcmp1ValC{
        }
    }
    namespace Nonemicr{    ///<Master Timer Interrupt Clear
          Register
        using Addr = Register::Address<0x40017408,0xffffff80,0,unsigned>;
        ///Master update Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mupdc{}; 
        namespace MupdcValC{
        }
        ///Sync Input Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncc{}; 
        namespace SynccValC{
        }
        ///Repetition Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrepc{}; 
        namespace MrepcValC{
        }
        ///Master Compare 4 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcmp4c{}; 
        namespace Mcmp4cValC{
        }
        ///Master Compare 3 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mcmp3c{}; 
        namespace Mcmp3cValC{
        }
        ///Master Compare 2 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcmp2c{}; 
        namespace Mcmp2cValC{
        }
        ///Master Compare 1 Interrupt flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmp1c{}; 
        namespace Mcmp1cValC{
        }
    }
    namespace Nonemdier4{    ///<MDIER4
        using Addr = Register::Address<0x4001740c,0xff80ff80,0,unsigned>;
        ///MUPDDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mupdde{}; 
        namespace MupddeValC{
        }
        ///SYNCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> syncde{}; 
        namespace SyncdeValC{
        }
        ///MREPDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mrepde{}; 
        namespace MrepdeValC{
        }
        ///MCMP4DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mcmp4de{}; 
        namespace Mcmp4deValC{
        }
        ///MCMP3DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcmp3de{}; 
        namespace Mcmp3deValC{
        }
        ///MCMP2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mcmp2de{}; 
        namespace Mcmp2deValC{
        }
        ///MCMP1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcmp1de{}; 
        namespace Mcmp1deValC{
        }
        ///MUPDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mupdie{}; 
        namespace MupdieValC{
        }
        ///SYNCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncie{}; 
        namespace SyncieValC{
        }
        ///MREPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrepie{}; 
        namespace MrepieValC{
        }
        ///MCMP4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcmp4ie{}; 
        namespace Mcmp4ieValC{
        }
        ///MCMP3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mcmp3ie{}; 
        namespace Mcmp3ieValC{
        }
        ///MCMP2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcmp2ie{}; 
        namespace Mcmp2ieValC{
        }
        ///MCMP1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcmp1ie{}; 
        namespace Mcmp1ieValC{
        }
    }
    namespace Nonemcntr{    ///<Master Timer Counter Register
        using Addr = Register::Address<0x40017410,0xffff0000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
    }
    namespace Nonemper{    ///<Master Timer Period Register
        using Addr = Register::Address<0x40017414,0xffff0000,0,unsigned>;
        ///Master Timer Period value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mper{}; 
        namespace MperValC{
        }
    }
    namespace Nonemrep{    ///<Master Timer Repetition
          Register
        using Addr = Register::Address<0x40017418,0xffffff00,0,unsigned>;
        ///Master Timer Repetition counter
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mrep{}; 
        namespace MrepValC{
        }
    }
    namespace Nonemcmp1r{    ///<Master Timer Compare 1
          Register
        using Addr = Register::Address<0x4001741c,0xffff0000,0,unsigned>;
        ///Master Timer Compare 1
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp1{}; 
        namespace Mcmp1ValC{
        }
    }
    namespace Nonemcmp2r{    ///<Master Timer Compare 2
          Register
        using Addr = Register::Address<0x40017424,0xffff0000,0,unsigned>;
        ///Master Timer Compare 2
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp2{}; 
        namespace Mcmp2ValC{
        }
    }
    namespace Nonemcmp3r{    ///<Master Timer Compare 3
          Register
        using Addr = Register::Address<0x40017428,0xffff0000,0,unsigned>;
        ///Master Timer Compare 3
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp3{}; 
        namespace Mcmp3ValC{
        }
    }
    namespace Nonemcmp4r{    ///<Master Timer Compare 4
          Register
        using Addr = Register::Address<0x4001742c,0xffff0000,0,unsigned>;
        ///Master Timer Compare 4
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcmp4{}; 
        namespace Mcmp4ValC{
        }
    }
}
