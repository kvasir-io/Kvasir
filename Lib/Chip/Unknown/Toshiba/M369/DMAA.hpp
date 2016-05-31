#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA Controller
    namespace DmaaStatus{    ///<DMA Status Register
        using Addr = Register::Address<0x4004c000,0xfffffffe,0x00000000,unsigned>;
        ///MASTER_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> masterEnable{}; 
    }
    namespace DmaaCfg{    ///<DMA Configuration Register
        using Addr = Register::Address<0x4004c004,0xfffffffe,0x00000000,unsigned>;
        ///MASTER_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> masterEnable{}; 
    }
    namespace DmaaCtrlbaseptr{    ///<DMA Control Data Base Pointer Register
        using Addr = Register::Address<0x4004c008,0x000003ff,0x00000000,unsigned>;
        ///CTRL_BASE_PTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> ctrlBasePtr{}; 
    }
    namespace DmaaAltctrlbaseptr{    ///<DMA Channel Alternate Control Data Base Pointer Register
        using Addr = Register::Address<0x4004c00c,0x00000000,0x00000000,unsigned>;
        ///ALT_CTRL_BASE_PTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> altCtrlBasePtr{}; 
    }
    namespace DmaaChnlswrequest{    ///<DMA Channel Software Request Register
        using Addr = Register::Address<0x4004c014,0x00000000,0x00000000,unsigned>;
        ///CHNL_SW_REQUEST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlSwRequest{}; 
    }
    namespace DmaaChnluseburstset{    ///<DMA Channel Useburst Set Register
        using Addr = Register::Address<0x4004c018,0x00000000,0x00000000,unsigned>;
        ///CHNL_USEBURST_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlUseburstSet{}; 
    }
    namespace DmaaChnluseburstclr{    ///<DMA Channel Useburst Clear Register
        using Addr = Register::Address<0x4004c01c,0x00000000,0x00000000,unsigned>;
        ///CHNL_USEBURST_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlUseburstClr{}; 
    }
    namespace DmaaChnlreqmaskset{    ///<DMA Channel Request Mask Set Register
        using Addr = Register::Address<0x4004c020,0x00000000,0x00000000,unsigned>;
        ///CHNL_REQ_MASK_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlReqMaskSet{}; 
    }
    namespace DmaaChnlreqmaskclr{    ///<DMA Channel Request Mask Clear Register
        using Addr = Register::Address<0x4004c024,0x00000000,0x00000000,unsigned>;
        ///CHNL_REQ_MASK_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlReqMaskClr{}; 
    }
    namespace DmaaChnlenableset{    ///<DMA Channel Enable Set Register
        using Addr = Register::Address<0x4004c028,0x00000000,0x00000000,unsigned>;
        ///CHNL_ENABLE_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlEnableSet{}; 
    }
    namespace DmaaChnlenableclr{    ///<DMA Channel Enable Clear Register
        using Addr = Register::Address<0x4004c02c,0x00000000,0x00000000,unsigned>;
        ///CHNL_ENABLE_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlEnableClr{}; 
    }
    namespace DmaaChnlprialtset{    ///<DMA Channel Primary-Alternate Set Register
        using Addr = Register::Address<0x4004c030,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRI_ALT_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPriAltSet{}; 
    }
    namespace DmaaChnlprialtclr{    ///<DMA Channel Primary-Alternate Clear Register
        using Addr = Register::Address<0x4004c034,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRI_ALT_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlPriAltClr{}; 
    }
    namespace DmaaChnlpriorityset{    ///<DMA Channel Priority Set Register
        using Addr = Register::Address<0x4004c038,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRIORITY_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPrioritySet{}; 
    }
    namespace DmaaChnlpriorityclr{    ///<DMA Channel Priority Clear Register
        using Addr = Register::Address<0x4004c03c,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRIORITY_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlPriorityClr{}; 
    }
    namespace DmaaErrclr{    ///<DMA Bus Error Clear Register
        using Addr = Register::Address<0x4004c04c,0xfffffffe,0x00000000,unsigned>;
        ///ERR_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errClr{}; 
    }
}
