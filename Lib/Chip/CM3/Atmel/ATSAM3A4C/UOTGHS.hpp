#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB On-The-Go Interface
    namespace UotghsDevctrl{    ///<Device General Control Register
        using Addr = Register::Address<0x400ac000,0xfffe0000,0x00000000,unsigned>;
        ///USB Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> uadd{}; 
        ///Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adden{}; 
        ///Detach
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> detach{}; 
        ///Remote Wake-Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmwkup{}; 
        ///Mode Configuration
        enum class SpdconfVal {
            normal=0x00000000,     ///<The peripheral starts in full-speed mode and performs a high-speed reset to switch to the high-speed mode if the host is high-speed capable.
            lowPower=0x00000001,     ///<For a better consumption, if high-speed is not needed.
            highSpeed=0x00000002,     ///<Forced high speed.
            forcedFs=0x00000003,     ///<The peripheral remains in full-speed mode whatever the host speed capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,SpdconfVal> spdconf{}; 
        namespace SpdconfValC{
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::normal> normal{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::lowPower> lowPower{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::forcedFs> forcedFs{};
        }
        ///Low-Speed Mode Force
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ls{}; 
        ///Test mode J
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tstj{}; 
        ///Test mode K
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tstk{}; 
        ///Test packet mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tstpckt{}; 
        ///Specific Operational mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> opmode2{}; 
    }
    namespace UotghsDevisr{    ///<Device Global Interrupt Status Register
        using Addr = Register::Address<0x400ac004,0x81c00f80,0x00000000,unsigned>;
        ///Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp{}; 
        ///Micro Start of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msof{}; 
        ///Start of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sof{}; 
        ///End of Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorst{}; 
        ///Wake-Up Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
        ///End of Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsm{}; 
        ///Upstream Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprsm{}; 
        ///Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Endpoint 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Endpoint 8 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Endpoint 9 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsDevicr{    ///<Device Global Interrupt Clear Register
        using Addr = Register::Address<0x400ac008,0xffffff80,0x00000000,unsigned>;
        ///Suspend Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> suspc{}; 
        ///Micro Start of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msofc{}; 
        ///Start of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofc{}; 
        ///End of Reset Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorstc{}; 
        ///Wake-Up Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeupc{}; 
        ///End of Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsmc{}; 
        ///Upstream Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprsmc{}; 
    }
    namespace UotghsDevifr{    ///<Device Global Interrupt Set Register
        using Addr = Register::Address<0x400ac00c,0x81ffff80,0x00000000,unsigned>;
        ///Suspend Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susps{}; 
        ///Micro Start of Frame Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msofs{}; 
        ///Start of Frame Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofs{}; 
        ///End of Reset Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsts{}; 
        ///Wake-Up Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeups{}; 
        ///End of Resume Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsms{}; 
        ///Upstream Resume Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprsms{}; 
        ///DMA Channel 1 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsDevimr{    ///<Device Global Interrupt Mask Register
        using Addr = Register::Address<0x400ac010,0x81c00f80,0x00000000,unsigned>;
        ///Suspend Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> suspe{}; 
        ///Micro Start of Frame Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msofe{}; 
        ///Start of Frame Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofe{}; 
        ///End of Reset Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorste{}; 
        ///Wake-Up Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeupe{}; 
        ///End of Resume Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsme{}; 
        ///Upstream Resume Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprsme{}; 
        ///Endpoint 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Endpoint 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Endpoint 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Endpoint 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Endpoint 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Endpoint 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Endpoint 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Endpoint 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Endpoint 8 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Endpoint 9 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsDevidr{    ///<Device Global Interrupt Disable Register
        using Addr = Register::Address<0x400ac014,0x81c00f80,0x00000000,unsigned>;
        ///Suspend Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> suspec{}; 
        ///Micro Start of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msofec{}; 
        ///Start of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofec{}; 
        ///End of Reset Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorstec{}; 
        ///Wake-Up Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeupec{}; 
        ///End of Resume Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsmec{}; 
        ///Upstream Resume Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprsmec{}; 
        ///Endpoint 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Endpoint 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Endpoint 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Endpoint 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Endpoint 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Endpoint 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Endpoint 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Endpoint 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Endpoint 8 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Endpoint 9 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsDevier{    ///<Device Global Interrupt Enable Register
        using Addr = Register::Address<0x400ac018,0x81c00f80,0x00000000,unsigned>;
        ///Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> suspes{}; 
        ///Micro Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msofes{}; 
        ///Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sofes{}; 
        ///End of Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorstes{}; 
        ///Wake-Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeupes{}; 
        ///End of Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eorsmes{}; 
        ///Upstream Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprsmes{}; 
        ///Endpoint 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Endpoint 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Endpoint 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Endpoint 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Endpoint 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Endpoint 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Endpoint 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Endpoint 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Endpoint 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Endpoint 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsDevept{    ///<Device Endpoint Register
        using Addr = Register::Address<0x400ac01c,0xfe00fe00,0x00000000,unsigned>;
        ///Endpoint 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epen0{}; 
        ///Endpoint 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epen1{}; 
        ///Endpoint 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> epen2{}; 
        ///Endpoint 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epen3{}; 
        ///Endpoint 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epen4{}; 
        ///Endpoint 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epen5{}; 
        ///Endpoint 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> epen6{}; 
        ///Endpoint 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> epen7{}; 
        ///Endpoint 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epen8{}; 
        ///Endpoint 0 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eprst0{}; 
        ///Endpoint 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eprst1{}; 
        ///Endpoint 2 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eprst2{}; 
        ///Endpoint 3 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eprst3{}; 
        ///Endpoint 4 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eprst4{}; 
        ///Endpoint 5 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eprst5{}; 
        ///Endpoint 6 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eprst6{}; 
        ///Endpoint 7 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eprst7{}; 
        ///Endpoint 8 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eprst8{}; 
    }
    namespace UotghsDevfnum{    ///<Device Frame Number Register
        using Addr = Register::Address<0x400ac020,0xffff4000,0x00000000,unsigned>;
        ///Micro Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfnum{}; 
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fnum{}; 
        ///Frame Number CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fncerr{}; 
    }
    namespace UotghsDeveptisr0Isoenpt{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac130,0x800a0800,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfi{}; 
        ///High bandwidth isochronous IN Underflow Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoinerri{}; 
        ///High Bandwidth Isochronous IN Flush Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoflushi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///CRC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerri{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Data2 toggle sequence (for high-bandwidth isochronous endpoint)
            mdata=0x00000003,     ///<MData toggle sequence (for high-bandwidth isochronous endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///High-bandwidth isochronous OUT endpoint transaction error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errortrans{}; 
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDevepticr0Isoenpt{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac160,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfic{}; 
        ///High bandwidth isochronous IN Underflow Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoinerric{}; 
        ///High Bandwidth Isochronous IN Flush Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoflushic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///CRC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerric{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDeveptifr0Isoenpt{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac190,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Underflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfis{}; 
        ///High bandwidth isochronous IN Underflow Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoinerris{}; 
        ///High Bandwidth Isochronous IN Flush Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoflushis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///CRC Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerris{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptimr0Isoenpt{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c0,0xfffa8800,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfe{}; 
        ///High Bandwidth Isochronous IN Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoinerre{}; 
        ///High Bandwidth Isochronous IN Flush Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoflushe{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///CRC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerre{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///MData Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdatae{}; 
        ///DataX Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxe{}; 
        ///Transaction Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errortranse{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsDeveptier0Isoenpt{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f0,0xfff28800,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfes{}; 
        ///High Bandwidth Isochronous IN Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoinerres{}; 
        ///High Bandwidth Isochronous IN Flush Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoflushes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerres{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///MData Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataes{}; 
        ///DataX Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxes{}; 
        ///Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errortranses{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptidr0Isoenpt{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac220,0xfffea800,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfec{}; 
        ///High Bandwidth Isochronous IN Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoinerrec{}; 
        ///High Bandwidth Isochronous IN Flush Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hbisoflushec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///CRC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerrec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///MData Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdatec{}; 
        ///DataX Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxec{}; 
        ///Transaction Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errortransec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
    }
    namespace UotghsDevdmanxtdsc1{    ///<Device DMA Channel Next Descriptor Address Register (n = 1)
        using Addr = Register::Address<0x400ac310,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress1{    ///<Device DMA Channel Address Register (n = 1)
        using Addr = Register::Address<0x400ac314,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol1{    ///<Device DMA Channel Control Register (n = 1)
        using Addr = Register::Address<0x400ac318,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus1{    ///<Device DMA Channel Status Register (n = 1)
        using Addr = Register::Address<0x400ac31c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsDevdmanxtdsc2{    ///<Device DMA Channel Next Descriptor Address Register (n = 2)
        using Addr = Register::Address<0x400ac320,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress2{    ///<Device DMA Channel Address Register (n = 2)
        using Addr = Register::Address<0x400ac324,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol2{    ///<Device DMA Channel Control Register (n = 2)
        using Addr = Register::Address<0x400ac328,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus2{    ///<Device DMA Channel Status Register (n = 2)
        using Addr = Register::Address<0x400ac32c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsDevdmanxtdsc3{    ///<Device DMA Channel Next Descriptor Address Register (n = 3)
        using Addr = Register::Address<0x400ac330,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress3{    ///<Device DMA Channel Address Register (n = 3)
        using Addr = Register::Address<0x400ac334,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol3{    ///<Device DMA Channel Control Register (n = 3)
        using Addr = Register::Address<0x400ac338,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus3{    ///<Device DMA Channel Status Register (n = 3)
        using Addr = Register::Address<0x400ac33c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsDevdmanxtdsc4{    ///<Device DMA Channel Next Descriptor Address Register (n = 4)
        using Addr = Register::Address<0x400ac340,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress4{    ///<Device DMA Channel Address Register (n = 4)
        using Addr = Register::Address<0x400ac344,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol4{    ///<Device DMA Channel Control Register (n = 4)
        using Addr = Register::Address<0x400ac348,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus4{    ///<Device DMA Channel Status Register (n = 4)
        using Addr = Register::Address<0x400ac34c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsDevdmanxtdsc5{    ///<Device DMA Channel Next Descriptor Address Register (n = 5)
        using Addr = Register::Address<0x400ac350,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress5{    ///<Device DMA Channel Address Register (n = 5)
        using Addr = Register::Address<0x400ac354,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol5{    ///<Device DMA Channel Control Register (n = 5)
        using Addr = Register::Address<0x400ac358,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus5{    ///<Device DMA Channel Status Register (n = 5)
        using Addr = Register::Address<0x400ac35c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsDevdmanxtdsc6{    ///<Device DMA Channel Next Descriptor Address Register (n = 6)
        using Addr = Register::Address<0x400ac360,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress6{    ///<Device DMA Channel Address Register (n = 6)
        using Addr = Register::Address<0x400ac364,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol6{    ///<Device DMA Channel Control Register (n = 6)
        using Addr = Register::Address<0x400ac368,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus6{    ///<Device DMA Channel Status Register (n = 6)
        using Addr = Register::Address<0x400ac36c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsDevdmanxtdsc7{    ///<Device DMA Channel Next Descriptor Address Register (n = 7)
        using Addr = Register::Address<0x400ac370,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsDevdmaaddress7{    ///<Device DMA Channel Address Register (n = 7)
        using Addr = Register::Address<0x400ac374,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsDevdmacontrol7{    ///<Device DMA Channel Control Register (n = 7)
        using Addr = Register::Address<0x400ac378,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsDevdmastatus7{    ///<Device DMA Channel Status Register (n = 7)
        using Addr = Register::Address<0x400ac37c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstctrl{    ///<Host General Control Register
        using Addr = Register::Address<0x400ac400,0xffffc8ff,0x00000000,unsigned>;
        ///Start of Frame Generation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sofe{}; 
        ///Send USB Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reset{}; 
        ///Send USB Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resume{}; 
        ///Mode Configuration
        enum class SpdconfVal {
            normal=0x00000000,     ///<The host starts in full-speed mode and performs a high-speed reset to switch to the high-speed mode if the downstream peripheral is high-speed capable.
            lowPower=0x00000001,     ///<For a better consumption, if high-speed is not needed.
            highSpeed=0x00000002,     ///<Forced high speed.
            forcedFs=0x00000003,     ///<The host remains to full-speed mode whatever the peripheral speed capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SpdconfVal> spdconf{}; 
        namespace SpdconfValC{
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::normal> normal{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::lowPower> lowPower{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::forcedFs> forcedFs{};
        }
    }
    namespace UotghsHstisr{    ///<Host Global Interrupt Status Register
        using Addr = Register::Address<0x400ac404,0x81fc0080,0x00000000,unsigned>;
        ///Device Connection Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dconni{}; 
        ///Device Disconnection Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddisci{}; 
        ///USB Reset Sent Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsti{}; 
        ///Downstream Resume Sent Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsmedi{}; 
        ///Upstream Resume Received Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsmi{}; 
        ///Host Start of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsofi{}; 
        ///Host Wake-Up Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwupi{}; 
        ///Pipe 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Pipe 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Pipe 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Pipe 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Pipe 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Pipe 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Pipe 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Pipe 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Pipe 8 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Pipe 9 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsHsticr{    ///<Host Global Interrupt Clear Register
        using Addr = Register::Address<0x400ac408,0xffffff80,0x00000000,unsigned>;
        ///Device Connection Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dconnic{}; 
        ///Device Disconnection Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddiscic{}; 
        ///USB Reset Sent Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstic{}; 
        ///Downstream Resume Sent Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsmedic{}; 
        ///Upstream Resume Received Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsmic{}; 
        ///Host Start of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsofic{}; 
        ///Host Wake-Up Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwupic{}; 
    }
    namespace UotghsHstifr{    ///<Host Global Interrupt Set Register
        using Addr = Register::Address<0x400ac40c,0x81ffff80,0x00000000,unsigned>;
        ///Device Connection Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dconnis{}; 
        ///Device Disconnection Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddiscis{}; 
        ///USB Reset Sent Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstis{}; 
        ///Downstream Resume Sent Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsmedis{}; 
        ///Upstream Resume Received Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsmis{}; 
        ///Host Start of Frame Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsofis{}; 
        ///Host Wake-Up Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwupis{}; 
        ///DMA Channel 1 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsHstimr{    ///<Host Global Interrupt Mask Register
        using Addr = Register::Address<0x400ac410,0x81fc0080,0x00000000,unsigned>;
        ///Device Connection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dconnie{}; 
        ///Device Disconnection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddiscie{}; 
        ///USB Reset Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstie{}; 
        ///Downstream Resume Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsmedie{}; 
        ///Upstream Resume Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsmie{}; 
        ///Host Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsofie{}; 
        ///Host Wake-Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwupie{}; 
        ///Pipe 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Pipe 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Pipe 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Pipe 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Pipe 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Pipe 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Pipe 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Pipe 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Pipe 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Pipe 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsHstidr{    ///<Host Global Interrupt Disable Register
        using Addr = Register::Address<0x400ac414,0x81fc0080,0x00000000,unsigned>;
        ///Device Connection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dconniec{}; 
        ///Device Disconnection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddisciec{}; 
        ///USB Reset Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstiec{}; 
        ///Downstream Resume Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsmediec{}; 
        ///Upstream Resume Received Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsmiec{}; 
        ///Host Start of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsofiec{}; 
        ///Host Wake-Up Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwupiec{}; 
        ///Pipe 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Pipe 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Pipe 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Pipe 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Pipe 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Pipe 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Pipe 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Pipe 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Pipe 8 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Pipe 9 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsHstier{    ///<Host Global Interrupt Enable Register
        using Addr = Register::Address<0x400ac418,0x81fc0080,0x00000000,unsigned>;
        ///Device Connection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dconnies{}; 
        ///Device Disconnection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddiscies{}; 
        ///USB Reset Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsties{}; 
        ///Downstream Resume Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsmedies{}; 
        ///Upstream Resume Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrsmies{}; 
        ///Host Start of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsofies{}; 
        ///Host Wake-Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwupies{}; 
        ///Pipe 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep0{}; 
        ///Pipe 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep1{}; 
        ///Pipe 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep2{}; 
        ///Pipe 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep3{}; 
        ///Pipe 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep4{}; 
        ///Pipe 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep5{}; 
        ///Pipe 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep6{}; 
        ///Pipe 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep7{}; 
        ///Pipe 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep8{}; 
        ///Pipe 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pep9{}; 
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
    }
    namespace UotghsHstpip{    ///<Host Pipe Register
        using Addr = Register::Address<0x400ac41c,0xfe00fe00,0x00000000,unsigned>;
        ///Pipe 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen0{}; 
        ///Pipe 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen1{}; 
        ///Pipe 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen2{}; 
        ///Pipe 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen3{}; 
        ///Pipe 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen4{}; 
        ///Pipe 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen5{}; 
        ///Pipe 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen6{}; 
        ///Pipe 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen7{}; 
        ///Pipe 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pen8{}; 
        ///Pipe 0 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> prst0{}; 
        ///Pipe 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> prst1{}; 
        ///Pipe 2 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> prst2{}; 
        ///Pipe 3 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> prst3{}; 
        ///Pipe 4 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> prst4{}; 
        ///Pipe 5 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> prst5{}; 
        ///Pipe 6 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prst6{}; 
        ///Pipe 7 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> prst7{}; 
        ///Pipe 8 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> prst8{}; 
    }
    namespace UotghsHstfnum{    ///<Host Frame Number Register
        using Addr = Register::Address<0x400ac420,0xff00c000,0x00000000,unsigned>;
        ///Micro Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mfnum{}; 
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::ReadWriteAccess,unsigned> fnum{}; 
        ///Frame Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> flenhigh{}; 
    }
    namespace UotghsHstaddr1{    ///<Host Address 1 Register
        using Addr = Register::Address<0x400ac424,0x80808080,0x00000000,unsigned>;
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> hstaddrp0{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> hstaddrp1{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> hstaddrp2{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> hstaddrp3{}; 
    }
    namespace UotghsHstaddr2{    ///<Host Address 2 Register
        using Addr = Register::Address<0x400ac428,0x80808080,0x00000000,unsigned>;
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> hstaddrp4{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> hstaddrp5{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> hstaddrp6{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> hstaddrp7{}; 
    }
    namespace UotghsHstaddr3{    ///<Host Address 3 Register
        using Addr = Register::Address<0x400ac42c,0xffff8080,0x00000000,unsigned>;
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> hstaddrp8{}; 
        ///USB Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> hstaddrp9{}; 
    }
    namespace UotghsHstpipcfg0Hsbohscp{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac500,0x00e0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            blk=0x00000002,     ///<Bulk
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Ping Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pingen{}; 
        ///bInterval parameter for the Bulk-Out/Ping transaction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> binterval{}; 
    }
    namespace UotghsHstpipisr0Intpipes{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac530,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr0Isopipes{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac530,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Underflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///CRC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerri{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipicr0Intpipes{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac560,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr0Isopipes{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac560,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Underflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///CRC Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerric{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipifr0Intpipes{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac590,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Underflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr0Isopipes{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac590,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Underflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///CRC Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerris{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipimr0Intpipes{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c0,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfie{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr0Isopipes{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c0,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfie{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerre{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipier0Intpipes{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfies{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier0Isopipes{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfies{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerres{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipidr0Intpipes{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac620,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Underflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfiec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr0Isopipes{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac620,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Underflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> underfiec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerrec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstdmanxtdsc1{    ///<Host DMA Channel Next Descriptor Address Register (n = 1)
        using Addr = Register::Address<0x400ac710,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress1{    ///<Host DMA Channel Address Register (n = 1)
        using Addr = Register::Address<0x400ac714,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol1{    ///<Host DMA Channel Control Register (n = 1)
        using Addr = Register::Address<0x400ac718,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus1{    ///<Host DMA Channel Status Register (n = 1)
        using Addr = Register::Address<0x400ac71c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstdmanxtdsc2{    ///<Host DMA Channel Next Descriptor Address Register (n = 2)
        using Addr = Register::Address<0x400ac720,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress2{    ///<Host DMA Channel Address Register (n = 2)
        using Addr = Register::Address<0x400ac724,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol2{    ///<Host DMA Channel Control Register (n = 2)
        using Addr = Register::Address<0x400ac728,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus2{    ///<Host DMA Channel Status Register (n = 2)
        using Addr = Register::Address<0x400ac72c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstdmanxtdsc3{    ///<Host DMA Channel Next Descriptor Address Register (n = 3)
        using Addr = Register::Address<0x400ac730,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress3{    ///<Host DMA Channel Address Register (n = 3)
        using Addr = Register::Address<0x400ac734,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol3{    ///<Host DMA Channel Control Register (n = 3)
        using Addr = Register::Address<0x400ac738,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus3{    ///<Host DMA Channel Status Register (n = 3)
        using Addr = Register::Address<0x400ac73c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstdmanxtdsc4{    ///<Host DMA Channel Next Descriptor Address Register (n = 4)
        using Addr = Register::Address<0x400ac740,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress4{    ///<Host DMA Channel Address Register (n = 4)
        using Addr = Register::Address<0x400ac744,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol4{    ///<Host DMA Channel Control Register (n = 4)
        using Addr = Register::Address<0x400ac748,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus4{    ///<Host DMA Channel Status Register (n = 4)
        using Addr = Register::Address<0x400ac74c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstdmanxtdsc5{    ///<Host DMA Channel Next Descriptor Address Register (n = 5)
        using Addr = Register::Address<0x400ac750,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress5{    ///<Host DMA Channel Address Register (n = 5)
        using Addr = Register::Address<0x400ac754,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol5{    ///<Host DMA Channel Control Register (n = 5)
        using Addr = Register::Address<0x400ac758,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus5{    ///<Host DMA Channel Status Register (n = 5)
        using Addr = Register::Address<0x400ac75c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstdmanxtdsc6{    ///<Host DMA Channel Next Descriptor Address Register (n = 6)
        using Addr = Register::Address<0x400ac760,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress6{    ///<Host DMA Channel Address Register (n = 6)
        using Addr = Register::Address<0x400ac764,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol6{    ///<Host DMA Channel Control Register (n = 6)
        using Addr = Register::Address<0x400ac768,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus6{    ///<Host DMA Channel Status Register (n = 6)
        using Addr = Register::Address<0x400ac76c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsHstdmanxtdsc7{    ///<Host DMA Channel Next Descriptor Address Register (n = 7)
        using Addr = Register::Address<0x400ac770,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UotghsHstdmaaddress7{    ///<Host DMA Channel Address Register (n = 7)
        using Addr = Register::Address<0x400ac774,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UotghsHstdmacontrol7{    ///<Host DMA Channel Control Register (n = 7)
        using Addr = Register::Address<0x400ac778,0x0000ff00,0x00000000,unsigned>;
        ///Channel Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UotghsHstdmastatus7{    ///<Host DMA Channel Status Register (n = 7)
        using Addr = Register::Address<0x400ac77c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UotghsCtrl{    ///<General Control Register
        using Addr = Register::Address<0x400ac800,0xfc8c0000,0x00000000,unsigned>;
        ///ID Transition Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idte{}; 
        ///VBus Transition Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbuste{}; 
        ///SRP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpe{}; 
        ///VBus Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vberre{}; 
        ///B-Connection Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcerre{}; 
        ///Role Exchange Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> roleexe{}; 
        ///HNP Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hnperre{}; 
        ///Suspend Time-Out Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stoe{}; 
        ///VBus Hardware Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vbushwc{}; 
        ///SRP Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srpsel{}; 
        ///SRP Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srpreq{}; 
        ///HNP Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hnpreq{}; 
        ///OTG Pad Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> otgpade{}; 
        ///VBus Polarity Off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vbuspo{}; 
        ///Freeze USB Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> frzclk{}; 
        ///UOTGHS Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbe{}; 
        ///Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> timvalue{}; 
        ///Timer Page
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> timpage{}; 
        ///Timer Access Unlock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> unlock{}; 
        ///UOTGID Pin Enable
        enum class UideVal {
            uimod=0x00000000,     ///<The USB mode (device/host) is selected from the UIMOD bit.
            uotgid=0x00000001,     ///<The USB mode (device/host) is selected from the UOTGID input pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UideVal> uide{}; 
        namespace UideValC{
            constexpr Register::FieldValue<decltype(uide)::Type,UideVal::uimod> uimod{};
            constexpr Register::FieldValue<decltype(uide)::Type,UideVal::uotgid> uotgid{};
        }
        ///UOTGHS Mode
        enum class UimodVal {
            host=0x00000000,     ///<The module is in USB host mode.
            device=0x00000001,     ///<The module is in USB device mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UimodVal> uimod{}; 
        namespace UimodValC{
            constexpr Register::FieldValue<decltype(uimod)::Type,UimodVal::host> host{};
            constexpr Register::FieldValue<decltype(uimod)::Type,UimodVal::device> device{};
        }
    }
    namespace UotghsSr{    ///<General Status Register
        using Addr = Register::Address<0x400ac804,0xffff8100,0x00000000,unsigned>;
        ///ID Transition Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idti{}; 
        ///VBus Transition Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbusti{}; 
        ///SRP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srpi{}; 
        ///VBus Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vberri{}; 
        ///B-Connection Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bcerri{}; 
        ///Role Exchange Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> roleexi{}; 
        ///HNP Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hnperri{}; 
        ///Suspend Time-Out Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stoi{}; 
        ///VBus Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbusrq{}; 
        ///UOTGID Pin State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
        ///VBus Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbus{}; 
        ///Speed Status
        enum class SpeedVal {
            fullSpeed=0x00000000,     ///<Full-Speed mode
            highSpeed=0x00000001,     ///<High-Speed mode
            lowSpeed=0x00000002,     ///<Low-Speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SpeedVal> speed{}; 
        namespace SpeedValC{
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::fullSpeed> fullSpeed{};
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::lowSpeed> lowSpeed{};
        }
        ///UTMI Clock Usable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkusable{}; 
    }
    namespace UotghsScr{    ///<General Status Clear Register
        using Addr = Register::Address<0x400ac808,0xfffffd00,0x00000000,unsigned>;
        ///ID Transition Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idtic{}; 
        ///VBus Transition Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbustic{}; 
        ///SRP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srpic{}; 
        ///VBus Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vberric{}; 
        ///B-Connection Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bcerric{}; 
        ///Role Exchange Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> roleexic{}; 
        ///HNP Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hnperric{}; 
        ///Suspend Time-Out Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stoic{}; 
        ///VBus Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbusrqc{}; 
    }
    namespace UotghsSfr{    ///<General Status Set Register
        using Addr = Register::Address<0x400ac80c,0xfffffd00,0x00000000,unsigned>;
        ///ID Transition Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idtis{}; 
        ///VBus Transition Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbustis{}; 
        ///SRP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srpis{}; 
        ///VBus Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vberris{}; 
        ///B-Connection Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bcerris{}; 
        ///Role Exchange Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> roleexis{}; 
        ///HNP Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hnperris{}; 
        ///Suspend Time-Out Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stois{}; 
        ///VBus Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbusrqs{}; 
    }
    namespace UotghsFsm{    ///<General Finite State Machine Register
        using Addr = Register::Address<0x400ac82c,0xfffffff0,0x00000000,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DrdstateVal> drdstate{}; 
        namespace DrdstateValC{
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aIdlestate> aIdlestate{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aWaitVrise> aWaitVrise{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aWaitBcon> aWaitBcon{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aHost> aHost{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aSuspend> aSuspend{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aPeripheral> aPeripheral{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aWaitVfall> aWaitVfall{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aVbusErr> aVbusErr{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::aWaitDischarge> aWaitDischarge{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bIdle> bIdle{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bPeripheral> bPeripheral{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bWaitBeginHnp> bWaitBeginHnp{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bWaitDischarge> bWaitDischarge{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bWaitAcon> bWaitAcon{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bHost> bHost{};
            constexpr Register::FieldValue<decltype(drdstate)::Type,DrdstateVal::bSrpInit> bSrpInit{};
        }
    }
    namespace UotghsDeveptcfg0{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac100,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg1{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac104,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg2{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac108,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg3{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac10c,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg4{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac110,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg5{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac114,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg6{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac118,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg7{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac11c,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg8{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac120,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptcfg9{    ///<Device Endpoint Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac124,0xffff8481,0x00000000,unsigned>;
        ///Endpoint Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Endpoint Banks
        enum class EpbkVal {
            v1Bank=0x00000000,     ///<Single-bank endpoint
            v2Bank=0x00000001,     ///<Double-bank endpoint
            v3Bank=0x00000002,     ///<Triple-bank endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,EpbkVal> epbk{}; 
        namespace EpbkValC{
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(epbk)::Type,EpbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(epsize)::Type,EpsizeVal::v1024Byte> v1024Byte{};
        }
        ///Endpoint Direction
        enum class EpdirVal {
            out=0x00000000,     ///<The endpoint direction is OUT.
            in=0x00000001,     ///<The endpoint direction is IN (nor for control endpoints).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EpdirVal> epdir{}; 
        namespace EpdirValC{
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::out> out{};
            constexpr Register::FieldValue<decltype(epdir)::Type,EpdirVal::in> in{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Endpoint Type
        enum class EptypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,EptypeVal> eptype{}; 
        namespace EptypeValC{
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(eptype)::Type,EptypeVal::intrpt> intrpt{};
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
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v0Trans> v0Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v1Trans> v1Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v2Trans> v2Trans{};
            constexpr Register::FieldValue<decltype(nbtrans)::Type,NbtransVal::v3Trans> v3Trans{};
        }
    }
    namespace UotghsDeveptisr0{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac130,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr1{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac134,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr2{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac138,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr3{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac13c,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr4{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac140,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr5{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac144,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr6{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac148,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr7{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac14c,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr8{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac150,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDeveptisr9{    ///<Device Endpoint Status Register (n = 0)
        using Addr = Register::Address<0x400ac154,0x80080c00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txini{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxouti{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpi{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakouti{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakini{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacket{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
            data2=0x00000002,     ///<Reserved for high-bandwidth isochronous endpoint
            mdata=0x00000003,     ///<Reserved for high-bandwidth isochronous endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data2> data2{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::mdata> mdata{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrldir{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byct{}; 
    }
    namespace UotghsDevepticr0{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac160,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr1{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac164,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr2{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac168,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr3{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac16c,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr4{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac170,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr5{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac174,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr6{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac178,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr7{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac17c,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr8{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac180,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDevepticr9{    ///<Device Endpoint Clear Register (n = 0)
        using Addr = Register::Address<0x400ac184,0xffffff00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinic{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutic{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpic{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutic{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketc{}; 
    }
    namespace UotghsDeveptifr0{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac190,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr1{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac194,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr2{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac198,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr3{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac19c,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr4{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1a0,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr5{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1a4,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr6{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1a8,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr7{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1ac,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr8{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1b0,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptifr9{    ///<Device Endpoint Set Register (n = 0)
        using Addr = Register::Address<0x400ac1b4,0xffffef00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinis{}; 
        ///Received OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutis{}; 
        ///Received SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpis{}; 
        ///NAKed OUT Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutis{}; 
        ///NAKed IN Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackets{}; 
        ///Number of Busy Banks Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsDeveptimr0{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c0,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr1{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c4,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr2{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1c8,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr3{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1cc,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr4{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1d0,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr5{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1d4,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr6{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1d8,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr7{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1dc,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr8{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1e0,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptimr9{    ///<Device Endpoint Mask Register (n = 0)
        using Addr = Register::Address<0x400ac1e4,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txine{}; 
        ///Received OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoute{}; 
        ///Received SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpe{}; 
        ///NAKed OUT Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoute{}; 
        ///NAKed IN Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakine{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfe{}; 
        ///STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallede{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpackete{}; 
        ///Number of Busy Banks Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbk{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Endpoint Interrupts Disable HDMA Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdma{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdis{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
        ///STALL Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq{}; 
    }
    namespace UotghsDeveptier0{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f0,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier1{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f4,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier2{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1f8,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier3{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac1fc,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier4{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac200,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier5{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac204,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier6{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac208,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier7{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac20c,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier8{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac210,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptier9{    ///<Device Endpoint Enable Register (n = 0)
        using Addr = Register::Address<0x400ac214,0xfff08f00,0x00000000,unsigned>;
        ///Transmitted IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txines{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutes{}; 
        ///Received SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpes{}; 
        ///NAKed OUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutes{}; 
        ///NAKed IN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakines{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfes{}; 
        ///STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketes{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Kill IN Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> killbks{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocons{}; 
        ///Endpoint Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmas{}; 
        ///NYET Token Disable Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdiss{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
        ///STALL Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqs{}; 
    }
    namespace UotghsDeveptidr0{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac220,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr1{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac224,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr2{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac228,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr3{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac22c,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr4{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac230,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr5{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac234,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr6{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac238,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr7{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac23c,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr8{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac240,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsDeveptidr9{    ///<Device Endpoint Disable Register (n = 0)
        using Addr = Register::Address<0x400ac244,0xfff4af00,0x00000000,unsigned>;
        ///Transmitted IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txinec{}; 
        ///Received OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxoutec{}; 
        ///Received SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstpec{}; 
        ///NAKed OUT Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakoutec{}; 
        ///NAKed IN Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakinec{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfec{}; 
        ///STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stalledec{}; 
        ///Shortpacket Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketec{}; 
        ///Number of Busy Banks Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Endpoint Interrupts Disable HDMA Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdishdmac{}; 
        ///NYET Token Disable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetdisc{}; 
        ///STALL Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrqc{}; 
    }
    namespace UotghsHstpipcfg0{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac500,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg1{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac504,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg2{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac508,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg3{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac50c,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg4{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac510,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg5{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac514,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg6{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac518,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg7{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac51c,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg8{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac520,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipcfg9{    ///<Host Pipe Configuration Register (n = 0)
        using Addr = Register::Address<0x400ac524,0x00f0c881,0x00000000,unsigned>;
        ///Pipe Memory Allocate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alloc{}; 
        ///Pipe Banks
        enum class PbkVal {
            v1Bank=0x00000000,     ///<Single-bank pipe
            v2Bank=0x00000001,     ///<Double-bank pipe
            v3Bank=0x00000002,     ///<Triple-bank pipe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PbkVal> pbk{}; 
        namespace PbkValC{
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v1Bank> v1Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v2Bank> v2Bank{};
            constexpr Register::FieldValue<decltype(pbk)::Type,PbkVal::v3Bank> v3Bank{};
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
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v8Byte> v8Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v16Byte> v16Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v32Byte> v32Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v64Byte> v64Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v128Byte> v128Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v256Byte> v256Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v512Byte> v512Byte{};
            constexpr Register::FieldValue<decltype(psize)::Type,PsizeVal::v1024Byte> v1024Byte{};
        }
        ///Pipe Token
        enum class PtokenVal {
            setup=0x00000000,     ///<SETUP
            in=0x00000001,     ///<IN
            out=0x00000002,     ///<OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PtokenVal> ptoken{}; 
        namespace PtokenValC{
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::setup> setup{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::in> in{};
            constexpr Register::FieldValue<decltype(ptoken)::Type,PtokenVal::out> out{};
        }
        ///Automatic Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> autosw{}; 
        ///Pipe Type
        enum class PtypeVal {
            ctrl=0x00000000,     ///<Control
            iso=0x00000001,     ///<Isochronous
            blk=0x00000002,     ///<Bulk
            intrpt=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ctrl> ctrl{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::blk> blk{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::intrpt> intrpt{};
        }
        ///Pipe Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pepnum{}; 
        ///Pipe Interrupt Request Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intfrq{}; 
    }
    namespace UotghsHstpipisr0{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac530,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr1{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac534,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr2{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac538,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr3{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac53c,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr4{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac540,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr5{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac544,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr6{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac548,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr7{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac54c,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr8{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac550,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipisr9{    ///<Host Pipe Status Register (n = 0)
        using Addr = Register::Address<0x400ac554,0x800a0c00,0x00000000,unsigned>;
        ///Received IN Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxini{}; 
        ///Transmitted OUT Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txouti{}; 
        ///Transmitted SETUP Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpi{}; 
        ///Pipe Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perri{}; 
        ///NAKed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedi{}; 
        ///Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfi{}; 
        ///Received STALLed Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldi{}; 
        ///Short Packet Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketi{}; 
        ///Data Toggle Sequence
        enum class DtseqVal {
            data0=0x00000000,     ///<Data0 toggle sequence
            data1=0x00000001,     ///<Data1 toggle sequence
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DtseqVal> dtseq{}; 
        namespace DtseqValC{
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data0> data0{};
            constexpr Register::FieldValue<decltype(dtseq)::Type,DtseqVal::data1> data1{};
        }
        ///Number of Busy Banks
        enum class NbusybkVal {
            v0Busy=0x00000000,     ///<0 busy bank (all banks free)
            v1Busy=0x00000001,     ///<1 busy bank
            v2Busy=0x00000002,     ///<2 busy banks
            v3Busy=0x00000003,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NbusybkVal> nbusybk{}; 
        namespace NbusybkValC{
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v0Busy> v0Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v1Busy> v1Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v2Busy> v2Busy{};
            constexpr Register::FieldValue<decltype(nbusybk)::Type,NbusybkVal::v3Busy> v3Busy{};
        }
        ///Current Bank
        enum class CurrbkVal {
            bank0=0x00000000,     ///<Current bank is bank0
            bank1=0x00000001,     ///<Current bank is bank1
            bank2=0x00000002,     ///<Current bank is bank2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurrbkVal> currbk{}; 
        namespace CurrbkValC{
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(currbk)::Type,CurrbkVal::bank2> bank2{};
        }
        ///Read-write Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rwall{}; 
        ///Configuration OK Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfgok{}; 
        ///Pipe Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbyct{}; 
    }
    namespace UotghsHstpipicr0{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac560,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr1{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac564,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr2{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac568,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr3{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac56c,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr4{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac570,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr5{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac574,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr6{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac578,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr7{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac57c,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr8{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac580,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipicr9{    ///<Host Pipe Clear Register (n = 0)
        using Addr = Register::Address<0x400ac584,0xffffff08,0x00000000,unsigned>;
        ///Received IN Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinic{}; 
        ///Transmitted OUT Data Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutic{}; 
        ///Transmitted SETUP Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpic{}; 
        ///NAKed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedic{}; 
        ///Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfic{}; 
        ///Received STALLed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldic{}; 
        ///Short Packet Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketic{}; 
    }
    namespace UotghsHstpipifr0{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac590,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr1{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac594,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr2{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac598,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr3{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac59c,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr4{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5a0,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr5{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5a4,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr6{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5a8,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr7{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5ac,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr8{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5b0,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipifr9{    ///<Host Pipe Set Register (n = 0)
        using Addr = Register::Address<0x400ac5b4,0xffffef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinis{}; 
        ///Transmitted OUT Data Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutis{}; 
        ///Transmitted SETUP Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpis{}; 
        ///Pipe Error Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perris{}; 
        ///NAKed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedis{}; 
        ///Overflow Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfis{}; 
        ///Received STALLed Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldis{}; 
        ///Short Packet Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketis{}; 
        ///Number of Busy Banks Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybks{}; 
    }
    namespace UotghsHstpipimr0{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c0,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr1{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c4,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr2{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5c8,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr3{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5cc,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr4{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5d0,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr5{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5d4,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr6{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5d8,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr7{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5dc,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr8{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5e0,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipimr9{    ///<Host Pipe Mask Register (n = 0)
        using Addr = Register::Address<0x400ac5e4,0xfff8af00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxine{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoute{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpe{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perre{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakede{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfie{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstallde{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketie{}; 
        ///Number of Busy Banks Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybke{}; 
        ///FIFO Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifocon{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdma{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Reset Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdt{}; 
    }
    namespace UotghsHstpipier0{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier1{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f4,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier2{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5f8,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier3{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac5fc,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier4{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac600,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier5{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac604,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier6{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac608,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier7{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac60c,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier8{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac610,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipier9{    ///<Host Pipe Enable Register (n = 0)
        using Addr = Register::Address<0x400ac614,0xfff8ef00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxines{}; 
        ///Transmitted OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutes{}; 
        ///Transmitted SETUP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpes{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perres{}; 
        ///NAKed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedes{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfies{}; 
        ///Received STALLed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldes{}; 
        ///Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketies{}; 
        ///Number of Busy Banks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkes{}; 
        ///Pipe Interrupts Disable HDMA Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmas{}; 
        ///Pipe Freeze Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezes{}; 
        ///Reset Data Toggle Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstdts{}; 
    }
    namespace UotghsHstpipidr0{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac620,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr1{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac624,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr2{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac628,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr3{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac62c,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr4{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac630,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr5{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac634,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr6{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac638,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr7{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac63c,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr8{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac640,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipidr9{    ///<Host Pipe Disable Register (n = 0)
        using Addr = Register::Address<0x400ac644,0xfffcaf00,0x00000000,unsigned>;
        ///Received IN Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxinec{}; 
        ///Transmitted OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txoutec{}; 
        ///Transmitted SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txstpec{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perrec{}; 
        ///NAKed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakedec{}; 
        ///Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overfiec{}; 
        ///Received STALLed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxstalldec{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shortpacketiec{}; 
        ///Number of Busy Banks Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbusybkec{}; 
        ///FIFO Control Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoconc{}; 
        ///Pipe Interrupts Disable HDMA Request Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdishdmac{}; 
        ///Pipe Freeze Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreezec{}; 
    }
    namespace UotghsHstpipinrq0{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac650,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq1{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac654,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq2{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac658,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq3{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac65c,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq4{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac660,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq5{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac664,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq6{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac668,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq7{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac66c,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq8{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac670,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpipinrq9{    ///<Host Pipe IN Request Register (n = 0)
        using Addr = Register::Address<0x400ac674,0xfffffe00,0x00000000,unsigned>;
        ///IN Request Number before Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inrq{}; 
        ///IN Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inmode{}; 
    }
    namespace UotghsHstpiperr0{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac680,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr1{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac684,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr2{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac688,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr3{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac68c,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr4{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac690,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr5{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac694,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr6{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac698,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr7{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac69c,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr8{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac6a0,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace UotghsHstpiperr9{    ///<Host Pipe Error Register (n = 0)
        using Addr = Register::Address<0x400ac6a4,0xffffff80,0x00000000,unsigned>;
        ///Data Toggle Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datatgl{}; 
        ///Data PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datapid{}; 
        ///PID Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Time-Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///CRC16 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> counter{}; 
    }
}
