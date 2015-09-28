#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneotg_hs_dcfg{
        using Addr = Register::Address<0x40040800,0xfcffe008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NZLSOHSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,4)> DAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> PFIVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PERSCHIVL; 
    }
    namespace Noneotg_hs_dctl{
        using Addr = Register::Address<0x40040804,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RWUSIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GINSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GONSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SGINAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CGINAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SGONAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CGONAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POPRGDNE; 
    }
    namespace Noneotg_hs_dsts{
        using Addr = Register::Address<0x40040808,0xffc000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> ENUMSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8)> FNSOF; 
    }
    namespace Noneotg_hs_diepmsk{
        using Addr = Register::Address<0x40040810,0xfffffc84>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFEMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INEPNMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFURM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BIM; 
    }
    namespace Noneotg_hs_doepmsk{
        using Addr = Register::Address<0x40040814,0xfffffca4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OPEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BOIM; 
    }
    namespace Noneotg_hs_daint{
        using Addr = Register::Address<0x40040818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IEPINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> OEPINT; 
    }
    namespace Noneotg_hs_daintmsk{
        using Addr = Register::Address<0x4004081c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IEPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> OEPM; 
    }
    namespace Noneotg_hs_dvbusdis{
        using Addr = Register::Address<0x40040828,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VBUSDT; 
    }
    namespace Noneotg_hs_dvbuspulse{
        using Addr = Register::Address<0x4004082c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DVBUSP; 
    }
    namespace Noneotg_hs_dthrctl{
        using Addr = Register::Address<0x40040830,0xf400f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NONISOTHREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ISOTHREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,2)> TXTHRLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXTHREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17)> RXTHRLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ARPEN; 
    }
    namespace Noneotg_hs_diepempmsk{
        using Addr = Register::Address<0x40040834,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTXFEM; 
    }
    namespace Noneotg_hs_deachint{
        using Addr = Register::Address<0x40040838,0xfffdfffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEP1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OEP1INT; 
    }
    namespace Noneotg_hs_deachintmsk{
        using Addr = Register::Address<0x4004083c,0xfffdfffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEP1INTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OEP1INTM; 
    }
    namespace Noneotg_hs_diepeachmsk1{
        using Addr = Register::Address<0x40040840,0xffffdc84>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFEMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INEPNMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFURM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAKM; 
    }
    namespace Noneotg_hs_doepeachmsk1{
        using Addr = Register::Address<0x40040880,0xffff8c84>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFEMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INEPNMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFURM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYETM; 
    }
    namespace Noneotg_hs_diepctl0{
        using Addr = Register::Address<0x40040900,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl1{
        using Addr = Register::Address<0x40040920,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl2{
        using Addr = Register::Address<0x40040940,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl3{
        using Addr = Register::Address<0x40040960,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl4{
        using Addr = Register::Address<0x40040980,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl5{
        using Addr = Register::Address<0x400409a0,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl6{
        using Addr = Register::Address<0x400409c0,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepctl7{
        using Addr = Register::Address<0x400409e0,0x00107800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> TXFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_diepint0{
        using Addr = Register::Address<0x40040908,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint1{
        using Addr = Register::Address<0x40040928,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint2{
        using Addr = Register::Address<0x40040948,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint3{
        using Addr = Register::Address<0x40040968,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint4{
        using Addr = Register::Address<0x40040988,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint5{
        using Addr = Register::Address<0x400409a8,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint6{
        using Addr = Register::Address<0x400409c8,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_diepint7{
        using Addr = Register::Address<0x400409e8,0xffffc424>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITTXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEPNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXFIFOUDRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BNA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PKTDRPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NAK; 
    }
    namespace Noneotg_hs_dieptsiz0{
        using Addr = Register::Address<0x40040910,0xffe7ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19)> PKTCNT; 
    }
    namespace Noneotg_hs_diepdma1{
        using Addr = Register::Address<0x40040914,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_diepdma2{
        using Addr = Register::Address<0x40040934,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_diepdma3{
        using Addr = Register::Address<0x40040954,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_diepdma4{
        using Addr = Register::Address<0x40040974,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_diepdma5{
        using Addr = Register::Address<0x40040994,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAADDR; 
    }
    namespace Noneotg_hs_dtxfsts0{
        using Addr = Register::Address<0x40040918,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTFSAV; 
    }
    namespace Noneotg_hs_dtxfsts1{
        using Addr = Register::Address<0x40040938,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTFSAV; 
    }
    namespace Noneotg_hs_dtxfsts2{
        using Addr = Register::Address<0x40040958,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTFSAV; 
    }
    namespace Noneotg_hs_dtxfsts3{
        using Addr = Register::Address<0x40040978,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTFSAV; 
    }
    namespace Noneotg_hs_dtxfsts4{
        using Addr = Register::Address<0x40040998,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTFSAV; 
    }
    namespace Noneotg_hs_dtxfsts5{
        using Addr = Register::Address<0x400409b8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INEPTFSAV; 
    }
    namespace Noneotg_hs_dieptsiz1{
        using Addr = Register::Address<0x40040930,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> MCNT; 
    }
    namespace Noneotg_hs_dieptsiz2{
        using Addr = Register::Address<0x40040950,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> MCNT; 
    }
    namespace Noneotg_hs_dieptsiz3{
        using Addr = Register::Address<0x40040970,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> MCNT; 
    }
    namespace Noneotg_hs_dieptsiz4{
        using Addr = Register::Address<0x40040990,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> MCNT; 
    }
    namespace Noneotg_hs_dieptsiz5{
        using Addr = Register::Address<0x400409b0,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> MCNT; 
    }
    namespace Noneotg_hs_doepctl0{
        using Addr = Register::Address<0x40040b00,0x33c17ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SNPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_doepctl1{
        using Addr = Register::Address<0x40040b20,0x03c07800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SNPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_doepctl2{
        using Addr = Register::Address<0x40040b40,0x03c07800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SNPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_doepctl3{
        using Addr = Register::Address<0x40040b60,0x03c07800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> MPSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBAEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EONUM_DPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NAKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SNPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> Stall; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SNAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SD0PID_SEVNFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SODDFRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPENA; 
    }
    namespace Noneotg_hs_doepint0{
        using Addr = Register::Address<0x40040b08,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint1{
        using Addr = Register::Address<0x40040b28,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint2{
        using Addr = Register::Address<0x40040b48,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint3{
        using Addr = Register::Address<0x40040b68,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint4{
        using Addr = Register::Address<0x40040b88,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint5{
        using Addr = Register::Address<0x40040ba8,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint6{
        using Addr = Register::Address<0x40040bc8,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doepint7{
        using Addr = Register::Address<0x40040be8,0xffffbfa4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPDISD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OTEPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> B2BSTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NYET; 
    }
    namespace Noneotg_hs_doeptsiz0{
        using Addr = Register::Address<0x40040b10,0x9ff7ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> STUPCNT; 
    }
    namespace Noneotg_hs_doeptsiz1{
        using Addr = Register::Address<0x40040b30,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> RXDPID_STUPCNT; 
    }
    namespace Noneotg_hs_doeptsiz2{
        using Addr = Register::Address<0x40040b50,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> RXDPID_STUPCNT; 
    }
    namespace Noneotg_hs_doeptsiz3{
        using Addr = Register::Address<0x40040b70,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> RXDPID_STUPCNT; 
    }
    namespace Noneotg_hs_doeptsiz4{
        using Addr = Register::Address<0x40040b90,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> XFRSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19)> PKTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> RXDPID_STUPCNT; 
    }
}
