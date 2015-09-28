#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefs_gotgctl{
        using Addr = Register::Address<0x50000000,0xfff0f0fc>;
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
    namespace Nonefs_gotgint{
        using Addr = Register::Address<0x50000004,0xfff1fcfb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRSSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HNSSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HNGDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADTOCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DBCDNE; 
    }
    namespace Nonefs_gahbcfg{
        using Addr = Register::Address<0x50000008,0xfffffe7e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFELVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PTXFELVL; 
    }
    namespace Nonefs_gusbcfg{
        using Addr = Register::Address<0x5000000c,0x1fffc0b8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TOCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PHYSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRPCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HNPCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,10)> TRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FHMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FDMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CTXPKT; 
    }
    namespace Nonefs_grstctl{
        using Addr = Register::Address<0x50000010,0x7ffff808>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AHBIDL; 
    }
    namespace Nonefs_gintsts{
        using Addr = Register::Address<0x50000014,0x08c30300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OTGINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> NPTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GINAKEFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GOUTNAKEFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ESUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> USBSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENUMDNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ISOODRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IISOIXFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IPXFR_INCOMPISOOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> HPRTINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CIDSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DISCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRQINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WKUPINT; 
    }
    namespace Nonefs_gintmsk{
        using Addr = Register::Address<0x50000018,0x08c10301>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IPXFRM_IISOOXFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PRTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HCIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PTXFEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CIDSCHGM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DISCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SRQIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WUIM; 
    }
    namespace Nonefs_grxstsr_device{
        using Addr = Register::Address<0x5000001c,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,4)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> PKTSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,21)> FRMNUM; 
    }
    namespace Nonefs_grxstsr_host{
        using Addr = Register::Address<0x5000001c,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,4)> BCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,17)> PKTSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,21)> FRMNUM; 
    }
    namespace Nonefs_grxfsiz{
        using Addr = Register::Address<0x50000024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXFD; 
    }
    namespace Nonefs_gnptxfsiz_device{
        using Addr = Register::Address<0x50000028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TX0FSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TX0FD; 
    }
    namespace Nonefs_gnptxfsiz_host{
        using Addr = Register::Address<0x50000028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NPTXFSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NPTXFD; 
    }
    namespace Nonefs_gnptxsts{
        using Addr = Register::Address<0x5000002c,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NPTXFSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NPTQXSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> NPTXQTOP; 
    }
    namespace Nonefs_gccfg{
        using Addr = Register::Address<0x50000038,0xffe2ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PWRDWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VBUSASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VBUSBSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SOFOUTEN; 
    }
    namespace Nonefs_cid{
        using Addr = Register::Address<0x5000003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PRODUCT_ID; 
    }
    namespace Nonefs_hptxfsiz{
        using Addr = Register::Address<0x50000100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PTXFSIZ; 
    }
    namespace Nonefs_dieptxf1{
        using Addr = Register::Address<0x50000104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Nonefs_dieptxf2{
        using Addr = Register::Address<0x50000108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
    namespace Nonefs_dieptxf3{
        using Addr = Register::Address<0x5000010c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INEPTXFD; 
    }
}
