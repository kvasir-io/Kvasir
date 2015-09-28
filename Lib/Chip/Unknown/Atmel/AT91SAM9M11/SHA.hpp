#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SHA_cr{
        using Addr = Register::Address<0xfffc8000,0xfffffeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWRST; 
    }
    namespace SHA_mr{
        using Addr = Register::Address<0xfffc8004,0xfffffeec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PROCDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ALGO; 
    }
    namespace SHA_ier{
        using Addr = Register::Address<0xfffc8010,0xfffffef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace SHA_idr{
        using Addr = Register::Address<0xfffc8014,0xfffffef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace SHA_imr{
        using Addr = Register::Address<0xfffc8018,0xfffffef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace SHA_isr{
        using Addr = Register::Address<0xfffc801c,0xffff8ef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> URAT; 
    }
    namespace SHA_idataxr0{
        using Addr = Register::Address<0xfffc8040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr1{
        using Addr = Register::Address<0xfffc8044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr2{
        using Addr = Register::Address<0xfffc8048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr3{
        using Addr = Register::Address<0xfffc804c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr4{
        using Addr = Register::Address<0xfffc8050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr5{
        using Addr = Register::Address<0xfffc8054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr6{
        using Addr = Register::Address<0xfffc8058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr7{
        using Addr = Register::Address<0xfffc805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr8{
        using Addr = Register::Address<0xfffc8060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr9{
        using Addr = Register::Address<0xfffc8064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr10{
        using Addr = Register::Address<0xfffc8068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr11{
        using Addr = Register::Address<0xfffc806c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr12{
        using Addr = Register::Address<0xfffc8070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr13{
        using Addr = Register::Address<0xfffc8074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr14{
        using Addr = Register::Address<0xfffc8078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_idataxr15{
        using Addr = Register::Address<0xfffc807c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace SHA_odataxr0{
        using Addr = Register::Address<0xfffc8080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr1{
        using Addr = Register::Address<0xfffc8084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr2{
        using Addr = Register::Address<0xfffc8088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr3{
        using Addr = Register::Address<0xfffc808c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr4{
        using Addr = Register::Address<0xfffc8090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr5{
        using Addr = Register::Address<0xfffc8094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr6{
        using Addr = Register::Address<0xfffc8098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_odataxr7{
        using Addr = Register::Address<0xfffc809c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace SHA_tpr{
        using Addr = Register::Address<0xfffc8108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SHA_tcr{
        using Addr = Register::Address<0xfffc810c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SHA_tnpr{
        using Addr = Register::Address<0xfffc8118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SHA_tncr{
        using Addr = Register::Address<0xfffc811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SHA_ptcr{
        using Addr = Register::Address<0xfffc8120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SHA_ptsr{
        using Addr = Register::Address<0xfffc8124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
