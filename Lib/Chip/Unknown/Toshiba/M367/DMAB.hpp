#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA Controller
    namespace DmabStatus{    ///<DMA Status Register
        using Addr = Register::Address<0x4004d000,0xfffffffe,0x00000000,unsigned>;
        ///MASTER_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> masterEnable{}; 
    }
    namespace DmabCfg{    ///<DMA Configuration Register
        using Addr = Register::Address<0x4004d004,0xfffffffe,0x00000000,unsigned>;
        ///MASTER_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> masterEnable{}; 
    }
    namespace DmabCtrlbaseptr{    ///<DMA Control Data Base Pointer Register
        using Addr = Register::Address<0x4004d008,0x000003ff,0x00000000,unsigned>;
        ///CTRL_BASE_PTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> ctrlBasePtr{}; 
    }
    namespace DmabAltctrlbaseptr{    ///<DMA Channel Alternate Control Data Base Pointer Register
        using Addr = Register::Address<0x4004d00c,0x00000000,0x00000000,unsigned>;
        ///ALT_CTRL_BASE_PTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> altCtrlBasePtr{}; 
    }
    namespace DmabChnlswrequest{    ///<DMA Channel Software Request Register
        using Addr = Register::Address<0x4004d014,0x00000000,0x00000000,unsigned>;
        ///CHNL_SW_REQUEST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlSwRequest{}; 
    }
    namespace DmabChnluseburstset{    ///<DMA Channel Useburst Set Register
        using Addr = Register::Address<0x4004d018,0x00000000,0x00000000,unsigned>;
        ///CHNL_USEBURST_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlUseburstSet{}; 
    }
    namespace DmabChnluseburstclr{    ///<DMA Channel Useburst Clear Register
        using Addr = Register::Address<0x4004d01c,0x00000000,0x00000000,unsigned>;
        ///CHNL_USEBURST_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlUseburstClr{}; 
    }
    namespace DmabChnlreqmaskset{    ///<DMA Channel Request Mask Set Register
        using Addr = Register::Address<0x4004d020,0x00000000,0x00000000,unsigned>;
        ///CHNL_REQ_MASK_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlReqMaskSet{}; 
    }
    namespace DmabChnlreqmaskclr{    ///<DMA Channel Request Mask Clear Register
        using Addr = Register::Address<0x4004d024,0x00000000,0x00000000,unsigned>;
        ///CHNL_REQ_MASK_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlReqMaskClr{}; 
    }
    namespace DmabChnlenableset{    ///<DMA Channel Enable Set Register
        using Addr = Register::Address<0x4004d028,0x00000000,0x00000000,unsigned>;
        ///CHNL_ENABLE_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlEnableSet{}; 
    }
    namespace DmabChnlenableclr{    ///<DMA Channel Enable Clear Register
        using Addr = Register::Address<0x4004d02c,0x00000000,0x00000000,unsigned>;
        ///CHNL_ENABLE_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlEnableClr{}; 
    }
    namespace DmabChnlprialtset{    ///<DMA Channel Primary-Alternate Set Register
        using Addr = Register::Address<0x4004d030,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRI_ALT_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPriAltSet{}; 
    }
    namespace DmabChnlprialtclr{    ///<DMA Channel Primary-Alternate Clear Register
        using Addr = Register::Address<0x4004d034,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRI_ALT_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlPriAltClr{}; 
    }
    namespace DmabChnlpriorityset{    ///<DMA Channel Priority Set Register
        using Addr = Register::Address<0x4004d038,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRIORITY_SET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPrioritySet{}; 
    }
    namespace DmabChnlpriorityclr{    ///<DMA Channel Priority Clear Register
        using Addr = Register::Address<0x4004d03c,0x00000000,0x00000000,unsigned>;
        ///CHNL_PRIORITY_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chnlPriorityClr{}; 
    }
    namespace DmabErrclr{    ///<DMA Bus Error Clear Register
        using Addr = Register::Address<0x4004d04c,0xfffffffe,0x00000000,unsigned>;
        ///ERR_CLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errClr{}; 
    }
}
