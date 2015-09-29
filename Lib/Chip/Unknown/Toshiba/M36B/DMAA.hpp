#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace Nonestatus{    ///<DMA Status Register
        using Addr = Register::Address<0x4004c000,0xfffffffe,0,unsigned>;
        ///MASTER_ENABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> masterEnable{}; 
    }
    namespace Nonecfg{    ///<DMA Configuration Register
        using Addr = Register::Address<0x4004c004,0xfffffffe,0,unsigned>;
        ///MASTER_ENABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> masterEnable{}; 
    }
    namespace Nonectrlbaseptr{    ///<DMA Control Data Base Pointer Register
        using Addr = Register::Address<0x4004c008,0x000003ff,0,unsigned>;
        ///CTRL_BASE_PTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> ctrlBasePtr{}; 
    }
    namespace Nonealtctrlbaseptr{    ///<DMA Channel Alternate Control Data Base Pointer Register
        using Addr = Register::Address<0x4004c00c,0x00000000,0,unsigned>;
        ///ALT_CTRL_BASE_PTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> altCtrlBasePtr{}; 
    }
    namespace Nonechnlswrequest{    ///<DMA Channel Software Request Register
        using Addr = Register::Address<0x4004c014,0x00000000,0,unsigned>;
        ///CHNL_SW_REQUEST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlSwRequest{}; 
    }
    namespace Nonechnluseburstset{    ///<DMA Channel Useburst Set Register
        using Addr = Register::Address<0x4004c018,0x00000000,0,unsigned>;
        ///CHNL_USEBURST_SET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlUseburstSet{}; 
    }
    namespace Nonechnluseburstclr{    ///<DMA Channel Useburst Clear Register
        using Addr = Register::Address<0x4004c01c,0x00000000,0,unsigned>;
        ///CHNL_USEBURST_CLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlUseburstClr{}; 
    }
    namespace Nonechnlreqmaskset{    ///<DMA Channel Request Mask Set Register
        using Addr = Register::Address<0x4004c020,0x00000000,0,unsigned>;
        ///CHNL_REQ_MASK_SET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlReqMaskSet{}; 
    }
    namespace Nonechnlreqmaskclr{    ///<DMA Channel Request Mask Clear Register
        using Addr = Register::Address<0x4004c024,0x00000000,0,unsigned>;
        ///CHNL_REQ_MASK_CLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlReqMaskClr{}; 
    }
    namespace Nonechnlenableset{    ///<DMA Channel Enable Set Register
        using Addr = Register::Address<0x4004c028,0x00000000,0,unsigned>;
        ///CHNL_ENABLE_SET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlEnableSet{}; 
    }
    namespace Nonechnlenableclr{    ///<DMA Channel Enable Clear Register
        using Addr = Register::Address<0x4004c02c,0x00000000,0,unsigned>;
        ///CHNL_ENABLE_CLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlEnableClr{}; 
    }
    namespace Nonechnlprialtset{    ///<DMA Channel Primary-Alternate Set Register
        using Addr = Register::Address<0x4004c030,0x00000000,0,unsigned>;
        ///CHNL_PRI_ALT_SET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPriAltSet{}; 
    }
    namespace Nonechnlprialtclr{    ///<DMA Channel Primary-Alternate Clear Register
        using Addr = Register::Address<0x4004c034,0x00000000,0,unsigned>;
        ///CHNL_PRI_ALT_CLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPriAltClr{}; 
    }
    namespace Nonechnlpriorityset{    ///<DMA Channel Priority Set Register
        using Addr = Register::Address<0x4004c038,0x00000000,0,unsigned>;
        ///CHNL_PRIORITY_SET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPrioritySet{}; 
    }
    namespace Nonechnlpriorityclr{    ///<DMA Channel Priority Clear Register
        using Addr = Register::Address<0x4004c03c,0x00000000,0,unsigned>;
        ///CHNL_PRIORITY_CLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> chnlPriorityClr{}; 
    }
    namespace Noneerrclr{    ///<DMA Bus Error Clear Register
        using Addr = Register::Address<0x4004c04c,0xfffffffe,0,unsigned>;
        ///ERR_CLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> errClr{}; 
    }
}
