#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DACC_cr{
        using Addr = Register::Address<0x400c8000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
    }
    namespace DACC_mr{
        using Addr = Register::Address<0x400c8004,0xc0cc0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FASTWKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> REFRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> USER_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MAXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> STARTUP; 
    }
    namespace DACC_cher{
        using Addr = Register::Address<0x400c8010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
    }
    namespace DACC_chdr{
        using Addr = Register::Address<0x400c8014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
    }
    namespace DACC_chsr{
        using Addr = Register::Address<0x400c8018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
    }
    namespace DACC_cdr{
        using Addr = Register::Address<0x400c8020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace DACC_ier{
        using Addr = Register::Address<0x400c8024,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
    }
    namespace DACC_idr{
        using Addr = Register::Address<0x400c8028,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
    }
    namespace DACC_imr{
        using Addr = Register::Address<0x400c802c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
    }
    namespace DACC_isr{
        using Addr = Register::Address<0x400c8030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
    }
    namespace DACC_acr{
        using Addr = Register::Address<0x400c8094,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> IBCTLCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IBCTLCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IBCTLDACCORE; 
    }
    namespace DACC_wpmr{
        using Addr = Register::Address<0x400c80e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DACC_wpsr{
        using Addr = Register::Address<0x400c80e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPROTERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPROTADDR; 
    }
    namespace DACC_tpr{
        using Addr = Register::Address<0x400c8108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace DACC_tcr{
        using Addr = Register::Address<0x400c810c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace DACC_tnpr{
        using Addr = Register::Address<0x400c8118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace DACC_tncr{
        using Addr = Register::Address<0x400c811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace DACC_ptcr{
        using Addr = Register::Address<0x400c8120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace DACC_ptsr{
        using Addr = Register::Address<0x400c8124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
