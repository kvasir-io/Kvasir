#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecaplength{
        using Addr = Register::Address<0x40007100,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CAPLENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> HCIVERSION; 
    }
    namespace Nonehcsparams{
        using Addr = Register::Address<0x40007104,0xf00e00e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> N_PORTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> N_PCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> N_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> N_PTT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> N_TT; 
    }
    namespace Nonehccparams{
        using Addr = Register::Address<0x40007108,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ASP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EECP; 
    }
    namespace Nonedciversion{
        using Addr = Register::Address<0x40007120,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DCIVERSION; 
    }
    namespace Noneusbcmd_d{
        using Addr = Register::Address<0x40007140,0xff001ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SUTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ATDTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ITC; 
    }
    namespace Noneusbcmd_h{
        using Addr = Register::Address<0x40007140,0xff007480>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IAA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ASP1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ASPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ITC; 
    }
    namespace Noneusbsts_d{
        using Addr = Register::Address<0x40007144,0xfffefe38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NAKI; 
    }
    namespace Noneusbsts_h{
        using Addr = Register::Address<0x40007144,0xfff30e50>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UPI; 
    }
    namespace Noneusbintr_d{
        using Addr = Register::Address<0x40007148,0xfff2fe38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UPIA; 
    }
    namespace Noneusbintr_h{
        using Addr = Register::Address<0x40007148,0xfff3ff50>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UPIA; 
    }
    namespace Nonefrindex_d{
        using Addr = Register::Address<0x4000714c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FRINDEX2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,3)> FRINDEX13_3; 
    }
    namespace Nonefrindex_h{
        using Addr = Register::Address<0x4000714c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FRINDEX2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,3)> FRINDEX12_3; 
    }
    namespace Nonedeviceaddr{
        using Addr = Register::Address<0x40007154,0x00ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> USBADRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,25)> USBADR; 
    }
    namespace Noneperiodiclistbase{
        using Addr = Register::Address<0x40007154,0x00000fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> PERBASE31_12; 
    }
    namespace Noneendpointlistaddr{
        using Addr = Register::Address<0x40007158,0x000007ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,11)> EPBASE31_11; 
    }
    namespace Noneasynclistaddr{
        using Addr = Register::Address<0x40007158,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ASYBASE31_5; 
    }
    namespace Nonettctrl{
        using Addr = Register::Address<0x4000715c,0x80ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> TTHA; 
    }
    namespace Noneburstsize{
        using Addr = Register::Address<0x40007160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXPBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXPBURST; 
    }
    namespace Nonetxfilltuning{
        using Addr = Register::Address<0x40007164,0xffc0e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXSCHOH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TXSCHEATLTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> TXFIFOTHRES; 
    }
    namespace Noneulpiviewport{
        using Addr = Register::Address<0x40007170,0x10000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ULPIDATWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ULPIDATRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ULPIADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> ULPIPORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ULPISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ULPIRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ULPIRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ULPIWU; 
    }
    namespace Nonebinterval{
        using Addr = Register::Address<0x40007174,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BINT; 
    }
    namespace Noneendptnak{
        using Addr = Register::Address<0x40007178,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPRN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPRN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPTN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPTN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPTN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPTN19; 
    }
    namespace Noneendptnaken{
        using Addr = Register::Address<0x4000717c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPRNE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPRNE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPRNE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRNE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPTNE16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPTNE17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPTNE18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPTNE19; 
    }
    namespace Noneportsc1_d{
        using Addr = Register::Address<0x40007184,0x32702030>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PIC1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PTC3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PHCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PFSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PTS; 
    }
    namespace Noneportsc1_h{
        using Addr = Register::Address<0x40007184,0x32002000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OCA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PIC1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PTC3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WKCN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WKDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WKOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PHCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PFSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PTS; 
    }
    namespace Noneusbmode_d{
        using Addr = Register::Address<0x400071a8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CM1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SDIS; 
    }
    namespace Noneusbmode_h{
        using Addr = Register::Address<0x400071a8,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CM1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> VBPS; 
    }
    namespace Noneendptsetupstat{
        using Addr = Register::Address<0x400071ac,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDPTSETUPSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDPTSETUPSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDPTSETUPSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDPTSETUPSTAT3; 
    }
    namespace Noneendptprime{
        using Addr = Register::Address<0x400071b0,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PERB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PETB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PETB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PETB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PETB3; 
    }
    namespace Noneendptflush{
        using Addr = Register::Address<0x400071b4,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FERB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FERB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FERB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FERB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FETB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FETB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FETB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FETB3; 
    }
    namespace Noneendptstat{
        using Addr = Register::Address<0x400071b8,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERBR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERBR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERBR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERBR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETBR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ETBR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ETBR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ETBR3; 
    }
    namespace Noneendptcomplete{
        using Addr = Register::Address<0x400071bc,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERCE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERCE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERCE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERCE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETCE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ETCE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ETCE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ETCE3; 
    }
    namespace Noneendptctrl0{
        using Addr = Register::Address<0x400071c0,0xff72ff72>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace Noneendptctrl1{
        using Addr = Register::Address<0x400071c4,0xff12ff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace Noneendptctrl2{
        using Addr = Register::Address<0x400071c8,0xff12ff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace Noneendptctrl3{
        using Addr = Register::Address<0x400071cc,0xff12ff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
}
