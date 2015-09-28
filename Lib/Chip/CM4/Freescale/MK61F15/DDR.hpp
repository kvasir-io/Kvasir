#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DDR_cr00{
        using Addr = Register::Address<0x400ae000,0x0000f0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DDRCLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> VERSION; 
    }
    namespace DDR_cr01{
        using Addr = Register::Address<0x400ae004,0xfffcf0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MAXROW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MAXCOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CSMAX; 
    }
    namespace DDR_cr02{
        using Addr = Register::Address<0x400ae008,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> TINIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> INITAREF; 
    }
    namespace DDR_cr03{
        using Addr = Register::Address<0x400ae00c,0xe0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> LATLIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> LATGATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WRLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TCCD; 
    }
    namespace DDR_cr04{
        using Addr = Register::Address<0x400ae010,0x00c0f8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TBINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TRASMIN; 
    }
    namespace DDR_cr05{
        using Addr = Register::Address<0x400ae014,0xe0f8f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TWTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TRTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TMRD; 
    }
    namespace DDR_cr06{
        using Addr = Register::Address<0x400ae018,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> TRASMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INTWBR; 
    }
    namespace DDR_cr07{
        using Addr = Register::Address<0x400ae01c,0xfefee0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CLKPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TCKESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CCAPEN; 
    }
    namespace DDR_cr08{
        using Addr = Register::Address<0x400ae020,0xe0e000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TRASDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> TWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TDAL; 
    }
    namespace DDR_cr09{
        using Addr = Register::Address<0x400ae024,0xf8fe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TDLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NOCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> BSTLEN; 
    }
    namespace DDR_cr10{
        using Addr = Register::Address<0x400ae028,0xf00000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TFAW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> TCPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRPAB; 
    }
    namespace DDR_cr11{
        using Addr = Register::Address<0x400ae02c,0xfefefefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGDIMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AREFMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TREFEN; 
    }
    namespace DDR_cr12{
        using Addr = Register::Address<0x400ae030,0xc000fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TRFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> TREF; 
    }
    namespace DDR_cr13{
        using Addr = Register::Address<0x400ae034,0xfffec000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> TREFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PD; 
    }
    namespace DDR_cr14{
        using Addr = Register::Address<0x400ae038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TPDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TXSR; 
    }
    namespace DDR_cr15{
        using Addr = Register::Address<0x400ae03c,0xfefe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXSNR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PUREF; 
    }
    namespace DDR_cr16{
        using Addr = Register::Address<0x400ae040,0xffe0f8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QKREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CLKDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> LPCTRL; 
    }
    namespace DDR_cr17{
        using Addr = Register::Address<0x400ae044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LPPDCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LPRFCNT; 
    }
    namespace DDR_cr18{
        using Addr = Register::Address<0x400ae048,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LPEXTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> LPAUTO; 
    }
    namespace DDR_cr19{
        using Addr = Register::Address<0x400ae04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LPINTCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LPRFHOLD; 
    }
    namespace DDR_cr20{
        using Addr = Register::Address<0x400ae050,0xfef0f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CKSRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CKSRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> WRMD; 
    }
    namespace DDR_cr21{
        using Addr = Register::Address<0x400ae054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MR0DAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MR1DAT0; 
    }
    namespace DDR_cr22{
        using Addr = Register::Address<0x400ae058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MR2DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MR3DAT0; 
    }
    namespace DDR_cr23{
        using Addr = Register::Address<0x400ae05c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr24{
        using Addr = Register::Address<0x400ae060,0xffffffff>;
    }
    namespace DDR_cr25{
        using Addr = Register::Address<0x400ae064,0xf0f8f8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BNK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> ADDPINS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> COLSIZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> APREBIT; 
    }
    namespace DDR_cr26{
        using Addr = Register::Address<0x400ae068,0xfefe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AGECNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CMDAGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADDCOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BNKSPT; 
    }
    namespace DDR_cr27{
        using Addr = Register::Address<0x400ae06c,0xfefefefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SWPEN; 
    }
    namespace DDR_cr28{
        using Addr = Register::Address<0x400ae070,0xfefefefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REDUC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BIGEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMDLATR; 
    }
    namespace DDR_cr29{
        using Addr = Register::Address<0x400ae074,0xfefcfefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRLATR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSTWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> QFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RESYNC; 
    }
    namespace DDR_cr30{
        using Addr = Register::Address<0x400ae078,0x00fe00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSYNCRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,8)> INTSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTACK; 
    }
    namespace DDR_cr31{
        using Addr = Register::Address<0x400ae07c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> INTMASK; 
    }
    namespace DDR_cr32{
        using Addr = Register::Address<0x400ae080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OORAD; 
    }
    namespace DDR_cr33{
        using Addr = Register::Address<0x400ae084,0xfcc0fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> OORLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> OORTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> OORID; 
    }
    namespace DDR_cr34{
        using Addr = Register::Address<0x400ae088,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ODTRDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ODTWRCS; 
    }
    namespace DDR_cr35{
        using Addr = Register::Address<0x400ae08c,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> R2WSMCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> W2RSMCS; 
    }
    namespace DDR_cr36{
        using Addr = Register::Address<0x400ae090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr37{
        using Addr = Register::Address<0x400ae094,0xf8f8f8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> R2RSAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> R2WSAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> W2RSAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> W2WSAME; 
    }
    namespace DDR_cr38{
        using Addr = Register::Address<0x400ae098,0xf800e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PDNCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PUPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> PWRCNT; 
    }
    namespace DDR_cr39{
        using Addr = Register::Address<0x400ae09c,0xfcfcf800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> P0RDCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> WP0; 
    }
    namespace DDR_cr40{
        using Addr = Register::Address<0x400ae0a0,0xfff800fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P0TYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,8)> P1WRCNT; 
    }
    namespace DDR_cr41{
        using Addr = Register::Address<0x400ae0a4,0xfcfcf800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> P1RDCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> WP1; 
    }
    namespace DDR_cr42{
        using Addr = Register::Address<0x400ae0a8,0xfff800fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P1TYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,8)> P2WRCNT; 
    }
    namespace DDR_cr43{
        using Addr = Register::Address<0x400ae0ac,0xfcfcf800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> P2RDCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> WP2; 
    }
    namespace DDR_cr44{
        using Addr = Register::Address<0x400ae0b0,0xf0fefefc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P2TYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRRLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WRRSHARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> WRRERR; 
    }
    namespace DDR_cr45{
        using Addr = Register::Address<0x400ae0b4,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P0PRI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> P0PRI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> P0PRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> P0PRI3; 
    }
    namespace DDR_cr46{
        using Addr = Register::Address<0x400ae0b8,0xf0fc00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> P0ORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,8)> P0PRIRLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> P1PRI0; 
    }
    namespace DDR_cr47{
        using Addr = Register::Address<0x400ae0bc,0xfcf0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P1PRI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> P1PRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> P1PRI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> P1ORD; 
    }
    namespace DDR_cr48{
        using Addr = Register::Address<0x400ae0c0,0xf0f0fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> P1PRIRLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> P2PRI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> P2PRI1; 
    }
    namespace DDR_cr49{
        using Addr = Register::Address<0x400ae0c4,0xfffcf0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> P2PRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> P2PRI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> P2ORD; 
    }
    namespace DDR_cr50{
        using Addr = Register::Address<0x400ae0c8,0xfffefc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> P2PRIRLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTATUS; 
    }
    namespace DDR_cr51{
        using Addr = Register::Address<0x400ae0cc,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLLRSTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLLRADLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PHYWRLAT; 
    }
    namespace DDR_cr52{
        using Addr = Register::Address<0x400ae0d0,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PYWRLTBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PHYRDLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RDDATAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> RDDTENBAS; 
    }
    namespace DDR_cr53{
        using Addr = Register::Address<0x400ae0d4,0xc000f0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKDISCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CRTLUPDMN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> CTRLUPDMX; 
    }
    namespace DDR_cr54{
        using Addr = Register::Address<0x400ae0d8,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> PHYUPDTY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> PHYUPDTY1; 
    }
    namespace DDR_cr55{
        using Addr = Register::Address<0x400ae0dc,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> PHYUPDTY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> PHYUPDTY3; 
    }
    namespace DDR_cr56{
        using Addr = Register::Address<0x400ae0e0,0xf0f0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> PHYUPDRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RDLATADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> WRLATADJ; 
    }
    namespace DDR_cr57{
        using Addr = Register::Address<0x400ae0e4,0xfef0f8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CMDDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CLKDISDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CLKENDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ODTALTEN; 
    }
    namespace DDR_cr58{
        using Addr = Register::Address<0x400ae0e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr59{
        using Addr = Register::Address<0x400ae0ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr60{
        using Addr = Register::Address<0x400ae0f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr61{
        using Addr = Register::Address<0x400ae0f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr62{
        using Addr = Register::Address<0x400ae0f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_cr63{
        using Addr = Register::Address<0x400ae0fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Not_Used; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> NOT_USED; 
    }
    namespace DDR_rcr{
        using Addr = Register::Address<0x400ae180,0xbfffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RST; 
    }
    namespace DDR_pad_ctrl{
        using Addr = Register::Address<0x400ae1ac,0xfcfffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SPARE_DLY_CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PAD_ODT_CS0; 
    }
}
