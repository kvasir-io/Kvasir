#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USBHS_id{
        using Addr = Register::Address<0x40034000,0x0000c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> NID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> TAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,21)> REVISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> VERSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> VERSIONID; 
    }
    namespace USBHS_hwgeneral{
        using Addr = Register::Address<0x40034004,0xfffff83f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> PHYM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> SM; 
    }
    namespace USBHS_hwhost{
        using Addr = Register::Address<0x40034008,0x0000fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> NPORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TTASY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TTPER; 
    }
    namespace USBHS_hwdevice{
        using Addr = Register::Address<0x4003400c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1)> DEVEP; 
    }
    namespace USBHS_hwtxbuf{
        using Addr = Register::Address<0x40034010,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TXCHANADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TXLC; 
    }
    namespace USBHS_hwrxbuf{
        using Addr = Register::Address<0x40034014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RXADD; 
    }
    namespace USBHS_gptimer0ld{
        using Addr = Register::Address<0x40034080,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> GPTLD; 
    }
    namespace USBHS_gptimer1ld{
        using Addr = Register::Address<0x40034088,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> GPTLD; 
    }
    namespace USBHS_gptimer0ctl{
        using Addr = Register::Address<0x40034084,0x3e000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> GPTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RUN; 
    }
    namespace USBHS_gptimer1ctl{
        using Addr = Register::Address<0x4003408c,0x3e000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> GPTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RUN; 
    }
    namespace USBHS_usb_sbuscfg{
        using Addr = Register::Address<0x40034090,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BURSTMODE; 
    }
    namespace USBHS_hciversion{
        using Addr = Register::Address<0x40034100,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CAPLENGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HCIVERSION; 
    }
    namespace USBHS_hcsparams{
        using Addr = Register::Address<0x40034104,0xf00e00e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> N_PORTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> N_PCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> N_CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> N_PTT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> N_TT; 
    }
    namespace USBHS_hccparams{
        using Addr = Register::Address<0x40034108,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ASP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EECP; 
    }
    namespace USBHS_dciversion{
        using Addr = Register::Address<0x40034122,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DCIVERSION; 
    }
    namespace USBHS_dccparams{
        using Addr = Register::Address<0x40034124,0xfffffe60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HC; 
    }
    namespace USBHS_usbcmd{
        using Addr = Register::Address<0x40034140,0xff001480>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IAA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ASP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ASPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SUTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ATDTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ITC; 
    }
    namespace USBHS_usbsts{
        using Addr = Register::Address<0x40034144,0xfcf20a00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ULPII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NAKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TI1; 
    }
    namespace USBHS_usbintr{
        using Addr = Register::Address<0x40034148,0xfcf2fa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ULPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TIE1; 
    }
    namespace USBHS_frindex{
        using Addr = Register::Address<0x4003414c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> FRINDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,14)> Reerved; 
    }
    namespace USBHS_periodiclistbase{
        using Addr = Register::Address<0x40034154,0x00000fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> PERBASE; 
    }
    namespace USBHS_deviceaddr{
        using Addr = Register::Address<0x40034154,0x00ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> USBADRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,25)> USBADR; 
    }
    namespace USBHS_asynclistaddr{
        using Addr = Register::Address<0x40034158,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> ASYBASE; 
    }
    namespace USBHS_eplistaddr{
        using Addr = Register::Address<0x40034158,0x000007ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,11)> EPBASE; 
    }
    namespace USBHS_ttctrl{
        using Addr = Register::Address<0x4003415c,0x00ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> TTHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> Reerved; 
    }
    namespace USBHS_burstsize{
        using Addr = Register::Address<0x40034160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXPBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXPBURST; 
    }
    namespace USBHS_txfilltuning{
        using Addr = Register::Address<0x40034164,0xffc0e080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> TXSCHOH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TXSCHHEALTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> TXFIFOTHRES; 
    }
    namespace USBHS_ulpi_viewport{
        using Addr = Register::Address<0x40034170,0x10000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ULPI_DATWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ULPI_DATRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ULPI_ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> ULPI_PORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ULPI_SS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ULPI_RW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ULPI_RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ULPI_WU; 
    }
    namespace USBHS_endptnak{
        using Addr = Register::Address<0x40034178,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EPTN; 
    }
    namespace USBHS_endptnaken{
        using Addr = Register::Address<0x4003417c,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPRNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EPTNE; 
    }
    namespace USBHS_configflag{
        using Addr = Register::Address<0x40034180,0xffffffff>;
    }
    namespace USBHS_portsc1{
        using Addr = Register::Address<0x40034184,0x32000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WKCN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WKDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WKOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PHCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PFSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PTS; 
    }
    namespace USBHS_otgsc{
        using Addr = Register::Address<0x400341a4,0x80808040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HAAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IDPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HABA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AVV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ASV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BSV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AVVIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ASVIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BSVIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BSEIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AVVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ASVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BSVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BSEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DPIE; 
    }
    namespace USBHS_usbmode{
        using Addr = Register::Address<0x400341a8,0xffff8fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TXHSD; 
    }
    namespace USBHS_epsetupsr{
        using Addr = Register::Address<0x400341ac,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EPSETUPSTAT; 
    }
    namespace USBHS_epprime{
        using Addr = Register::Address<0x400341b0,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PERB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PETB; 
    }
    namespace USBHS_epflush{
        using Addr = Register::Address<0x400341b4,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FERB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FETB; 
    }
    namespace USBHS_epsr{
        using Addr = Register::Address<0x400341b8,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ERBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ETBR; 
    }
    namespace USBHS_epcomplete{
        using Addr = Register::Address<0x400341bc,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ERCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ETCE; 
    }
    namespace USBHS_epcr0{
        using Addr = Register::Address<0x400341c0,0xff72ff72>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace USBHS_epcr1{
        using Addr = Register::Address<0x400341c4,0xff10ff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace USBHS_epcr2{
        using Addr = Register::Address<0x400341c8,0xff10ff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace USBHS_epcr3{
        using Addr = Register::Address<0x400341cc,0xff10ff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXE; 
    }
    namespace USBHS_usbgenctrl{
        using Addr = Register::Address<0x40034200,0xffffffdc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WU_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WU_ULPI_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WU_INT_CLR; 
    }
}
