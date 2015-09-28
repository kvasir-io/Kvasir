#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepdma_csrx{
        using Addr = Register::Address<0x50008000,0xff67ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PDMACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SW_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SAD_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DAD_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19)> APB_TWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRIG_EN; 
    }
    namespace Nonepdma_sarx{
        using Addr = Register::Address<0x50008004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDMA_SAR; 
    }
    namespace Nonepdma_darx{
        using Addr = Register::Address<0x50008008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDMA_DAR; 
    }
    namespace Nonepdma_bcrx{
        using Addr = Register::Address<0x5000800c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDMA_BCR; 
    }
    namespace Nonepdma_pointx{
        using Addr = Register::Address<0x50008010,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PDMA_POINT; 
    }
    namespace Nonepdma_csarx{
        using Addr = Register::Address<0x50008014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDMA_CSAR; 
    }
    namespace Nonepdma_cdarx{
        using Addr = Register::Address<0x50008018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDMA_CDAR; 
    }
    namespace Nonepdma_cbcrx{
        using Addr = Register::Address<0x5000801c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDMA_CBCR; 
    }
    namespace Nonepdma_ierx{
        using Addr = Register::Address<0x50008020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TABORT_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BLKD_IE; 
    }
    namespace Nonepdma_isrx{
        using Addr = Register::Address<0x50008024,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TABORT_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BLKD_IF; 
    }
    namespace Nonepdma_sbuf0_cx{
        using Addr = Register::Address<0x50008080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDMA_SBUF0; 
    }
}
