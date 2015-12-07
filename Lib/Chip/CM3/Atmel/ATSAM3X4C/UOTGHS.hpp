#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB On-The-Go Interface
    namespace UotghsDevctrl{    ///<Device General Control Register
        using Addr = Register::Address<0x400ac000,0xfffe0000,0,unsigned>;
        ///USB Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> uadd{}; 
        namespace UaddValC{
        }
        ///Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adden{}; 
        namespace AddenValC{
        }
        ///Detach
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> detach{}; 
        namespace DetachValC{
        }
        ///Remote Wake-Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmwkup{}; 
        namespace RmwkupValC{
        }
        ///Mode Configuration
        enum class SpdconfVal {
            normal=0x00000000,     ///<The peripheral starts in full-speed mode and performs a high-speed reset to switch to the high-speed mode if the host is high-speed capable.
            lowPower=0x00000001,     ///<For a better consumption, if high-speed is not needed.
            highSpeed=0x00000002,     ///<Forced high speed.
            forcedFs=0x00000003,     ///<The peripheral remains in full-speed mode whatever the host speed capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,SpdconfVal> spdconf{}; 
        namespace SpdconfValC{
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::normal> normal{};
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::lowPower> lowPower{};
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::forcedFs> forcedFs{};
        }
        ///Low-Speed Mode Force
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ls{}; 
        namespace LsValC{
        }
        ///Test mode J
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tstj{}; 
        namespace TstjValC{
        }
        ///Test mode K
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tstk{}; 
        namespace TstkValC{
        }
        ///Test packet mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstpckt{}; 
        namespace TstpcktValC{
        }
        ///Specific Operational mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> opmode2{}; 
        namespace Opmode2ValC{
        }
    }
    namespace UotghsDevisr{    ///<Device Global Interrupt Status Register
        using Addr = Register::Address<0x400ac004,0x81c00f80,0,unsigned>;
        ///Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///Micro Start of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msof{}; 
        namespace MsofValC{
        }
        ///Start of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///End of Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorst{}; 
        namespace EorstValC{
        }
        ///Wake-Up Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///End of Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsm{}; 
        namespace EorsmValC{
        }
        ///Upstream Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        namespace UprsmValC{
        }
        ///Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Endpoint 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Endpoint 8 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Endpoint 9 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsDevicr{    ///<Device Global Interrupt Clear Register
        using Addr = Register::Address<0x400ac008,0xffffff80,0,unsigned>;
        ///Suspend Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspc{}; 
        namespace SuspcValC{
        }
        ///Micro Start of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msofc{}; 
        namespace MsofcValC{
        }
        ///Start of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofc{}; 
        namespace SofcValC{
        }
        ///End of Reset Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorstc{}; 
        namespace EorstcValC{
        }
        ///Wake-Up Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeupc{}; 
        namespace WakeupcValC{
        }
        ///End of Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsmc{}; 
        namespace EorsmcValC{
        }
        ///Upstream Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsmc{}; 
        namespace UprsmcValC{
        }
    }
    namespace UotghsDevifr{    ///<Device Global Interrupt Set Register
        using Addr = Register::Address<0x400ac00c,0x81ffff80,0,unsigned>;
        ///Suspend Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> susps{}; 
        namespace SuspsValC{
        }
        ///Micro Start of Frame Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msofs{}; 
        namespace MsofsValC{
        }
        ///Start of Frame Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofs{}; 
        namespace SofsValC{
        }
        ///End of Reset Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorsts{}; 
        namespace EorstsValC{
        }
        ///Wake-Up Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeups{}; 
        namespace WakeupsValC{
        }
        ///End of Resume Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsms{}; 
        namespace EorsmsValC{
        }
        ///Upstream Resume Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsms{}; 
        namespace UprsmsValC{
        }
        ///DMA Channel 1 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsDevimr{    ///<Device Global Interrupt Mask Register
        using Addr = Register::Address<0x400ac010,0x81c00f80,0,unsigned>;
        ///Suspend Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspe{}; 
        namespace SuspeValC{
        }
        ///Micro Start of Frame Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msofe{}; 
        namespace MsofeValC{
        }
        ///Start of Frame Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofe{}; 
        namespace SofeValC{
        }
        ///End of Reset Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorste{}; 
        namespace EorsteValC{
        }
        ///Wake-Up Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeupe{}; 
        namespace WakeupeValC{
        }
        ///End of Resume Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsme{}; 
        namespace EorsmeValC{
        }
        ///Upstream Resume Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsme{}; 
        namespace UprsmeValC{
        }
        ///Endpoint 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Endpoint 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Endpoint 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Endpoint 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Endpoint 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Endpoint 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Endpoint 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Endpoint 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Endpoint 8 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Endpoint 9 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsDevidr{    ///<Device Global Interrupt Disable Register
        using Addr = Register::Address<0x400ac014,0x81c00f80,0,unsigned>;
        ///Suspend Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspec{}; 
        namespace SuspecValC{
        }
        ///Micro Start of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msofec{}; 
        namespace MsofecValC{
        }
        ///Start of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofec{}; 
        namespace SofecValC{
        }
        ///End of Reset Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorstec{}; 
        namespace EorstecValC{
        }
        ///Wake-Up Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeupec{}; 
        namespace WakeupecValC{
        }
        ///End of Resume Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsmec{}; 
        namespace EorsmecValC{
        }
        ///Upstream Resume Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsmec{}; 
        namespace UprsmecValC{
        }
        ///Endpoint 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Endpoint 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Endpoint 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Endpoint 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Endpoint 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Endpoint 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Endpoint 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Endpoint 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Endpoint 8 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Endpoint 9 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsDevier{    ///<Device Global Interrupt Enable Register
        using Addr = Register::Address<0x400ac018,0x81c00f80,0,unsigned>;
        ///Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspes{}; 
        namespace SuspesValC{
        }
        ///Micro Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msofes{}; 
        namespace MsofesValC{
        }
        ///Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofes{}; 
        namespace SofesValC{
        }
        ///End of Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorstes{}; 
        namespace EorstesValC{
        }
        ///Wake-Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeupes{}; 
        namespace WakeupesValC{
        }
        ///End of Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsmes{}; 
        namespace EorsmesValC{
        }
        ///Upstream Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsmes{}; 
        namespace UprsmesValC{
        }
        ///Endpoint 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Endpoint 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Endpoint 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Endpoint 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Endpoint 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Endpoint 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Endpoint 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Endpoint 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Endpoint 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Endpoint 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsDevept{    ///<Device Endpoint Register
        using Addr = Register::Address<0x400ac01c,0xfe00fe00,0,unsigned>;
        ///Endpoint 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epen0{}; 
        namespace Epen0ValC{
        }
        ///Endpoint 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epen1{}; 
        namespace Epen1ValC{
        }
        ///Endpoint 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epen2{}; 
        namespace Epen2ValC{
        }
        ///Endpoint 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epen3{}; 
        namespace Epen3ValC{
        }
        ///Endpoint 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epen4{}; 
        namespace Epen4ValC{
        }
        ///Endpoint 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epen5{}; 
        namespace Epen5ValC{
        }
        ///Endpoint 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epen6{}; 
        namespace Epen6ValC{
        }
        ///Endpoint 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epen7{}; 
        namespace Epen7ValC{
        }
        ///Endpoint 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epen8{}; 
        namespace Epen8ValC{
        }
        ///Endpoint 0 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprst0{}; 
        namespace Eprst0ValC{
        }
        ///Endpoint 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprst1{}; 
        namespace Eprst1ValC{
        }
        ///Endpoint 2 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprst2{}; 
        namespace Eprst2ValC{
        }
        ///Endpoint 3 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprst3{}; 
        namespace Eprst3ValC{
        }
        ///Endpoint 4 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprst4{}; 
        namespace Eprst4ValC{
        }
        ///Endpoint 5 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprst5{}; 
        namespace Eprst5ValC{
        }
        ///Endpoint 6 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprst6{}; 
        namespace Eprst6ValC{
        }
        ///Endpoint 7 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprst7{}; 
        namespace Eprst7ValC{
        }
        ///Endpoint 8 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprst8{}; 
        namespace Eprst8ValC{
        }
    }
    namespace UotghsDevfnum{    ///<Device Frame Number Register
        using Addr = Register::Address<0x400ac020,0xffff4000,0,unsigned>;
        ///Micro Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mfnum{}; 
        namespace MfnumValC{
        }
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::ReadWriteAccess,unsigned> fnum{}; 
        namespace FnumValC{
        }
        ///Frame Number CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fncerr{}; 
        namespace FncerrValC{
        }
    }
    namespace UotghsDeveptcfg0{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac100,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg1{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac104,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg2{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac108,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg3{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac10c,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg4{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac110,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg5{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac114,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg6{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac118,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg7{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac11c,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg8{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac120,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg9{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac124,0xffff8481,0,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk),EpbkVal::v3Bank> v3Bank{};
        }
        ///Endpoint Size
        enum class EpsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,EpsizeVal> epsize{}; 
        namespace EpsizeValC{
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize),EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir),EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype),EptypeVal::intrpt> intrpt{};
        }
        ///Number of transaction per microframe for isochronous endpoint
        enum class NbtransVal {
            v0Trans=0x00000000,     ///<reserved to endpoint that does not have the high-bandwidth isochronous capability.
            v1Trans=0x00000001,     ///<default value: one transaction per micro-frame.
            v2Trans=0x00000002,     ///<2 transactions per micro-frame. This endpoint should be configured as double-bank.
            v3Trans=0x00000003,     ///<3 transactions per micro-frame. This endpoint should be configured as triple-bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,NbtransVal> nbtrans{}; 
        namespace NbtransValC{
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans),NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptisr0{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac130,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr1{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac134,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr2{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac138,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr3{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac13c,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr4{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac140,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr5{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac144,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr6{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac148,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr7{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac14c,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr8{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac150,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr9{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac154,0x80080c00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpi{}; 
        namespace RxstpiValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakouti{}; 
        namespace NakoutiValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakini{}; 
        namespace NakiniValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledi{}; 
        namespace StallediValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctrldir{}; 
        namespace CtrldirValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDeveptisr0Isoenpt{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac130,0x800a0800,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txini{}; 
        namespace TxiniValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxouti{}; 
        namespace RxoutiValC{
        }
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfi{}; 
        namespace UnderfiValC{
        }
        ///High bandwidth isochronous IN Underflow Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hbisoinerri{}; 
        namespace HbisoinerriValC{
        }
        ///High Bandwidth Isochronous IN Flush Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hbisoflushi{}; 
        namespace HbisoflushiValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///CRC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerri{}; 
        namespace CrcerriValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacket{}; 
        namespace ShortpacketValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Data2 toggle sequence (for high-bandwidth isochronous endpoint)
            mdata=0x00000003,     ///<MData toggle sequence (for high-bandwidth isochronous endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::mdata> mdata{};
        }
        ///High-bandwidth isochronous OUT endpoint transaction error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errortrans{}; 
        namespace ErrortransValC{
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byct{}; 
        namespace ByctValC{
        }
    }
    namespace UotghsDevepticr0{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac160,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr1{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac164,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr2{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac168,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr3{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac16c,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr4{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac170,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr5{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac174,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr6{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac178,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr7{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac17c,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr8{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac180,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr9{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac184,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpic{}; 
        namespace RxstpicValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutic{}; 
        namespace NakouticValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinic{}; 
        namespace NakinicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledic{}; 
        namespace StalledicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDevepticr0Isoenpt{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac160,0xffffff00,0,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinic{}; 
        namespace TxinicValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutic{}; 
        namespace RxouticValC{
        }
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfic{}; 
        namespace UnderficValC{
        }
        ///High bandwidth isochronous IN Underflow Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hbisoinerric{}; 
        namespace HbisoinerricValC{
        }
        ///High Bandwidth Isochronous IN Flush Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hbisoflushic{}; 
        namespace HbisoflushicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///CRC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerric{}; 
        namespace CrcerricValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketc{}; 
        namespace ShortpacketcValC{
        }
    }
    namespace UotghsDeveptifr0{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac190,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr1{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac194,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr2{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac198,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr3{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac19c,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr4{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1a0,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr5{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1a4,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr6{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1a8,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr7{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1ac,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr8{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1b0,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr9{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1b4,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpis{}; 
        namespace RxstpisValC{
        }
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutis{}; 
        namespace NakoutisValC{
        }
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinis{}; 
        namespace NakinisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledis{}; 
        namespace StalledisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptifr0Isoenpt{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac190,0xffffef00,0,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinis{}; 
        namespace TxinisValC{
        }
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutis{}; 
        namespace RxoutisValC{
        }
        ///Underflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfis{}; 
        namespace UnderfisValC{
        }
        ///High bandwidth isochronous IN Underflow Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hbisoinerris{}; 
        namespace HbisoinerrisValC{
        }
        ///High Bandwidth Isochronous IN Flush Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hbisoflushis{}; 
        namespace HbisoflushisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///CRC Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerris{}; 
        namespace CrcerrisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackets{}; 
        namespace ShortpacketsValC{
        }
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsDeveptimr0{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c0,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr1{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c4,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr2{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c8,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr3{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1cc,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr4{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1d0,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr5{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1d4,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr6{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1d8,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr7{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1dc,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr8{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1e0,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr9{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1e4,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpe{}; 
        namespace RxstpeValC{
        }
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoute{}; 
        namespace NakouteValC{
        }
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakine{}; 
        namespace NakineValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stallede{}; 
        namespace StalledeValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdis{}; 
        namespace NyetdisValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrq{}; 
        namespace StallrqValC{
        }
    }
    namespace UotghsDeveptimr0Isoenpt{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c0,0xfffa8800,0,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txine{}; 
        namespace TxineValC{
        }
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoute{}; 
        namespace RxouteValC{
        }
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfe{}; 
        namespace UnderfeValC{
        }
        ///High Bandwidth Isochronous IN Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hbisoinerre{}; 
        namespace HbisoinerreValC{
        }
        ///High Bandwidth Isochronous IN Flush Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hbisoflushe{}; 
        namespace HbisoflusheValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfe{}; 
        namespace OverfeValC{
        }
        ///CRC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerre{}; 
        namespace CrcerreValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpackete{}; 
        namespace ShortpacketeValC{
        }
        ///MData Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mdatae{}; 
        namespace MdataeValC{
        }
        ///DataX Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dataxe{}; 
        namespace DataxeValC{
        }
        ///Transaction Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errortranse{}; 
        namespace ErrortranseValC{
        }
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbk{}; 
        namespace KillbkValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdma{}; 
        namespace EpdishdmaValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsDeveptier0{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f0,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier1{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f4,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier2{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f8,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier3{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1fc,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier4{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac200,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier5{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac204,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier6{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac208,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier7{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac20c,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier8{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac210,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier9{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac214,0xfff08f00,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpes{}; 
        namespace RxstpesValC{
        }
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutes{}; 
        namespace NakoutesValC{
        }
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakines{}; 
        namespace NakinesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledes{}; 
        namespace StalledesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdiss{}; 
        namespace NyetdissValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptier0Isoenpt{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f0,0xfff28800,0,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txines{}; 
        namespace TxinesValC{
        }
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutes{}; 
        namespace RxoutesValC{
        }
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfes{}; 
        namespace UnderfesValC{
        }
        ///High Bandwidth Isochronous IN Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hbisoinerres{}; 
        namespace HbisoinerresValC{
        }
        ///High Bandwidth Isochronous IN Flush Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hbisoflushes{}; 
        namespace HbisoflushesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfes{}; 
        namespace OverfesValC{
        }
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerres{}; 
        namespace CrcerresValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketes{}; 
        namespace ShortpacketesValC{
        }
        ///MData Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mdataes{}; 
        namespace MdataesValC{
        }
        ///DataX Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dataxes{}; 
        namespace DataxesValC{
        }
        ///Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errortranses{}; 
        namespace ErrortransesValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> killbks{}; 
        namespace KillbksValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocons{}; 
        namespace FifoconsValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmas{}; 
        namespace EpdishdmasValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqs{}; 
        namespace StallrqsValC{
        }
    }
    namespace UotghsDeveptidr0{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac220,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr1{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac224,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr2{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac228,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr3{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac22c,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr4{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac230,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr5{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac234,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr6{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac238,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr7{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac23c,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr8{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac240,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr9{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac244,0xfff4af00,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxstpec{}; 
        namespace RxstpecValC{
        }
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nakoutec{}; 
        namespace NakoutecValC{
        }
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakinec{}; 
        namespace NakinecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalledec{}; 
        namespace StalledecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nyetdisc{}; 
        namespace NyetdiscValC{
        }
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> stallrqc{}; 
        namespace StallrqcValC{
        }
    }
    namespace UotghsDeveptidr0Isoenpt{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac220,0xfffea800,0,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txinec{}; 
        namespace TxinecValC{
        }
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxoutec{}; 
        namespace RxoutecValC{
        }
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfec{}; 
        namespace UnderfecValC{
        }
        ///High Bandwidth Isochronous IN Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hbisoinerrec{}; 
        namespace HbisoinerrecValC{
        }
        ///High Bandwidth Isochronous IN Flush Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hbisoflushec{}; 
        namespace HbisoflushecValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfec{}; 
        namespace OverfecValC{
        }
        ///CRC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerrec{}; 
        namespace CrcerrecValC{
        }
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketec{}; 
        namespace ShortpacketecValC{
        }
        ///MData Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mdatec{}; 
        namespace MdatecValC{
        }
        ///DataX Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dataxec{}; 
        namespace DataxecValC{
        }
        ///Transaction Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errortransec{}; 
        namespace ErrortransecValC{
        }
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> epdishdmac{}; 
        namespace EpdishdmacValC{
        }
    }
    namespace UotghsDevdmanxtdsc1{    ///<Device DMA Channel Next Descriptor Address Register (n = 1)
        using Addr = Register::Address<0x400ac310,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress1{    ///<Device DMA Channel Address Register (n = 1)
        using Addr = Register::Address<0x400ac314,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol1{    ///<Device DMA Channel Control Register (n = 1)
        using Addr = Register::Address<0x400ac318,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus1{    ///<Device DMA Channel Status Register (n = 1)
        using Addr = Register::Address<0x400ac31c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsDevdmanxtdsc2{    ///<Device DMA Channel Next Descriptor Address Register (n = 2)
        using Addr = Register::Address<0x400ac320,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress2{    ///<Device DMA Channel Address Register (n = 2)
        using Addr = Register::Address<0x400ac324,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol2{    ///<Device DMA Channel Control Register (n = 2)
        using Addr = Register::Address<0x400ac328,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus2{    ///<Device DMA Channel Status Register (n = 2)
        using Addr = Register::Address<0x400ac32c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsDevdmanxtdsc3{    ///<Device DMA Channel Next Descriptor Address Register (n = 3)
        using Addr = Register::Address<0x400ac330,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress3{    ///<Device DMA Channel Address Register (n = 3)
        using Addr = Register::Address<0x400ac334,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol3{    ///<Device DMA Channel Control Register (n = 3)
        using Addr = Register::Address<0x400ac338,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus3{    ///<Device DMA Channel Status Register (n = 3)
        using Addr = Register::Address<0x400ac33c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsDevdmanxtdsc4{    ///<Device DMA Channel Next Descriptor Address Register (n = 4)
        using Addr = Register::Address<0x400ac340,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress4{    ///<Device DMA Channel Address Register (n = 4)
        using Addr = Register::Address<0x400ac344,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol4{    ///<Device DMA Channel Control Register (n = 4)
        using Addr = Register::Address<0x400ac348,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus4{    ///<Device DMA Channel Status Register (n = 4)
        using Addr = Register::Address<0x400ac34c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsDevdmanxtdsc5{    ///<Device DMA Channel Next Descriptor Address Register (n = 5)
        using Addr = Register::Address<0x400ac350,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress5{    ///<Device DMA Channel Address Register (n = 5)
        using Addr = Register::Address<0x400ac354,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol5{    ///<Device DMA Channel Control Register (n = 5)
        using Addr = Register::Address<0x400ac358,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus5{    ///<Device DMA Channel Status Register (n = 5)
        using Addr = Register::Address<0x400ac35c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsDevdmanxtdsc6{    ///<Device DMA Channel Next Descriptor Address Register (n = 6)
        using Addr = Register::Address<0x400ac360,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress6{    ///<Device DMA Channel Address Register (n = 6)
        using Addr = Register::Address<0x400ac364,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol6{    ///<Device DMA Channel Control Register (n = 6)
        using Addr = Register::Address<0x400ac368,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus6{    ///<Device DMA Channel Status Register (n = 6)
        using Addr = Register::Address<0x400ac36c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsDevdmanxtdsc7{    ///<Device DMA Channel Next Descriptor Address Register (n = 7)
        using Addr = Register::Address<0x400ac370,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsDevdmaaddress7{    ///<Device DMA Channel Address Register (n = 7)
        using Addr = Register::Address<0x400ac374,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsDevdmacontrol7{    ///<Device DMA Channel Control Register (n = 7)
        using Addr = Register::Address<0x400ac378,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsDevdmastatus7{    ///<Device DMA Channel Status Register (n = 7)
        using Addr = Register::Address<0x400ac37c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstctrl{    ///<Host General Control Register
        using Addr = Register::Address<0x400ac400,0xffffc8ff,0,unsigned>;
        ///Start of Frame Generation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sofe{}; 
        namespace SofeValC{
        }
        ///Send USB Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
        }
        ///Send USB Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resume{}; 
        namespace ResumeValC{
        }
        ///Mode Configuration
        enum class SpdconfVal {
            normal=0x00000000,     ///<The host starts in full-speed mode and performs a high-speed reset to switch to the high-speed mode if the downstream peripheral is high-speed capable.
            lowPower=0x00000001,     ///<For a better consumption, if high-speed is not needed.
            highSpeed=0x00000002,     ///<Forced high speed.
            forcedFs=0x00000003,     ///<The host remains to full-speed mode whatever the peripheral speed capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SpdconfVal> spdconf{}; 
        namespace SpdconfValC{
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::normal> normal{};
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::lowPower> lowPower{};
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(spdconf),SpdconfVal::forcedFs> forcedFs{};
        }
    }
    namespace UotghsHstisr{    ///<Host Global Interrupt Status Register
        using Addr = Register::Address<0x400ac404,0x81fc0080,0,unsigned>;
        ///Device Connection Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dconni{}; 
        namespace DconniValC{
        }
        ///Device Disconnection Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddisci{}; 
        namespace DdisciValC{
        }
        ///USB Reset Sent Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsti{}; 
        namespace RstiValC{
        }
        ///Downstream Resume Sent Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmedi{}; 
        namespace RsmediValC{
        }
        ///Upstream Resume Received Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrsmi{}; 
        namespace RxrsmiValC{
        }
        ///Host Start of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsofi{}; 
        namespace HsofiValC{
        }
        ///Host Wake-Up Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hwupi{}; 
        namespace HwupiValC{
        }
        ///Pipe 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Pipe 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Pipe 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Pipe 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Pipe 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Pipe 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Pipe 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Pipe 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Pipe 8 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Pipe 9 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsHsticr{    ///<Host Global Interrupt Clear Register
        using Addr = Register::Address<0x400ac408,0xffffff80,0,unsigned>;
        ///Device Connection Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dconnic{}; 
        namespace DconnicValC{
        }
        ///Device Disconnection Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddiscic{}; 
        namespace DdiscicValC{
        }
        ///USB Reset Sent Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstic{}; 
        namespace RsticValC{
        }
        ///Downstream Resume Sent Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmedic{}; 
        namespace RsmedicValC{
        }
        ///Upstream Resume Received Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrsmic{}; 
        namespace RxrsmicValC{
        }
        ///Host Start of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsofic{}; 
        namespace HsoficValC{
        }
        ///Host Wake-Up Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hwupic{}; 
        namespace HwupicValC{
        }
    }
    namespace UotghsHstifr{    ///<Host Global Interrupt Set Register
        using Addr = Register::Address<0x400ac40c,0x81ffff80,0,unsigned>;
        ///Device Connection Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dconnis{}; 
        namespace DconnisValC{
        }
        ///Device Disconnection Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddiscis{}; 
        namespace DdiscisValC{
        }
        ///USB Reset Sent Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstis{}; 
        namespace RstisValC{
        }
        ///Downstream Resume Sent Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmedis{}; 
        namespace RsmedisValC{
        }
        ///Upstream Resume Received Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrsmis{}; 
        namespace RxrsmisValC{
        }
        ///Host Start of Frame Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsofis{}; 
        namespace HsofisValC{
        }
        ///Host Wake-Up Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hwupis{}; 
        namespace HwupisValC{
        }
        ///DMA Channel 1 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsHstimr{    ///<Host Global Interrupt Mask Register
        using Addr = Register::Address<0x400ac410,0x81fc0080,0,unsigned>;
        ///Device Connection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dconnie{}; 
        namespace DconnieValC{
        }
        ///Device Disconnection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddiscie{}; 
        namespace DdiscieValC{
        }
        ///USB Reset Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstie{}; 
        namespace RstieValC{
        }
        ///Downstream Resume Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmedie{}; 
        namespace RsmedieValC{
        }
        ///Upstream Resume Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrsmie{}; 
        namespace RxrsmieValC{
        }
        ///Host Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsofie{}; 
        namespace HsofieValC{
        }
        ///Host Wake-Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hwupie{}; 
        namespace HwupieValC{
        }
        ///Pipe 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Pipe 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Pipe 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Pipe 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Pipe 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Pipe 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Pipe 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Pipe 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Pipe 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Pipe 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsHstidr{    ///<Host Global Interrupt Disable Register
        using Addr = Register::Address<0x400ac414,0x81fc0080,0,unsigned>;
        ///Device Connection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dconniec{}; 
        namespace DconniecValC{
        }
        ///Device Disconnection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddisciec{}; 
        namespace DdisciecValC{
        }
        ///USB Reset Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstiec{}; 
        namespace RstiecValC{
        }
        ///Downstream Resume Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmediec{}; 
        namespace RsmediecValC{
        }
        ///Upstream Resume Received Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrsmiec{}; 
        namespace RxrsmiecValC{
        }
        ///Host Start of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsofiec{}; 
        namespace HsofiecValC{
        }
        ///Host Wake-Up Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hwupiec{}; 
        namespace HwupiecValC{
        }
        ///Pipe 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Pipe 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Pipe 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Pipe 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Pipe 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Pipe 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Pipe 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Pipe 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Pipe 8 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Pipe 9 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsHstier{    ///<Host Global Interrupt Enable Register
        using Addr = Register::Address<0x400ac418,0x81fc0080,0,unsigned>;
        ///Device Connection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dconnies{}; 
        namespace DconniesValC{
        }
        ///Device Disconnection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddiscies{}; 
        namespace DdisciesValC{
        }
        ///USB Reset Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsties{}; 
        namespace RstiesValC{
        }
        ///Downstream Resume Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsmedies{}; 
        namespace RsmediesValC{
        }
        ///Upstream Resume Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrsmies{}; 
        namespace RxrsmiesValC{
        }
        ///Host Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsofies{}; 
        namespace HsofiesValC{
        }
        ///Host Wake-Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hwupies{}; 
        namespace HwupiesValC{
        }
        ///Pipe 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pep0{}; 
        namespace Pep0ValC{
        }
        ///Pipe 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pep1{}; 
        namespace Pep1ValC{
        }
        ///Pipe 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pep2{}; 
        namespace Pep2ValC{
        }
        ///Pipe 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pep3{}; 
        namespace Pep3ValC{
        }
        ///Pipe 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pep4{}; 
        namespace Pep4ValC{
        }
        ///Pipe 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pep5{}; 
        namespace Pep5ValC{
        }
        ///Pipe 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pep6{}; 
        namespace Pep6ValC{
        }
        ///Pipe 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pep7{}; 
        namespace Pep7ValC{
        }
        ///Pipe 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pep8{}; 
        namespace Pep8ValC{
        }
        ///Pipe 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pep9{}; 
        namespace Pep9ValC{
        }
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        namespace Dma1ValC{
        }
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        namespace Dma2ValC{
        }
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        namespace Dma3ValC{
        }
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        namespace Dma4ValC{
        }
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        namespace Dma5ValC{
        }
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        namespace Dma6ValC{
        }
    }
    namespace UotghsHstpip{    ///<Host Pipe Register
        using Addr = Register::Address<0x400ac41c,0xfe00fe00,0,unsigned>;
        ///Pipe 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen0{}; 
        namespace Pen0ValC{
        }
        ///Pipe 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen1{}; 
        namespace Pen1ValC{
        }
        ///Pipe 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen2{}; 
        namespace Pen2ValC{
        }
        ///Pipe 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen3{}; 
        namespace Pen3ValC{
        }
        ///Pipe 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen4{}; 
        namespace Pen4ValC{
        }
        ///Pipe 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen5{}; 
        namespace Pen5ValC{
        }
        ///Pipe 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen6{}; 
        namespace Pen6ValC{
        }
        ///Pipe 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen7{}; 
        namespace Pen7ValC{
        }
        ///Pipe 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pen8{}; 
        namespace Pen8ValC{
        }
        ///Pipe 0 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> prst0{}; 
        namespace Prst0ValC{
        }
        ///Pipe 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> prst1{}; 
        namespace Prst1ValC{
        }
        ///Pipe 2 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> prst2{}; 
        namespace Prst2ValC{
        }
        ///Pipe 3 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> prst3{}; 
        namespace Prst3ValC{
        }
        ///Pipe 4 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> prst4{}; 
        namespace Prst4ValC{
        }
        ///Pipe 5 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> prst5{}; 
        namespace Prst5ValC{
        }
        ///Pipe 6 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prst6{}; 
        namespace Prst6ValC{
        }
        ///Pipe 7 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> prst7{}; 
        namespace Prst7ValC{
        }
        ///Pipe 8 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> prst8{}; 
        namespace Prst8ValC{
        }
    }
    namespace UotghsHstfnum{    ///<Host Frame Number Register
        using Addr = Register::Address<0x400ac420,0xff00c000,0,unsigned>;
        ///Micro Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mfnum{}; 
        namespace MfnumValC{
        }
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::ReadWriteAccess,unsigned> fnum{}; 
        namespace FnumValC{
        }
        ///Frame Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> flenhigh{}; 
        namespace FlenhighValC{
        }
    }
    namespace UotghsHstaddr1{    ///<Host Address 1 Register
        using Addr = Register::Address<0x400ac424,0x80808080,0,unsigned>;
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> hstaddrp0{}; 
        namespace Hstaddrp0ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> hstaddrp1{}; 
        namespace Hstaddrp1ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> hstaddrp2{}; 
        namespace Hstaddrp2ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> hstaddrp3{}; 
        namespace Hstaddrp3ValC{
        }
    }
    namespace UotghsHstaddr2{    ///<Host Address 2 Register
        using Addr = Register::Address<0x400ac428,0x80808080,0,unsigned>;
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> hstaddrp4{}; 
        namespace Hstaddrp4ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> hstaddrp5{}; 
        namespace Hstaddrp5ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> hstaddrp6{}; 
        namespace Hstaddrp6ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> hstaddrp7{}; 
        namespace Hstaddrp7ValC{
        }
    }
    namespace UotghsHstaddr3{    ///<Host Address 3 Register
        using Addr = Register::Address<0x400ac42c,0xffff8080,0,unsigned>;
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> hstaddrp8{}; 
        namespace Hstaddrp8ValC{
        }
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> hstaddrp9{}; 
        namespace Hstaddrp9ValC{
        }
    }
    namespace UotghsHstpipcfg0{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac500,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg1{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac504,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg2{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac508,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg3{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac50c,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg4{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac510,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg5{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac514,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg6{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac518,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg7{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac51c,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg8{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac520,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg9{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac524,0x00f0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
        namespace IntfrqValC{
        }
    }
    namespace UotghsHstpipcfg0Hsbohscp{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac500,0x00e0c881,0,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        namespace AllocValC{
        }
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk),PbkVal::v3Bank> v3Bank{};
        }
        ///Pipe Size
        enum class PsizeVal {
            v8Byte=0x00000000,     ///<8 bytes
            v16Byte=0x00000001,     ///<16 bytes
            v32Byte=0x00000002,     ///<32 bytes
            v64Byte=0x00000003,     ///<64 bytes
            v128Byte=0x00000004,     ///<128 bytes
            v256Byte=0x00000005,     ///<256 bytes
            v512Byte=0x00000006,     ///<512 bytes
            v1024Byte=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PsizeVal> psize{}; 
        namespace PsizeValC{
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize),PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken),PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        namespace AutoswValC{
        }
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            blk=0x00000002,     ///<Bulk
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype),PtypeVal::blk> blk{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        namespace PepnumValC{
        }
        ///Ping Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pingen{}; 
        namespace PingenValC{
        }
        ///bInterval parameter for the Bulk-Out/Ping transaction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> binterval{}; 
        namespace BintervalValC{
        }
    }
    namespace UotghsHstpipisr0{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac530,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr1{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac534,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr2{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac538,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr3{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac53c,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr4{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac540,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr5{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac544,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr6{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac548,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr7{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac54c,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr8{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac550,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr9{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac554,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpi{}; 
        namespace TxstpiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr0Intpipes{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac530,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfi{}; 
        namespace UnderfiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldi{}; 
        namespace RxstalldiValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipisr0Isopipes{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac530,0x800a0c00,0,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxini{}; 
        namespace RxiniValC{
        }
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txouti{}; 
        namespace TxoutiValC{
        }
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfi{}; 
        namespace UnderfiValC{
        }
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perri{}; 
        namespace PerriValC{
        }
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedi{}; 
        namespace NakediValC{
        }
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfi{}; 
        namespace OverfiValC{
        }
        ///CRC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerri{}; 
        namespace CrcerriValC{
        }
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketi{}; 
        namespace ShortpacketiValC{
        }
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq),DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk),NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk),CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rwall{}; 
        namespace RwallValC{
        }
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfgok{}; 
        namespace CfgokValC{
        }
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> pbyct{}; 
        namespace PbyctValC{
        }
    }
    namespace UotghsHstpipicr0{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac560,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr1{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac564,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr2{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac568,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr3{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac56c,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr4{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac570,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr5{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac574,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr6{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac578,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr7{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac57c,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr8{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac580,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr9{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac584,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpic{}; 
        namespace TxstpicValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr0Intpipes{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac560,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfic{}; 
        namespace UnderficValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldic{}; 
        namespace RxstalldicValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipicr0Isopipes{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac560,0xffffff08,0,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinic{}; 
        namespace RxinicValC{
        }
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutic{}; 
        namespace TxouticValC{
        }
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfic{}; 
        namespace UnderficValC{
        }
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedic{}; 
        namespace NakedicValC{
        }
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfic{}; 
        namespace OverficValC{
        }
        ///CRC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerric{}; 
        namespace CrcerricValC{
        }
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketic{}; 
        namespace ShortpacketicValC{
        }
    }
    namespace UotghsHstpipifr0{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac590,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr1{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac594,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr2{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac598,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr3{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac59c,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr4{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5a0,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr5{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5a4,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr6{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5a8,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr7{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5ac,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr8{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5b0,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr9{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5b4,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpis{}; 
        namespace TxstpisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr0Intpipes{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac590,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Underflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfis{}; 
        namespace UnderfisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldis{}; 
        namespace RxstalldisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipifr0Isopipes{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac590,0xffffef00,0,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinis{}; 
        namespace RxinisValC{
        }
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutis{}; 
        namespace TxoutisValC{
        }
        ///Underflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfis{}; 
        namespace UnderfisValC{
        }
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perris{}; 
        namespace PerrisValC{
        }
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedis{}; 
        namespace NakedisValC{
        }
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfis{}; 
        namespace OverfisValC{
        }
        ///CRC Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerris{}; 
        namespace CrcerrisValC{
        }
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketis{}; 
        namespace ShortpacketisValC{
        }
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybks{}; 
        namespace NbusybksValC{
        }
    }
    namespace UotghsHstpipimr0{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c0,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr1{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c4,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr2{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c8,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr3{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5cc,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr4{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5d0,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr5{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5d4,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr6{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5d8,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr7{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5dc,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr8{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5e0,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr9{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5e4,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpe{}; 
        namespace TxstpeValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr0Intpipes{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c0,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfie{}; 
        namespace UnderfieValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstallde{}; 
        namespace RxstalldeValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipimr0Isopipes{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c0,0xfff8af00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxine{}; 
        namespace RxineValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoute{}; 
        namespace TxouteValC{
        }
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfie{}; 
        namespace UnderfieValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perre{}; 
        namespace PerreValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakede{}; 
        namespace NakedeValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfie{}; 
        namespace OverfieValC{
        }
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerre{}; 
        namespace CrcerreValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketie{}; 
        namespace ShortpacketieValC{
        }
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybke{}; 
        namespace NbusybkeValC{
        }
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifocon{}; 
        namespace FifoconValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdma{}; 
        namespace PdishdmaValC{
        }
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreeze{}; 
        namespace PfreezeValC{
        }
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdt{}; 
        namespace RstdtValC{
        }
    }
    namespace UotghsHstpipier0{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier1{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f4,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier2{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f8,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier3{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5fc,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier4{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac600,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier5{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac604,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier6{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac608,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier7{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac60c,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier8{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac610,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier9{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac614,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpes{}; 
        namespace TxstpesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier0Intpipes{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfies{}; 
        namespace UnderfiesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldes{}; 
        namespace RxstalldesValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipier0Isopipes{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00,0,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxines{}; 
        namespace RxinesValC{
        }
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutes{}; 
        namespace TxoutesValC{
        }
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfies{}; 
        namespace UnderfiesValC{
        }
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perres{}; 
        namespace PerresValC{
        }
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedes{}; 
        namespace NakedesValC{
        }
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfies{}; 
        namespace OverfiesValC{
        }
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerres{}; 
        namespace CrcerresValC{
        }
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketies{}; 
        namespace ShortpacketiesValC{
        }
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkes{}; 
        namespace NbusybkesValC{
        }
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmas{}; 
        namespace PdishdmasValC{
        }
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezes{}; 
        namespace PfreezesValC{
        }
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rstdts{}; 
        namespace RstdtsValC{
        }
    }
    namespace UotghsHstpipidr0{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac620,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr1{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac624,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr2{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac628,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr3{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac62c,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr4{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac630,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr5{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac634,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr6{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac638,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr7{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac63c,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr8{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac640,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr9{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac644,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txstpec{}; 
        namespace TxstpecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr0Intpipes{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac620,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Underflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfiec{}; 
        namespace UnderfiecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxstalldec{}; 
        namespace RxstalldecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipidr0Isopipes{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac620,0xfffcaf00,0,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxinec{}; 
        namespace RxinecValC{
        }
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txoutec{}; 
        namespace TxoutecValC{
        }
        ///Underflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> underfiec{}; 
        namespace UnderfiecValC{
        }
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perrec{}; 
        namespace PerrecValC{
        }
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakedec{}; 
        namespace NakedecValC{
        }
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> overfiec{}; 
        namespace OverfiecValC{
        }
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcerrec{}; 
        namespace CrcerrecValC{
        }
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shortpacketiec{}; 
        namespace ShortpacketiecValC{
        }
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nbusybkec{}; 
        namespace NbusybkecValC{
        }
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fifoconc{}; 
        namespace FifoconcValC{
        }
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdishdmac{}; 
        namespace PdishdmacValC{
        }
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pfreezec{}; 
        namespace PfreezecValC{
        }
    }
    namespace UotghsHstpipinrq0{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac650,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq1{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac654,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq2{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac658,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq3{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac65c,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq4{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac660,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq5{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac664,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq6{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac668,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq7{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac66c,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq8{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac670,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpipinrq9{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac674,0xfffffe00,0,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        namespace InrqValC{
        }
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
        namespace InmodeValC{
        }
    }
    namespace UotghsHstpiperr0{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac680,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr1{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac684,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr2{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac688,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr3{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac68c,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr4{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac690,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr5{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac694,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr6{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac698,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr7{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac69c,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr8{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac6a0,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstpiperr9{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac6a4,0xffffff80,0,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        namespace DatatglValC{
        }
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        namespace DatapidValC{
        }
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace UotghsHstdmanxtdsc1{    ///<Host DMA Channel Next Descriptor Address Register (n = 1)
        using Addr = Register::Address<0x400ac710,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress1{    ///<Host DMA Channel Address Register (n = 1)
        using Addr = Register::Address<0x400ac714,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol1{    ///<Host DMA Channel Control Register (n = 1)
        using Addr = Register::Address<0x400ac718,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus1{    ///<Host DMA Channel Status Register (n = 1)
        using Addr = Register::Address<0x400ac71c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstdmanxtdsc2{    ///<Host DMA Channel Next Descriptor Address Register (n = 2)
        using Addr = Register::Address<0x400ac720,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress2{    ///<Host DMA Channel Address Register (n = 2)
        using Addr = Register::Address<0x400ac724,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol2{    ///<Host DMA Channel Control Register (n = 2)
        using Addr = Register::Address<0x400ac728,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus2{    ///<Host DMA Channel Status Register (n = 2)
        using Addr = Register::Address<0x400ac72c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstdmanxtdsc3{    ///<Host DMA Channel Next Descriptor Address Register (n = 3)
        using Addr = Register::Address<0x400ac730,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress3{    ///<Host DMA Channel Address Register (n = 3)
        using Addr = Register::Address<0x400ac734,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol3{    ///<Host DMA Channel Control Register (n = 3)
        using Addr = Register::Address<0x400ac738,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus3{    ///<Host DMA Channel Status Register (n = 3)
        using Addr = Register::Address<0x400ac73c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstdmanxtdsc4{    ///<Host DMA Channel Next Descriptor Address Register (n = 4)
        using Addr = Register::Address<0x400ac740,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress4{    ///<Host DMA Channel Address Register (n = 4)
        using Addr = Register::Address<0x400ac744,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol4{    ///<Host DMA Channel Control Register (n = 4)
        using Addr = Register::Address<0x400ac748,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus4{    ///<Host DMA Channel Status Register (n = 4)
        using Addr = Register::Address<0x400ac74c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstdmanxtdsc5{    ///<Host DMA Channel Next Descriptor Address Register (n = 5)
        using Addr = Register::Address<0x400ac750,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress5{    ///<Host DMA Channel Address Register (n = 5)
        using Addr = Register::Address<0x400ac754,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol5{    ///<Host DMA Channel Control Register (n = 5)
        using Addr = Register::Address<0x400ac758,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus5{    ///<Host DMA Channel Status Register (n = 5)
        using Addr = Register::Address<0x400ac75c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstdmanxtdsc6{    ///<Host DMA Channel Next Descriptor Address Register (n = 6)
        using Addr = Register::Address<0x400ac760,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress6{    ///<Host DMA Channel Address Register (n = 6)
        using Addr = Register::Address<0x400ac764,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol6{    ///<Host DMA Channel Control Register (n = 6)
        using Addr = Register::Address<0x400ac768,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus6{    ///<Host DMA Channel Status Register (n = 6)
        using Addr = Register::Address<0x400ac76c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsHstdmanxtdsc7{    ///<Host DMA Channel Next Descriptor Address Register (n = 7)
        using Addr = Register::Address<0x400ac770,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
        namespace NxtdscaddValC{
        }
    }
    namespace UotghsHstdmaaddress7{    ///<Host DMA Channel Address Register (n = 7)
        using Addr = Register::Address<0x400ac774,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
        namespace BuffaddValC{
        }
    }
    namespace UotghsHstdmacontrol7{    ///<Host DMA Channel Control Register (n = 7)
        using Addr = Register::Address<0x400ac778,0x0000ff00,0,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        namespace LdnxtdscValC{
        }
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        namespace EndtrenValC{
        }
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        namespace EndbenValC{
        }
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        namespace EndtritValC{
        }
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        namespace EndbuffitValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        namespace DesclditValC{
        }
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        namespace BurstlckValC{
        }
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
        namespace BufflengthValC{
        }
    }
    namespace UotghsHstdmastatus7{    ///<Host DMA Channel Status Register (n = 7)
        using Addr = Register::Address<0x400ac77c,0x0000ff8c,0,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        namespace ChannenbValC{
        }
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        namespace ChannactValC{
        }
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        namespace EndtrstValC{
        }
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        namespace EndbfstValC{
        }
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        namespace DescldstValC{
        }
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
        namespace BuffcountValC{
        }
    }
    namespace UotghsCtrl{    ///<General Control Register
        using Addr = Register::Address<0x400ac800,0xfc8c0000,0,unsigned>;
        ///ID Transition Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idte{}; 
        namespace IdteValC{
        }
        ///VBus Transition Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbuste{}; 
        namespace VbusteValC{
        }
        ///SRP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpe{}; 
        namespace SrpeValC{
        }
        ///VBus Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vberre{}; 
        namespace VberreValC{
        }
        ///B-Connection Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcerre{}; 
        namespace BcerreValC{
        }
        ///Role Exchange Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> roleexe{}; 
        namespace RoleexeValC{
        }
        ///HNP Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hnperre{}; 
        namespace HnperreValC{
        }
        ///Suspend Time-Out Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stoe{}; 
        namespace StoeValC{
        }
        ///VBus Hardware Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vbushwc{}; 
        namespace VbushwcValC{
        }
        ///SRP Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srpsel{}; 
        namespace SrpselValC{
        }
        ///SRP Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srpreq{}; 
        namespace SrpreqValC{
        }
        ///HNP Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hnpreq{}; 
        namespace HnpreqValC{
        }
        ///OTG Pad Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgpade{}; 
        namespace OtgpadeValC{
        }
        ///VBus Polarity Off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vbuspo{}; 
        namespace VbuspoValC{
        }
        ///Freeze USB Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> frzclk{}; 
        namespace FrzclkValC{
        }
        ///UOTGHS Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbe{}; 
        namespace UsbeValC{
        }
        ///Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> timvalue{}; 
        namespace TimvalueValC{
        }
        ///Timer Page
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> timpage{}; 
        namespace TimpageValC{
        }
        ///Timer Access Unlock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> unlock{}; 
        namespace UnlockValC{
        }
        ///UOTGID Pin Enable
        enum class UideVal {
            uimod=0x00000000,     ///<The USB mode (device/host) is selected from the UIMOD bit.
            uotgid=0x00000001,     ///<The USB mode (device/host) is selected from the UOTGID input pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UideVal> uide{}; 
        namespace UideValC{
            constexpr Register::FieldValue<decltype(uide),UideVal::uimod> uimod{};
            constexpr Register::FieldValue<decltype(uide),UideVal::uotgid> uotgid{};
        }
        ///UOTGHS Mode
        enum class UimodVal {
            host=0x00000000,     ///<The module is in USB host mode.
            device=0x00000001,     ///<The module is in USB device mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UimodVal> uimod{}; 
        namespace UimodValC{
            constexpr Register::FieldValue<decltype(uimod),UimodVal::host> host{};
            constexpr Register::FieldValue<decltype(uimod),UimodVal::device> device{};
        }
    }
    namespace UotghsSr{    ///<General Status Register
        using Addr = Register::Address<0x400ac804,0xffff8100,0,unsigned>;
        ///ID Transition Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idti{}; 
        namespace IdtiValC{
        }
        ///VBus Transition Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbusti{}; 
        namespace VbustiValC{
        }
        ///SRP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpi{}; 
        namespace SrpiValC{
        }
        ///VBus Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vberri{}; 
        namespace VberriValC{
        }
        ///B-Connection Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcerri{}; 
        namespace BcerriValC{
        }
        ///Role Exchange Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> roleexi{}; 
        namespace RoleexiValC{
        }
        ///HNP Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hnperri{}; 
        namespace HnperriValC{
        }
        ///Suspend Time-Out Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stoi{}; 
        namespace StoiValC{
        }
        ///VBus Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vbusrq{}; 
        namespace VbusrqValC{
        }
        ///UOTGID Pin State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
        ///VBus Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> vbus{}; 
        namespace VbusValC{
        }
        ///Speed Status
        enum class SpeedVal {
            fullSpeed=0x00000000,     ///<Full-Speed mode
            highSpeed=0x00000001,     ///<High-Speed mode
            lowSpeed=0x00000002,     ///<Low-Speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SpeedVal> speed{}; 
        namespace SpeedValC{
            constexpr Register::FieldValue<decltype(speed),SpeedVal::fullSpeed> fullSpeed{};
            constexpr Register::FieldValue<decltype(speed),SpeedVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(speed),SpeedVal::lowSpeed> lowSpeed{};
        }
        ///UTMI Clock Usable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clkusable{}; 
        namespace ClkusableValC{
        }
    }
    namespace UotghsScr{    ///<General Status Clear Register
        using Addr = Register::Address<0x400ac808,0xfffffd00,0,unsigned>;
        ///ID Transition Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idtic{}; 
        namespace IdticValC{
        }
        ///VBus Transition Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbustic{}; 
        namespace VbusticValC{
        }
        ///SRP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpic{}; 
        namespace SrpicValC{
        }
        ///VBus Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vberric{}; 
        namespace VberricValC{
        }
        ///B-Connection Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcerric{}; 
        namespace BcerricValC{
        }
        ///Role Exchange Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> roleexic{}; 
        namespace RoleexicValC{
        }
        ///HNP Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hnperric{}; 
        namespace HnperricValC{
        }
        ///Suspend Time-Out Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stoic{}; 
        namespace StoicValC{
        }
        ///VBus Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vbusrqc{}; 
        namespace VbusrqcValC{
        }
    }
    namespace UotghsSfr{    ///<General Status Set Register
        using Addr = Register::Address<0x400ac80c,0xfffffd00,0,unsigned>;
        ///ID Transition Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idtis{}; 
        namespace IdtisValC{
        }
        ///VBus Transition Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbustis{}; 
        namespace VbustisValC{
        }
        ///SRP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpis{}; 
        namespace SrpisValC{
        }
        ///VBus Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vberris{}; 
        namespace VberrisValC{
        }
        ///B-Connection Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcerris{}; 
        namespace BcerrisValC{
        }
        ///Role Exchange Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> roleexis{}; 
        namespace RoleexisValC{
        }
        ///HNP Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hnperris{}; 
        namespace HnperrisValC{
        }
        ///Suspend Time-Out Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stois{}; 
        namespace StoisValC{
        }
        ///VBus Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vbusrqs{}; 
        namespace VbusrqsValC{
        }
    }
    namespace UotghsFsm{    ///<General Finite State Machine Register
        using Addr = Register::Address<0x400ac82c,0xfffffff0,0,unsigned>;
        ///Dual Role Device State
        enum class DrdstateVal {
            aIdlestate=0x00000000,     ///<This is the start state for A-devices (when the ID pin is 0)
            aWaitVrise=0x00000001,     ///<In this state, the A-device waits for the voltage on VBus to rise above the A-device VBus Valid threshold (4.4 V).
            aWaitBcon=0x00000002,     ///<In this state, the A-device waits for the B-device to signal a connection.
            aHost=0x00000003,     ///<In this state, the A-device that operates in Host mode is operational.
            aSuspend=0x00000004,     ///<The A-device operating as a host is in the suspend mode.
            aPeripheral=0x00000005,     ///<The A-device operates as a peripheral.
            aWaitVfall=0x00000006,     ///<In this state, the A-device waits for the voltage on VBus to drop below the A-device Session Valid threshold (1.4 V).
            aVbusErr=0x00000007,     ///<In this state, the A-device waits for recovery of the over-current condition that caused it to enter this state.
            aWaitDischarge=0x00000008,     ///<In this state, the A-device waits for the data USB line to discharge (100 us).
            bIdle=0x00000009,     ///<This is the start state for B-device (when the ID pin is 1).
            bPeripheral=0x0000000a,     ///<In this state, the B-device acts as the peripheral.
            bWaitBeginHnp=0x0000000b,     ///<In this state, the B-device is in suspend mode and waits until 3 ms before initiating the HNP protocol if requested.
            bWaitDischarge=0x0000000c,     ///<In this state, the B-device waits for the data USB line to discharge (100 us) before becoming Host.
            bWaitAcon=0x0000000d,     ///<In this state, the B-device waits for the A-device to signal a connect before becoming B-Host.
            bHost=0x0000000e,     ///<In this state, the B-device acts as the Host.
            bSrpInit=0x0000000f,     ///<In this state, the B-device attempts to start a session using the SRP protocol.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DrdstateVal> drdstate{}; 
        namespace DrdstateValC{
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aIdlestate> aIdlestate{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aWaitVrise> aWaitVrise{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aWaitBcon> aWaitBcon{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aHost> aHost{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aSuspend> aSuspend{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aPeripheral> aPeripheral{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aWaitVfall> aWaitVfall{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aVbusErr> aVbusErr{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::aWaitDischarge> aWaitDischarge{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bIdle> bIdle{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bPeripheral> bPeripheral{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bWaitBeginHnp> bWaitBeginHnp{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bWaitDischarge> bWaitDischarge{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bWaitAcon> bWaitAcon{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bHost> bHost{};
            constexpr Register::FieldValue<decltype(drdstate),DrdstateVal::bSrpInit> bSrpInit{};
        }
    }
}
