#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial audio interface
    namespace Nonebcr1{    ///<BConfiguration register 1
        using Addr = Register::Address<0x40015424,0xff04c010,0,unsigned>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mcjdiv{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Audio block B enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiben{}; 
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdri{}; 
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Least significant bit
              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Nonebcr2{    ///<BConfiguration register 2
        using Addr = Register::Address<0x40015428,0xffff0000,0,unsigned>;
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecn{}; 
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Tristate management on data
              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflus{}; 
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nonebfrcr{    ///<BFRCR
        using Addr = Register::Address<0x4001542c,0xfff88000,0,unsigned>;
        ///Frame synchronization
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
        ///Frame synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization
              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fsdef{}; 
        ///Frame synchronization active level
              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
    }
    namespace Nonebslotr{    ///<BSlot register
        using Addr = Register::Address<0x40015430,0x0000f020,0,unsigned>;
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
        ///Number of slots in an audio
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
    }
    namespace Nonebim{    ///<BInterrupt mask register2
        using Addr = Register::Address<0x40015434,0xffffff80,0,unsigned>;
        ///Late frame synchronization detection
              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
        ///Anticipated frame synchronization
              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Codec not ready interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///FIFO request interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Wrong clock configuration interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun/underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
    }
    namespace Nonebsr{    ///<BStatus register
        using Addr = Register::Address<0x40015438,0xfff8ff80,0,unsigned>;
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
        ///Late frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Anticipated frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Wrong clock configuration
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Nonebclrfr{    ///<BClear flag register
        using Addr = Register::Address<0x4001543c,0xffffff88,0,unsigned>;
        ///Clear late frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Clear anticipated frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Clear wrong clock configuration
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Nonebdr{    ///<BData register
        using Addr = Register::Address<0x40015440,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Noneacr1{    ///<AConfiguration register 1
        using Addr = Register::Address<0x40015404,0xff04c010,0,unsigned>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mcjdiv{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Audio block A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiaen{}; 
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdri{}; 
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Least significant bit
              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Noneacr2{    ///<AConfiguration register 2
        using Addr = Register::Address<0x40015408,0xffff0000,0,unsigned>;
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecn{}; 
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Tristate management on data
              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflus{}; 
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Noneafrcr{    ///<AFRCR
        using Addr = Register::Address<0x4001540c,0xfff88000,0,unsigned>;
        ///Frame synchronization
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
        ///Frame synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization
              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fsdef{}; 
        ///Frame synchronization active level
              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
    }
    namespace Noneaslotr{    ///<ASlot register
        using Addr = Register::Address<0x40015410,0x0000f020,0,unsigned>;
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
        ///Number of slots in an audio
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
    }
    namespace Noneaim{    ///<AInterrupt mask register2
        using Addr = Register::Address<0x40015414,0xffffff80,0,unsigned>;
        ///Late frame synchronization detection
              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Anticipated frame synchronization
              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Codec not ready interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///FIFO request interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Wrong clock configuration interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun/underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
    }
    namespace Noneasr{    ///<AStatus register
        using Addr = Register::Address<0x40015418,0xfff8ff80,0,unsigned>;
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
        ///Late frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Anticipated frame synchronization
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Wrong clock configuration flag. This bit
              is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Noneaclrfr{    ///<AClear flag register
        using Addr = Register::Address<0x4001541c,0xffffff88,0,unsigned>;
        ///Clear late frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Clear anticipated frame synchronization
              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Clear wrong clock configuration
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Noneadr{    ///<AData register
        using Addr = Register::Address<0x40015420,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
