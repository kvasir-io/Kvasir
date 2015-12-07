#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital camera interface
    namespace Nonecr{    ///<control register 1
        using Addr = Register::Address<0x50050000,0xffffb000,0,unsigned>;
        ///DCMI enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Extended data mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> edm{}; 
        namespace EdmValC{
        }
        ///Frame capture rate control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> fcrc{}; 
        namespace FcrcValC{
        }
        ///Vertical synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vspol{}; 
        namespace VspolValC{
        }
        ///Horizontal synchronization
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hspol{}; 
        namespace HspolValC{
        }
        ///Pixel clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pckpol{}; 
        namespace PckpolValC{
        }
        ///Embedded synchronization
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ess{}; 
        namespace EssValC{
        }
        ///JPEG format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jpeg{}; 
        namespace JpegValC{
        }
        ///Crop feature
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crop{}; 
        namespace CropValC{
        }
        ///Capture mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cm{}; 
        namespace CmValC{
        }
        ///Capture enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capture{}; 
        namespace CaptureValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50050004,0xfffffff8,0,unsigned>;
        ///FIFO not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fne{}; 
        namespace FneValC{
        }
        ///VSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsync{}; 
        namespace VsyncValC{
        }
        ///HSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsync{}; 
        namespace HsyncValC{
        }
    }
    namespace Noneris{    ///<raw interrupt status register
        using Addr = Register::Address<0x50050008,0xffffffe0,0,unsigned>;
        ///Line raw interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineRis{}; 
        namespace LinerisValC{
        }
        ///VSYNC raw interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncRis{}; 
        namespace VsyncrisValC{
        }
        ///Synchronization error raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errRis{}; 
        namespace ErrrisValC{
        }
        ///Overrun raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrRis{}; 
        namespace OvrrisValC{
        }
        ///Capture complete raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameRis{}; 
        namespace FramerisValC{
        }
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x5005000c,0xffffffe0,0,unsigned>;
        ///Line interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineIe{}; 
        namespace LineieValC{
        }
        ///VSYNC interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncIe{}; 
        namespace VsyncieValC{
        }
        ///Synchronization error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errIe{}; 
        namespace ErrieValC{
        }
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrIe{}; 
        namespace OvrieValC{
        }
        ///Capture complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameIe{}; 
        namespace FrameieValC{
        }
    }
    namespace Nonemis{    ///<masked interrupt status
          register
        using Addr = Register::Address<0x50050010,0xffffffe0,0,unsigned>;
        ///Line masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineMis{}; 
        namespace LinemisValC{
        }
        ///VSYNC masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncMis{}; 
        namespace VsyncmisValC{
        }
        ///Synchronization error masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errMis{}; 
        namespace ErrmisValC{
        }
        ///Overrun masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrMis{}; 
        namespace OvrmisValC{
        }
        ///Capture complete masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameMis{}; 
        namespace FramemisValC{
        }
    }
    namespace Noneicr{    ///<interrupt clear register
        using Addr = Register::Address<0x50050014,0xffffffe0,0,unsigned>;
        ///line interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lineIsc{}; 
        namespace LineiscValC{
        }
        ///Vertical synch interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncIsc{}; 
        namespace VsynciscValC{
        }
        ///Synchronization error interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errIsc{}; 
        namespace ErriscValC{
        }
        ///Overrun interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovrIsc{}; 
        namespace OvriscValC{
        }
        ///Capture complete interrupt status
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frameIsc{}; 
        namespace FrameiscValC{
        }
    }
    namespace Noneescr{    ///<embedded synchronization code
          register
        using Addr = Register::Address<0x50050018,0x00000000,0,unsigned>;
        ///Frame end delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fec{}; 
        namespace FecValC{
        }
        ///Line end delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lec{}; 
        namespace LecValC{
        }
        ///Line start delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lsc{}; 
        namespace LscValC{
        }
        ///Frame start delimiter code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fsc{}; 
        namespace FscValC{
        }
    }
    namespace Noneesur{    ///<embedded synchronization unmask
          register
        using Addr = Register::Address<0x5005001c,0x00000000,0,unsigned>;
        ///Frame end delimiter unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> feu{}; 
        namespace FeuValC{
        }
        ///Line end delimiter unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> leu{}; 
        namespace LeuValC{
        }
        ///Line start delimiter
              unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lsu{}; 
        namespace LsuValC{
        }
        ///Frame start delimiter
              unmask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fsu{}; 
        namespace FsuValC{
        }
    }
    namespace Nonecwstrt{    ///<crop window start
        using Addr = Register::Address<0x50050020,0xe000c000,0,unsigned>;
        ///Vertical start line count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> vst{}; 
        namespace VstValC{
        }
        ///Horizontal offset count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> hoffcnt{}; 
        namespace HoffcntValC{
        }
    }
    namespace Nonecwsize{    ///<crop window size
        using Addr = Register::Address<0x50050024,0xc000c000,0,unsigned>;
        ///Vertical line count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> vline{}; 
        namespace VlineValC{
        }
        ///Capture count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> capcnt{}; 
        namespace CapcntValC{
        }
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x50050028,0x00000000,0,unsigned>;
        ///Data byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> byte3{}; 
        namespace Byte3ValC{
        }
        ///Data byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> byte2{}; 
        namespace Byte2ValC{
        }
        ///Data byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> byte1{}; 
        namespace Byte1ValC{
        }
        ///Data byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> byte0{}; 
        namespace Byte0ValC{
        }
    }
}
