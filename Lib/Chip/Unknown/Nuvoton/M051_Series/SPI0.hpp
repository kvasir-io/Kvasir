#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonespi_cntrl{
        using Addr = Register::Address<0x40030000,0xff600000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GO_BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX_NEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TX_NEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> TX_BIT_LEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TX_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SP_CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SLAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19)> REORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> VARCLK_EN; 
    }
    namespace Nonespi_divider{
        using Addr = Register::Address<0x40030004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DIVIDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DIVIDER2; 
    }
    namespace Nonespi_ssr{
        using Addr = Register::Address<0x40030008,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SS_LVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AUTOSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SS_LTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LTRIG_FLAG; 
    }
    namespace Nonespi_rx0{
        using Addr = Register::Address<0x40030010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX; 
    }
    namespace Nonespi_rx1{
        using Addr = Register::Address<0x40030014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX; 
    }
    namespace Nonespi_tx0{
        using Addr = Register::Address<0x40030020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TX; 
    }
    namespace Nonespi_tx1{
        using Addr = Register::Address<0x40030024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TX; 
    }
    namespace Nonespi_varclk{
        using Addr = Register::Address<0x40030034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VARCLK; 
    }
}
