#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TDES_cr{
        using Addr = Register::Address<0xfffc4000,0xfffefefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LOADSEED; 
    }
    namespace TDES_mr{
        using Addr = Register::Address<0xfffc4004,0xc00c4cec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CIPHER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDESMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> KEYMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> OPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CFBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> CTYPE; 
    }
    namespace TDES_ier{
        using Addr = Register::Address<0xfffc4010,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace TDES_idr{
        using Addr = Register::Address<0xfffc4014,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace TDES_imr{
        using Addr = Register::Address<0xfffc4018,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
    }
    namespace TDES_isr{
        using Addr = Register::Address<0xfffc401c,0xffffcee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> URAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> URAT; 
    }
    namespace TDES_key1wxr0{
        using Addr = Register::Address<0xfffc4020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY1Wx; 
    }
    namespace TDES_key1wxr1{
        using Addr = Register::Address<0xfffc4024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY1Wx; 
    }
    namespace TDES_key2wxr0{
        using Addr = Register::Address<0xfffc4028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY2Wx; 
    }
    namespace TDES_key2wxr1{
        using Addr = Register::Address<0xfffc402c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY2Wx; 
    }
    namespace TDES_key3wxr0{
        using Addr = Register::Address<0xfffc4030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY3Wx; 
    }
    namespace TDES_key3wxr1{
        using Addr = Register::Address<0xfffc4034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> KEY3Wx; 
    }
    namespace TDES_idataxr0{
        using Addr = Register::Address<0xfffc4040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace TDES_idataxr1{
        using Addr = Register::Address<0xfffc4044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IDATAx; 
    }
    namespace TDES_odataxr0{
        using Addr = Register::Address<0xfffc4050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace TDES_odataxr1{
        using Addr = Register::Address<0xfffc4054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ODATAx; 
    }
    namespace TDES_ivxr0{
        using Addr = Register::Address<0xfffc4060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IVx; 
    }
    namespace TDES_ivxr1{
        using Addr = Register::Address<0xfffc4064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IVx; 
    }
    namespace TDES_rpr{
        using Addr = Register::Address<0xfffc4100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace TDES_rcr{
        using Addr = Register::Address<0xfffc4104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace TDES_tpr{
        using Addr = Register::Address<0xfffc4108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace TDES_tcr{
        using Addr = Register::Address<0xfffc410c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace TDES_rnpr{
        using Addr = Register::Address<0xfffc4110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace TDES_rncr{
        using Addr = Register::Address<0xfffc4114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace TDES_tnpr{
        using Addr = Register::Address<0xfffc4118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace TDES_tncr{
        using Addr = Register::Address<0xfffc411c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace TDES_ptcr{
        using Addr = Register::Address<0xfffc4120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace TDES_ptsr{
        using Addr = Register::Address<0xfffc4124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
