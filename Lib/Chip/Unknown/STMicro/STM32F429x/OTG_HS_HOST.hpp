#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneotg_hs_hcfg{
        using Addr = Register::Address<0x40040400,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FSLSPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSLSS; 
    }
    namespace Noneotg_hs_hfir{
        using Addr = Register::Address<0x40040404,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRIVL; 
    }
    namespace Noneotg_hs_hfnum{
        using Addr = Register::Address<0x40040408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> FTREM; 
    }
    namespace Noneotg_hs_hptxsts{
        using Addr = Register::Address<0x40040410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PTXFSAVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PTXQSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PTXQTOP; 
    }
    namespace Noneotg_hs_haint{
        using Addr = Register::Address<0x40040414,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HAINT; 
    }
    namespace Noneotg_hs_haintmsk{
        using Addr = Register::Address<0x40040418,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HAINTM; 
    }
    namespace Noneotg_hs_hprt{
        using Addr = Register::Address<0x40040440,0xfff80200>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PENCHNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> POCA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> POCCHNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PLSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PPWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> PTCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> PSPD; 
    }
    namespace Noneotg_hs_hcchar0{
        using Addr = Register::Address<0x40040500,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar1{
        using Addr = Register::Address<0x40040520,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar2{
        using Addr = Register::Address<0x40040540,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar3{
        using Addr = Register::Address<0x40040560,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar4{
        using Addr = Register::Address<0x40040580,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar5{
        using Addr = Register::Address<0x400405a0,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar6{
        using Addr = Register::Address<0x400405c0,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar7{
        using Addr = Register::Address<0x400405e0,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar8{
        using Addr = Register::Address<0x40040600,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar9{
        using Addr = Register::Address<0x40040620,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar10{
        using Addr = Register::Address<0x40040640,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcchar11{
        using Addr = Register::Address<0x40040660,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Noneotg_hs_hcsplt0{
        using Addr = Register::Address<0x40040504,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt1{
        using Addr = Register::Address<0x40040524,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt2{
        using Addr = Register::Address<0x40040544,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt3{
        using Addr = Register::Address<0x40040564,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt4{
        using Addr = Register::Address<0x40040584,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt5{
        using Addr = Register::Address<0x400405a4,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt6{
        using Addr = Register::Address<0x400405c4,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt7{
        using Addr = Register::Address<0x400405e4,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt8{
        using Addr = Register::Address<0x40040604,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt9{
        using Addr = Register::Address<0x40040624,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt10{
        using Addr = Register::Address<0x40040644,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcsplt11{
        using Addr = Register::Address<0x40040664,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PRTADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,7)> HUBADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> XACTPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPLSPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SPLITEN; 
    }
    namespace Noneotg_hs_hcint0{
        using Addr = Register::Address<0x40040508,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint1{
        using Addr = Register::Address<0x40040528,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint2{
        using Addr = Register::Address<0x40040548,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint3{
        using Addr = Register::Address<0x40040568,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint4{
        using Addr = Register::Address<0x40040588,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint5{
        using Addr = Register::Address<0x400405a8,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint6{
        using Addr = Register::Address<0x400405c8,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint7{
        using Addr = Register::Address<0x400405e8,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint8{
        using Addr = Register::Address<0x40040608,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint9{
        using Addr = Register::Address<0x40040628,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint10{
        using Addr = Register::Address<0x40040648,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcint11{
        using Addr = Register::Address<0x40040668,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Noneotg_hs_hcintmsk0{
        using Addr = Register::Address<0x4004050c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk1{
        using Addr = Register::Address<0x4004052c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk2{
        using Addr = Register::Address<0x4004054c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk3{
        using Addr = Register::Address<0x4004056c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk4{
        using Addr = Register::Address<0x4004058c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk5{
        using Addr = Register::Address<0x400405ac,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk6{
        using Addr = Register::Address<0x400405cc,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk7{
        using Addr = Register::Address<0x400405ec,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk8{
        using Addr = Register::Address<0x4004060c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk9{
        using Addr = Register::Address<0x4004062c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk10{
        using Addr = Register::Address<0x4004064c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hcintmsk11{
        using Addr = Register::Address<0x4004066c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Noneotg_hs_hctsiz0{
        using Addr = Register::Address<0x40040510,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz1{
        using Addr = Register::Address<0x40040530,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz2{
        using Addr = Register::Address<0x40040550,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz3{
        using Addr = Register::Address<0x40040570,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz4{
        using Addr = Register::Address<0x40040590,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz5{
        using Addr = Register::Address<0x400405b0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz6{
        using Addr = Register::Address<0x400405d0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz7{
        using Addr = Register::Address<0x400405f0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz8{
        using Addr = Register::Address<0x40040610,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz9{
        using Addr = Register::Address<0x40040630,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz10{
        using Addr = Register::Address<0x40040650,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hctsiz11{
        using Addr = Register::Address<0x40040670,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Noneotg_hs_hcdma0{
        using Addr = Register::Address<0x40040514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma1{
        using Addr = Register::Address<0x40040534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma2{
        using Addr = Register::Address<0x40040554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma3{
        using Addr = Register::Address<0x40040574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma4{
        using Addr = Register::Address<0x40040594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma5{
        using Addr = Register::Address<0x400405b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma6{
        using Addr = Register::Address<0x400405d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma7{
        using Addr = Register::Address<0x400405f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma8{
        using Addr = Register::Address<0x40040614,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma9{
        using Addr = Register::Address<0x40040634,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma10{
        using Addr = Register::Address<0x40040654,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_hcdma11{
        using Addr = Register::Address<0x40040674,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
}
