#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DACC_cr{
        using Addr = Register::Address<0x4003c000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
    }
    namespace DACC_mr{
        using Addr = Register::Address<0x4003c004,0x000000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CLKDIV; 
    }
    namespace DACC_cdr{
        using Addr = Register::Address<0x4003c008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace DACC_ier{
        using Addr = Register::Address<0x4003c00c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
    }
    namespace DACC_idr{
        using Addr = Register::Address<0x4003c010,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
    }
    namespace DACC_imr{
        using Addr = Register::Address<0x4003c014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
    }
    namespace DACC_isr{
        using Addr = Register::Address<0x4003c018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
    }
    namespace DACC_wpmr{
        using Addr = Register::Address<0x4003c0e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DACC_wpsr{
        using Addr = Register::Address<0x4003c0e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPROTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPROTADDR; 
    }
    namespace DACC_tpr{
        using Addr = Register::Address<0x4003c108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace DACC_tcr{
        using Addr = Register::Address<0x4003c10c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace DACC_tnpr{
        using Addr = Register::Address<0x4003c118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace DACC_tncr{
        using Addr = Register::Address<0x4003c11c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace DACC_ptcr{
        using Addr = Register::Address<0x4003c120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace DACC_ptsr{
        using Addr = Register::Address<0x4003c124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
