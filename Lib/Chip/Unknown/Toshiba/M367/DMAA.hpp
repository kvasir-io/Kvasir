#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonestatus{
        using Addr = Register::Address<0x4004c000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASTER_ENABLE; 
    }
    namespace Nonecfg{
        using Addr = Register::Address<0x4004c004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASTER_ENABLE; 
    }
    namespace Nonectrlbaseptr{
        using Addr = Register::Address<0x4004c008,0x000003ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,10)> CTRL_BASE_PTR; 
    }
    namespace Nonealtctrlbaseptr{
        using Addr = Register::Address<0x4004c00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALT_CTRL_BASE_PTR; 
    }
    namespace Nonechnlswrequest{
        using Addr = Register::Address<0x4004c014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_SW_REQUEST; 
    }
    namespace Nonechnluseburstset{
        using Addr = Register::Address<0x4004c018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_USEBURST_SET; 
    }
    namespace Nonechnluseburstclr{
        using Addr = Register::Address<0x4004c01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_USEBURST_CLR; 
    }
    namespace Nonechnlreqmaskset{
        using Addr = Register::Address<0x4004c020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_REQ_MASK_SET; 
    }
    namespace Nonechnlreqmaskclr{
        using Addr = Register::Address<0x4004c024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_REQ_MASK_CLR; 
    }
    namespace Nonechnlenableset{
        using Addr = Register::Address<0x4004c028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_ENABLE_SET; 
    }
    namespace Nonechnlenableclr{
        using Addr = Register::Address<0x4004c02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_ENABLE_CLR; 
    }
    namespace Nonechnlprialtset{
        using Addr = Register::Address<0x4004c030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_PRI_ALT_SET; 
    }
    namespace Nonechnlprialtclr{
        using Addr = Register::Address<0x4004c034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_PRI_ALT_CLR; 
    }
    namespace Nonechnlpriorityset{
        using Addr = Register::Address<0x4004c038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_PRIORITY_SET; 
    }
    namespace Nonechnlpriorityclr{
        using Addr = Register::Address<0x4004c03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CHNL_PRIORITY_CLR; 
    }
    namespace Noneerrclr{
        using Addr = Register::Address<0x4004c04c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERR_CLR; 
    }
}
