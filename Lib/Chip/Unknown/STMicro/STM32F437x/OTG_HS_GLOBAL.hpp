#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneotg_hs_gotgctl{
        using Addr = Register::Address<0x40040000,0xfff0f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRQSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HNGSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HNPRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSHNPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DHNPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CIDSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBCT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ASVLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BSVLD; 
    }
    namespace Noneotg_hs_gotgint{
        using Addr = Register::Address<0x40040004,0xfff1fcfb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRSSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HNSSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HNGDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADTOCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DBCDNE; 
    }
    namespace Noneotg_hs_gahbcfg{
        using Addr = Register::Address<0x40040008,0xfffffe40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> HBSTLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFELVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PTXFELVL; 
    }
    namespace Noneotg_hs_gusbcfg{
        using Addr = Register::Address<0x4004000c,0x1c0140b8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TOCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PHYSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRPCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HNPCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10)> TRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PHYLPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ULPIFSLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ULPIAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ULPICSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ULPIEVBUSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ULPIEVBUSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TSDPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PCCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PTCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ULPIIPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FHMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FDMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CTXPKT; 
    }
    namespace Noneotg_hs_grstctl{
        using Addr = Register::Address<0x40040010,0x3ffff808>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AHBIDL; 
    }
    namespace Noneotg_hs_gintsts{
        using Addr = Register::Address<0x40040014,0x08830300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OTGINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NPTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GINAKEFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BOUTNAKEFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ESUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> USBSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENUMDNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ISOODRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IISOIXFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PXFR_INCOMPISOOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DATAFSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> HPRTINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CIDSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DISCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRQINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WKUINT; 
    }
    namespace Noneotg_hs_gintmsk{
        using Addr = Register::Address<0x40040018,0x08810301>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MMISM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OTGINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFLVLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NPTXFEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GINAKEFFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GONAKEFFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ESUSPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> USBSUSPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENUMDNEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ISOODRPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOPFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPMISM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IISOIXFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PXFRM_IISOOXFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FSUSPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PRTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HCIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PTXFEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CIDSCHGM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DISCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRQIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WUIM; 
    }
    namespace Noneotg_hs_grxstsr_host{
        using Addr = Register::Address<0x4004001c,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,4)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> PKTSTS; 
    }
    namespace Noneotg_hs_grxstsp_host{
        using Addr = Register::Address<0x40040020,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,4)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> PKTSTS; 
    }
    namespace Noneotg_hs_grxfsiz{
        using Addr = Register::Address<0x40040024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXFD; 
    }
    namespace Noneotg_hs_gnptxfsiz_host{
        using Addr = Register::Address<0x40040028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NPTXFSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NPTXFD; 
    }
    namespace Noneotg_hs_tx0fsiz_peripheral{
        using Addr = Register::Address<0x40040028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TX0FSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TX0FD; 
    }
    namespace Noneotg_hs_gnptxsts{
        using Addr = Register::Address<0x4004002c,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NPTXFSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NPTQXSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NPTXQTOP; 
    }
    namespace Noneotg_hs_gccfg{
        using Addr = Register::Address<0x40040038,0xffc0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PWRDWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2CPADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VBUSASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VBUSBSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SOFOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> NOVBUSSENS; 
    }
    namespace Noneotg_hs_cid{
        using Addr = Register::Address<0x4004003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PRODUCT_ID; 
    }
    namespace Noneotg_hs_hptxfsiz{
        using Addr = Register::Address<0x40040100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PTXFD; 
    }
    namespace Noneotg_hs_dieptxf1{
        using Addr = Register::Address<0x40040104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_dieptxf2{
        using Addr = Register::Address<0x40040108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_dieptxf3{
        using Addr = Register::Address<0x4004011c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_dieptxf4{
        using Addr = Register::Address<0x40040120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_dieptxf5{
        using Addr = Register::Address<0x40040124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_dieptxf6{
        using Addr = Register::Address<0x40040128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_dieptxf7{
        using Addr = Register::Address<0x4004012c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Noneotg_hs_grxstsr_peripheral{
        using Addr = Register::Address<0x4004001c,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,4)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> PKTSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,21)> FRMNUM; 
    }
    namespace Noneotg_hs_grxstsp_peripheral{
        using Addr = Register::Address<0x40040020,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,4)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> PKTSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,21)> FRMNUM; 
    }
}
