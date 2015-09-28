#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefs_hcfg{
        using Addr = Register::Address<0x50000400,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FSLSPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSLSS; 
    }
    namespace Nonehfir{
        using Addr = Register::Address<0x50000404,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRIVL; 
    }
    namespace Nonefs_hfnum{
        using Addr = Register::Address<0x50000408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FRNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> FTREM; 
    }
    namespace Nonefs_hptxsts{
        using Addr = Register::Address<0x50000410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PTXFSAVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PTXQSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PTXQTOP; 
    }
    namespace Nonehaint{
        using Addr = Register::Address<0x50000414,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HAINT; 
    }
    namespace Nonehaintmsk{
        using Addr = Register::Address<0x50000418,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HAINTM; 
    }
    namespace Nonefs_hprt{
        using Addr = Register::Address<0x50000440,0xfff80200>;
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
    namespace Nonefs_hcchar0{
        using Addr = Register::Address<0x50000500,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar1{
        using Addr = Register::Address<0x50000520,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar2{
        using Addr = Register::Address<0x50000540,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar3{
        using Addr = Register::Address<0x50000560,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar4{
        using Addr = Register::Address<0x50000580,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar5{
        using Addr = Register::Address<0x500005a0,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar6{
        using Addr = Register::Address<0x500005c0,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcchar7{
        using Addr = Register::Address<0x500005e0,0x00010000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> EPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> MCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,22)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CHENA; 
    }
    namespace Nonefs_hcint0{
        using Addr = Register::Address<0x50000508,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint1{
        using Addr = Register::Address<0x50000528,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint2{
        using Addr = Register::Address<0x50000548,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint3{
        using Addr = Register::Address<0x50000568,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint4{
        using Addr = Register::Address<0x50000588,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint5{
        using Addr = Register::Address<0x500005a8,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint6{
        using Addr = Register::Address<0x500005c8,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcint7{
        using Addr = Register::Address<0x500005e8,0xfffff844>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERR; 
    }
    namespace Nonefs_hcintmsk0{
        using Addr = Register::Address<0x5000050c,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk1{
        using Addr = Register::Address<0x5000052c,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk2{
        using Addr = Register::Address<0x5000054c,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk3{
        using Addr = Register::Address<0x5000056c,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk4{
        using Addr = Register::Address<0x5000058c,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk5{
        using Addr = Register::Address<0x500005ac,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk6{
        using Addr = Register::Address<0x500005cc,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hcintmsk7{
        using Addr = Register::Address<0x500005ec,0xfffff804>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NYET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BBERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FRMORM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTERRM; 
    }
    namespace Nonefs_hctsiz0{
        using Addr = Register::Address<0x50000510,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz1{
        using Addr = Register::Address<0x50000530,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz2{
        using Addr = Register::Address<0x50000550,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz3{
        using Addr = Register::Address<0x50000570,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz4{
        using Addr = Register::Address<0x50000590,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz5{
        using Addr = Register::Address<0x500005b0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz6{
        using Addr = Register::Address<0x500005d0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
    namespace Nonefs_hctsiz7{
        using Addr = Register::Address<0x500005f0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DPID; 
    }
}
