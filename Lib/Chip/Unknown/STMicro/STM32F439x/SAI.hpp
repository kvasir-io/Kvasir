#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial audio interface
    namespace Nonebcr1{    ///<BConfiguration register 1
        using Addr = Register::Address<0x40015824,0xff04c010,0,unsigned>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mcjdiv{}; 
        namespace McjdivValC{
        }
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        namespace NodivValC{
        }
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///Audio block B enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiben{}; 
        namespace SaibenValC{
        }
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdri{}; 
        namespace OutdriValC{
        }
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        namespace MonoValC{
        }
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        namespace SyncenValC{
        }
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        namespace CkstrValC{
        }
        ///Least significant bit
              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        namespace LsbfirstValC{
        }
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        namespace DsValC{
        }
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        namespace PrtcfgValC{
        }
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace Nonebcr2{    ///<BConfiguration register 2
        using Addr = Register::Address<0x40015828,0xffff0000,0,unsigned>;
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        namespace CplValC{
        }
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecn{}; 
        namespace MutecnValC{
        }
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        namespace MutevalValC{
        }
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        namespace MuteValC{
        }
        ///Tristate management on data
              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        namespace TrisValC{
        }
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflus{}; 
        namespace FflusValC{
        }
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nonebfrcr{    ///<BFRCR
        using Addr = Register::Address<0x4001582c,0xfff88000,0,unsigned>;
        ///Frame synchronization
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
        namespace FsoffValC{
        }
        ///Frame synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        namespace FspolValC{
        }
        ///Frame synchronization
              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fsdef{}; 
        namespace FsdefValC{
        }
        ///Frame synchronization active level
              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        namespace FsallValC{
        }
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
        namespace FrlValC{
        }
    }
    namespace Nonebslotr{    ///<BSlot register
        using Addr = Register::Address<0x40015830,0x0000f020,0,unsigned>;
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
        namespace SlotenValC{
        }
        ///Number of slots in an audio
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        namespace NbslotValC{
        }
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        namespace SlotszValC{
        }
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
        namespace FboffValC{
        }
    }
    namespace Nonebim{    ///<BInterrupt mask register2
        using Addr = Register::Address<0x40015834,0xffffff80,0,unsigned>;
        ///Late frame synchronization detection
              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
        namespace LfsdetieValC{
        }
        ///Anticipated frame synchronization
              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        namespace AfsdetieValC{
        }
        ///Codec not ready interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        namespace CnrdyieValC{
        }
        ///FIFO request interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        namespace FreqieValC{
        }
        ///Wrong clock configuration interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        namespace WckcfgValC{
        }
        ///Mute detection interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        namespace MutedetValC{
        }
        ///Overrun/underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
        namespace OvrudrieValC{
        }
    }
    namespace Nonebsr{    ///<BStatus register
        using Addr = Register::Address<0x40015838,0xfff8ff80,0,unsigned>;
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
        namespace FlvlValC{
        }
        ///Late frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        namespace LfsdetValC{
        }
        ///Anticipated frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        namespace AfsdetValC{
        }
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        namespace CnrdyValC{
        }
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        namespace FreqValC{
        }
        ///Wrong clock configuration
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        namespace WckcfgValC{
        }
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        namespace MutedetValC{
        }
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        namespace OvrudrValC{
        }
    }
    namespace Nonebclrfr{    ///<BClear flag register
        using Addr = Register::Address<0x4001583c,0xffffff88,0,unsigned>;
        ///Clear late frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        namespace LfsdetValC{
        }
        ///Clear anticipated frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        namespace CafsdetValC{
        }
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        namespace CnrdyValC{
        }
        ///Clear wrong clock configuration
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        namespace WckcfgValC{
        }
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        namespace MutedetValC{
        }
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        namespace OvrudrValC{
        }
    }
    namespace Nonebdr{    ///<BData register
        using Addr = Register::Address<0x40015840,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Noneacr1{    ///<AConfiguration register 1
        using Addr = Register::Address<0x40015804,0xff04c010,0,unsigned>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mcjdiv{}; 
        namespace McjdivValC{
        }
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        namespace NodivValC{
        }
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///Audio block A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiaen{}; 
        namespace SaiaenValC{
        }
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdri{}; 
        namespace OutdriValC{
        }
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        namespace MonoValC{
        }
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        namespace SyncenValC{
        }
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        namespace CkstrValC{
        }
        ///Least significant bit
              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        namespace LsbfirstValC{
        }
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        namespace DsValC{
        }
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        namespace PrtcfgValC{
        }
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace Noneacr2{    ///<AConfiguration register 2
        using Addr = Register::Address<0x40015808,0xffff0000,0,unsigned>;
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        namespace CplValC{
        }
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecn{}; 
        namespace MutecnValC{
        }
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        namespace MutevalValC{
        }
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        namespace MuteValC{
        }
        ///Tristate management on data
              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        namespace TrisValC{
        }
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflus{}; 
        namespace FflusValC{
        }
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Noneafrcr{    ///<AFRCR
        using Addr = Register::Address<0x4001580c,0xfff88000,0,unsigned>;
        ///Frame synchronization
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
        namespace FsoffValC{
        }
        ///Frame synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        namespace FspolValC{
        }
        ///Frame synchronization
              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fsdef{}; 
        namespace FsdefValC{
        }
        ///Frame synchronization active level
              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        namespace FsallValC{
        }
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
        namespace FrlValC{
        }
    }
    namespace Noneaslotr{    ///<ASlot register
        using Addr = Register::Address<0x40015810,0x0000f020,0,unsigned>;
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
        namespace SlotenValC{
        }
        ///Number of slots in an audio
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        namespace NbslotValC{
        }
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        namespace SlotszValC{
        }
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
        namespace FboffValC{
        }
    }
    namespace Noneaim{    ///<AInterrupt mask register2
        using Addr = Register::Address<0x40015814,0xffffff80,0,unsigned>;
        ///Late frame synchronization detection
              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        namespace LfsdetValC{
        }
        ///Anticipated frame synchronization
              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        namespace AfsdetieValC{
        }
        ///Codec not ready interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        namespace CnrdyieValC{
        }
        ///FIFO request interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        namespace FreqieValC{
        }
        ///Wrong clock configuration interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        namespace WckcfgValC{
        }
        ///Mute detection interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        namespace MutedetValC{
        }
        ///Overrun/underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
        namespace OvrudrieValC{
        }
    }
    namespace Noneasr{    ///<AStatus register
        using Addr = Register::Address<0x40015818,0xfff8ff80,0,unsigned>;
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
        namespace FlvlValC{
        }
        ///Late frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        namespace LfsdetValC{
        }
        ///Anticipated frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        namespace AfsdetValC{
        }
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        namespace CnrdyValC{
        }
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        namespace FreqValC{
        }
        ///Wrong clock configuration flag. This bit
              is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        namespace WckcfgValC{
        }
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        namespace MutedetValC{
        }
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        namespace OvrudrValC{
        }
    }
    namespace Noneaclrfr{    ///<AClear flag register
        using Addr = Register::Address<0x4001581c,0xffffff88,0,unsigned>;
        ///Clear late frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        namespace LfsdetValC{
        }
        ///Clear anticipated frame synchronization
              detection flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        namespace CafsdetValC{
        }
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        namespace CnrdyValC{
        }
        ///Clear wrong clock configuration
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        namespace WckcfgValC{
        }
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        namespace MutedetValC{
        }
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        namespace OvrudrValC{
        }
    }
    namespace Noneadr{    ///<AData register
        using Addr = Register::Address<0x40015820,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
}
