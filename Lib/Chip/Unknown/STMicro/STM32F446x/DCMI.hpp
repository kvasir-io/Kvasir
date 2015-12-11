#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital camera interface
    namespace Nonecr{    ///<control register 1
        using Addr = Register::Address<0x50050000,0xffe0b000,0,unsigned>;
        ///Capture enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capture{}; 
        ///Capture mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cm{}; 
        ///Crop feature
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crop{}; 
        ///JPEG format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jpeg{}; 
        ///Embedded synchronization
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ess{}; 
        ///Pixel clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pckpol{}; 
        ///Horizontal synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hspol{}; 
        ///Vertical synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vspol{}; 
        ///Extended data mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> edm{}; 
        ///DCMI enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Byte Select mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> bsm{}; 
        ///Odd/Even Byte Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oebs{}; 
        ///Line Select mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lsm{}; 
        ///Odd/Even Line Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> oels{}; 
        ///Frame capture rate control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> fcrc{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50050004,0xfffffff8,0,unsigned>;
        ///FIFO not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fne{}; 
        ///VSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsync{}; 
        ///HSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsync{}; 
    }
    namespace Noneris{    ///<raw interrupt status register
        using Addr = Register::Address<0x50050008,0xffffffe0,0,unsigned>;
        ///Line raw interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineRis{}; 
        ///VSYNC raw interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncRis{}; 
        ///Synchronization error raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errRis{}; 
        ///Overrun raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrRis{}; 
        ///Capture complete raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameRis{}; 
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x5005000c,0xffffffe0,0,unsigned>;
        ///Line interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineIe{}; 
        ///VSYNC interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncIe{}; 
        ///Synchronization error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errIe{}; 
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrIe{}; 
        ///Capture complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameIe{}; 
    }
    namespace Nonemis{    ///<masked interrupt status
          register
        using Addr = Register::Address<0x50050010,0xffffffe0,0,unsigned>;
        ///Line masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineMis{}; 
        ///VSYNC masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncMis{}; 
        ///Synchronization error masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errMis{}; 
        ///Overrun masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrMis{}; 
        ///Capture complete masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameMis{}; 
    }
    namespace Noneicr{    ///<interrupt clear register
        using Addr = Register::Address<0x50050014,0xffffffe0,0,unsigned>;
        ///line interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineIsc{}; 
        ///Vertical synch interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncIsc{}; 
        ///Synchronization error interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errIsc{}; 
        ///Overrun interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrIsc{}; 
        ///Capture complete interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameIsc{}; 
    }
    namespace Noneescr{    ///<embedded synchronization code
          register
        using Addr = Register::Address<0x50050018,0x00000000,0,unsigned>;
        ///Frame end delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fec{}; 
        ///Line end delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lec{}; 
        ///Line start delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lsc{}; 
        ///Frame start delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fsc{}; 
    }
    namespace Noneesur{    ///<embedded synchronization unmask
          register
        using Addr = Register::Address<0x5005001c,0x00000000,0,unsigned>;
        ///Frame end delimiter unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> feu{}; 
        ///Line end delimiter unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> leu{}; 
        ///Line start delimiter
              unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lsu{}; 
        ///Frame start delimiter
              unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fsu{}; 
    }
    namespace Nonecwstrt{    ///<crop window start
        using Addr = Register::Address<0x50050020,0xe000c000,0,unsigned>;
        ///Vertical start line count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> vst{}; 
        ///Horizontal offset count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> hoffcnt{}; 
    }
    namespace Nonecwsize{    ///<crop window size
        using Addr = Register::Address<0x50050024,0xc000c000,0,unsigned>;
        ///Vertical line count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> vline{}; 
        ///Capture count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> capcnt{}; 
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x50050028,0x00000000,0,unsigned>;
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> byte3{}; 
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> byte2{}; 
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> byte1{}; 
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> byte0{}; 
    }
}
