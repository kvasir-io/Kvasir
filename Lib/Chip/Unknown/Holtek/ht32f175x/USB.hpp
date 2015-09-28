#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneusb_csr{
        using Addr = Register::Address<0x4004e000,0xfffffe11>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PDWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GENRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADRSET; 
    }
    namespace Noneusb_ier{
        using Addr = Register::Address<0x4004e004,0xffff00c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URSTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SUSPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ESOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EP1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EP2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EP3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EP4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EP5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EP6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EP7IE; 
    }
    namespace Noneusb_isr{
        using Addr = Register::Address<0x4004e008,0xffff00c1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URSTIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SUSPIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ESOFIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP0IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EP1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EP2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EP3IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EP4IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EP5IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EP6IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EP7IF; 
    }
    namespace Noneusb_fcr{
        using Addr = Register::Address<0x4004e00c,0xfff8f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FRNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOFLCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> LSOF; 
    }
    namespace Noneusb_devar{
        using Addr = Register::Address<0x4004e010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DEVA; 
    }
    namespace Noneusb_ep0csr{
        using Addr = Register::Address<0x4004e014,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
    }
    namespace Noneusb_ep0ier{
        using Addr = Register::Address<0x4004e018,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SDRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SDERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ZLRXIE; 
    }
    namespace Noneusb_ep0isr{
        using Addr = Register::Address<0x4004e01c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SDRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SDERIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ZLRXIF; 
    }
    namespace Noneusb_ep0tcr{
        using Addr = Register::Address<0x4004e020,0xff80ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> TXCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> RXCNT; 
    }
    namespace Noneusb_ep0cfgr{
        using Addr = Register::Address<0x4004e024,0x70fe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep1csr{
        using Addr = Register::Address<0x4004e028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
    }
    namespace Noneusb_ep1ier{
        using Addr = Register::Address<0x4004e02c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep1isr{
        using Addr = Register::Address<0x4004e030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep1tcr{
        using Addr = Register::Address<0x4004e034,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TCNT; 
    }
    namespace Noneusb_ep1cfgr{
        using Addr = Register::Address<0x4004e038,0x40fe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep2csr{
        using Addr = Register::Address<0x4004e03c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
    }
    namespace Noneusb_ep2ier{
        using Addr = Register::Address<0x4004e040,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep2isr{
        using Addr = Register::Address<0x4004e044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep2tcr{
        using Addr = Register::Address<0x4004e048,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TCNT; 
    }
    namespace Noneusb_ep2cfgr{
        using Addr = Register::Address<0x4004e04c,0x40fe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep3csr{
        using Addr = Register::Address<0x4004e050,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
    }
    namespace Noneusb_ep3ier{
        using Addr = Register::Address<0x4004e054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep3isr{
        using Addr = Register::Address<0x4004e058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep3tcr{
        using Addr = Register::Address<0x4004e05c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TCNT; 
    }
    namespace Noneusb_ep3cfgr{
        using Addr = Register::Address<0x4004e060,0x40fe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep4csr{
        using Addr = Register::Address<0x4004e064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MDBTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDBTG; 
    }
    namespace Noneusb_ep4ier{
        using Addr = Register::Address<0x4004e068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep4isr{
        using Addr = Register::Address<0x4004e06c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep4tcr{
        using Addr = Register::Address<0x4004e070,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TCNT1; 
    }
    namespace Noneusb_ep4cfgr{
        using Addr = Register::Address<0x4004e074,0x40700000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SDBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep5csr{
        using Addr = Register::Address<0x4004e078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MDBTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDBTG; 
    }
    namespace Noneusb_ep5ier{
        using Addr = Register::Address<0x4004e07c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep5isr{
        using Addr = Register::Address<0x4004e080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep5tcr{
        using Addr = Register::Address<0x4004e084,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TCNT1; 
    }
    namespace Noneusb_ep5cfgr{
        using Addr = Register::Address<0x4004e088,0x40700000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SDBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep6csr{
        using Addr = Register::Address<0x4004e08c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MDBTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDBTG; 
    }
    namespace Noneusb_ep6ier{
        using Addr = Register::Address<0x4004e090,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep6isr{
        using Addr = Register::Address<0x4004e094,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep6tcr{
        using Addr = Register::Address<0x4004e098,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TCNT1; 
    }
    namespace Noneusb_ep6cfgr{
        using Addr = Register::Address<0x4004e09c,0x40700000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SDBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
    namespace Noneusb_ep7csr{
        using Addr = Register::Address<0x4004e0a0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTGTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NAKTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STLTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTGRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STLRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MDBTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDBTG; 
    }
    namespace Noneusb_ep7ier{
        using Addr = Register::Address<0x4004e0a4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIE; 
    }
    namespace Noneusb_ep7isr{
        using Addr = Register::Address<0x4004e0a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODOVIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITRXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDTXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NAKIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UERIF; 
    }
    namespace Noneusb_ep7tcr{
        using Addr = Register::Address<0x4004e0ac,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TCNT1; 
    }
    namespace Noneusb_ep7cfgr{
        using Addr = Register::Address<0x4004e0b0,0x40700000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EPBUFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> EPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SDBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EPADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPEN; 
    }
}
